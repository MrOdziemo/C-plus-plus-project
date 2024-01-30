#include <iostream>
using namespace std;

double sumseries(int n)
{
    double element = 1.0/n;

    if(n==1)
    {
        return n;
    }

    return element + sumseries(n - 1);
}

int main()
{
    int n;

    cout<<"Enter number n-element: ";
    cin>>n;

    double sum = sumseries(n);

    cout<<"Amount this sum to: "<<sum;

    return 0;
}
