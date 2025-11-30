#include "car.h"
#include <iostream>
#include <string>

using namespace std;

int main(){
    Car car1;
    Car car2("Tesla", "Model 5", 2025);
    Car car3 (car2); //copy constructor

    Car* pCar1 = new Car; // telling the new car to follow car 1 format
    Car* pCar2 = new Car("Ford", "Mustang", 2024);

    Car car[20]; //array of 20 cars

    car1.startengine();
    car2.startengine();
    car3.startengine();

    pCar1->startengine();
    pCar2->startengine();
    Car[0].startengine();

    return 0;
}
