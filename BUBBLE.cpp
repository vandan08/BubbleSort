#include<iostream>
using namespace std;

int main(){
	
	
	int n;
	cout<<"Enter how much element you want in array : ";
	cin>>n;
	
	int arr[n];
	for(int i=0;i<n;i++){
		cout<<"Enter element for "<<i<<" th index : ";
		cin>>arr[i];
	}
	
	int counter =1;
	while(counter<n){
		for(int i=0;i<counter;i++){
			if(arr[i]>arr[i+1]){
				int temp = arr[i+1];
				arr[i+1]=arr[i];
				arr[i]=temp;
			}
		}
		counter++;
	}
	cout<<endl;
	cout<<"Sorted Array is ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	
	
	
	return 0;

}
