//Equilibrium index of an array is an index such that the sum of elements at lower indexes is equal to the sum of elements at higher indexes.
//Given an array, your task is to find the index of first Equilibrium point in the array.


int findEquilibrium(int A[], int n)
{
  
  
  int sum_total=0;
  for(int i=0;i<n;i++){
      sum_total+=A[i];
  }
  int sum=0;
  for(int i=1;i<n;i++){
      sum+=A[i-1];
      if(sum_total-sum-A[i]==sum){
          return i;
      }
  }
  return -1;
}
