#include <iostream>

class Car{
    private:
        int vin;
    public:
        Car(int _vin){
            vin = _vin;
        }

        void showVin(){
            std::cout<<vin;
        }
};


int main(){

    Car* mazda = new Car(9);
    mazda->showVin();
}