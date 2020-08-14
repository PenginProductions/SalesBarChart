/*
	Robert Giglio III
	10/17/2016
	Exercise 2
*/

#include<iostream>
using namespace std;

int main()
{
	int numStores, x, stars;
	double* stores;

	cout << "How many stores? ";
	cin >> numStores;
	stores = new double[numStores];

	for (x = 0; x < numStores; ++x)
	{
		cout << "Sales for store #" << (x+1) << ": ";
		cin >> stores[x];
	}

	cout << "SALES BAR CHART\n---------------\n\n(Each * = $100)\n" << endl;

	for (x = 0; x < numStores; ++x)
	{
		cout << "Store " << (x+1) << ": ";

		stars = stores[x] / 100;

		for (int i = 0; i < stars; ++i)
		{
			cout << "*";
		}
		cout << endl;
	}
	delete[] stores;
	cout << "\n" << endl;
	system("pause");
	return 0;
}