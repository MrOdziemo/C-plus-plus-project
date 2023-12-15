#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    int size_tab, maks, i, arg;

    srand (time(NULL));

    cout<<"Enter size tab: ";
    cin>>size_tab;

    int * tab = new int [size_tab];

    for(i = 0; i < size_tab; i++)
    {
        tab[i]= rand() % 200 + 0;
    }

    maks = tab[0];
    arg = 0;

    for(i = 0; i < size_tab; i++)
    {
        if(tab[i] > maks)
        {
            maks = tab[i];
            arg = i;
        }
    }

    cout<<"Max value in table this: "<<maks<<" and him index this: "<<arg<<endl;

    delete [] tab;

    return 0;
    
}