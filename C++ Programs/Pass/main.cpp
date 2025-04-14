#include <iostream>
#include <termios.h>
#include <unistd.h>

using namespace std;

char getch() {
    struct termios oldt, newt;
    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO); 
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    char ch = getchar();
    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    return ch;
}

int main() {
    char password[20];
    int i = 0;

    cout << "Enter password: ";
    while (true) {
        char ch = getch(); 
        if (ch == '\n') break; 
        password[i++] = ch;
        cout << "*";
    }
    password[i] = '\0'; 

    cout << "\nPassword Entered: " << password << endl;
}
