#include <iostream>
#include <string>
#include <windows.h>
#include <time.h>
using namespace std;

int main()
{
    int number, x, y;
    int start_loop = 0;
    string answer;

    srand(time(NULL));

    while(start_loop < 1)
    {
        cout<<"Give max rand one: "<<endl;
        cin>>x;
        cout<<"Give min rand: "<<endl;
        cin>>y;

        cout<<endl<<"10 draw number this:"<<endl<<endl;

        for (int i = 0; i <= 10; ++i)
        {
            number = rand() % (x - y + 1) + y;
            cout<<number<<endl;
        }
        while(true)
        {
            cout<<endl<<"You want use again program?"<<endl;
            cin>>answer;

            if(answer == "yes")
            {
                system("cls");
                break;
            }
            if(answer == "no")
                exit(3);
        }
    }

    return 0;
}
