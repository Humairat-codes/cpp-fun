#include<iostream>
#include<vector>
// typedef = new identifier to a datatype
typedef std::vector<std::pair<std::string,int>> pairlist_t;
    // pairlist_t pairl;
typedef std::string str_t;
typedef int i_t;
// typedef is replaced by using
using text_t = std::string;
using num_t = int;
using f_t = double;
int main(){
    
    str_t name = "Omnix";
    i_t age = 19;
    std::cout << name<< "\n";
    std::cout << age << std::endl;
    text_t hobby = "coding";
    num_t studyHoursDaily = 18;
    std::cout << hobby << "\n";
    std::cout << studyHoursDaily << "\n";
    f_t starRating = 4.9;
    std::cout << starRating << "\n";
    return 0;
}
