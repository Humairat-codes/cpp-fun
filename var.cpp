#include<iostream>
int main(){
    std::cout << "=======INTEGER=======" << std::endl;

    int x; //declaration
    x = 10; //assignment
    std::cout << x << "\n";

    int age = 18; //declaration + assignment
    std::cout << age << std::endl;

    int a = 5;
    int b = 6;
    int sum = a+b;
    std::cout << sum << "\n";

    int z = 19.9;
    std::cout << z; //truncates to give just the integer portion i.e. 19

    //double (numbers including decimal)
    std::cout << "=======DOUBLE=======" << std::endl;
    double gpa = 4.0;
    double temperature = 25.2;
    double price = 100.50;

    std::cout << gpa << "\n";
    std::cout << temperature << "\n";
    std::cout << price << "\n";

    std::cout << "=======CHARACTER=======" << std::endl;

    char grade = 'A';
    char icon = '$';
    char initial = 'H';
    // char love = "Y"; ERRRRROR
    std::cout << grade << "\n";
    std::cout << icon << "\n";
    std::cout << initial << std::endl;

    std::cout << "=======BOOLEAN=======" << std::endl;
    bool student = true;
    bool married = false;
    bool power = true;
    bool forSale = 0; //false
    bool catLover = 10000; //true
    std::cout << student << "\n";
    std::cout << married << "\n";
    std::cout << power << std::endl;
    std::cout << forSale << std::endl;
    std::cout << catLover << std::endl;
    
    std::cout << "=======STRING=======" << std::endl;
    //String 
    std::string name = "Humairat Codes";
    std::string day = "Saturday";
    std::string food = "Fish";
    std::string address = "Some street on earth";
    
    std::cout << "Hello " <<name << "\n";
    std::cout << "You are " << age << " years old"<< "\n";
    std::cout << "Today is " << day << "\n";
    std::cout << "You love to eat " << food << "\n";
    std::cout << "Your address is " << address << "\n";

    std::cout << "=======do it all=======" << std::endl;
    std::string identity = "Omnix";
    int year = 1000;
    bool cool = true;
    char symbol = '!';
    std::cout << identity << std::endl;
    std::cout << year << std::endl;
    if(cool){
        std::cout << "Omnix wins :p" << std::endl;
    }
    std::cout << symbol << std::endl;
/*‘‘... and you, Marcus, you have giv en me many things; now I shall give you this good
advice. Be many people. Give up the game of being always Marcus Cocoza. You
have worried too much about Marcus Cocoza, so that you have been really his slave
and prisoner. You have not done anything without first considering how it would affect
Marcus Cocoza’s happiness and prestige. You were always much afraid that Marcus
might do a stupid thing, or be bored. What would it really have mattered? All over the
world people are doing stupid things ... I should like you to be easy, your little heart to
be light again. You must from now, be more than one, many people, as many as you
can think of ...’’– Karen Blixen,
The Dreamers from Seven Gothic Tales (1934)
*/
  return 0;
}
