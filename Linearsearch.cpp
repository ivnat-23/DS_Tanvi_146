#include<iostream>
using namespace std;
int main(){

cout<<"Enter Array elements"<<endl;
int arr[5];
for(int i=0;i<5;i++){
	cin>>arr[i];
}
int target;
cout<<"Enter element to be searched"<<endl;
cin>>target;
int loc = 0;
for(int i=0;i<5;i++){
	if(arr[i]==target){
		
		loc = i;
		break;
	}
	else{
		loc = 0;
	}
	
}
if(loc !=0){
	cout<<"Element "<<arr[loc]<<" found at "<<loc<<"th position"<<endl;
}
else{
	cout<<"Search unsuccessul"<<endl;
}
return 0;
}
