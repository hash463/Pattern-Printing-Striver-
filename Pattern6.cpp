/*
Given pattern is:

1 2 3 4 5
1 2 3 4
1 2 3
1 2
1

*/


class Solution{
public:
	
	void printTriangle(int n) {
	    int num;
	    for(int i=0; i<n; i++){
	        num=1;
	        for(int j=n-1;j>=i;j--){
	            cout<<num<<" ";
	            num++;
	        }
	        cout<<endl;
	    }
	}
};
