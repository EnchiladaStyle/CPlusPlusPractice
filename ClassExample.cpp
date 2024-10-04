#include <iostream>
#include <vector>
#include <string>

class Car{
    private:
        std::string make;
        std::string model;
        int year;
        std::string color;
        bool started;
        std::string key;

    public:
        Car(std::string _make, std::string _model, std::string _color, int _year, std::string _key){

            make = _make;
            model = _model;
            color = _color;
            year = _year;
            started = false;
            key = _key;

        }

        std::string getMake(){
            return make;
        }

        std::string getModel(){
            return model;
        }

        std::string getColor(){
            return color;
        }

        int getYear(){
            return year;
        }

        void startCar(std::string _key){
            if (_key == key){
                std::cout<<"Vroom! The car is started"<<std::endl;
                started = true;
            }
            else{
                std::cout<<"wrong key"<<std::endl;
            }
        }

        void pushGasPedal(){
            if(started){
                std::cout<<"the car moves forward"<<std::endl;
            }
            else{
                std::cout<<"the car does not move because it is not started"<<std::endl;
            }
        }    
};

int main(){
    Car bronco("Ford", "Bronco", "Green", 1998, "broncoKey");

    bronco.startCar("subaruKey");
    bronco.pushGasPedal();
    bronco.startCar("broncoKey");
    bronco.pushGasPedal();

    std::cout<<std::endl;

    Car* subaruPointer = new Car("Subaru", "Outback", "Red", 2020, "subaruKey");
    (*subaruPointer).startCar("subaruKey");
    subaruPointer->pushGasPedal();

}