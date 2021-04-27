#include <iostream>
using namespace std;
void solve(int n, string op, int oc , int cc)
    {
    //	cout<<n<<" " << op<<"  "<<oc<< " "<<cc<<endl;
        if(op.length()/2 == n && (oc==cc))
        {
            cout<<op<<endl;
            return ;
        }
        if(op.length()/2>=n)
    		return;
    		
    	string op1 = op;
    	int op1oc =oc , op1cc = cc ,op2oc = oc , op2cc = cc;
    	if(oc >cc)
    	{
    		op1+=')';
    		op1cc++;
    	}
    	else
    	{
    		op1  = string(n*2+1,'@');
    		op1oc=0;
    	}
    	string op2 = op + '(';
    	op2oc++;
    	solve( n, op1, op1oc , op1cc);
    	solve(n, op2, op2oc , op2cc);
    }

int main() {
	// your code goes here
	solve(4, "(", 1 , 0);
	return 0;
}