#include <iostream>
#include <vector>
#include <cmath>

namespace plusvector
{
    std::vector<double> operator+(const std::vector<double>& v0, const std::vector<double>& v1)
    {
        std::vector<double> result;
        for(int i = 0; i < v0.size() && i < v1.size(); i++)
        {
            result.push_back(v0[i] + v1[i]);
        }

        return result;
    }
}

using namespace plusvector;

int main()
{
    std::vector<double> v0 = {1., 2.};
    std::vector<double> v1 = {2., 2.};

    std::vector<double> result = v0 + v1;

    std::cout<<"Amount result: ";
    for(auto num : result)
    {
        std::cout << num << " ";
    }

    return 0;
}