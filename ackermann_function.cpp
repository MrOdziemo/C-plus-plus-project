#include <iostream>
using namespace std;

int ackerman_fucntion(int m, int n) {
    if (m == 0)
    {
        return n + 1;
    }
    if (m > 0 && n==0)
    {
        return ackerman_fucntion(m - 1, 1);
    }
    else
    {
        return ackerman_fucntion(m - 1, ackerman_fucntion(m, n - 1));
    }
}

int main()
{
    int m, n;

    cout<<"Enter number m: ";
    cin>>m;

    cout<<"Enter number n: ";
    cin>>n;

    int score = ackerman_fucntion(m, n);

    cout<<"Amount Ackermann function to: "<<score;

    return 0;
}
