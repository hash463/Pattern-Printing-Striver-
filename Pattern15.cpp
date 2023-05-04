/*
Given pattern is:

ABCDE
ABCD
ABC
AB
A

*/


class Solution {
  public:
    void printTriangle(int n) {
        for(int i=0;i<n;i++){
            char ch='A';
            for(int j=n-i; j>0; j--){
                cout<<ch++;
            }
            cout<<endl;
        }
    }
};
