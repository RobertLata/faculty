#include <iostream>
using namespace std;


	/*varianta 1.*/
	int main()
	{	
	char nume[100], prenume[100], adresa[100];
	int nrtel, varsta;
	cout << "Persoana" << endl;
	cout << "Nume: ";
	cin >> nume;
	cout << "Preume: ";
	cin >> prenume;
	cout << "Adresa: ";
	cin.get();
	cin.get(adresa,99);
	cout << "Varsta: ";
	cin >> varsta;
	cout << "Nr. telefon: ";
	cin >> nrtel;
	cout << "Date persoana: " << endl;
	cout << nume << endl << prenume << endl << adresa << endl << nrtel << endl << varsta << endl;
	system("pause");
	return 0;
	}
	
	/*varianta 2.
	struct persoana
	{
	char nume[100], prenume[100], adresa[100];
	int varsta, nrtel;
	}om;

	int main()
	{
		cout << "Persoana" << endl;
		cout << "Nume: ";
		cin >> om.nume;
		cout << "Preume: ";
		cin >> om.prenume;
		cout << "Adresa: ";
		cin.get();
		cin.get(om.adresa,99);
		cout << "Varsta: ";
		cin >> om.varsta;
		cout << "Nr. telefon: ";
		cin >> om.nrtel;
		cout << "Date persoana: " << endl;
		cout << om.nume << endl << om.prenume << endl << om.adresa << endl << om.varsta << endl << om.nrtel << endl;
		system("pause");
		return 0;
	}*/
	