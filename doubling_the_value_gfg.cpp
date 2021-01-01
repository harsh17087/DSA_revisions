//Given an array and an integer B, traverse the array (from the beginning) and if the element in array is B, double B and continue traversal.
// Find the value of B after the complete traversal

#include<iostream>
using namespace std;

bool search(int n, int a[], int b)
{
    for(int i=0;i<n;i++){
        if(a[i]==b){
            return true;
        }
    }
    return false;
}  
    
int solve(int n, int a[], int b)
{
    bool ans=search(n,a,b);
    while(ans==true){
        b=2*b;
        ans=search(n,a,b);
    }
    return b;
}  

int main(){
    int n,b;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>b;
    cout<<solve(n,arr,b)<<endl;

}