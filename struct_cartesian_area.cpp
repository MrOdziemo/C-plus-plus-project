#include <iostream>
using namespace std;

struct punkt
{
    int x;
    int y;
    int z;
};

int main()
{
    int tab_size;

    cout<<"Enter how much points: "<<endl;
    cin>>tab_size;

    punkt base[tab_size];

    for(int i = 0; i < tab_size; i++)
    {
        cout<<"Give coordinate 'x' point for "<<i + 1<<endl;
        cin>>base[i].x;
        cout<<"Give coordinate 'y' point for "<<i + 1<<endl;
        cin>>base[i].y;
        cout<<"Give coordinate 'z' point for "<<i + 1<<endl;
        cin>>base[i].z;
    }

    int min = base[0].x + base[0].y + base[0].z;
    int distance, arg = 0;
    int one = 0, two = 0;

    for(int l = 0; l < tab_size - 1; l++)
    {
        for(int p = l + 1; p < tab_size; p++)
        {
            distance = (base[p].x - base[l].x) + (base[p].y - base[l].y) + (base[p].z - base[l].z);

            if(arg < distance)
            {
                arg = distance;
                one = p + 1;
                two = l + 1;
            }
        }
    }
    
    cout<<"The nearest two poits this: "<<distance<<", for points "<<one<<" and "<<two<<endl;

    return 0;
}