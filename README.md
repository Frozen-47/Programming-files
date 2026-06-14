# ⚓ CodeHarbour

> A collaborative, branch-based workspace for classroom programming exercises, lab assignments, and practice code in C, C++, and Java.

---

## 📖 About CodeHarbour

Welcome to **CodeHarbour**! This repository serves as a centralized, collaborative harbor for student coding assignments. To keep development organized and clean:
- The **`main`** branch holds stable, peer-reviewed directory layouts.
- **Each student** maintains their own dedicated Git branch (e.g., `Sabareesh`, `Akash`, `Devan`) where they upload, test, and track their weekly lab files.

---

## 🛠️ Repository Directory Structure

To prevent file clutter, all solutions are housed inside student-specific directories named `[StudentName]_Codes`. 

Below is the structured layout for **Sabareesh's Codes**, which serves as the organizational model for the repository:

```text
Sabareesh_Codes/
├── C Programs/
│   ├── Basic & Math/                 # Arithmetic, calculators, basic loops
│   ├── Control Flow & Checkers/      # Odd/even, prime in range, grade limits
│   ├── Arrays & Strings/             # Magic squares, basic array storing, reverse string
│   ├── Patterns/                     # Loops for stars & custom symbol drawing
│   ├── Examples/                     # Root math, switch-case and grade conversions
│   └── Errors/                       # Fixed compilation/logic debugging exercises
├── C++ Programs/
│   ├── Basic & Math/                 # Swapping, random generation, digit sum recursion
│   ├── OOP & Classes/                # Constructors, inheritance, virtual polymorphism
│   ├── Data Structures & Arrays/     # Stack array implementations, custom strings
│   ├── Homework & Assignments/       # Pointer calculations, Homework tasks
│   └── Programs & Examples/          # Standard sequential practice exercises
└── Java programs/
    ├── Applet/                       # Java applet and graphics programs
    ├── Practical/                    # Swing frames, MouseEvents, multi-threading
    └── Practice/                     # Standard Java algorithms, searches, operators
```

---

## 🔄 Student Git Workflow

To ensure smooth collaboration without code conflicts, please follow this standardized Git flow:

### 1. Clone the Harbour
```bash
git clone https://github.com/Frozen-47/CodeHarbour.git
cd CodeHarbour
```

### 2. Dock in Your Personal Branch
Always work on your own branch. Never commit directly to the `main` branch.
```bash
# Create and switch to your branch (replace name with your actual name)
git checkout -b Sabareesh
```

### 3. Save Your Progress (Commit)
Make your filenames descriptive and group them into the proper thematic folders before committing.
```bash
git add .
git commit -m "feat: add bubble sort implementation under Arrays"
```

### 4. Stay Updated with Main
To ensure you have the latest class templates, regularly merge changes from the remote `main` branch:
```bash
git pull origin main
```

### 5. Ship Your Code (Push)
Push your branch to GitHub to back up your code and share it:
```bash
git push origin Sabareesh
```

---

## 💻 Languages Supported

- **C, C++, and Java** (Current primary directories)
- **All Languages Supported**: This repository is open to **any** programming language! Students are welcome to organize and practice in Python, JavaScript, Go, or any other language of their choice.

⚓ *Happy Coding! May your branches be clean and your compilations successful.*
