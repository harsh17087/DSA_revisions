//Given an array of size N consisting of only 0's and 1's. 
//The array is sorted in such a manner that all the 1's are placed first and then they are followed by all the 0's. Find the count of all the 0's.

int countZeroes(int arr[], int n) {
        
        if(arr[0]==0){
            return n;
        }
        if(arr[n-1]==1){
            return 0;
        }
        int start=n-1,end=0;
        while(start>=end){
            int mid=(start+end)/2;
            if(arr[mid]==1 && arr[mid+1]==0){
                return n-mid-1;
            }
            else if(arr[mid]==0 && arr[mid+1]==0){
                start=mid-1;
            }
            else{
                end=mid+1;
            }
        }
    }
