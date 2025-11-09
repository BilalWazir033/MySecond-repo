#include<iostream>
using namespace std;
void deleteelement(int arr[6], int pos){
	int n=6;
	for(int i=pos; i<n-1; i++){
		arr[i]=arr[i+1];
		
	}
	n--;
	cout<<"After deletion:";
	for(int i=pos; i<n-1; i++){
		cout<<arr[i]<<endl;
	}
}
int main(){
	int pos=6; 
	int arr[]={1,2,3,4,5,6};
	deleteelement(arr,pos);
}
