#include <iostream>
using namespace std;

int ciag(int an)
{
    if(an==0)
    {
        return 1;
    }
    if(an==1)
    {
        return 2;
    }

    return ciag(an - 1) * ciag(an - 2);

}

int main()
{
    int an;

    cout<<"Podaj liczbe liczb ci�gu: ";
    cin>>an;

    cout<<"Warto�� an wynosi "<<ciag(an)<<endl;

}
