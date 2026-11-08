#include<iostream>
int main(){
    // arithmetic operators = +,-,*,/
    int friends = 4;
    friends += 2;
    std::cout << friends << "\n";

    friends -= 2;
    std::cout << friends << "\n";

    friends *= 2;
    std::cout << friends << "\n";

    friends /= 2;
    std::cout << friends << "\n";

    friends %= 3;
    std::cout << friends << "\n";

    // ()
    // * & /
    // + & -
    friends = 0;
    friends = 13 - (2 + 4 * 4 / 2); //16/2 = 8 + 2 = 10, 13 - 10 = 3
    std::cout << friends << std::endl;
    return 0;
}
