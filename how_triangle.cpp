#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout<<"Give side a=";
    cin>>a;

    cout<<"Give side b=";
    cin>>b;

    cout<<"Give side c=";
    cin>>c;


    if(a == b && a == c)
    {
        cout<<"The triangle about side a="<<a<<" b="<<b<<" c="<<c<<" is equilateral";
        return 0;
    }
    if(a == b || a == c || b == c)
    {
        cout<<"The triangle about side a="<<a<<" b="<<b<<" c="<<c<<" is isosceles";
        return 0;
    }
    if(a != b && a != c && b != c)
    {
        cout<<"The triangle about side a="<<a<<" b="<<b<<" c="<<c<<" is scalene";
        return 0;
    }
}
