//A step array is an array of integer where each element has a difference of at most k with its neighbor. 
//Given a key x, we need to find the index value of k if multiple elements exist, return the first occurrence of the key.



#include<iostream>
using namespace std;

void result(int arr[] , int n , int x){
    int flag=0;
    for(int i=0;i<n;i++){
	        if(arr[i]==x){
	            flag=i;
	            break;
	        }
	 }
	    if(n==1 && (arr[0]==x)){
	        cout<<0<<endl;
	    }
	    else if(flag!=0){
	        cout<<flag<<endl;
	    }
	    else{
	        cout<<-1<<endl;
	    }
}

int main()
 {
	//code
	int T,n,k,x;
	cin>>T;
	for(int i=0;i<T;i++)
	{
	    cin>>n>>k;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    cin>>x;
	    result(arr,n,x);
	}
	
	return 0;
}
