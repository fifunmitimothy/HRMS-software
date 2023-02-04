#include<iostream>
#include<math.h>
#include<cstdlib>
#include<string>
#include "intro.h"

using namespace std;



class Person
{
protected:

    string FirstName;     // Employee First Name
    string LastName;      // Employee Last Name
    int PersonalID;
    double Salary;
    double WorkingHours;
    double CostPerHour;

public:

    void set_FieldName();
    void get_FieldName();
    void gett_FieldName();
    //void set_PersonalID();
    void set_Name();
    void LastNamesortList();
    void in_FirstName();
    void in_lastname();
    void in_Workinghour();
    void in_Costperhour();
};


class HRM
{
private:


    Person e[100];
    Person temp[100];
public:

    void AddPerson();
    void DeletePerson();
    void SearchPerson();
    void UpdatePerson();
    void ReportList();

};

////global variables declared
int n = 0, i = 0, x = 50400, y[100];
bool flag = 0;
int  z[100];
string h[100];
double sal[100];
int check = 0;



//      Definition of the AddPerson() method of the Company class
//      This method will allow user to add employee details

void ::HRM::AddPerson() {

    int x;
    char redo;

    do
    {
        n++;
        e[i].set_FieldName();
        i++;

        cout << "\nThe employee(s) with the following data have been added to the HR records:" << endl;
        cout << endl;
        cout << "\n First Name       Last Name       Personal ID         Annual Salary";
        cout << "\n--------------   --------------   ------------       ---------------" << endl;

        for (int i = 0; i < n; i++) {
            e[i].get_FieldName();
        }

        cout << endl;
        cout << endl;
        cout << " Do you like to add another employee detail ? ( Y / N )" << endl;
        cin >> redo;
        system("cls");
    } while ((redo == 'y' || redo == 'Y'));

}




//      the DeletePerson() method of the Company class allows user to delete employee data

void HRM::DeletePerson() {
    //      Show all of the current employees and ask the user to input the ID of employee to be deleted

    int empId;
    bool lol;
    char redo1, redo2;
    lol = false;
lebel:
    cout << "Input the ID of employee to delete: ";

    while (!(cin >> empId))  //Receiving variable from input
    {
        cout << "Please  enter a number!  Try again: ";
        cin.clear();
        cin.ignore(1000, '\n');  // Skip to next newline or 1000 chars,
        // whichever comes first.
    }




    for (i = 0; i < n; ++i) {


        if (y[i] == empId) {
            e[i] = e[i + 1];
            lol = true;
            e[i].set_Name();
            cin >> redo2;
            if (redo2 == 'Y' || redo2 == 'y') {
                int a;
                a = n;

                cout << "\nPlease see updated database below" << endl;
                cout << endl;
                cout << "\nFirst Name       Last Name       Personal ID         Annual Salary";
                cout << "\n**************   **************  **************   ************" << endl;
                for (int i = 0; i < a; i++) {

                    e[i].get_FieldName();
                    cout << endl;
                    a--;
                    n = a;
                    n++;
                }


                ///      goto lebel1;
            }

            cout << endl;

            //Delete function
        }

    }





    if (lol == false) {
        cout << "Sorry, there is no employee with that ID .";
        cout << " Do you want to try entering the employee ID again  ( Y / N )?  :";
        cin >> redo1;
        if (redo1 == 'Y' || redo1 == 'y') {
            goto lebel;
            cout << endl << endl;
        }
    }




    //      Delete the chosen employee from the array of employees
    //      as represented in this class.

    // Actually remove the entry from memory so as to not leak objects
    //nextIndex--;


}
// UpdatePerson() method of the Company class will modify an attribute of the employee in the Company class instance. 

