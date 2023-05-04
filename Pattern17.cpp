/*
Given pattern is:

   A
  ABA
 ABCBA
ABCDCBA

*/


class Solution {
  public:
    void printTriangle(int n) {
        for(int i=0; i<n; i++){
            for(int j=n-i-1; j>0; j--){
                cout<<" ";
            }
            char ch='A';
            for(int j=0; j<=i; j++){
                cout<<ch++;
            }
            --ch;
            for(int k=i;k>0;k--){
                cout<<--ch;
            }
            cout<<endl;
        }
    }
};
