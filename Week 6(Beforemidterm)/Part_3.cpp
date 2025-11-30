int main(){
    string data = "7 ate 9 "; //int string int
    istringstream iss(data); // creating input string stream object named iss 

    int value; // 7 and 9
    while(iss >> value){ // try to read an integer from the stream
        cout << "Read integer: " << value << endl;
        // if reading fails (e.g., encounters non-integer), the loop will terminate
    }

    //when a bad token stops extraaction
    if (iss.fail()){
        cout << "stream failed. skipping bad token..." << endl;
        iss.clear(); //clear the fail state
        string bad;
        iss>>bad;
        // cout<<bad<<endl;



    }
    //resume reading next values 
    while (iss >> value){
        cout << "Read integer: " << value << endl;
    }




}
