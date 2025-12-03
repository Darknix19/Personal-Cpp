#include <iostream>

class Car{
    public:
        std::string make;
        std::string model;
        int year;
        std::string color;

        void accelerate(){
            std::cout << "This car is accerating\n";
        }

        void brakes(){
            std::cout << "This car is braking\n";
        }
};

int main(){

    Car car1;
    
    car1.make = "Ford";
    car1.model = "Mustang";
    car1.year = 2023;
    car1.color = "Red";

    std::cout << car1.make << "\n";
    std::cout << car1.model << "\n";
    std::cout << car1.year << "\n";
    std::cout << car1.color << "\n";

    car1.accelerate();
    car1.brakes();

    return 0;
}