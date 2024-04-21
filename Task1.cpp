#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
	srand(time(0));
	int daysUntilExpire = rand() %12;
 cout<< daysUntilExpire<<endl;
 if (daysUntilExpire == 0){
	    cout<< "Your subscription  has expired"<<endl;
	           }
	           else if(daysUntilExpire == 1){
	            cout<<"Your subscription expires within a day! Renew now and save 20%"<<endl;
	        }
	        else if(daysUntilExpire <=5){
	    cout<<"Your subscription expires in "<<daysUntilExpire<<" days. Renew now and save 10%"<<endl;
	}
	       else if (daysUntilExpire <=10){
	        cout<<"Your subscription will expire soon.Renew now!"<<endl;
	}
	      else{ 
	    cout<<" Your have an active subscription";
	    }
	return 0;
	}