void HRM::UpdatePerson() {

    int empId;
    char redo1, redo2;

lebel:
    cout << "Enter employee ID: ";

    while (!(cin >> empId))  //Receiving variable from input
    {
        cout << "Please  enter a number!  Try again: ";
        cin.clear();
        cin.ignore(1000, '\n');  // Skip to next newline or 1000 chars,
        // whichever comes first.
    }




    int flag1 = 0;
    for (int i = 0; i < n; ++i) {

        if (y[i] != empId) {
            flag1++;

        }
    }
    

    cout << endl;
lebel1:

    for (int i = 0; i < n; ++i) {


        if (y[i] == empId) {

            cout << "The details matching employee ID  "<< y[i] << " are : ";
            
            cout << endl;
            cout << "\nFirst Name       Last Name       Personal ID         Annual Salary";
            cout << "\n**************   **************  **************   ************" << endl;

                e[i].get_FieldName();

    

            flag = true;
            int choice = 0;
            char redo;

            do {
                cout << endl << endl;
                cout << "Please enter the related number of field which you would like to update" << endl;
                cout << "1. First name" << endl;
                cout << "2. Last Name" << endl;
                cout << "3. Work hrs per week" << endl;
                cout << "4. Pay per hr" << endl;
                cout << std::endl;

                cin >> choice;
                if (choice == 1) {
                    cout << " First name: ";
                    e[i].in_FirstName();
                }
                else if (choice == 2) {
                    cout << " Last Name: ";
                    e[i].in_lastname();
                }
                else if (choice == 3) {
                    cout << " Work hrs per week: ";
                    e[i].in_Workinghour();
                }
                else if (choice == 4) {
                    cout << " Pay per hour: ";
                    e[i].in_Costperhour();
                }
                cout << "Do you want to update another field (Y/N)=";
                cin >> redo;
            } while (redo == 'y' || redo == 'Y');
        }
    }
    int a;
    a = n;
    cout << "\nThe employee database has been updated:" << endl;
    cout << endl;
    cout << "\nFirst Name       Last Name       Personal ID         Annual Salary";
    cout << "\n**************   **************  **************   ************" << endl;
    for (int i = 0; i < a; i++) {
        e[i].get_FieldName();

        cout <<endl;

    }
}



void ::Person::in_FirstName()
{
    cin >> FirstName;
}
void::Person::in_lastname()
{
    cin >> LastName;
}
void::Person::in_Workinghour()
{
    cin >> WorkingHours;
    Salary = WorkingHours * CostPerHour * 52;
}
void::Person::in_Costperhour()
{
    cin >> CostPerHour;
    Salary = WorkingHours * CostPerHour * 52;
}




void HRM::ReportList() {

    char op;
    bool doMore;
    cout << "\nPlease enter the related index for data sorting criteria";
    cout << "\n 1. Last Name";
    cout << "\n 2. Salary Range";
    cout << "\n 3. Employee ID";
    cout << endl;
    

    //cin>>op;
    while (!(cin >> op))  //Receiving variable from input
    {
        cout << "Please  enter a number!  Try again: ";
        cin.clear();
        cin.ignore(1000, '\n');  // Skip to next newline or 1000 chars,
        // whichever comes first.
    }


    switch (op)
    {
    case '1':
        cout << "\nSorting based on Last Name\n" << endl;
        cout << "\nThe employee data has been sorted below  based on Last Name :" << endl;
        cout << endl;
        cout << "\nFirst Name       Last Name       Personal ID         Annual Salary";
        cout << "\n**************   **************  **************   ************" << endl;
        for (int i = 0; i <= n; i++)
        {
            for (int j = i + 1; j <= n - 1; j++)
            {
                if (h[i] > h[i + 1])
                {
                    temp[i] = e[i];
                    e[i] = e[j];
                    e[j] = temp[i];
                }
            }
        }


        for (int i = 0; i < n; i++)
        {
            e[i].get_FieldName();
        }
     
        break;

    case'2':
        cout << "\nThe employee data has been sorted below  based on Annual Salary :" << endl;
        cout << endl;
        cout << "\nFirst Name       Last Name       Personal ID         Annual Salary";
        cout << "\n**************   **************  **************   ************" << endl;
       
        for (int h = 0; h < n; h++)
        {
            for (int q = h + 1; q < n; q++)
            {
                if (sal[h] > sal[h + 1]);
                {
                    temp[h] = e[h];
                    e[h] = e[q];
                    e[q] = temp[h];
                }
            }
        }
        for (int j = 0; j < n; j++)
        {
            e[j].get_FieldName();
        }
        

        break;
 

    case '3':
        cout << "\nSorting based on Employee ID\n" << endl;
        cout << "\nThe employee data has been sorted below  based on Employee ID :" << endl;
        cout << endl;
        cout << "\nFirst Name       Last Name       Personal ID         Annual Salary";
        cout << "\n**************   **************  **************   ************" << endl;
        for (int i = 0; i <= n; i++)
        {
            for (int j = i + 1; j <= n - 1; j++)
            {
                if (y[i] > y[i + 1])
                {
                    temp[i] = e[i];
                    e[i] = e[j];
                    e[j] = temp[i];
                }
            }
        }


        for (int i = 0; i < n; i++)
        {
            e[i].get_FieldName();
        }

        break;
        }
}



