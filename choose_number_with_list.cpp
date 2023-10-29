#include <iostream>
using namespace std;

int main() 
{
    int a, b, c, d, e, f, g, h, i, j;
    int tab[10];


    cout<<"Write one number: ";
    cin>>a;
    if (a=a)
    {
        cin>>tab[0];

        cout<<"Write two number: ";
        cin>>b;
        if (b=b) 
        {
            cin>>tab[1];
            
            cout<<"Write three number, if not, you write 00: ";
            cin>>c;
            if (c=c)
            {
                cin>>tab[2];

                cout<<"Write four number, if not. you write 00: ";
                if (d=d)
                {
                    cin>>tab[3];

                    cout<<"Write five number, if not, you write 00: ";
                    cin>>e;
                    if (e=e)
                    {
                        cin>>tab[4];

                        cout<<"Write six number, if not, you write 00: ";
                        cin>>f;
                        if (f=f)
                        {
                            cin>>tab[5];

                            cout<<"Write seven number, if not, you write 00: ";
                            cin>>g;
                            if (g=g)
                            {
                                cin>>tab[6];

                                cout<<"Write eight number, if not, you write 00: ";
                                cin>>h;
                                if (h=h)
                                {
                                    cin>>tab[7];

                                    cout<<"Write nine number, if not, you write 00: ";
                                    cin>>i;
                                    if (i=i)
                                    {
                                        cin>>tab[8];

                                        cout<<"Write ten number, if not, you write 00: ";
                                        cin>>j;

                                        if (j=j)
                                        {
                                            cin>>tab[9];
                                            
                                            if (tab[0] < tab[1] < tab[2] < tab[3] < tab[4] < tab[5] < tab[6] < tab[7] < tab[8] < tab[9])
                                            {
                                                cout<<"Smallest number is "<<tab[0]<<" and is first on list";
                                            }
                                            if (tab[1] < tab[0] < tab[2] < tab[3] < tab[4] < tab[5] < tab[6] < tab[7] < tab[8] < tab[9])
                                            {
                                                cout<<"Smallest number is "<<tab[1]<<" and is two on list";
                                            }
                                            if (tab[2] < tab[0] < tab[1] < tab[3] < tab[4] < tab[5] < tab[6] < tab[7] < tab[8] < tab[9])
                                            {
                                                cout<<"Smallest number is "<<tab[2]<<" and is third on list";
                                            }
                                            if (tab[3] < tab[0] < tab[1] < tab[2] < tab[4] < tab[5] < tab[6] < tab[7] < tab[8] < tab[9])
                                            {
                                                cout<<"Smallest number is "<<tab[3]<<" and is fourth on list";
                                            }
                                            if (tab[4] < tab[0] < tab[1] < tab[2] < tab[3] < tab[5] < tab[6] < tab[7] < tab[8] < tab[9])
                                            {
                                                cout<<"Smallest number is "<<tab[4]<<" and is fifth ln list";
                                            }
                                            if (tab[5] < tab[0] < tab[1] < tab[2] < tab[3] < tab[4] < tab[6] < tab[7] < tab[8] < tab[9])
                                            {
                                                cout<<"Smallest number is "<<tab[5]<<" and is sixth on list";
                                            }
                                            if (tab[6] < tab[0] < tab[1] < tab[2] < tab[3] < tab[4] < tab[5] < tab[7]< tab[8] < tab[9])
                                            {
                                                cout<<"Smallest number is "<<tab[6]<<" and is seventh on list";
                                            }
                                            if (tab[7] < tab[0] < tab[1] < tab[2] < tab[3] < tab[4] < tab[5] < tab[6] < tab[8] < tab[9])
                                            {
                                                cout<<"Smallest number is "<<tab[7]<<" and is eighth on list";
                                            }
                                            if (tab[8] < tab[0] < tab[1] < tab[2] < tab[3] < tab[4] < tab[5] < tab[6] < tab[7] < tab[9])
                                            {
                                                cout<<"Smallest number is "<<tab[7]<<" and is ninth on list";
                                            }
                                            if (tab[9] < tab[0] < tab[1] < tab[2] < tab[3] < tab[4] < tab[5] < tab[6] < tab[7] < tab[8])
                                            {
                                                cout<<"Smallest number is "<<tab[7]<<" and is tenth on list";
                                            }
                                        }
                                        if (j=00)
                                        {
                                            if (tab[0] < tab[1] < tab[2] < tab[3] < tab[4] < tab[5] < tab[6] < tab[7] < tab[8])
                                            {
                                                cout<<"Smallest number is "<<tab[0]<<" and is first on list";
                                            }
                                            if (tab[1] < tab[0] < tab[2] < tab[3] < tab[4] < tab[5] < tab[6] < tab[7] < tab[8])
                                            {
                                                cout<<"Smallest number is "<<tab[1]<<" and is two on list";
                                            }
                                            if (tab[2] < tab[0] < tab[1] < tab[3] < tab[4] < tab[5] < tab[6] < tab[7] < tab[8])
                                            {
                                                cout<<"Smallest number is "<<tab[2]<<" and is third on list";
                                            }
                                            if (tab[3] < tab[0] < tab[1] < tab[2] < tab[4] < tab[5] < tab[6] < tab[7] < tab[8])
                                            {
                                                cout<<"Smallest number is "<<tab[3]<<" and is fourth on list";
                                            }
                                            if (tab[4] < tab[0] < tab[1] < tab[2] < tab[3] < tab[5] < tab[6] < tab[7] < tab[8])
                                            {
                                                cout<<"Smallest number is "<<tab[4]<<" and is fifth ln list";
                                            }
                                            if (tab[5] < tab[0] < tab[1] < tab[2] < tab[3] < tab[4] < tab[6] < tab[7] < tab[8])
                                            {
                                                cout<<"Smallest number is "<<tab[5]<<" and is sixth on list";
                                            }
                                            if (tab[6] < tab[0] < tab[1] < tab[2] < tab[3] < tab[4] < tab[5] < tab[7]< tab[8])
                                            {
                                                cout<<"Smallest number is "<<tab[6]<<" and is seventh on list";
                                            }
                                            if (tab[7] < tab[0] < tab[1] < tab[2] < tab[3] < tab[4] < tab[5] < tab[6] < tab[8])
                                            {
                                                cout<<"Smallest number is "<<tab[7]<<" and is eighth on list";
                                            }
                                            if (tab[8] < tab[0] < tab[1] < tab[2] < tab[3] < tab[4] < tab[5] < tab[6] < tab[7])
                                            {
                                                cout<<"Smallest number is "<<tab[7]<<" and is ninth on list";
                                            }
                                        }
                                    }
                                    if (i=00)
                                    {
                                        if (tab[0] < tab[1] < tab[2] < tab[3] < tab[4] < tab[5] < tab[6] < tab[7])
                                        {
                                            cout<<"Smallest number is "<<tab[0]<<" and is first on list";
                                        }
                                        if (tab[1] < tab[0] < tab[2] < tab[3] < tab[4] < tab[5] < tab[6] < tab[7])
                                        {
                                            cout<<"Smallest number is "<<tab[1]<<" and is two on list";
                                        }
                                        if (tab[2] < tab[0] < tab[1] < tab[3] < tab[4] < tab[5] < tab[6] < tab[7])
                                        {
                                            cout<<"Smallest number is "<<tab[2]<<" and is third on list";
                                        }
                                        if (tab[3] < tab[0] < tab[1] < tab[2] < tab[4] < tab[5] < tab[6] < tab[7])
                                        {
                                            cout<<"Smallest number is "<<tab[3]<<" and is fourth on list";
                                        }
                                        if (tab[4] < tab[0] < tab[1] < tab[2] < tab[3] < tab[5] < tab[6] < tab[7])
                                        {
                                            cout<<"Smallest number is "<<tab[4]<<" and is fifth on list";
                                        }
                                        if (tab[5] < tab[0] < tab[1] < tab[2] < tab[3] < tab[4] < tab[6] < tab[7])
                                        {
                                            cout<<"Smallest number is "<<tab[5]<<" and is sixth on list";
                                        }
                                        if (tab[6] < tab[0] < tab[1] < tab[2] < tab[3] < tab[4] < tab[5] < tab[7])
                                        {
                                            cout<<"Smallest number is "<<tab[6]<<" and is seventh on list";
                                        }
                                        if (tab[7] < tab[0] < tab[1] < tab[2] < tab[3] < tab[4] < tab[5] < tab[6])
                                        {
                                            cout<<"Smallest number is "<<tab[7]<<" and is eighth on list";
                                        }
                                    }
                                }
                                if (h=00)
                                {
                                    if (tab[0] < tab[1] < tab[2] < tab[3] < tab[4] < tab[5] < tab[6])
                                    {
                                        cout<<"Smallest number is "<<tab[0]<<" and is first on list";
                                    }
                                    if (tab[1] < tab[0] < tab[2] < tab[3] < tab[4] < tab[5] < tab[6])
                                    {
                                        cout<<"Smallest number is "<<tab[1]<<" and is two on list";
                                    }
                                    if (tab[2] < tab[0] < tab[1] < tab[3] < tab[4] < tab[5] < tab[6])
                                    {
                                        cout<<"Smallest number is "<<tab[2]<<" and is third on list";
                                    }
                                    if (tab[3] < tab[0] < tab[1] < tab[2] < tab[4] < tab[5] < tab[6])
                                    {
                                        cout<<"Smallest number is "<<tab[3]<<" and is fourth on list";
                                    }
                                    if (tab[4] < tab[0] < tab[1] < tab[2] < tab[3] < tab[5] < tab[6])
                                    {
                                        cout<<"Smallest number is "<<tab[4]<<" and is fifth n list";
                                    }
                                    if (tab[5] < tab[0] < tab[1] < tab[2] < tab[3] < tab[4] < tab[6])
                                    {
                                        cout<<"Smallest number is "<<tab[5]<<" and is sixth n list";
                                    }
                                    if (tab[6] < tab[0] < tab[1] < tab[2] < tab[3] < tab[4] < tab[5])
                                    {
                                        cout<<"Smallest number is "<<tab[5]<<" and is seventh n list";
                                    }
                                }
                            }
                            if (g=00)
                            {
                                if (tab[0] < tab[1] < tab[2] < tab[3] < tab[4] < tab[5])
                                {
                                    cout<<"Smallest number is "<<tab[0]<<" and is first on list";
                                }
                                if (tab[1] < tab[0] < tab[2] < tab[3] < tab[4] < tab[5])
                                {
                                    cout<<"Smallest number is "<<tab[1]<<" and is two on list";
                                }
                                if (tab[2] < tab[0] < tab[1] < tab[3] < tab[4] < tab[5])
                                {
                                    cout<<"Smallest number is "<<tab[2]<<" and is third on list";
                                }
                                if (tab[3] < tab[0] < tab[1] < tab[2] < tab[4] < tab[5])
                                {
                                    cout<<"Smallest number is "<<tab[3]<<" and is fourth on list";
                                }
                                if (tab[4] < tab[0] < tab[1] < tab[2] < tab[3] < tab[5])
                                {
                                    cout<<"Smallest number is "<<tab[4]<<" and is fifth n list";
                                }
                                if (tab[5] < tab[0] < tab[1] < tab[2] < tab[3] < tab[5])
                                {
                                    cout<<"Smallest number is "<<tab[5]<<" and is sixth n list";
                                }
                            }
                        }
                        if (f=00)
                        {
                            if (tab[0] < tab[1] < tab[2] < tab[3] < tab[4])
                            {
                                cout<<"Smallest number is "<<tab[0]<<" and is first on list";
                            }
                            if (tab[1] < tab[0] < tab[2] < tab[3] < tab[4])
                            {
                                cout<<"Smallest number is "<<tab[1]<<" and is two on list";
                            }
                            if (tab[2] < tab[0] < tab[1] < tab[3] < tab[4])
                            {
                                cout<<"Smallest number is "<<tab[2]<<" and is third on list";
                            }
                            if (tab[3] < tab[0] < tab[1] < tab[2] < tab[4])
                            {
                                cout<<"Smallest number is "<<tab[3]<<" and is fourth on list";
                            }
                            if (tab[4] < tab[0] < tab[1] < tab[2] < tab[3])
                            {
                                cout<<"Smallest number is "<<tab[3]<<" and is fifth n list";
                            }
                        }
                    }
                    if (e=00)
                    {
                        if (tab[0] < tab[1] < tab[2] < tab[3])
                        {
                            cout<<"Smallest number is "<<tab[0]<<" and is first on list";
                        }
                        if (tab[1] < tab[0] < tab[2] < tab[3])
                        {
                            cout<<"Smallest number is "<<tab[1]<<" and is two on list";
                        }
                        if (tab[2] < tab[0] < tab[1] < tab[3])
                        {
                            cout<<"Smallest number is "<<tab[2]<<" and is third on list";
                        }
                        if (tab[3] < tab[0] < tab[1] < tab[2])
                        {
                            cout<<"Smallest number is "<<tab[3]<<" and is fourth on list";
                        }
                    }
                }
                if (d=00)
                {
                    if (tab[0] < tab[1] < tab[2])
                    {
                        cout<<"Smallest number is "<<tab[0]<<" and is first on list";
                    }
                    if (tab[1] < tab[0] < tab[2])
                    {
                        cout<<"Smallest number is "<<tab[1]<<" and is two on list";
                    }
                    if (tab[2] < tab[0] < tab[1])
                    {
                        cout<<"Smallest number is "<<tab[2]<<" and is third on list";
                    }
                }
            }
            if (c=00)
            {
                if (tab[0] < tab[1])
                {
                    cout<<"Smallest number is "<<tab[0]<<" and is first on list";
                } else {
                    cout<<"Smallest number is "<<tab[1]<<" and is two on list";
                }
            }
        }
    }
}