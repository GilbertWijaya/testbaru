#include <iostream>
using namespace std;


int main()
{
    
    string nama[]{ "gilbert","edwart","bakso" };

    int size = sizeof(nama) / sizeof(string);
    
    for (int i = 0; i < size; i++)
    {

        cout << nama[i] << " ";

    }










    return 0;
}
