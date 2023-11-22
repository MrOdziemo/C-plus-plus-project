#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;

int main()
{
    double minute, second;
    int time;
    int button;

    while(true)
    {
        cout<<"Enter minute: ";
        cin>>minute;

        second = minute * 60;
        time = second;

        system("cls");

        for(int i = 0; i < time; i++)
        {
            cout<<second<<endl;
            second -= 1;
            Sleep(1000);
            system("cls");
            if(second == 0)
            {
                cout<<endl<<"Time ended"<<'\a'<<endl;
                cout<<"Press zero"<<endl;
                button = getch();
                if(button == '0') continue;
            }
        }
    }
}