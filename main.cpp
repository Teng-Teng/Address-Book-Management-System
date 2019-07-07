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

// add a contact
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

// show all contacts
void showPerson(struct AddressBook *addrBookP) {
    if (addrBookP->size == 0)
        cout << "There is no contact in the address book!" << endl;
    else {
        for (int i = 0; i < addrBookP->size; i++) {
            cout << "Name:  " << addrBookP->personArray[i].name << "\t";
            cout << "Gender:  " << (addrBookP->personArray[i].sex == 1 ? "male" : "female") << "\t   ";
            cout << "Age:  " << addrBookP->personArray[i].age << "\t";
            cout << "Phone number:  " << addrBookP->personArray[i].phone << "\t";
            cout << "Address:  " << addrBookP->personArray[i].address << endl;
        }
    }

    cout << "Press enter to continue..." << endl;
    system("read");
    system("clear");  // clear the screen
}

// check whether the contact exists
int isExist(struct AddressBook *addrBookP, string name) {
    for (int i = 0; i < addrBookP->size; i++) {
        if (addrBookP->personArray[i].name == name)
            return i;
    }
    return -1;
}

// delete a contact
void deletePerson(struct AddressBook *addrBookP) {
    cout << "Please enter the contact name you want to delete:  " << endl;

    string name;
    cin >> name;

    int ret = isExist(addrBookP, name);

    if (ret != -1) {
        for (int i = ret; i < addrBookP->size - 1; i++) {
            addrBookP->personArray[i] = addrBookP->personArray[i + 1];
        }
        addrBookP->size--;
        cout << "Delete contact successfully!" << endl;
    } else {
        cout << "Can't find this contact" << endl;
    }

    cout << "Press enter to continue..." << endl;
    system("read");
    system("clear");  // clear the screen
}

// find a contact
void findPerson(struct AddressBook *addrBookP) {
    cout << "Please enter the name of the person you want to find:  " << endl;

    string name;
    cin >> name;

    int ret = isExist(addrBookP, name);

    if (ret != -1) {
        cout << "Name:  " << addrBookP->personArray[ret].name << "\t";
        cout << "Gender:  " << addrBookP->personArray[ret].sex << "\t";
        cout << "Age:  " << addrBookP->personArray[ret].age << "\t";
        cout << "Phone number:  " << addrBookP->personArray[ret].phone << "\t";
        cout << "Address:  " << addrBookP->personArray[ret].address << endl;
    } else
        cout << "Can't find this person!" << endl;

    cout << "Press enter to continue..." << endl;
    system("read");
    system("clear");  // clear the screen
}

// modify the contact information
void modifyPerson(struct AddressBook *addrBookP) {
    cout << "Please enter the contact name you want to modify" << endl;
    string name;
    cin >> name;

    int ret = isExist(addrBookP, name);

    if (ret != -1) {
        // modify name
        cout << "Please enter the name:  " << endl;
        string name;
        cin >> name;
        addrBookP->personArray[ret].name = name;

        //modify gender
        cout << "Please enter the gender:  " << endl;
        cout << "1 --- male" << endl;
        cout << "2 --- female" << endl;

        int sex = 0;

        while(true) {
            cin >> sex;
            if (sex == 1 || sex == 2) {
                addrBookP->personArray[ret].sex = sex;
                break;
            }
            cout << "Please enter the correct gender!" << endl;
        }

        // modify age
        cout << "Please enter the age:  " << endl;
        int age;
        cin >> age;
        addrBookP->personArray[ret].age = age;

        // modify phone
        cout << "Please enter the phone number:  " << endl;
        string phone;
        cin >> phone;
        addrBookP->personArray[ret].phone = phone;

        // modify address
        cout << "Please enter the address:  " << endl;
        string address;
        cin >> address;
        addrBookP->personArray[ret].address = address;

        cout << "Modify successfully!" << endl;

    } else {
        cout << "Can't find this contact!" << endl;
    }

    cout << "Press enter to continue..." << endl;
    system("read");
    system("clear");  // clear the screen

}

// clear all the contact
void clearPerson(struct AddressBook *addrBookP) {
    addrBookP->size = 0;

    cout << "Address book has been emptied!" << endl;

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

        cout << "Welcome to the address book!" << endl;

        cin >> select;

        switch(select) {
            case 1:
                addPerson(&addrBook);
                break;

            case 2:
                showPerson(&addrBook);
                break;

            case 3:
                deletePerson(&addrBook);
                break;

            case 4:
                findPerson(&addrBook);
                break;

            case 5:
                modifyPerson(&addrBook);
                break;

            case 6:
                clearPerson(&addrBook);
                break;

            case 0:
                cout << "Goodbye!" << endl;
                cout << "Press enter to continue..." << endl;
                system("read");
                return 0;

            default:
                cout << "Please enter the correct option!" << endl;
                cout << "Press enter to continue..." << endl;
                system("read");
                system("clear");  // clear the screen
                break;
        }
    }

    cout << "Press enter to continue..." << endl;
    system("read");

    return 0;
}