void HRM::SearchPerson() {
    int c, emp_ID;
    char redo1;
    string lastname;
    double min, max;
    do {
        cout << "Please enter search criteria " << endl;
        cout << " 1. Employee ID " << endl;
        cout << " 2. Last Name "<<endl;
        cout << " 3. Salary Range "<<endl;



        //cin>>c;
        while (!(cin >> c))  //Receiving variable from input
        {
            cout << "Please  enter a number!  Try again: ";
            cin.clear();
            cin.ignore(1000, '\n');  // Skip to next newline or 1000 chars,
            // whichever comes first.
        }


        if (c == 3)

        {
            cout << "Please define your search range for salary of employees ." << endl;
            cout << "What is minimum salary for search (S_min)?=" << endl;
            //cin>>min;
            while (!(cin >> min))  //Receiving variable from input
            {
                cout << "Please  enter a number!  Try again: ";
                cin.clear();
                cin.ignore(1000, '\n');  // Skip to next newline or 1000 chars,
                // whichever comes first.
            }
            cout << "What is maximum salary for search (S_max)?=" << endl;
            //cin>>max;
            while (!(cin >> max))  //Receiving variable from input
            {
                cout << "Please  enter a number!  Try again: ";
                cin.clear();
                cin.ignore(1000, '\n');  // Skip to next newline or 1000 chars,
                // whichever comes first.
            }
            int a;
            a = n;
            cout << "\nBelow is the result of your search" << endl;
            cout << endl;
            cout << endl;
            cout << "\nFirst Name       Last Name       Personal ID         Annual Salary";
            cout << "\n**************   **************  **************   ************" << endl;
            for (int i = 0; i < n; i++) {


                if (z[i] > min && z[i] < max) {

                  
                    e[i].gett_FieldName();
                    
                }
            }



        }

        else if (c == 2)
        {
            cout << "Please enter the Last Name of employee?" << endl;
            cin >> lastname;
            cout << endl;
            cout << endl;
            cout << "\nBelow is the result of your search :" << endl;

            cout << endl;
            cout << "\nFirst Name       Last Name       Personal ID         Annual Salary";
            cout << "\n**************   **************  **************   ************" << endl;
            for (int i = 0; i < n; i++) {


                if (h[i] == lastname) {

                   
                    e[i].gett_FieldName();
                  
                }
            }
        }

        else if (c == 1)
        {
            cout << "Please enter the ID of the employee?" << endl;
            cin >> emp_ID;
            cout << endl;
            cout << endl;
            cout << "\nBelow is the result of your search :" << endl;

            cout << endl;
            cout << "\nFirst Name       Last Name       Personal ID         Annual Salary";
            cout << "\n**************   **************  **************   ************" << endl;
            for (int i = 0; i < n; i++) {


                if (y[i] == emp_ID) {


                    e[i].gett_FieldName();

                }
            }
        }




        cout << "\nDo you want to Search any other field (y/n)?\n" << endl;
        cin >> redo1;
    } while (redo1 == 'y' || redo1 == 'Y');


}


