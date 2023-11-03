#include <iostream>
#include <string>
using namespace std;

string answer, answer2, answer3;
int a11, a12, a13,  a21, a22, a23, a31, a32, a33;
int b11, b12, b13, b21, b22, b23, b31, b32, b33;
int wa0, wa1, wa2, wa3, wa4;
int m0, m11, m12, m13, m21, m22, m23, m31, m32, m33;

void choose_option()
{
    cout<<"-multiplicationmacierzy"<<endl;
    cout<<"-calculatingtheexponentofmacierzy"<<endl;
}

void choose_macierz()
{
    cout<<"-1x1"<<endl;
    cout<<"-2x2"<<endl;
    cout<<"-3x3"<<endl;
}

void choose_multi_macierz()
{
    cout<<"-1x1"<<endl; // realised
    cout<<"-2xnumber"<<endl;
    cout<<"-2x1"<<endl;
    cout<<"-2x2"<<endl; // realised
    cout<<"-3xnumber"<<endl;
    cout<<"-3x1"<<endl;
    cout<<"-3x2"<<endl;
    cout<<"-3x3"<<endl; // realised
}

void one()
{
    cout<<"Write a1.1"<<endl;
    cin>>wa0;

    cout<<endl<<"Determinant macierzy this "<<wa0;
}

void two()
{
    cout<<"Write a1.1"<<endl;
    cin>>a11;
    cout<<"Write a1.2"<<endl;
    cin>>a12;
    cout<<"Write a2.1"<<endl;
    cin>>a21;
    cout<<"Write a2.2"<<endl;
    cin>>a22;

    wa1 = a11 * a22 - a12 * a21;
    cout<<endl<<"Determinant macierzy this "<<wa1;
}

void three()
{
    cout<<"Write a1.1"<<endl;
    cin>>a11;
    cout<<"Write a1.2"<<endl;
    cin>>a12;
    cout<<"Write a1.3"<<endl;
    cin>>a13;
    cout<<"Write a2.1"<<endl;
    cin>>a21;
    cout<<"Write a2.2"<<endl;
    cin>>a22;
    cout<<"Write a2.3"<<endl;
    cin>>a23;
    cout<<"Write a3.1"<<endl;
    cin>>a31;
    cout<<"Write a3.2"<<endl;
    cin>>a32;
    cout<<"Write a3.3"<<endl;
    cin>>a33;

    wa2 = a11 * a22 * a33 + a12 * a23 * a31 + a13 * a21 * a32;
    wa3 = a31 * a22 * a13 + a32 * a23 * a11 + a33 * a21 * a12;
    wa4 = wa2 - wa3;
    cout<<endl<<"Determinant macierzy this "<<wa4;
}

void multiplication_macierz_one_one()
{
    cout<<"Write number a1.1:"<<endl;
    cin>>a11;
    cout<<"Write number 1.1:"<<endl;
    cin>>b11;

    int score = a11 * b11;
    cout<<endl<<"Result multiplication this:"<<endl;
    cout<<"| "<<score<<" |";
}

void multiplication_macierz_two_two()
{
    cout<<"Write a1.1"<<endl;
    cin>>a11;
    cout<<"Write a1.2"<<endl;
    cin>>a12;
    cout<<"Write a2.1"<<endl;
    cin>>a21;
    cout<<"Write a2.2"<<endl;
    cin>>a22;
    cout<<"Write b1.1"<<endl;
    cin>>b11;
    cout<<"Write b1.2"<<endl;
    cin>>b12;
    cout<<"Write b2.1"<<endl;
    cin>>b21;
    cout<<"Write b2.2"<<endl;
    cin>>b22;

    m11 = a11 * b11 + a12 * b21;
    m12 = a11 * b12 + a12 * b22;
    m21 = a21 * b11 + a22 * b21;
    m22 = a21 * b12 + a22 * b22;

    cout<<endl<<"Result multiplication this:"<<endl;
    cout<<"| "<<m11<<" "<<m12<<" |"<<endl;
    cout<<"| "<<m21<<" "<<m22<<" |"<<endl;
}

void multiplication_macierz_three_three()
{
    cout<<"Write a1.1"<<endl;
    cin>>a11;
    cout<<"Write a1.2"<<endl;
    cin>>a12;
    cout<<"Write a1.3"<<endl;
    cin>>a13;
    cout<<"Write a2.1"<<endl;
    cin>>a21;
    cout<<"Write a2.2"<<endl;
    cin>>a22;
    cout<<"Write a2.3"<<endl;
    cin>>a23;
    cout<<"Write a3.1"<<endl;
    cin>>a31;
    cout<<"Write a3.2"<<endl;
    cin>>a32;
    cout<<"Write a3.3"<<endl;
    cin>>a33;
    cout<<"Write b1.1"<<endl;
    cin>>b11;
    cout<<"Write b1.2"<<endl;
    cin>>b12;
    cout<<"Write b1.3"<<endl;
    cin>>b13;
    cout<<"Write b2.1"<<endl;
    cin>>b21;
    cout<<"Write b2.2"<<endl;
    cin>>b22;
    cout<<"Write b2.3"<<endl;
    cin>>b23;
    cout<<"Write b3.1"<<endl;
    cin>>b31;
    cout<<"Write b3.2"<<endl;
    cin>>b32;
    cout<<"Write b3.3"<<endl;
    cin>>b33;

    m11 = a11 * b11 + a12 * b21 + a12 * b31;
    m12 = a11 * b12 + a12 * b22 + a13 * b32;
    m13 = a11 * b13 + a12 * b23 + a13 * b33;
    m21 = a21 * b11 + a22 * b21 + a23 * b31;
    m22 = a21 * b12 + a22 * b22 + a23 * b32;
    m23 = a21 * b13 + a22 * b23 + a23 * b33;
    m31 = a31 * b11 + a32 * b21 + a33 * b31;
    m32 = a31 * b12 + a32 * b22 + a33 * b32;
    m33 = a31 * b13 + a32 * b23 + a33 * b33;

    cout<<endl<<"Result multiplication this:"<<endl;
    cout<<"| "<<m11<<" "<<m12<<" "<<m13<<" |"<<endl;
    cout<<"| "<<m21<<" "<<m22<<" "<<m23<<" |"<<endl;
    cout<<"| "<<m31<<" "<<m32<<" "<<m33<<" |"<<endl;
}

int main()
{
    cout<<"Choose action:"<<endl;
    choose_option();
    cin>>answer;
    if (answer == "calculatingtheexponentofmacierzy")
    {
        cout<<"Choose size macierzy:"<<endl;
        choose_macierz();
        cin>>answer2;
        if (answer == "1x1")
        {
            one();
        }
        if (answer == "2x2")
        {
            two();
        }
        if (answer == "3x3")
        {
            three();
        }
    }
    if (answer == "multiplicationmacierzy")
    {
        cout<<"Choose sizes macierzy to multiplication:"<<endl;
        choose_multi_macierz();
        cin>>answer3;
        if (answer3 == "1x1")
        {
            multiplication_macierz_one_one();
        }
        if (answer3 == "2x2")
        {
            multiplication_macierz_two_two();
        }
        if (answer3 == "3x3")
        {
            multiplication_macierz_three_three();
        }
    }

    return 0;
}