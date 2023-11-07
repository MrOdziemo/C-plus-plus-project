#include <iostream>
using namespace std;

int main()
{
    double sum = 0;
    double l = 1;
    double m = 1;
    double term;
    
    while(term >= 0.001 or m == 1)
    {
        term = 1 / (m * m);
        sum =+ term;
        cout<<sum<<endl;
        m++;
    }
    
    cout << "Suma szeregu: " << sum << endl;
        
    return 0;
}