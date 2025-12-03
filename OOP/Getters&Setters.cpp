#include <iostream>

class Stove{
    private:
        int temperature = 0;

    public:
        //getter
        int getTemperature(){
            return temperature;
        }

        //setter
        void setTemperature(int x){
            if (x < 0)
            {
                temperature = 0;
            }
            else if (x >= 10)
            {
                temperature = 10;
            }
            else{
                temperature = x;
            }
        }
};

int main(){

    Stove stove;

    stove.setTemperature(1000);

    std::cout << "The temperature setting is: " << stove.getTemperature();

    return 0;
}