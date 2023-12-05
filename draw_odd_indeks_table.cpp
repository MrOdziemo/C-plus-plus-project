#include <iostream>
using namespace std;

int main()
{
    int size_table;

    cout<<"Give size table: "<<endl;
    cin>>size_table;
    cout<<"Numbers elements: "<<size_table<<endl<<endl;

    int table[size_table];

    for(int i = 0; i < size_table; i++)
    {
        cout<<"Give data to the table: "<<endl;
        cin>>table[i];
    }

    cout<<endl;

    cout<<endl<<"odd index:"<<endl;

    for(int i = 0; i < size_table; i++)
    {
        if(i % 2 != 0)
        {
            cout<<table[i]<<endl;
        }
    }

    return 0;
}
