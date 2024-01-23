#include <iostream>
#include <fstream>
#include <time.h>
using namespace std;

int main()
{
    srand( time( NULL ) );

    int tab[42];

    for(int i = 0; i < 42; i++)
    {
       tab[i] = rand() % (42 + 1 - 0) + 0;
    }

    for(int i = 0; i < 42; i++)
    {
       cout<<tab[i]<<endl;
    }

    ofstream filesave("answer.txt");

    cout<<"Zapisuje do pliku:"<<endl<<endl;
    for(int i = 0; i < 42; i++)
    {
        filesave<<tab[i];
    }

    cout<<"Plik zapisany";

    return 0;
}
