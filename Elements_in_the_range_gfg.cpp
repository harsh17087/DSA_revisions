//Given an array arr[] containing positive elements. ‘A’ and ‘B’ are two numbers defining a range. The task is to check if the array contains all elements in the given range.

bool check_elements(int arr[], int n, int A, int B)
	{
		
		int flag;
		for(int i=A;i<=B;i++){
		    for(int j=0;j<n;j++){
		        if(i==arr[j]){
		            flag=1;
		            break;
		        }
		        else{
		            flag=0;
		        }
		    }
		    if(flag==0){
		        return false;
		    }
		}
		return true;
	}
