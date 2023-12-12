#include <iostream>
using namespace std;

int main()
{
    int tab_size;
    int now_dl = 0, max_dl = 0;
    int start_substring = 0, substring = 0;

    cout<<"Enter size table: "<<endl;
    cin>>tab_size;

    int tab[tab_size];

    for(int i = 0; i < tab_size; i++)
    {
        cout<<"Enter number to the table: "<<endl;
        cin>>tab[i];

        if (tab[i] > 0)
        {
            ++now_dl;
            
            if(now_dl > max_dl)
            {
                max_dl = now_dl;
                start_substring = substring;
            }
        }
        else
        {
            now_dl = 0;
            substring = i + 1;
        }
    }

    for(int i = start_substring; i < start_substring + max_dl; i++)
    {
        cout<<tab[i]<<" ";
    }

    return 0;
    
}