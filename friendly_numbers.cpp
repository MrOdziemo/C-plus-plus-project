#include <iostream>
using namespace std;

int main()
{
    int a, b, suma = 0, suma2 = 0;

    cout<<"Wprowad� pierwsz� liczb�: ";
    cin>>a;
    cout<<"Wprowad� drug� liczb�: ";
    cin>>b;


    for(int i = 1; i <= a; i++)
     {
        if (a % i == 0)
            suma = suma + i;
     }
    for(int i = 1; i <= b; i++)
     {
        if (b % i == 0)
            suma2 = suma2 + i;
     }

    if (suma == suma2)
    {
        cout<<"Liczba "<<a<<" i liczba "<<b<<" s� liczbami zaprzyja�nionymi";
    } else {
        cout<<"Liczba "<<a<<" i liczba "<<b<<" nie s� liczbami zaprzyja�nionymi";
    }


    return 0;
}
