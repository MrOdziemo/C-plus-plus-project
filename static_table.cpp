#include <iostream>
using namespace std;

void static_table_add(int** tab, int x, int y)
{
    for (int i = 0; i < x; ++i)
    {
        for (int j = 0; j < y; ++j)
        {
            cout << "Enter data to table[" << i << "][" << j << "]: ";
            cin >> tab[i][j];
        }
  }
}

void static_table_write(int** tab, int x, int y)
{
    cout << "Two-dimensional table: " << endl;
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j)
            {
                cout << tab[i][j] << " ";
            }
    cout << endl;
  }

}

int main()
{
    int x = 2, y = 3;

    int** table = new int*[x];
    for (int i = 0; i < x; i++) {
        table[i] = new int[y];
    }

    cout<<"Enter data"<<endl;
    static_table_add(table, x ,y);

    cout<<"Write out data"<<endl;
    static_table_write(table, x, y);
}
