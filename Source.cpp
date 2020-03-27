#include <iostream>

#include "Worker.h"
using namespace std;

int main() {
	init();
	int a;
	int count = 0;
	do {
		cout << "1.Add new worker" << endl;
		cout << "2.Redakr" << endl;
		cout << "3.Search by age" << endl;
		cout << "4.Search by sekond name" << endl;
		cout << "5.Dellet" << endl;
		cout << "6.Write in file" << endl;
		cout << "7.Exit" << endl;
		cin >> a;
		system("cls");
		switch (a)
		{
		case 1:
			addinfo();
			break;
		case 2:
			redakt();
			break;
		case 3:
			shorchbyAge();
		    break;
		case 4:
			shourchbySekondname();
			break;
		case 5:
			dleteWorkers();
			break;
		case 6:
			writeinfile();
			count++;
			break;
		case 7:
			
			writeinfile();
        break;
		
		}
	} while (a != 7);
	
}