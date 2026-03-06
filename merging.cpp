#include<iostream>
using namespace std;
int main(){
	
	int arr1[3] = {10, 20, 30};
	int arr2[7] = {40, 50, 60, 70, 80, 90, 100};
	int arr3[10];

	int	ptr = 0;
	int i = 0;
	int j=0;
	while(i<3 && j<7){
		if(arr1[i]<arr2[j]){
		arr3[ptr]=arr1[i];
		ptr++;
		i++;
	}
	else{
		arr3[ptr]=arr2[j];
		ptr++;
		j++;
		
	}
	}
	if(i<3){
		while(i<3){
			arr3[ptr]=arr1[i];
			i++;
			ptr++;
		}
	}
	if(j<7){
		while(j<7){
			arr3[ptr]=arr2[j];
			j++;
			ptr++;
		}
	}
	for(int k=0;k<10;k++){
		cout<<arr3[k]<<" ";
	}
	
	
}
