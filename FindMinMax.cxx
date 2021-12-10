//find minimum and maximum values in a array
#include<iostream>
using namespace std;

//find minimum value
int findmin(int arr[],int n){
	int i;
	int min=arr[0];
	for(i=0;i<n;i++){
		if(arr[i]<min)
		min=arr[i];
	}
	return min;
}

//find maximum value
int findmax(int arr[],int n){
	int i;
	int max=arr[0];
	for(i=0;i<n;i++){
		if(arr[i]>max)
		max=arr[i];
	}
	return max;
}


int main(){
	int size,arr[20],i,min,max;
	cin>>size;
	// Input arrays element
	for(i=0;i<size;i++){
		cin>>arr[i];
	}
	
	min=findmin(arr,size);
	max=findmax(arr,size;
	
	cout<<min<<" "<<max<<endl;
	
	return 0;
}