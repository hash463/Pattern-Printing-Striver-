/*
Given pattern is:

* * * * *
* * * *
* * *
* *
*

*/


class Solution{
public:
	
	void printTriangle(int n) {
	    for(int i=0; i<n; i++){
	        for(int j=n-1;j>=i;j--){
	            cout<<"* ";
	        }
	        cout<<endl;
	    }
	}
};
