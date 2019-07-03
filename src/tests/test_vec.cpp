#include "vec.hpp"

using namespace msh;
using namespace std;

int main()
{
    Vec<int> v;
    
    cout<<v<<endl<<endl;
    
    v.reserve(5, -1);
    cout<<v<<endl;
    for (size_v i = 0; i < v.size(); i++) {
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    
    return 0;
}