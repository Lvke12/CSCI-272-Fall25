#include <iostream>
#include <string>

using namespace std;

//define a class named Car
class Car {
    private:
        string brand = "Ford";
        string model = "Mustang";
        int year = 1969;

    public:
        //destructor: called when an object is detroyed

        ~Car() {

            cout<< "Destructorcalled for car: " << "brand: "<<brand<< " model: "<<model<< " year: "<<year<<endl;
            
        }

        Car() {
            //default constructor
        }

        //copy Constructor
        Car(const Car & other) {
            brand = other.brand;
            model = other.model;
            year = other.year + 1; //increment year by 1
        }

        //Parameterized constructor
        Car(string b, string m, int y) {
            brand = b;
            model = m;
            year = y;
        }
