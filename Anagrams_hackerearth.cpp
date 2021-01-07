//Given two strings, a and b , that may or may not be of the same length, determine the minimum number of character deletions required to make a and b anagrams.
//Any characters can be deleted from either of the strings.

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
    cin>>T;
    for(int i=0;i<T;i++){
        char a[10001],b[10001];
        int sum,flag=0;
        cin>>a>>b;
        sum=strlen(a)+strlen(b);
        for(int i=0;i<strlen(a);i++){
            for(int j=0;j<strlen(b);j++){
                if(a[i]==b[j]){
                    flag=1;
                    b[j]=b[j]-32;
                    break;
                }
                else{
                    flag=0;
                }
            } 
            if(flag==1){
                sum=sum-2;
            }   
        }
        cout<<sum<<endl;
    }
}
