#include <iostream>
#include <string>

using namespace std;
#define MAX 1000

struct Person
{
    string name;
    int sex;  // male 1 female 2
    int age;
    string phone;
    string address;

};

struct AddressBook
{
    struct Person personArray[MAX];
    int size;
};

void addPerson(struct AddressBook *addrBookP) {
    // check if the address book is full
    if (addrBookP->size == MAX) {
        cout << "The address book is full, can't add a new contact!" << endl;
        return;
    }

    // enter the contact name
    cout << "Please enter the contact name:  " << endl;
    string name;
    cin >> name;
    addrBookP->personArray[addrBookP->size].name = name;

    // enter the contact gender
    cout << "Please enter the gender:  " << endl;
    cout << "1 --- male"   << endl;
    cout << "2 --- female" << endl;
    int sex = 0;

    while(true) {
        cin >> sex;
        if (sex == 1 || sex == 2) {
            addrBookP->personArray[addrBookP->size].sex = sex;
            break;
        }
        cout << "Please enter the correct gender!" << endl;
    }

    // enter the contact age
    cout << "Please enter the age:  " << endl;
    int age = 0;

    while(true) {
        cin >> age;
        if (age > 0 && age < 130) {
            addrBookP->personArray[addrBookP->size].age = age;
            break;
        }
        cout << "Please enter the correct age!"  << endl;
    }

    // enter the phone number
    cout << "Please enter the phone number:  " << endl;
    string phone;
    cin >> phone;
    addrBookP->personArray[addrBookP->size].phone = phone;

    // enter the address
    cout << "Please enter the address:  " << endl;
    string address;
    cin >> address;
    addrBookP->personArray[addrBookP->size].address = address;

    // update the size for the address book
    addrBookP->size++;

    cout << "Add contact successfully!" << endl;

    cout << "Press enter to continue..." << endl;
    system("read");
    system("clear");  // clear the screen

}

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

    struct AddressBook addrBook;
    addrBook.size = 0;

    int select = 0;

    while (true) {
        showMenu();

        cin >> select;

        switch(select) {
            case 1:
                addPerson(&addrBook);
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