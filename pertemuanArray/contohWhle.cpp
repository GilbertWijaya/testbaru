#include <iostream>
using namespace std;

int main() {

	int data = 0, jumlah = 0, counter = 0;

	while (data != -1)
	{

		cout << "masukan angka: ";
		cin >> data;


		if (data <= -1) {
			break;
		}

		jumlah += data;
		counter++;

	}
	cout << "jumlah data: " << jumlah << endl;
	counter = jumlah / counter;
	cout << "rata rata data: " << (float)counter << endl;




	return 0;
}