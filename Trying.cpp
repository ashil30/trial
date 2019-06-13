#include <iostream>
#include<memory>

int multiply(int a, int b)
{
    return a*b;
}

int add(int a, int b)
{
    return a+b;
}

int main(){
    std::cout<<multiply(3,5)<<"\n";
    std::cout<<add(4,5)<<"\n";
}