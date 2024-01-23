#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

namespace sum {
    int sum(const std::vector<int>& wektor)
    {
        return accumulate(wektor.begin(), wektor.end(), 0);
    }
}

namespace minimum {
    int mini(const std::vector<int>& wektor)
    {
        return *min_element(wektor.begin(), wektor.end());
    }
}

namespace maximum {
    int maks(const std::vector<int>& wektor)
    {
        return *max_element(wektor.begin(), wektor.end());
    }
}

int main()
{
    std::vector < int > tab;

    int x = 1;

    for( int i = 0; i < 5; i++ )
    {
        tab.push_back( x );
        x = x + 2;
    }


    for( int i = 0; i < tab.size(); i++ )
    {
        std::cout << tab[ i ] << std::endl;
    }

    int amount = sum::sum(tab);
    int minimal_value = minimum::mini(tab);
    int maximum_value = maximum::maks(tab);

    cout<<"amount vector: "<<amount<<endl<<endl;

    cout<<"Minimal value vector: "<<minimal_value<<endl<<endl;

    cout<<"Maximum value vector: "<<maximum_value<<endl;
}
