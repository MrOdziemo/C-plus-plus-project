#include <iostream>
using namespace std;

struct vector2d 
{
    double x;
    double y;

    vector2d(double x, double y) : x(x), y(y){}
};

vector2d operator+(const vector2d& v0, const vector2d& v1)
{
    vector2d result(v0.x + v1.x, v0.y + v1.y);
    return result;
}

int main()
{
    vector2d v0 = {1., 2.};
    vector2d v1 = {2., 2.};
    vector2d res = v0 + v1;
    cout<<res.x<<' '<<res.y<<'\n';
    cout<<(vector2d{0., 0.} + v0).x<<'\n';
}