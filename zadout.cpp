#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream filecout("answer.txt");

    char x;

    while(!filecout.eof())
    {
        filecout.get(x);
        cout<<x;
    }

    return 0;
}
