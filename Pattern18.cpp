/*
Given pattern is:

E
E D
E D C
E D C B
E D C B A

*/


class Solution {
  public:
    void printTriangle(int n) {
        char ch;
        for(int i=0; i<n; i++){
            ch=n+64;
            for(int j=0; j<=i; j++){
                
                cout<<ch<<" ";
                ch--;
            }
            cout<<endl;
        }
    }
};
