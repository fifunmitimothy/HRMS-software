#pragma once






void adminVerification()
{
    system("cls");

    string password;

    cout << "\n\n\n\n\n\t\t\t\t\t";
    cout << "\n\n\n\t\t\t\t\tEnter Password : ";

    do
    {
        cin >> password;

        if (password != "admin1234")
        {
            system("cls");
            cout << "\n\n\n\n\n\t\t"
                << "wrong password!, try again or type 'menu' to Navigate to Main Menu";
            cout << "\n\n\n\t\t\t\t\tEnter Password : ";
        }

        if (password == "Exit" || password == "exit" || password == "EXIT")
        {
            exit(0);
        }

    }

    while (password != "admin1234");
    AdminLogin(); // main menu function is in the Header File adminFunction.h
}


