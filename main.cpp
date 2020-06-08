#include <iostream>
#include "vector.hpp"
using std::cout;
using std::cin;
using std::endl;
int main()
{
    using shujun_vec::vector;
    vector<int> res;
    for(int i=0;i<10;i++)
        res.push_back(i);
    cout<<res[0]<<endl;
}
