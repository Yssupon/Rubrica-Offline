#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;
string nome, cnome, numero;

void aggiungi();
void cerca();
void help();
void exit();
void mostra();
bool numerii(string);

void help()
{
	cout << "Centro assistenza" << endl;
	cout << "https://github.com/Yssupon" << endl;
	cout << endl << endl;
	system("pause");
	system("cls");
}

void aggiungi()
{
	ofstream phone("rubrica.txt", ios::app);
	system("cls");
	cout << "\n\n\tNome : ";
	cin >> nome;
	cout << "\n\tCognome : ";
	cin >> cnome;
	cout << "\n\tNumero Telefono : ";
	cin >> numero;

		if (numerii(numero) == true) {
			if (phone.is_open()) {
				phone << nome << " " << cnome << " "
					<< numero << endl;
				cout << "\n\tContatto salvato con successo!";
			}
			else {
				cout << "\n\tRotto tutto fratm!";
			}
		}
		else {
			cout << "\n\tho detto numero di telefono, non altri caratteri";
		}

	cout << endl << endl;
	system("pause");
	system("cls");
	phone.close();
}

void output(){
	
			cout << "\n\n\n\t\tCONTATTO:";
			cout << "\n\nNome : " << nome;
			cout << "\nCognome : " << cnome;
			cout << "\nNumero di telefono : " << numero;
}

void cerca()
{
	bool found = false;
	ifstream myfile("rubrica.txt");
	string chiave;
	cout << "\n\tInserisci nome da cercare : ";
	cin >> chiave;
	while (myfile >> nome >> cnome >> numero) {
		if (chiave == nome || chiave == cnome) {
			system("cls");
            output();
			found = true;
			break;
		}
	}
	if (found == false)
		cout << "\nContatto non trovato!";

	cout << endl << endl;
	system("pause");
	system("cls");
}


void exit()
{
	system("cls");
	cout << "\n\n\n\t\tCiao bellissimo!";
	cout << endl << endl;
	system("pause");
	exit(1);
}



bool numerii(string x)
{
	bool contr = true;

	for (int i = 0; i < x.length(); i++) {
		if (!(int(x[i]) >= 48 && int(x[i]) <= 57)) {
			contr = false;
			break;
		}
	}

	if (contr == true)
		return true;

	if (contr == false)
		return false;

	cout << endl << endl;
	system("pause");
	system("cls");
}

void sette(){
	
cout << " O O" << endl;	
cout << "dO Ob" << endl;
cout << "dOO OOO" << endl;
cout << "dOOO OOOb" << endl;
cout << "dOOOO OOOOb" << endl;
cout << "OOOOO OOOOO" << endl;
cout << "OOOOO OOOOO" << endl;
cout << "OOOOO OOOOO" << endl;
cout << "YOOOO OOOOO" << endl;
cout << "YOOO OOOP" << endl;
cout << "oOOOOOOOOOOOOb" << endl;
cout << "oOOOOOOOOOOOOOOOb" << endl;
cout << "oOOOb  dOOOOOOOOOOO" << endl;
cout << "OOOOOOOOOOOOOOOOOOO" << endl;
cout << "OOOOOOOOOOOOOOOOOOP" << endl;
cout << "OOOOOOOOOOOOOOOOOP" << endl;
cout << " YOOOOOOOOOOOOOOP" << endl;
cout << " YOOOOOOOOOOOP" << endl;
cout << "%%%%%%%%%%%%%%" << endl;
cout << "%%%%%%%%%%%%%%%" << endl;
	
cout << "mr.biasi";	
	cout << endl << endl;
	system("pause");
	system("cls");
}

void mostra(){

	ifstream myfile("rubrica.txt");
	while (myfile >> nome >> cnome >> numero) {
		for(int i=0;i<1;i++){
			output();
			cout << " " << endl;
		}
		
	}
	cout << endl << endl;
	system("pause");
	system("cls");
}
int main()
{
	int scelta;
	system("cls");
	system("color 0A");
	while (1) {
		cout << "\n\n\n\t\t\tRUBRICA OFFLINE, SICURA E OPEN-SOURCE!";
		cout << "\n\n\t1. Aggiungi contatti\n\t2. Cerca "
				"contatti\n\t3. Mostra contatti\n\t4. AIUTATEMIIIII!!!11!!1!1!\n\t5. Esci\n\t> ";
		cin >> scelta;

		switch (scelta) {
		case 1:
			aggiungi();
			break;

		case 2:
			cerca();
			break;

		case 3:
			mostra();
			break;

		case 4:
			help();
			break;

		case 5:
			exit();
			break;

		case 7:
			sette();
			break;

		default:
			cout << "\n\n\tNon mi fotti cumpare!";
		}
	}
	return 0;
}
