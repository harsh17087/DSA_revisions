//Given an array of integers arr[0..n-1], count all pairs (arr[i], arr[j]) in it such that i*arr[i] > j*arr[j], 0 =< i < j < n.


#include<iostream>
#include<climits>
using namespace std;

int count_pair(int arr[] , int n){
    int sum=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(i*arr[i]>j*arr[j]){
                sum++;
            }
        }
    }
    return sum;
}

int main()
 {
	//code
	int T,n;
	cin>>T;
	for(int i=0;i<T;i++)
	{
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    cout<<count_pair(arr,n)<<endl;
	}
	return 0;
}
