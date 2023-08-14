#include <iostream>
using namespace std;

int main(){
	int size,index,added, choice, arr[50];
	cout<<"enter the number of elements: ";
	cin>>size;
	for(int i=0;i<size;i++){
		cout<<"enter "<<i+1<<" element: ";
		cin>>arr[i];}
	while(choice!=4){
	cout<<"MENU:\n";
	cout<<"1. print array of n elements\n";
	cout<<"2. insert element at an index\n";
	cout<<"3. delete element at an index\n";
	cout<<"4. exit\nEnter your choice: ";
	cin>>choice;
	switch(choice){
		case 1:
			for(int i=0;i<size;i++)
			cout<<arr[i]<<" ";
			cout<<"/n";
			break;
		case 2:
			cout<<"enter the index to insert: ";
			cin>>index;
			cout<<"enter the element you want to add: ";
			cin>>added;
			size=size+1;
		for(int i=size-1;i>=index-1;i--){
			arr[i+1]=arr[i];}
			arr[index-1]=added;
		for(int i=0; i<size; i++)
		cout<<arr[i]<<" ";
		break;
	case 3:
		cout<<"enter the index element to delete: ";
		cin>>index;
		if(index>size){cout<<"error"; break;}
		for(int i=index;i<size;i++){
			arr[i]=arr[i+1];
		}
		size--;
		for(int i=0; i<size; i++)
		cout<<arr[i]<<" ";	
		break; 
	case 4:
		cout<<"exited";
		break;
	default:
		cout<<"invalid input";
		break;
	}}
	return 0;
}