#include<iostream>
using namespace std;
int main(){
	int arr[5];
	cout<<"insertion sort"<<endl;
	cout<<"Enter Array Elements(only 5 elements)";
	for(int i=0;i<5;i++){
		cin>>arr[i];
	}
	for(int i=1;i<5;i++){
		int temp = arr[i];
		int ptr = i-1;
		while(ptr>=0 && temp<arr[ptr]){
			arr[ptr+1]=arr[ptr];
			ptr = ptr-1;
			
		}
		arr[ptr+1] = temp;
		for(int i=0;i<5;i++){
		cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
	

}
