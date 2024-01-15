#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;
 
double radian_generate()
{
    return (static_cast<double>(rand()) / RAND_MAX) * (2 * M_PI);
}

double radian_on_degrees(double radian)
{
    return radian + (180 / M_PI);
}

int main()
{
    srand(time(NULL));

    int size;
    cout<<"Enter table size:";
    cin>>size;

    double* table = new double[size];

    for(int i = 0; i < size; i++)
    {
        table[i] = radian_generate();
    }

    for(int i = 0; i < size; i++)
    {
        table[i] = radian_on_degrees(table[i]);
    }

    for(int i = 0; i < size; i++)
    {
        cout<<"Radian "<<i+1<<": "<<table[i]<<" stopni"<<endl;
    }

    delete [] table;

    return 0;
}