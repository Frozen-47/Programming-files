#!/usr/bin/env python3
"""
Daily commit checker for CodeHarbour repository.
Sends email notifications to students who haven't committed code in the last 24 hours.
"""

import os
import subprocess
from datetime import datetime, timedelta
import requests
import json

# Configuration
GITHUB_TOKEN = os.getenv('GITHUB_TOKEN')
SENDGRID_API_KEY = os.getenv('SENDGRID_API_KEY')
ADMIN_EMAIL = os.getenv('ADMIN_EMAIL', 'sabareeshgm47@gmail.com')
REPO = 'Frozen-47/CodeHarbour'

# Student mapping: github_username: (student_name, email)
STUDENTS = {
    'AkashV-V': ('Akash V', 'akasha09960@gmail.com'),
    'bharathi925': ('Bharathinesan', 'nesan262936@gmail.com'),
    'BUVANESH2006': ('Buvanesh', 'buvanesh2309@gmail.com'),
    'Boomesh006': ('Boomesh', 'boomesnallasivam06@gmail.com'),
    'charuhasini07': ('Charuhashini', 'charuhasinijothikumar@gmail.com'),
    'Devan3405': ('Devan', 'devandevan80162@gmail.com'),
    'Gukan-89': ('Gukan', 'gukan2711@gmail.com'),
    'gowtham508': ('Gowtham', 'gowthamram1211@outlook.com'),
    'Gowtham12112006': ('Gowtham S', 'gowtham.s.63793231@gmail.com'),
    'Hari02-S': ('Haris M', 'harism0220@gmail.com'),
    'iswarya229': ('Iswarya', 'iswaryaemmanuvel@gmail.com'),
    'JANANI-CO': ('Janani', 'janani.dreams4@gmail.com'),
    'Joyal1008': ('Joyal', 'Joyalv1008@gmail.com'),
    'karpagavalli26': ('Karpagavalli', 'pkarpagavalli2006@gmail.com'),
    'Ghost-74': ('Kavin', 'imkavin74@gmail.com'),
    'Karthik2007k': ('Karthik', 'karthik16062007k@gmail.com'),
    'MAITHEES': ('Maithees', 'maithees215@gmail.com'),
    'nehaa45521970': ('Neha', 'nehaamr970@gmail.com'),
    'prakash-bscct': ('Prakash M', 'prakashm112006@gmail.com'),
    'Prasannax14': ('Prasanna', 'madaraxuchihax14@gmail.com'),
    'Priscilla0105': ('Priscilla', 'priscilla.mailbox0105@gmail.com'),
    'priya1004720': ('Priya', 'ppriyagovindasamy@gmail.com'),
    'rebekkhathavamani': ('Rebekkha Thavamani', 'rebekkhathavamani@gmail.com'),
    'Rubasree858': ('Rubasree', 'rubasreek09@gmail.com'),
    'Frozen-47': ('Sabareesh G', 'sabareeshgm47@gmail.com'),
    'sanjaikumar16062007': ('Sanjai Kumar', 'sanjaikumar62297@gmail.com'),
    'sharmini2006': ('Sharmini', 'sarmisarmi8430@gmail.com'),
    'Sheebaa12': ('Sheeba', 'sheebaa512@gmail.com'),
    'sivakumar-2006': ('Sivakumar', 'sivaerd293@gmail.com'),
    'sivapratheepa': ('Sivapratheepa', 'pratheepasiva2007@gmail.com'),
    'SNEHA178': ('Sneha', 'gasneha2024@gmail.com'),
    'srivathsan600': ('Srivathsan', 'srivathsandharun@gmail.com'),
    'Vinith-D05': ('Vinith', 'Vinithd5727@gmail.com'),
    'Yoga1203': ('Yogalakshmi', 'yogu47640@gmail.com'),
}

