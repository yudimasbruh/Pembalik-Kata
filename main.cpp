#include <iostream>

using namespace std;

int main()
{
    char kalimat [100];
    char *u;
    string n;

    cout << "Masukkan Suatu Kalimat : ";
    cin.getline(kalimat,100);
    u=kalimat;
    n=kalimat;

    for (int i=n.length();i>=0;i--)
    {
        cout << kalimat[i];
    }cout <<endl;

    return 0;
}