void ::Person::LastNamesortList() {
    int temp2;
    char temp, temp1;
}

void::Person::set_Name() {
    cout << "Do you really want to delete the details of "<< FirstName<<" "<<LastName<<" ( Y / N )?:";   //PersonalID=y[i];
}


int k = 0;
void::Person::set_FieldName() {
    PersonalID = x;
    x++;
    cout << n;
    cout << "First Name  =  ";

    while (!(cin >> FirstName))  //Reciving vaiables from input 
    {
        cout << "Please  enter a string!  Try again: ";
        cin.clear();
        cin.ignore(1000, '\n');  // Skip to next newline or 1000 chars,
        // whichever comes first.
    }
    cout << "Last Name  =  ";

    while (!(cin >> LastName))  //Receiving variable from input
    {
        cout << "Please  enter a string!  Try again: ";
        cin.clear();
        cin.ignore(1000, '\n');  // Skip to next newline or 1000 chars,
        // whichever comes first.
    }

    cout << "Employee work Hrs per week =  ";
    ;
    while (!(cin >> WorkingHours))  //Receiving variable from input
    {
        cout << "Please  enter a number!  Try again: ";
        cin.clear();
        cin.ignore(1000, '\n');  // Skip to next newline or 1000 chars,
        // whichever comes first.
    }
    cout << "Employee Pay per hr ($)  =  ";

    while (!(cin >> CostPerHour))  //Receiving variable from input
    {
        cout << "Please  enter a number!  Try again: ";
        cin.clear();
        cin.ignore(1000, '\n');  // Skip to next newline or 1000 chars,
        // whichever comes first.
    }

    Salary = WorkingHours * CostPerHour * 52;
    z[i] = Salary;
    sal[i] = Salary;
    h[i] = LastName;
    y[k] = PersonalID;

    k++;
}

void::Person::get_FieldName() {
    cout << FirstName << "\t\t" << LastName << "\t\t\t" << PersonalID << "\t\t\t" << Salary << "\t" << endl;
}



void::Person::gett_FieldName() {
    cout << FirstName << "\t\t" << LastName << "\t\t\t" << PersonalID << "\t\t\t" << Salary << "\t" << endl;
}



int main()
{

    loadingBar();   //intro animation

    system("cls");

    //-------defining variables and initializing them-------------


    HRM info;

    int c;
    char operation, ch;

    do
    {

        cout << " **** YOU ARE LOGGED IN AS HUMAN RESOURCE MANAGER ****" << endl << endl << endl;

        cout << "    Please select an option " << endl << endl;

        cout << "    1. Add new employee" << endl;
        cout << "    2. Delete employee information" << endl;
        cout << "    3. Update employee information" << endl;
        cout << "    4. View reports based on specific field" << endl;
        cout << "    5. Search employee" << endl;
        cout << "    6. Exit the application" << endl << endl;


        while (!(cin >> c))  //Receiving vaiables from input
        {
            cout << "Please  enter a number!  Try again: ";
            cin.clear();
            cin.ignore(1000, '\n');  // Skip to next newline or 1000 chars,
            // whichever comes first.
        }
        switch (c)
        {
        case 1:
            system("cls");
            cout << "\n Enter the information of the new employee " << endl;
            cout << endl;
            cout << endl;
            info.AddPerson();
            break;
        case 2:
            system("cls");
            info.DeletePerson();
            break;
        case 3:
            system("cls");
                     info.UpdatePerson();
            break;
        case 4:
            system("cls");
            cout << "\n Enter an element to search";
            info.ReportList();
            break;
        case 5:
            system("cls");
            info.SearchPerson();
            break;

        case 6:
            system("cls");
            exit(0);
            break;
        default:
            cout << "\nInvalid option. Select 1, 2, 3, 4, 5, or 6 ";

        }
        
        cout << "\nDo u want to continue  ( Y / N )";
        cin >> ch;
        system("cls");
    } while (ch == 'y' || ch == 'Y');

    
    system("pause");
    return 0;
}