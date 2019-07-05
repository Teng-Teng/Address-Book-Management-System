#include <iostream>
using namespace std;

// menu interface
void showMenu() {
    cout << "**********************************" << endl;
    cout << "*****  1. Add contact        *****" << endl;
    cout << "*****  2. Show contact       *****" << endl;
    cout << "*****  3. Delete contact     *****" << endl;
    cout << "*****  4. Find contact       *****" << endl;
    cout << "*****  5. Modify contact     *****" << endl;
    cout << "*****  6. Clear contact      *****" << endl;
    cout << "*****  0. Exit address book  *****" << endl;
    cout << "**********************************" << endl;

}


int main() {
    showMenu();

    cout << "Press any key to continue" << endl;
    getchar();
    return 0;
}