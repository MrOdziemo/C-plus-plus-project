#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    srand( time( NULL ) );

    double pi, x, y, number_hit;
    int hit = 0;

    cout<<"Give number throws: "<<endl;
    cin>>number_hit;
    
    for(int i = 0; i < number_hit; i++){
        double draw = (rand() % 200) + -100;
        double draw1 = (rand() % 200) + -100;
        x = draw / 100;
        y = draw1 /100;
        
        if (x * x + y * y <= 1 and x * x + y * y > 0)
        {
            ++hit;
        }
    }

    cout<<endl<<"Number hits: "<<hit<<endl;

    pi = 4 * (hit / number_hit);

    cout<<endl<<"Number pi this: "<<pi<<endl;

    return 0;
}