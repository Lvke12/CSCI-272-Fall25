//header file for Person Class
#include <iostream>

using namespace std;

class Person{
    public:
    string name{"Lucia"};
    int age{19};
    char gender{'F'};
    
    public:
    void introduce(){
        cout<<"Hello, I'm "<< name << ". I'm " << age << "years old. ";
        
        if (gender == 'F'){
            cout<< "I'm a Female. " << endl;
        }else if (gender == 'M'){
            cout<< "I'm a female" << endl;
        }else{
            cout<<"Gender unspecified." << endl;
        }
    }
    
};
