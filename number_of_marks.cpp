#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

int main()
{
    char mark, sign;
    int this_mark = 0;
    int big_mark = 0;
    bool loop = true;

    while(loop)
    {
        cout<<"You give mark: "<<endl;
        cin>>mark;
        
        if (mark)
        {
            this_mark += 1;
        }

        if (mark == 'A' || mark == 'B' || mark == 'C' || mark == 'D' || mark == 'E' || mark == 'F' || mark == 'G' || mark == 'H' || mark == 'I' || mark == 'J' || mark == 'L' || mark == 'M' || mark == 'N' || mark == 'O' || mark == 'P' || mark == 'R' || mark == 'S' || mark == 'T' || mark == 'U' || mark == 'W' || mark == 'Y' || mark == 'Z')
        {
            this_mark += 1;
            big_mark += 1;
        }

        sign = getch();
        if (sign == 'k') loop = false;
    }

    cout<<"Number of marks: "<<this_mark<<endl;
    cout<<"number of big marks: "<<big_mark<<endl;
  
  return 0;
}