#include <iostream>
#incluse <string>
using namespace std;

class Car{
    private:
    string brand{"Honda"};
    string model = "Civic";
    int year = 2025;

    public:
    Car(){//default constructor

    }

    Car(string b, string m, int y){// parameterized constructor
        brand = b;
        model = m;
        year = y;
    }

    Car(const Car& other){ //Copy Constructor
        brand = other.brand;
        model = other.model;
        year = other.year;
    }

    void startEngine() const{
        cout<<"Starting engine for "<< brand << " " << model << " " << year << endl;
    }
}
