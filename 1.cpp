#include <iostream>
#include <fstream>

using namespace std;

int main() {

    while (true)
    {
        int choice, i;

        int users[100];

        int passwords[100];

        ifstream file("result.txt");

        for (i = 0; true; i++) {
            file >> users[i] >> passwords[i];
            if (file.eof()) break;
        }
        file.close();



       

        cout << "1 register-\n";
        cout << "2 login-\n ";
        cin >> choice;

        if (choice == 1) {

            int login, password;
            int j;
            do {
                cout << "Enter you login";

                cin >> login;

                for ( j = 0; j < i; j++) {

                    if (login == users[j])break;
               
                }
                if (login != users[j]) break;


                cout << "login error " << endl;

            } while (true);

            do {
                cout << "Enter you password ";

                cin >> password;

                int gwe=password,A;

                for (A = 0; gwe > 0; A++) {

                    gwe /= 10;
                }

                if (A > 4 && A < 12)break;

                    cout << "password error" << endl;

            } while (true);

            ofstream file("result.txt");

            file << login << endl;
            file << password << endl;

            file.close();

        }
        if (choice == 2)
        {
            int login, password;
            int j;

            do {
                cout << "Enter you login - ";

                cin >> login;

                for ( j = 0; j < i; j++) {

                    if (login == users[j])break;

                }
                if (login == users[j]) break;

                cout << "login error" << endl;

            } while (true);

            do {
                cout << "Enter you password";

                cin >> password;

                if (password == passwords[j])break;

                cout << "password error" << endl;

            } while (true);
            cout << "you came!" << endl;
            break;
        }
    }
}

