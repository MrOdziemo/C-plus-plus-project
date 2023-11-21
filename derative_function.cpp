#include <iostream>
using namespace std;

int main()
{
    int x, n, h;
    double function_one, function_two;

    cout<<"Enter x: ";
    cin>>x;
    cout<<"Enter y: ";
    cin>>n;
    cout<<"Enter h: ";
    cin>>h;

    cout<<endl<<"Your function this f(x)="<<x<<"^"<<n<<endl;

    cout<<endl<<"Derative function with accuracy h, with definition:"<<endl;
    for(int i = 0; i < 10; i++)
    {
        function_one = 2 * x + h;
        h--;
        cout<<function_one<<endl;
    }

    function_two = n * (x * (n - 1));
    cout<<endl<<"Derative function witch accuracy value:";
    cout<<endl<<function_two;

    return 0;
}