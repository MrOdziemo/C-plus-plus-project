#include <iostream>
using namespace std;

int main()
{
    int how_much_size;
    char * table;

    cout<<"Enter size table: "<<endl;
    cin>>how_much_size;

    table = new char[how_much_size];

    for(int i = 0; i < how_much_size; i++)
    {
        cout<<"Enter element: "<<endl;
        cin>>table[i];
    }

    cout<<endl;

    for(int i = 0; i < how_much_size; i++)
    {
        if(table[i] == 'o' || table[i] == 'a' || table[i] == 'i' || table[i] == 'y' || table[i] == 'u' || table[i] == 'e')
        {
            cout<<table[i]<<endl;
        }
    }

    delete [] table;

    return 0;
}
