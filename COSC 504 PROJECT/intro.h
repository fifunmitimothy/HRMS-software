#pragma once

#include<iostream>
#include<windows.h>

using namespace std;

void loadingBar()
{
	system("cls");
	system("color 60");

	unsigned char a = 177, b = 219;

	cout << endl;
	cout << endl;
	cout << "\n\t\t\t\t\t           COSC 504 : FALL 2022 GROUP PROJECT.";
	cout << "\n\t\t\t\t\t        ****************************************";
	cout << endl;
	cout << endl;
	cout << "\n\t\t\t\t\t Project Title : Human Resources Employee Data Management.";
	cout << endl;
	cout << endl;
	cout << "\n\t\t\t\t\t Group Members: Adeniyi Owoeye.";
	cout << "\n\t\t\t\t\t                Omobolanle Niyi-Owoeye.";
	cout << "\n\t\t\t\t\t                Olufifunmi Timothy Iwasanmi";

	cout << endl;
	cout << endl;
	cout << endl;

	cout << "\n\n\n\t\t\t\t\tLoading...\n";
	cout << endl;
	cout << "\t\t\t\t\t";

	for (int i = 0; i < 10; i++)

		cout << a;

	cout << "\r";
	cout << "\t\t\t\t\t";
	for (int i = 0; i < 10; i++)
	{
		cout << b;
		Sleep(200);
	}

}

