#include<iostream>


int main() {

    double y;
    double x;
    double sum; 
    
    std::cout << " what is your first number? ";
    std::cin >> x;
    
    std::cout << " what is your second number? ";
    std::cin >> y;
    
    sum = x + y;

    std::cout << "your answer is " << sum;

    return 0;
}