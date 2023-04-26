#include<iostream>
using namespace std;

void printarray(int a[],int n)
{
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

void bubblesort(int a[],int n){
	int temp;
	for(int i=0;i<n-1;i++){   //for number of passes 
		for(int j=0;j<n-1-i;j++){
			if(a[j]<a[j+1]){
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}
		}
	
	}
}

int main(){

	int a[]={32,42,23,45,64,21};
	int n=6;
	printarray(a,n);
	bubblesort(a,n);
	printarray(a,n);

	return 0;
}