def get_branch_commits(branch_name):
    """Get commits for a specific branch in the last 24 hours"""
    try:
        # Calculate yesterday's date
        since_date = (datetime.now() - timedelta(days=1)).isoformat()
        
        # Use git log to get commits in last 24 hours for the branch
        cmd = [
            'git',
            'log',
            f'origin/{branch_name}',
            '--since',
            since_date,
            '--oneline'
        ]
        
        result = subprocess.run(
            cmd,
            capture_output=True,
            text=True,
            cwd='.'
        )
        
        if result.returncode == 0:
            commits = result.stdout.strip().split('\n') if result.stdout.strip() else []
            return len(commits) > 0, commits
        return False, []
    except Exception as e:
        print(f"Error checking commits for {branch_name}: {e}")
        return False, []

def send_email(to_email, student_name, github_username):
    """Send email notification using SendGrid"""
    if not SENDGRID_API_KEY:
        print(f"⚠️  SENDGRID_API_KEY not set. Skipping email to {to_email}")
        return False
    
    url = "https://api.sendgrid.com/v3/mail/send"
    
    message = {
        "personalizations": [
            {
                "to": [{"email": to_email}],
                "subject": "📝 CodeHarbour: Daily Commit Reminder"
            }
        ],
        "from": {"email": ADMIN_EMAIL, "name": "CodeHarbour Bot"},
        "content": [
            {
                "type": "text/html",
                "value": f"""
                <html>
                    <body style="font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif; background-color: #f5f5f5; padding: 20px;">
                        <div style="max-width: 600px; margin: 0 auto; background-color: white; border-radius: 8px; box-shadow: 0 2px 4px rgba(0,0,0,0.1); overflow: hidden;">
                            <div style="background: linear-gradient(135deg, #667eea 0%, #764ba2 100%); color: white; padding: 30px; text-align: center;">
                                <h1 style="margin: 0; font-size: 28px;">📝 Daily Commit Reminder</h1>
                                <p style="margin: 5px 0 0 0; opacity: 0.9;">CodeHarbour Repository</p>
                            </div>
                            
                            <div style="padding: 30px;">
                                <p style="font-size: 16px; color: #333; margin-top: 0;">Hi <strong>{student_name}</strong>,</p>
                                
                                <div style="background-color: #fff3cd; border-left: 4px solid #ffc107; padding: 15px; margin: 20px 0; border-radius: 4px;">
                                    <p style="margin: 0; color: #856404; font-weight: 500;">
                                        ⚠️ We noticed you haven't committed any code in the last 24 hours.
                                    </p>
                                </div>
                                
                                <p style="font-size: 15px; color: #555; line-height: 1.6;">
                                    To keep your progress on track, please commit and push your daily updates to your branch.
                                </p>
                                
                                <div style="background-color: #f8f9fa; border: 1px solid #dee2e6; border-radius: 4px; padding: 15px; margin: 20px 0;">
                                    <p style="margin: 0 0 10px 0; font-weight: 600; color: #333;">Quick Setup:</p>
                                    <pre style="background-color: #2d2d2d; color: #f8f8f2; padding: 12px; border-radius: 4px; overflow-x: auto; margin: 0;">
<span style="color: #66d9ef;">git</span> status
<span style="color: #66d9ef;">git</span> add .
<span style="color: #66d9ef;">git</span> commit -m <span style="color: #e6db74;">"Daily progress update"</span>
<span style="color: #66d9ef;">git</span> push origin {github_username}</pre>
                                </div>
                                
                                <div style="background-color: #e7f3ff; border: 1px solid #b3d9ff; border-radius: 4px; padding: 15px; margin: 20px 0;">
                                    <p style="margin: 0 0 10px 0; font-weight: 600; color: #004085;">💡 Tips:</p>
                                    <ul style="margin: 0; padding-left: 20px; color: #004085;">
                                        <li>Commit early and often (at least once per day)</li>
                                        <li>Write meaningful commit messages</li>
                                        <li>Push your changes before end of day</li>
                                    </ul>
                                </div>
                                
                                <p style="text-align: center; margin-top: 30px;">
                                    <a href="https://github.com/{REPO}" style="display: inline-block; background: linear-gradient(135deg, #667eea 0%, #764ba2 100%); color: white; padding: 12px 30px; text-decoration: none; border-radius: 4px; font-weight: 600;">
                                        Visit Repository
                                    </a>
                                </p>
                            </div>
                            
                            <div style="background-color: #f8f9fa; padding: 20px; text-align: center; border-top: 1px solid #dee2e6;">
                                <p style="margin: 0; font-size: 12px; color: #6c757d;">
                                    This is an automated message from CodeHarbour. Please don't reply to this email.
                                </p>
                                <p style="margin: 5px 0 0 0; font-size: 12px; color: #6c757d;">
                                    Questions? Contact your instructor or visit the repository discussions.
                                </p>
                            </div>
                        </div>
                    </body>
                </html>
                """
            }
        ]
    }
    
    headers = {
        "Authorization": f"Bearer {SENDGRID_API_KEY}",
        "Content-Type": "application/json"
    }
    
    try:
        response = requests.post(url, json=message, headers=headers)
        if response.status_code == 202:
            return True
        else:
            print(f"✗ Failed to send email to {to_email}: {response.status_code}")
            return False
    except Exception as e:
        print(f"✗ Error sending email to {to_email}: {e}")
        return False

