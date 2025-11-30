using namespace std;

int main(){
    string data {"Input Test 123 4.7 ABC"}; // string with mixed data types
    istringstream iss(data); // create input string stream object

    string  exString;
    string exString2;
    int exInt;
    double exDouble;
    char exChar;

    iss >> exString >> exString2 >> exInt >> exDouble >> exChar;

    cout << "The following items were extracted from the istringstream object:" << endl;
         <<"\nString : " << exString1
         <<"\nString : " << exString2
         <<"\n   Int : " << exInt
         <<"\nDouble : " << exDouble
         <<"\n  Char : " << exChar;
         

// Let's attempt to read more! even though the string is completed
long Value;
iss>> Value;

if (iss.good())


}
