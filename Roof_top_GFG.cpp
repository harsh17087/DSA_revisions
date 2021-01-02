//You are given heights of consecutive buildings. You can move from the roof of a building to the roof of next adjacent building. 
//You need to find the maximum number of consecutive steps you can put forward 
//such that you gain an increase in altitude with each step.

int maxStep(int A[], int N){
   int sum=0,count=0;
   if(N==1){
       return 0;
   }
   for(int i=0;i<N-1;i++){
       if(A[i]<A[i+1]){
           //int count;
           count++;
           if(count>sum){
               sum=count;
           }
       }
       else{
           count=0;
          // continue;
       }
   }
   return sum;
}
