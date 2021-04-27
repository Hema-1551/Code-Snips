#include <iostream>
using namespace std;

    int kthGrammar(int n, int k) {
       // int val;
        if(n==1 && k<=1)
        {
           
            return 0;
        }
        int prev=k;
        if(k%2==0)
            k=k/2;
        else
            k=k/2+1;
        int val = kthGrammar(--n, k);
        if(val ==0 && prev%2==0 && prev!=1 )
        {
            
            val= 1;
        }
        else if(val ==0 && prev%2!=0 && prev!=1 )
        {
            val= 0;
        }
        else if(val ==1 && prev%2==0 && prev!=1 )
            val= 0;
        else if(val ==1 && prev%2!=0 && prev!=1 )
            val= 1;
        else{}
         return val;
    }

int main()
{
    cout<<"\nhello world\n";
    // Solution s = new Solution();
    cout<<kthGrammar(6,6); 
    return 1;
    // em probleem??
    //kindha select chesina part rakadadhu
    // osthe emiathundhi radhu kadha endhuku osthndhi
    // adhi nee cpp file run cheyadaniki config chesindhiwiat
    
}