//Given a binary array A[] of size N. The task is to arrange the array in increasing order.
//Note: The binary array contains only 0  and 1.

#include<iostream>
using namespace std;

void sort(int A[], int N){
    int sum=0;
    //Count the number of 0s.
    for(int i=0;i<N;i++){
       if(A[i]==0)
        sum++;
    }
    //Make those elements 0 and the rest 1. 
    for(int i=0;i<sum;i++){
       A[i]=0;
    }
    for(int i=sum;i<N;i++){
       A[i]=1;
    }
}

int main(){
    int N;
    cin>>N;
    int A[N];
    for(int i=0;i<N;i++){
        cin>>A[i];
    }
    sort(A , N);
    for(int i=0;i<N;i++){
        cout<<A[i]<<" ";
    }
}