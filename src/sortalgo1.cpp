#include <iostream>
#include <algorithm>


int main()
{
    std::string h[5] = {"cmnvjsn","yoijhed","fdjvjio","uhbgo","asdhj"};

    std::sort(h,&h[5]);

    for (int i = 0; i < 5; i++)
    {
        std::cout<<h[i]<<" ";
    }
    
    return 0;
}