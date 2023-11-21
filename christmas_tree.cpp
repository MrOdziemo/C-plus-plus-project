#include <iostream>
#include <string>
using namespace std;

int main()
{
    string sign = "#";
    int number, onenumber;

    cout<<"Give hight christmas tree: ";
    cin>>number;

    cout<<endl;

    onenumber = number;

    for(int i = 0; i < number; i++)
    {
        string space(onenumber--, ' ');
        cout<<space<<sign<<endl;
        sign+="#";
        sign+="#";
    }
}
