#include<iostream>
using namespace std;
void reverseArray(int array[],int start,int end){
	int x;
	while(start<end){
		x=start;
		start=end;
		end=x;
		start++;
		end--;
	}
}
void printArray(int arr[],int size)
{
	int i;
	for(i=0;i<size;i++){
		cout << arr[i] ;
		cout<<endl;
		
	}
}
int main(){
	int arr[]={7,5,9,2,8};
	int n=sizeof(arr)/sizeof(arr[0]);
	printArray(arr,n);
	reverseArray(arr,0,n-1);
	return 0;
}