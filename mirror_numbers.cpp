#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string text, text2;

    cout<<"Podaj liczbê: ";
    cin>>text;
    cout<<"Podaj liczbê odwrócon¹: ";
    cin>>text2;

    reverse(text.begin(), text.end());

    if (text == text2)
    {
        cout<<"Liczba pierwsza jest liczb¹ lustran¹ drugiej liczby.";
    } else {
        cout<<"Liczba pierwsza nie jest liczb¹ lustran¹ drugiej liczby.";
    }

    return 0;

}
