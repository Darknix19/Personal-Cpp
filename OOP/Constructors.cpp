#include <iostream>

class Student{
    public:
        std::string name;
        int age;
        double gpa;

    //Constructor
    Student(std::string x, int y, double z){
        name = x;
        age = y;
        gpa = z;
    }
};

int main(){

    Student student1("Spongegbob", 24, 3.2);
    Student student2("Patrick", 25, 1.5);
    Student student3("Sandy", 23, 4.0);

    std::cout << student1.name << "\n";
    std::cout << student1.age << "\n";
    std::cout << student1.gpa << "\n\n";

    std::cout << student2.name << "\n";
    std::cout << student2.age << "\n";
    std::cout << student2.gpa << "\n\n";
    
    std::cout << student3.name << "\n";
    std::cout << student3.age << "\n";
    std::cout << student3.gpa << "\n\n";    

    return 0;
}