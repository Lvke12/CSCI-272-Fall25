#include <iostream>
#include<vector> //I need to make sure I add this because we are creating a vector
using namespace std;

int main()
{
 vector<string>menu; //If it were dealing with numbers I would've put = ex:1,2,3,4,5 
 
 //I included my 5 dishes and we are using push_back not back play how I wrote in my quiz
 menu.push_back("Buritto");
 menu.push_back("pizza");
 menu.push_back("Ramen");
 menu.push_back("Salad");
 menu.push_back("Sushi");
 
 //Insert new dish in second position not replacing it
 
 menu.insert(menu.begin()+1, "Pie");
 
//I added one b/c it is the 2nd index we want me space for a new dish

menu.erase(menu.begin()+3);
//we using menu.erase to remove the 4th dish

//Now we have to check our changes and confirm 

cout<<"The menu for today:\n";

//we add our loop

for(string dish: menu)
cout<<dish<<endl;

    return 0;
}
