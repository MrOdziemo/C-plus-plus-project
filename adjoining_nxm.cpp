#include <iostream>
using namespace std;

int main()
{
    int rows, columns;

    cout<<"Enter number rows: "<<endl;
    cin>>rows;
    cout<<"Enter number columns: "<<endl;
    cin>>columns;

    int tab_rows_columns[rows] [columns];

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            cout<<"Enter number for table: "<<endl;
            cin>>tab_rows_columns[i] [j];
        }
    }

    cout<<endl<<"Table rows on calumns:"<<endl;
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            cout<<tab_rows_columns[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl<<"plus number"<<endl;
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            if(tab_rows_columns[i][j] > 0)
            {
                cout<<tab_rows_columns[i][j]<<" ";
            }
        }
    }

    cout<<endl<<endl<<"minus number"<<endl;
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            if(tab_rows_columns[i][j] < 0)
            {
                cout<<tab_rows_columns[i][j]<<" ";
            }
        }
    }

    cout<<endl<<endl<<"zero number"<<endl;
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            if(tab_rows_columns[i][j] == 0)
            {
                cout<<tab_rows_columns[i][j]<<" ";
            }
        }
    }
}