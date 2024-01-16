#include <iostream>
using namespace std;

int main()
{
    struct DVD
    {
        string title;
        struct Data{
            string type;
            string version;
            int time;
        } data;
        double price;
    };

    int size;
    cout<<"Enter number DVD: ";
    cin>> size;

    DVD *tabledvd = new DVD[size];

    for(int i = 0; i < size; i++)
    {
        cout<<"Enter title plate "<<i+1<<": ";
        cin>>tabledvd[i].title;
        cout<<"Enter type film: ";
        cin>>tabledvd[i].data.type;
        cout<<"Enter version film: ";
        cin>>tabledvd[i].data.version;
        cout<<"Enter time film(in minutes): ";
        cin>>tabledvd[i].data.time;
        cout<<"Enter price film: ";
        cin>>tabledvd[i].price;
    }

    string type;
    cout<<"Enter type film, to do make average: ";
    cin>>type;

    double sumprice = 0;
    int amount = 0;

    for(int i = 0; i < size; i++)
    {
        if(tabledvd[i].data.type == type)
        {
            sumprice += tabledvd->price;
            amount++;
        }
    }

    double averageprice = sumprice / amount;
    cout<<"Average prive films in type "<< type <<": "<<averageprice<<endl;

    cout<<"Films about price under average: ";
    for(int i = 0; i < size; i++)
    {
        if(tabledvd[i].price < averageprice)
        {
            cout<<tabledvd[i].title<<" ";
        }
    }

    cout<<endl;

    delete [] tabledvd;

    return 0;
}