def generate_report(results):
    """Generate a report of the daily commit check"""
    report = []
    report.append("=" * 70)
    report.append("CODEHARBOUR - DAILY COMMIT CHECK REPORT")
    report.append("=" * 70)
    report.append(f"Date: {datetime.now().strftime('%Y-%m-%d %H:%M:%S UTC')}")
    report.append("")
    
    committed = [r for r in results if r['has_commits']]
    not_committed = [r for r in results if not r['has_commits']]
    
    report.append(f"SUMMARY: {len(committed)} committed, {len(not_committed)} not committed (out of {len(results)} students)")
    report.append("")
    
    if committed:
        report.append("✓ STUDENTS WHO COMMITTED TODAY:")
        report.append("-" * 70)
        for result in sorted(committed, key=lambda x: x['name']):
            report.append(f"  {result['name']:30} ({result['commits']} commit(s))")
    
    if not_committed:
        report.append("")
        report.append("✗ STUDENTS WHO DID NOT COMMIT (EMAIL SENT):")
        report.append("-" * 70)
        for result in sorted(not_committed, key=lambda x: x['name']):
            email_status = "✓ Sent" if result['email_sent'] else "✗ Failed"
            report.append(f"  {result['name']:30} {email_status}")
    
    report.append("")
    report.append("=" * 70)
    
    return "\n".join(report)

def main():
    print("🚀 Starting daily commit check for CodeHarbour...")
    print(f"📊 Monitoring {len(STUDENTS)} students")
    print("")
    
    results = []
    emails_sent = 0
    
    for github_username, (student_name, email) in sorted(STUDENTS.items()):
        print(f"📌 Checking {student_name:30}", end=" ... ")
        
        # Try to get commits from the student's branch
        has_commits, commits = get_branch_commits(github_username)
        
        email_sent = False
        
        if has_commits:
            print(f"✓ ({len(commits)} commit(s))")
        else:
            print("✗ No commits - Sending email...")
            email_sent = send_email(email, student_name, github_username)
            if email_sent:
                emails_sent += 1
        
        results.append({
            'name': student_name,
            'username': github_username,
            'email': email,
            'has_commits': has_commits,
            'commits': len(commits),
            'email_sent': email_sent
        })
    
    # Generate and save report
    report = generate_report(results)
    with open('commit_report.txt', 'w') as f:
        f.write(report)
    
    print("")
    print(report)
    print("")
    print(f"✅ Daily commit check completed! ({emails_sent} emails sent)")

if __name__ == "__main__":
    main()
