#include <iostream>

#include <string>
using namespace std;

class Card{
    public:
    int cardNumber;
    string cardHolder;

};

//Creat an alias

typedef int FUN;


//typedef alias Card Ptr for the Card*
typedef Card* CardPtr;

int main(){
    //create anew object and a Cardptr pointing to it
    Card myCard;
//alias continued
    FUN x = 5;


    myCard.cardNumber = 123456;
    myCard.cardHolder = "John Doe";

    CardPtr ptrToCard = &myCard;

    //access the card information using the pointer 

    cout << "Card Number: " << ptrToCard->cardNumber << endl;
    cout << "Card Holder: " << ptrToCard->cardHolder << endl;

cout << x << endl;

    return 0;



}
