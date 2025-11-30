#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

int main(){
    ostringstream oss;

    string name = "Alice";
    int score = 95;
    double gpa = 3.876;

    //build a message;
    oss << "Student: " << name
        << " | Score: " << score
        << " | GPA: " <<  fixed setprecision(2) << gpa;
        string message = oss.str();
        






}
