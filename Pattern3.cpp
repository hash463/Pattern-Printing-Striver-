/*
Given Pattern:

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

*/


class Solution {
  public:
    void printTriangle(int n) {
        int num=0;
        for(int i=0; i<n; i++){
            num=1;
            for(int j=0; j<=i; j++){
                cout<<num<<" ";
                num++;
            }
            cout<<endl;
        }
    }
};
