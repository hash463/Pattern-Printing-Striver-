/*
Given pattern is:

**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********

*/


class Solution {
  public:
    void printTriangle(int n) {
        for(int i=0; i<n; i++){
            for(int j=n-i; j>0; j--){
                cout<<"*";
            }
            for(int j=i*2; j>0; j--){
                cout<<" ";
            }
            for(int j=n-i; j>0; j--){
                cout<<"*";
            }
            cout<<endl;
        }
        for(int i=0; i<n; i++){
            for(int j=i+1; j>0; j--){
                cout<<"*";
            }
            for(int j=((n*2)-(i+1)*2); j>0; j--){
                cout<<" ";
            }
            for(int j=i+1; j>0; j--){
                cout<<"*";
            }
            cout<<endl;
        }
    }
};
