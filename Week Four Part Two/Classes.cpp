#include <iostream>
#include <string>

using namespace std;

class Employee{
    private:
    string name;
    string company;
    int age;
    public:
    // Constructor
    Employee(string Name, string Company, int Age){
        name = Name;
        company = Company;
        age = Age;
    }
    void setName(string Name){
        name = Name;
    }
    string getName(){
        return name;
    }
    void setCompany(string Company){
        company = Company;
    }
    string getCompany(){
        return company;
    }
    void setAge(int Age){
        age = Age;
    }
    int getAge(){
        if (age >= 18)
        return age;
    }

    void introduceYourself(){
        cout<<"Name: "<< name << endl;
        cout<<"Company: "<< company << endl;
        cout<<"Age: "<< age << endl;
    }
};

int main(){
    Employee emp1("Lucia", "Accenture", 19);
    emp1.introduceYourself();

    Employee emp2("Dhanyah", "Amazon", 20);
    emp2.introduceYourself();

    emp1.setAge(23);
    cout << emp1.getName() << " is now " << emp1.getAge() << " years old" << endl;

    return 0;
}
