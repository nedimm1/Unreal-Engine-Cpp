#include <iostream>

int main(){
    std::cout << std::endl;
    std::cout << "Enter the correct code to continue...";

    int a = 4;
    int b = 3;
    int c = 2;

    int sum = a + b + c;
    int product = a * b * c;
    const int a = 4;
    const int b = 3;
    const int c = 2;
    //note: with the const keyword, we signal our intention to ourselvs and anybody who reads our code
    //note2: we never want this variable to change its value after its decleration
    const int sum = a + b + c;
    const int product = a * b * c;


    std::cout << std::endl;
    std::cout << sum << std::endl;




}