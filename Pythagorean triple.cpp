#include <iostream>
using namespace std;

int main()
{
    int a, b, c, triple_one, triple_two;

    cout<<"Podaj liczb� a: ";
    cin>>a;
    cout<<"Podaj liczb� b: ";
    cin>>b;
    cout<<"Podaj liczb� c: ";
    cin>>c;


    triple_one = a * a + b * b;
    triple_two = c * c;


    if (triple_one == triple_two)
    {
        cout<<"1";
    }
    if (triple_one != triple_two)
    {
        cout<<"0";
    }


    return 0;
}
