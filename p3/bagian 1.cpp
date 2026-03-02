#include <iostream>
using namespace std;

int panjang, lebar;

void input()
{
    cout << "masukan panjang :"; >>
    cin >> panjang;
    cout <<"masukan lebar;";
    cin >> lebar;
}

int luasPersegi(int a, int b)
{
    return a * b;
}

int kelilingPersegi(int a, int b)
{
    return 2 * (a+b);
}

void output()
{
    cout <<"luasnya :"<< luaspersegi
    (panjang, lebar)<< endl;
}
int main()
{
    input();
    output();
    cout <<"kelilingnya : "<<kelilingPersegi
    (panjang, lebar);
}