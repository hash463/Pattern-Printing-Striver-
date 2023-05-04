/*
Given pattern is:

1                 1
1 2             2 1
1 2 3         3 2 1
1 2 3 4     4 3 2 1
1 2 3 4 5 5 4 3 2 1

*/


class Solution {
  public:
    void printTriangle(int n) {
        for(int i=0;i<n;i++){
            for(int j=0;j<i+1;j++){
                cout<<j+1<<" ";
            }
            for(int k=0;k<((n*2)-(i*2+2));k++){
                cout<<"  ";
            }
            for(int p=i+1;p>0;p--){
                cout<<p<<" ";
            }
            cout<<endl;
            
        }
    }
};
