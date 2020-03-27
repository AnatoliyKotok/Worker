#include "Worker.h"
#include<iostream>
#include <list>
#include<conio.h>
#include<ctype.h>
#include <fstream>

using namespace std;

list<worker>listworker;
const string filename = "Worker.txt";
void init()
{
	ifstream fin;
	fin.open(filename);

	bool isopen = fin.is_open();

	if (isopen == false) {
		cout << "Error" << endl;
	}
	else {
		worker tempworker;
		int current = 0;
		string temp;
		while (!fin.eof()) {
			current++;
			getline(fin, temp);
			if (current == 1) {
				tempworker.name = temp;
			}
			else if (current == 2) {
				tempworker.sekondname = temp;
				
			}
			else if (current == 3) {
				tempworker.age = temp;
			}
			else if (current == 4) {
				tempworker.id = temp;
				listworker.push_back(tempworker);
					current = 0;
					tempworker = worker();
			}
		}
	}


}
int addinfo()
{
	
		worker newworker;

		cout << "Enter name->";
		cin >> newworker.name;
		cout << "Enter sekond name->";
		cin >> newworker.sekondname;
		cout << "Enter ege->";
		cin >> newworker.age;
		cout << "Enter id->";
		cin >> newworker.id;

		listworker.push_back(newworker);
		
	system("cls");
	return 0;
}



int redakt()
{ 
	string newName;
	string newSekondname;
	string newAge;
	string newID;
	int a;
	string iD;
	cout << "Enter id worker for editing->";
    cin >> iD;
	system("cls");
	
	for (worker &item : listworker) {
		if (iD == item.id) {
			cout << "Name->" << item.name << endl;
			cout << "Sekond name->" << item.sekondname << endl;
			cout << "Age->" << item.age << endl;
			cout << "ID->" << item.id << endl;
			cout << endl;
			do {
				cout << "1.Name" << endl;
				cout << "2.Sekond name" << endl;
				cout << "3.Age" << endl;
				cout << "4.ID" << endl;
				cout << "5.Exit" << endl;
				cout << "Selekt punkt for editing->";
				cin >> a;
				system("cls");
				switch (a)
				{
				case 1:
					cout << "Enter new name->";
					cin >> newName;
					item.name = newName;
					system("cls");
					break;
				case 2:
					cout << "Enter new sekond name->";
					cin >> newSekondname;
					item.sekondname = newSekondname;
					system("cls");
					break;
				case 3:
					cout << "Enter new age->";
					cin >> newAge;
					item.age = newAge;
					system("cls");
					break;
				case 4:
					cout << "Enter new ID->";
					cin >> newID;
					item.id = newID;
					system("cls");
					break;
				case 5:
					break;
				}
			} while (a != 5);
		}
		
		
		
	}
	
	return 0;
}

int dleteWorkers()
{
	string name;
	cout << "enter sekond name for dell worker->";
	cin >> name;
	for (auto i = listworker.begin(); i != listworker.end(); i++) {
		if (i->sekondname == name) {
			listworker.erase(i);
			break;
		}

	}
	return 0;
}



int shorchbyAge()
{
	string age;
	cout << "Enter age for search->";
	cin >> age;
	for (worker item : listworker) {
		if (item.age == age) {

			cout << "Name->" << item.name << endl;
			cout << "Sekond name->" << item.sekondname << endl;
			cout << "Age->" << item.age << endl;
			cout << "ID->" << item.id << endl;
			cout << endl;

		}
	}
	return 0;
}

void shourchbySekondname()
{
	string sekondname;
	cout << "Enter sekond name worker for shourch->";
	cin >> sekondname;
	for (worker item : listworker) {
		if (item.sekondname == sekondname) {

			cout << "Name->" << item.name << endl;
			cout << "Sekond name->" << item.sekondname << endl;
			cout << "Age->" << item.age << endl;
			cout << "ID->" << item.id << endl;
			cout << endl;

		}
	}
}



int writeinfile()
{
	
		for (worker item : listworker) {
         ofstream fout;
	     fout.open(filename,fstream::app);

    	   bool isopen = fout.is_open();
		   if (isopen == true) {


			cout << "File was write seksesful!" << endl;
			fout << item.name << endl;
			fout << item.sekondname << endl;
			fout << item.age << endl;
			fout << item.id << endl;
		   }
            else {
		    cout << "Error file not opend!" << endl;
	        }
		}
	       
	
	return 0;
}
