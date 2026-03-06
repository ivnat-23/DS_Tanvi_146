#include<iostream>
using namespace std;
int main(){
	int arr[5];
	cout<<"Selection sort"<<endl;
	cout<<"Enter arry elements(5 only)"<<endl;
	for(int i=0;i<5;i++){
		cin>>arr[i];
	}
	cout<<"Array before sorting"<<endl;
	for(int i=0;i<5;i++){
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	cout<<"Array after sorting"<<endl;
	for(int i=0;i<5;i++){
		int min=i;
		for(int j = i+1;j<5;j++){
			if(arr[min]>arr[j]){
				
				min = j;
				
			}
			
		}
		int temp = arr[min];
		arr[min]=arr[i];
		arr[i]=temp;
				
		for(int i=0;i<5;i++){
			cout<<arr[i]<<" ";
		}
	cout<<endl;
	}
	
} 
