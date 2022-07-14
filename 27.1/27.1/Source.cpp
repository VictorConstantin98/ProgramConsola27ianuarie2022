#include<iostream>
using namespace std;
int citireSalarii(int salarii[100], int nrSalarii) {
	cin >> nrSalarii;
	for (int i = 0; i < nrSalarii; i++)
	{
		cin >> salarii[i];
	}
	return nrSalarii;
}
void afisareSalarii(int salarii[100], int nrSalarii) {
	for (int i = 0; i < nrSalarii; i++)
	{
		cout << "salarii[" << i << "]=" << salarii[i] << endl;
	}
}
int minimSalarii(int salarii[100], int nrSalarii) {
	int min;
	min = salarii[0];
	for (int i = 1; i < nrSalarii; i++)
	{
		if (salarii[i] < min)
		{
			min = salarii[i];
		}
	}
	return min;
}
int maximSalarii(int salarii[100], int nrSalarii) {
	int max;
	max = salarii[0];
	for (int i = 1; i < nrSalarii; i++)
	{
		if (salarii[i] > max)
		{
			max = salarii[i];
		}
	}
	return max;
}
int totalSalarii(int salarii[100], int nrSalarii) {
	int total = 0;
	for (int i = 0; i < nrSalarii; i++)
	{
		total = total + salarii[i];
	}
	return total;
}
int adaugaSalariu(int salariu, int salarii[100], int nrSalarii) {
	salarii[nrSalarii] = salariu;
	nrSalarii++;
	return nrSalarii;
}
void main()
{
	/*int salarii[100];
	int nrSalarii = 0;
	nrSalarii = citireSalarii(salarii, nrSalarii);
	afisareSalarii(salarii, nrSalarii);
	int salariulMinim;
	salariulMinim = minimSalarii(salarii, nrSalarii);
	cout << "Salariul minim este " << salariulMinim << endl;
	int salariulMaxim;
	salariulMaxim = maximSalarii(salarii, nrSalarii);
	cout << "Salariul maxim este " << salariulMaxim << endl;
	int totalulSalariilor;
	totalulSalariilor = totalSalarii(salarii, nrSalarii);
	cout << "Totalul salariilor este egal cu " << totalulSalariilor << endl;*/

	int salarii[100];
	int nrSalarii = 0;
	while (true)
	{
		/*string comanda;
		cout << "Da-mi o comanda: ";
		cin >> comanda;
		cout << comanda << endl;
		if (comanda == "afisare")
		{
			afisareSalarii(salarii, nrSalarii);
		}
		if (comanda == "scriere")
		{
			nrSalarii = citireSalarii(salarii, nrSalarii);
		}
		if (comanda == "minim")
		{
			int min;
			min = minimSalarii(salarii, nrSalarii);
			cout << "Minimul este: " << min << endl;
		}
		if (comanda == "maxim")
		{
			int max;
			max = maximSalarii(salarii, nrSalarii);
			cout << "Maximul este: " << max << endl;
		}
		if (comanda == "total")
		{
			int total;
			total = totalSalarii(salarii, nrSalarii);
			cout << "Totalul salariilor este: " << total << endl;
		}
		if (comanda == "adauga")
		{
			cout << "Noul salariu: ";
			int noulSalariu;
			cin >> noulSalariu;
			nrSalarii = adaugaSalariu(noulSalariu, salarii, nrSalarii);
		}*/
		int comanda1;
		cout << "Da-mi o comanda: ";
		cin >> comanda1;
		cout << comanda1 << endl;
		switch (comanda1) {  //Este aceeasi structura decizionala ca mai sus, in loc de mai multe if-uri un singur switch(limitare pe switch merge doar int sau enum)
		case (1):

			afisareSalarii(salarii, nrSalarii);
			break;
		case(2):
			nrSalarii = citireSalarii(salarii, nrSalarii);
			break;
		case(3):
			int min;
			min = minimSalarii(salarii, nrSalarii);
			cout << "Minimul este: " << min << endl;
			break;
		default:
			cout << "Comanda invalida" << endl;
		}
	}










}