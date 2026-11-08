#include <iostream>
namespace a{
    int x = 18;
}
namespace b{
    int x = 20;
}
namespace c{
    int x = 19;
}
int main() {
    /*
    Namespace = provides a way to prevent naming conflicts. Each entity needs a unique name. A namespace allows for same named entities as long as they belong to different namespaces
    */
    std::cout << a::x << std::endl;
    std::cout << c::x << std::endl;
    std::cout << b::x << std::endl;
    
    return 0;
}
