#include<iostream>
using namespace std;
int main(){
	int n;
	int time[n];
	cout<<"enter the number of days: ";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"time of exercise day "<<(i+1)<<":"<<endl;
		cin>>time[i];
	}
	cout<<"reversing......"<<endl;
	for(int i=n-1;i>=0;i--){
		cout<<time[i]<<endl;
		
	}
	return 0;
}
