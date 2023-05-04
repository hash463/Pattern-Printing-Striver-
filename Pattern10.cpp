/*
Given pattern is:

* 
* * 
* * * 
* * * * 
* * * * *
* * * *
* * *
* *
*

*/


class Solution{
public:
    void printTriangle(int n) {
        for(int i=0;i<n-1;i++){
            for(int j=0; j<=i; j++){
                cout<<"* ";
            }
            cout<<endl;
        }
        for(int i=0;i<n;i++){
            for(int j=n-i-1;j>=0;j--){
                cout<<"*"<<" ";
            }
            cout<<endl;
        }
    }
};
