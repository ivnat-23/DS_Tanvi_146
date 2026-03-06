#include<iostream>
using namespace std;

int main(){
	int arr1[3][3];
	int arr2[3][3];
	int sub[3][3];
	cout<<"Enter Elements for array 1"<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>arr1[i][j];
		}
	}
	cout<<"Enter elements for array 2"<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>arr2[i][j];
		}
	}
	for(int i=0;i<3;i++){
		for(int j =0;j<3;j++){
			sub[i][j] =  arr1[i][j] - arr2[i][j];
		}
	}
	cout<<"Matrix 1 "<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<arr1[i][j];
			cout<<" ";
		}
		cout<<endl;
		
	}
	cout<<"Matrix 2 "<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<arr2[i][j];
			cout<<" ";
		}
		cout<<endl;
		
	}
	cout<<"Substraction of matrix"<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<sub[i][j];
			cout<<"  ";
		}
		cout<<endl;
		
	}
}
