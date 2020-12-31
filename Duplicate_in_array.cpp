// Duplicate in array (Simple approach OR Brute force approach)

//You have been given an integer array/list(ARR) of size N which contains numbers from 0 to (N - 2). Each number is present at least once. 
//That is, if N = 5, the array/list constitutes values ranging from 0 to 3 and among these, there is a single integer value that is present twice.
// You need to find and return that duplicate number present in the array.

#include<iostream>
using namespace std;

int main(){
    int size,result;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    for(int i=0;i<size;i++){
        int sum=0;
        for(int j=0;j<size;j++){
            if(arr[i]==arr[j])
                sum++;
        }
        if(sum>1){
            result=arr[i];
        }
    }
    cout<<result<<endl;
}