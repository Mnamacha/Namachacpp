#include <iostream>
using namespace std;
double AreaOfTriangle(double base , double height){
return 0.5*base*height;}
double AreaOfRectangle(double length, double width){
return length*width;}
double AreaOfSquare(double side){
return side*side;
}
int main()
{
	int choice;
	double area =0.0;
	do{
	    cout<<"please select the area of the shape to calculate"<<endl
	    << "1. Square"<<endl
	    <<"2. Rectangle"<<endl
	    << "3. Triangle"<<endl
	    <<"4. Quit the program"<<endl
	    << "Enter selection: ";
	    cin >> choice ;
	    if (choice ==1){
	         double side;
	         cout<<" Enter the side length of the square: ";
	         cin >> side;
	         area= AreaOfSquare(side);
	         cout <<"The area of yhe square is "<< area <<endl;
	         }
	         else if (choice ==2){
	             double length , width;
	             cout<<"Enter the length of the rectangle: ";
	            cin >> length;
	            cout << "Enter the width of the rectangle: ";
	            cin >>width;
	            area = AreaOfRectangle(length, width);
	            cout<<"Tha area of the rectangle is "<< area <<endl;
	             }else if (choice ==3){
	                 double base ,height;
	                 cout <<"Enter the base of tge triangle: ";
	                 cin >>base;
	                 cout <<"Enter the height of tge triangle: ";
	                 cin >> height;
	                 area =AreaOfTriangle(base, height);
	                 cout<<"The area of the triangle is "<<area <<endl;
	                 }
	                 else if (choice == 4){
	                  cout<<"Exiting the program "<<endl;   
	                     }else 
	                     cout<<"Your input was "<< choice<<" which is an invalid input. Please enter a valid input! "<<endl;
	                     
	         
	    }while(choice != 4);
	    return 0;
}