//Given an array arr[] of N positive integers. Push all the zero’s of the given array to the right end of the array while maitaining 
//the order of non-zero elements.

//Complexity O(n)

#include<iostream>
using namespace std;

void pushZerosToEnd(int arr[], int n) {
	    
	    int k=0;
	    for(int i=0;i<n;i++){
	        if(arr[i]!=0){
	            arr[k]=arr[i];
	            k++;
	        }
	    }
	    for(int i=k;i<n;i++){
	        arr[i]=0;
	    }
	}

int main(){

    int size;
    cin>>size;
    int array[size];
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
    pushZerosToEnd(array , size);
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
}