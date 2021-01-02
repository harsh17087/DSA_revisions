//Given a sorted array arr[] of size N without duplicates, and given a value x. 
//Floor of x is defined as the largest element K in arr[] such that K is smaller than or equal to x. Find the index of K(0-based indexing).


int binary(vector<long long> v, long long n, long long x){
    int start=0,end=n-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(start==end){
            return mid;
        }
        if(v[mid]==x){
            return mid;
        }
        else if(v[mid]>x){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
}
int findFloor(vector<long long> v, long long n, long long x){
    
    // Your code here
    if(x<v[0]){
        return -1;
    }
    if(x>v[n-1]){
        return n-1;
    }
    else{
        return binary(v,n,x);
    }
}
