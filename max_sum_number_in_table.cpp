#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int sum(int x)
{
    int sum = 0;

    while(x > 0)
    {
        sum += (x % 10);
        x = x / 10;
    }

    return sum;
}

int main()
{
    int size_table;

    srand (time(NULL));

    cout<<"Enter size tab: ";
    cin>>size_table;

    int * table = new int [size_table];

    for(int i = 0; i < size_table; i++)
    {
        table[i]= rand() % (300 + 1 - 100) + 100;
    }

    for(int i = 0; i < size_table; i++)
    {
        if(sum(table[i]%3==0) )
        {
            cout<<"Index "<<i<<", value "<<table[i]<<endl<<endl;
        }
    }

    delete [] table;

    return 0;

}