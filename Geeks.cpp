#include<iostream>
using namespace std;


void solve(int (&arr)[101], int index, int n)
{
    if(index== n)
    {
        arr[n]=arr[n-3]+ arr[n-2] + arr[n-1];
        return ;
    }
    
    arr[index] =  arr[index-3]+ arr[index-2] + arr[index-1];
    solve(arr , ++index, n);
}

int main()
 {
	//code
	int a[101]={0}, n=0, t=0;
    // cout<<"\nenter";
	cin>>t;
	while(t--)
	{
	    cin>>a[0]>>a[1]>>a[2]>>n;
	    solve ( a,3,n-1);
	    
	    cout<<a[n-1]<<"\n";
	}
	return 0;
}