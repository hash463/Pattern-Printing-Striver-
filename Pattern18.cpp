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
            if(n==1) ch='A';
            else if(n==2) ch='B';
            else if(n==3) ch='C';
            else if(n==4) ch='D';
            else if(n==5) ch='E';
            else if(n==6) ch='F';
            else if(n==7) ch='G';
            else if(n==8) ch='H';
            else if(n==9) ch='I';
            else if(n==10) ch='J';
            else if(n==11) ch='K';
            else if(n==12) ch='L';
            else if(n==13) ch='M';
            else if(n==14) ch='N';
            else if(n==15) ch='O';
            else if(n==16) ch='P';
            else if(n==17) ch='Q';
            else if(n==18) ch='R';
            else if(n==19) ch='S';
            else if(n==20) ch='T';
            else if(n==21) ch='U';
            else if(n==22) ch='V';
            else if(n==23) ch='W';
            else if(n==24) ch='X';
            else if(n==25) ch='Y';
            else if(n==26) ch='Z';
            for(int j=0; j<=i; j++){
                
                cout<<ch<<" ";
                ch--;
            }
            cout<<endl;
        }
    }
};
