#include <iostream>

using namespace std;


// .h file
class MyNumber {
private:
    int value;

public:
    // Constructor
    MyNumber(int val = 0) {
        value = val;
    }

    // getter to read the stored value
    int getValue() const {
        return value;
    }

    // overload minus: -num
    // this will not change the original object
    MyNumber operator-() const {
        return MyNumber(-value);
    }

    // overload the prefix increment: ++num
    // this will change the current obj (increment value by 1)
    MyNumber& operator++() {
        ++value;
        return *this;
    }

};

// main file
int main() {
    MyNumber num1(5);

    cout << "Original value: " << num1.getValue() << endl;
    return 0;
}
