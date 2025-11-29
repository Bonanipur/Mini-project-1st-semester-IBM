#include<iostream>
using namespace std;
int main(){
	int n;	
	cout<<"enter the number of subjects"<<endl;
	cin>>n;
	int arr[n];
	
	for(int i=0;i<n;i++){
		cout<<"marks "<<i+1<<endl;
		cin>>arr[i];
		
	}
	int highest=arr[1];
	int lowest=arr[0];
	for(int i=0;i<n;i++){
		if(highest<arr[i]){
			highest=arr[i];
		}
		if(lowest>arr[i]){
			lowest=arr[i];
		}
	}
	
	
	
	cout<<"highest is "<<highest<<endl;
	cout<<"lowest is "<<lowest<<endl;
	
	
	return 0;
}

