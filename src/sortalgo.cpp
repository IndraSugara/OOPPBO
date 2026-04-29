#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
    int n;
    std::cin>>n;
    int h[n];
    for (int i = 0; i < n; i++)
    {
        std::cin>>h[i];
    }
    std::cout << h+(n-1) << std::endl;
    std::cout << h << std::endl;

    std::sort(h,h+(n-1));

    for (int i = 0; i < n; i++)
    {
        std::cout<<h[i]<<" ";
    }
    
    return 0;
}