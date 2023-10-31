#include <iostream>
using namespace std;

int main()
{
    int a, b, suma = 0, suma2 = 0;

    cout<<"Wprowad¿ pierwsz¹ liczbê: ";
    cin>>a;
    cout<<"WprowadŸ drug¹ liczbê: ";
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
        cout<<"Liczba "<<a<<" i liczba "<<b<<" s¹ liczbami zaprzyjaŸnionymi";
    } else {
        cout<<"Liczba "<<a<<" i liczba "<<b<<" nie s¹ liczbami zaprzyjaŸnionymi";
    }


    return 0;
}
