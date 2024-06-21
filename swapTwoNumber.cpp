#include<iostream>
using namespace std;
int main(){
    
    int a = 5, b = 10;
    
    std::cout << "Before swapping:\n";
    std::cout << "a = " << a << ", b = " << b << "\n";
    
    int temp = a;
    a = b;
    b = temp;
    
    std::cout << "After swapping:\n";
    std::cout << "a = " << a << ", b = " << b << "\n";

    return 0;
}
