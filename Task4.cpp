#include <iostream>
#include <limits>
using namespace std;
int main()
{
	int value;
	cout<<"Enter a value between 5 and 10"<<endl;
	do{
	    if(!(cin >> value)){
	        cin.clear();
	        cin.ignore (numeric_limits<streamsize>::max(),'\n');
	        cout<<"Sorry ,you entered an invalid number, please try again"<<endl;
	        }else if (value <5 || value >10){
	            cout<<"You entered "<<value<<" please enter a number between 5 and 10"<<endl;
	            }
}while (value > 5 || value < 10);
 cout <<"Your input value ("<< value <<") has been accepted. '\n'"<<endl;
 return 0;	
}