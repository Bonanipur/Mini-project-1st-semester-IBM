#include<iostream>
using namespace std;
int main(){
	float length,width,area,perimeter;
	cout<<"enter the length of the rectangle:"<<endl;
	cin>>length;
	cout<<"enter the width of the rectangle:"<<endl;
	cin>>width;
	area=length*width;
	perimeter=2*(length+width);
	cout<<" area = "<<area<<endl;
	cout<<"perimeter = "<<perimeter<<endl;
	return 0;
	
}

