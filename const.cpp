#include<iostream>

int main(){
    //MAKE PI CONSTANT USING const KEYWORD
    const double PI = 3.14159;
    // PI = 3.14159265; //error: assignment of read-only variable 'PI'
    const int L_SPEED = 299792458;
    const int WIDTH = 1920;
    const int HEIGHT = 1080;
    const double E = 2.71828;
    double radius = 100;
    double area = PI*radius*radius;
    std::cout << area << "\n";
    return 0;
}
