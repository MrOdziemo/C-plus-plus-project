#include <iostream>
using namespace std;

void sort_bubble(int table[],int size_table)
{
	for(int i = 0; i < size_table; i++)
		for(int j = 1 ; j < size_table - i; j++)
		if(table[j-1] > table[j])
			swap(table[j-1], table[j]);
}

int main()
{
    int size_table;
    int * table;

    cout<<"Enter size table: "<<endl;
    cin>>size_table;

    table = new int[size_table];

    for(int i = 0; i < size_table; i++)
    {
        cout<<"Enter element: "<<endl;
        cin>>table[i];
    }

    sort_bubble(table, size_table);

    for(int i = 0; i < size_table; i++)
    {
        cout<<table[i]<<endl;
    }

    return 0;

}
