//You have been given two integer arrays/list(ARR1 and ARR2) of size M and N, respectively. 
//You need to print their intersection; An intersection for this problem can be defined when both the arrays/lists contain a particular value
//or to put it in other words, when there is a common value that exists in both the arrays/lists.

#include<iostream>
#include<climits>
using namespace std;

void array_intersection(int input1[] , int input2[] , int size1 , int size2){
    for(int i=0;i<size1;i++){
        for(int j=0;j<size2;j++){
            if(input1[i]==input2[j]){
                cout<<input1[i]<<" ";
                input2[j]=INT_MIN; // We are marking input2[j] to INT_MIN so that it can't be searched again. See below for explanation
                break;
            }
        }
    }
}

int main(){
    int size1,size2;
    cin>>size1>>size2;
    int input1[size1],input2[size2];
    for(int i=0;i<size1;i++){
        cin>>input1[i];
    }
    for(int i=0;i<size2;i++){
        cin>>input2[i];
    }
    array_intersection(input1 , input2 , size1 , size2);
}

// Let's consider the test cases of 
// input1 = 2 6 2 3 2
// input2 = 2 6

// Now if we run the code we'll get 2 6 2 2 as our result which is false as there are only one 2 and 6 available
// in the second array. What should we do then. Assign each value that matches with a very negative or large value
// such that it can't be matched again.

// That's why after 1st comparison of 2 from input1 and 2 from input2 , 2 of input 2 is marked to INT_MIN
