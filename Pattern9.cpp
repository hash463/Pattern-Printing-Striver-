/*
Given pattern is:

    *
   * *
  * * *
 * * * * 
* * * * *
* * * * *
 * * * *
  * * *
   * *
    *

*/


class Solution {
  public:
    void printDiamond(int n) {
        for(int i=0;i<n;i++){
            for(int j=n-i-1;j>0;j--){
                cout<<" ";
            }
            for(int k=0;k<i+1;k++){
                cout<<"*"<<" ";
            }
            cout<<endl;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                cout<<" ";
            }
            for(int k=0;k<n-i;k++){
                cout<<"*"<<" ";
            }
            cout<<endl;
        }
    }
};
