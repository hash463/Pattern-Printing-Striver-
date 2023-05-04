/*
Given pattern is:

*********
 *******
  *****
   ***
    *

*/


class Solution{
public:
	
	void printTriangle(int n) {
	    for(int i=0; i<n; i++){
	        for(int j=0; j<i; j++){
	            cout<<" ";
	        }
	        for(int j=0; j<(n*2)-(i*2+1); j++){
	            cout<<"*";
	        }
	        cout<<endl;
	    }
	}
};
