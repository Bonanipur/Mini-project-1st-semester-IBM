#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"enter a number: "<<endl;
	cin>>num;
	if(num%2==0){
		cout<<"even number"<<endl;
		
	}
	else{
		cout<<"odd number"<<endl;
	}
	if(num%5==0){
		cout<<"divisible by 5"<<endl;
		
	}
	else{
		cout<<"not divisible by 5"<<endl;
	}
	return 0;
}
