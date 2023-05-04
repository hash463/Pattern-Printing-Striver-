/*
Given pattern is:

A
AB
ABC
ABCD
ABCDE

*/


class Solution {
  public:
    void printTriangle(int n) {
        for(int i=0; i<n; i++){
            char ch='A';
            for(int j=0; j<=i; j++){
                cout<<ch++;
            }
            cout<<endl;
        }
    }
};
