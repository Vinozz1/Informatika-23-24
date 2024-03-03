// #include <iostream>

// struct restaurant {

//     // ATTRIBUTES (DATA MEMBER)
//     std::string restaurant_name = "pagi sore";
//     std::string cuisine_type = "masakan padang";

//     // CONSTRUCTOR
    

    
//     // METHODS / SKILL / FUNCTION
//     void describe_restaurant(){
//         std::cout << "nama rumah makan ini adalah " << this->restaurant_name << "rumah makan ini menyediakan" << this->cuisine_type << std::endl;
//     }

//     void open_restaurant(){
//         std::cout << "the restaurant is open now" << std::endl;
//     }

// };

// int main ()
// {
    
//     return 0;
// }

#include <iostream>

struct Restaurant
{
    std::string name;
    std::string type;

    Restaurant(std::string n, std::string t) : name(n), type(t) {}

    void describe_restaurant() {
        std::cout << "restoran " << this->name  << " " << "ini menyediakan masakan" << " " << this->type << std::endl ;
    }

    void open_restaurant() {
        std::cout << "restoran ini sedang buka" << std::endl;
    }
};

int main(){
    Restaurant restoran("PagiSore", "Sumatera");
    restoran.describe_restaurant();
    restoran.open_restaurant();
    return 0;
}