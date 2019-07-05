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

    int select = 0;

    while (true) {
        showMenu();

        cin >> select;

        switch(select) {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
            case 0:
                cout << "Goodbye!" << endl;
                cout << "Press enter to continue..." << endl;
                system("read");
                return 0;
                break;

            default:
                break;
        }
    }

    cout << "Press enter to continue..." << endl;
    system("read");

    return 0;
}