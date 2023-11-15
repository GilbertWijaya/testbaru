#include <iostream>
using namespace std;

//tugas Gilbert Wijaya,23104410083,Teknik Informatika,1B

int main() {

	int totalGnp = 0,totalGnjl=0,bilangan;
	cout << "masukan bilangan ke-n: ";
	cin >> bilangan;

	cout << "bilangan genap: ";
	for (int i = 1; i <= bilangan; i++)
	{
		if (i % 2 == 0) {
			cout << i << " ";
			totalGnp += i;
		}
	}
	cout << endl;
	cout << "total bilangan genap adalah: " << totalGnp << endl;

	cout << "bilangan ganjil: ";
	for (int j = 1; j <= bilangan; j++)
	{
		if (j % 2 == 1) {
			cout << j << " ";
			totalGnjl += j;
		}
	}
	cout << endl;
	cout << "total bilangan ganjil adalah: " << totalGnjl << endl;

	return 0;
}