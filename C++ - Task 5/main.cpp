#include <iostream>
#include <string>

using namespace std;

int main()
{
    int liczba = 100, pobierz;

    do
    {
        cin.clear();
        cin.sync();

        cout << "Wprowadz liczbe calkowita : ";
        cin >> pobierz;

    }while(cin.good() < 1);

    cout << "Wynik : " << liczba + pobierz << endl;

    return 0;
}
