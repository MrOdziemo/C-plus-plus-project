#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string text, text2;

    cout<<"Podaj liczb�: ";
    cin>>text;
    cout<<"Podaj liczb� odwr�con�: ";
    cin>>text2;

    reverse(text.begin(), text.end());

    if (text == text2)
    {
        cout<<"Liczba pierwsza jest liczb� lustran� drugiej liczby.";
    } else {
        cout<<"Liczba pierwsza nie jest liczb� lustran� drugiej liczby.";
    }

    return 0;

}
