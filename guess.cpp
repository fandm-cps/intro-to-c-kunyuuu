
#include <iostream>
#include<string>

using namespace std;

int main()
{
    int num = 3;
    bool result = false;
    while(result == false)
    {
        int userInput;
        cout<< "please enter a number"<<endl;
        cin>>userInput;
        if(userInput == result){
            result = true;
        }
        else{
            result = false;
        }
    }
    cout<<"Correct!"<<endl;
}
