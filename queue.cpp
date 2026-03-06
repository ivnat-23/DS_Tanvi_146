#include<iostream>
using namespace std;
	int size = 7;
	int arr[7];
	int front=0;
	int rear=-1;
	void enqueue(int ele){
		if(rear==size-1){
			cout<<"Queue is full"<<endl;
		}
		else{
			rear++;
			arr[rear]=ele;
		}
	}
	void dequeue(){
		if(front>rear or front==size-1){
			cout<<"Queue is empty"<<endl;
		}
		else{
			int val = arr[front];
			cout<<"Element "<<val<<" removed successfully"<<endl;
			front++;
		}
	}
	void display(){
    
    cout<<"Queue elements are:"<<endl;
    for(int i = front; i <= rear; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
	int choice;
	while(true){
		cout<<"Enter choice"<<endl;
		cout<<"1.enqueue \n2.dequeue \n3.Display \n4.Exit"<<endl;
		cin>>choice;
		switch(choice){
			case 1:
				cout<<"Enter element you want to add"<<endl;
				int ele;
				cin>>ele;
				enqueue(ele);
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
			case 4 :
				exit(0);
				break;
			default:
				cout<<"Invalid choice";
		}
	}
	return 0;

	
	
}
