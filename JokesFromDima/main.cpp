#include <iostream>
#include <chrono>
#include <thread> 
int main()
{
    int i{0};
    std::cout<<"Starting to hack network... \n";
    std::this_thread::sleep_for(std::chrono::seconds(1));
    for (; i<=100;i+=10)
    {
        std::cout<<i<<" %"<<" \n";
        std::this_thread::sleep_for(std::chrono::seconds(2));
    }
    std::cout<<"..."<<" \n";
    std::this_thread::sleep_for(std::chrono::seconds(3));
    std::cout<<"ti pidor \n";
    std::this_thread::sleep_for(std::chrono::seconds(4));
    return 0;
}