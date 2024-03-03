#include <iostream>

struct Pacar {

    // ATTRIBUTES (DATA MEMBER)
    std::string name;
    int age;
    bool gender;
    double money;
    float ietls;

    // CONSTRUCTOR
    Pacar(std::string n, int a, bool g, double m, float i) :
    name(n), age(a), gender(g), money(m), ietls(i) {}

    
    // METHODS / SKILL / FUNCTION
    void sleep_call(){
        std::cout << this->name << " is sleeping zzz.. zzz.. zzz.." << std::endl;
        // std::cout << name << " is sleeping zzz.. zzz.. zzz.." << std::endl;
    }

    void driving(){
        std::cout << "mau kemana ?" << std::endl;
    }

    void flirting(){
        std::cout << "uhuy ..." << std::endl;
    }

    void karoke(std::string song){
        std::cout << "kuy ... nyanyi ..." << song << std::endl;
    }

};

int main ()
{
    Pacar pacar_1("yoshinoya", 18, 0, 1000000, 6);
    Pacar pacar_2("albert", 20, 0, 2000000, 9);

    pacar_1.karoke("aishiteru");
    pacar_1.sleep_call();
    pacar_2.sleep_call();
    return 0;
}