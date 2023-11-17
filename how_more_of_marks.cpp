#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

int main()
{
    char mark, sign;
    int all_mark = 0;
    int small_mark = 0;
    int big_mark = 0;
    int number_mark = 0;
    int other_mark = 0;

    while(true)
    {
        cout<<"You give mark: "<<endl;
        cin>>mark;
        
        if (mark == 'a' || mark == 'b' || mark == 'c' || mark == 'd' || mark == 'e' || mark == 'f' || mark == 'g' || mark == 'h' || mark == 'i' || mark == 'j' || mark == 'l' || mark == 'm' || mark == 'n' || mark == 'o' || mark == 'p' || mark == 'r' || mark == 's' || mark == 't' || mark == 'u' || mark == 'w' || mark == 'y' || mark == 'z')
        {
            all_mark += 1;
            small_mark += 1;
        }

        if (mark == '0' || mark == '1' || mark == '2' || mark == '3' || mark == '4' || mark == '5' || mark == '6' || mark == '7' || mark == '8' || mark == '9')
        {
            all_mark += 1;
            number_mark += 1;
        }

        if (mark == '!' || mark == '@' || mark == '#' || mark == '$' || mark == '%' || mark == '^' || mark == '&' || mark == '*' || mark == '_' || mark == '-' || mark == '+' || mark == '=' || mark == '{' || mark == '}' || mark == '[' || mark == ']' || mark == ':' || mark == ';' || mark == '"' || mark == '<' || mark == ',' || mark == '>' || mark == '.' || mark == '?' || mark == '/')
        {
            all_mark += 1;
            other_mark += 1;
        }

        if (mark == 'A' || mark == 'B' || mark == 'C' || mark == 'D' || mark == 'E' || mark == 'F' || mark == 'G' || mark == 'H' || mark == 'I' || mark == 'J' || mark == 'L' || mark == 'M' || mark == 'N' || mark == 'O' || mark == 'P' || mark == 'R' || mark == 'S' || mark == 'T' || mark == 'U' || mark == 'W' || mark == 'Y' || mark == 'Z')
        {
            all_mark += 1;
            big_mark += 1;
        }

        sign = getch();
        if (sign == 'k')
        {
            break;
        }
    }

    cout<<"Number all marks: "<<all_mark<<endl;
    cout<<"Number small marks: "<<small_mark<<endl;
    cout<<"Number big marks: "<<big_mark<<endl;
    cout<<"Number numbers marks: "<<number_mark<<endl;
    cout<<"Number others marks: "<<other_mark<<endl;

    if (small_mark > big_mark && number_mark && other_mark)
    {
        cout<<"The most marks this small marks"<<endl;
    }
    if (big_mark > small_mark && number_mark && other_mark)
    {
        cout<<"The most marks this big marks"<<endl;
    }
    if (number_mark > big_mark && small_mark && other_mark)
    {
        cout<<"The most marks this numbers marks"<<endl;
    }
    if (other_mark > big_mark && number_mark && small_mark)
    {
        cout<<"The most marks this other marks"<<endl;
    }

    return 0;
}