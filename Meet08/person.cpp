#include <iostream>

struct Person
{
    std::string name ;
    float weight = 99.9;
    float height = 110;
    int age = 15;
    bool is_married = true;

    Person(std::string n, float w, float h) : name(n), weight(w), height() {};
};


int main ()
{
    Person person("John Doe",70, 170);
    Person felix("felix", 99.9, 110);
    Person putri("putri", 55, 290);
    std::cout << felix.name << std::endl;
    std::cout << putri.name << std::endl;
    return 0;
}