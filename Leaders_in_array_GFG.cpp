//Given an array A of positive integers. Your task is to find the leaders in the array. An element of array is leader if it is greater than or equal to all the elements to its right side.
//The rightmost element is always a leader. 

vector<int> leaders(int arr[], int n){
   
    vector<int> arr2;
    arr2.reserve(n);
    arr2.push_back(arr[n-1]);

    for(int i=n-2;i>=0;i--){
        int max;
        if(arr[i]>=max){
            max=arr[i];
            arr2.push_back(max);
        }
    }
    reverse(arr2.begin(),arr2.end());
    return arr2;    
}

//The above is in O(n) complexity. Here we have searched from right side.
//If we'll do the searching from left side, then it will be in O(n^2) complexity.
