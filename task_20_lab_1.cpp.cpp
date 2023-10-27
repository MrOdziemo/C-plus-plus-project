#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    int tab[4];


    cout<<"Write one number: ";
    cin>>tab[0];

    cout<<"Write two number: ";
    cin>>tab[1];

    cout<<"Write three number: ";
    cin>>tab[2];

    cout<<"Write four number: ";
    cin>>tab[3];


    if (tab[0] < tab[1] and tab[0] < tab[2] and tab[0] < tab[3])
    {
        cout<<"the smallest number this "<<tab[0]<<" and is "<<tab[0]<<" on list"<<endl;
    }

    if (tab[1] < tab[0] and tab[1] < tab[2] and tab[1] < tab[3])
    {
        cout<<"the smallest number this "<<tab[1]<<" and is "<<tab[1]<<" on list"<<endl;
    }

    if (tab[2] < tab[0] and tab[2] < tab[1] and tab[2] < tab[3])
    {
        cout<<"the smallest number this "<<tab[2]<<" and is "<<tab[2]<<" on list"<<endl;
    }

    if (tab[3] < tab[0] and tab[3] < tab[1] and tab[3] < tab[2])
    {
        cout<<"the smallest number this "<<tab[3]<<" and is "<<tab[1]<<" on list"<<endl;
    }

    // sort( tab, tab + 4 );

    // for( int i = 0; i < 4; i++ )
        // cout << tab[i] << '\n';

    // cout<<"Your minimal number: "<<tab[0];

    return 0;
}