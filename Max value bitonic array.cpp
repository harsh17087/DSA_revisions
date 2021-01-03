//Given an array Arr of N elements which is first increasing and then may be decreasing, find the maximum element in the array.
//Note: If the array is increasing then just print then last element will be the maximum value.

int findMaximum(int arr[], int n) {
	    // code here
	    if(arr[n-1]>arr[n-2]){
	        return arr[n-1];
	    }
	    else{
	        int start=0,end=n-1;
	        for(int i=0;i<n;i++){
	            int mid=(start+end)/2;
	            if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
	                return arr[mid];
	            }
	            else if(arr[mid]>arr[mid+1] && arr[mid]<arr[mid-1]){
	                end=mid-1;
	            }
	            else{
	                start=mid+1;
	            }
	        }
	    }
	}
