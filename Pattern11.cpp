/*
Given pattern is:

1 
0 1 
1 0 1
0 1 0 1 
1 0 1 0 1

*/


class Solution {
  public:
    void printTriangle(int n) {
        for(int i=0; i<n; i++){
            for(int j=0; j<=i; j++){
                if(i%2==j%2) cout<<"1 ";
                else cout<<"0 ";
            }
            cout<<endl;
        }
    }
};
