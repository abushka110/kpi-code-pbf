#include <iostream>

int main() {
    int integer1, integer2;
    std::cout<<"Enter first number:\n";
    std::cin>>integer1;
    std::cout<<"Enter second number:\n";
    std::cin>>integer2;
    int sum = integer1 + integer2;
    std::cout<<"The sum is: "<<sum<<std::endl;
    return 0;
}
