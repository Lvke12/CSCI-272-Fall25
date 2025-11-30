#include "car.h"
#include <iostream>
using namespace std;
//Destructors

int main(){
    //create a car object using default values
    Car car1;

    //create a car object using parameters
    Car car2 ("Honda", "Civic", 2024);

    //car object using copy constructor
    Car car3 = car2;            

    car1.startEngine();
    car2.startEngine();
    car3.startEngine();

    //The destructor will be automatically called when car 1/2/3 go out of scope.
   
   
   
    return 0;

}
