#include <iostream>
using namespace std;

int main()
{
    int a, b, suma = 0, suma2 = 0;

    cout<<"Write first number: ";
    cin>>a;
    cout<<"Write second number: ";
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
        cout<<"Number "<<a<<" and number "<<b<<" are friendly numbers";
    } else {
        cout<<"Number "<<a<<" and number "<<b<<" are not friendly numbers";
    }


    return 0;
}
