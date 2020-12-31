// Unique element in an array where all elements occur k times except one. Find that element

//Brute force approach OR simple approach
#include<iostream>
using namespace std;

int main(){
    int k, n;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j])
                sum++;
        }
        if(sum!=k){
            cout<<arr[i]<<" ";
        }
    }
}