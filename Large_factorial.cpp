class Solution{
    
public:
// int fact( vector <long long > &res, long long  a) {
//     if(a==0)
//      return 1;
//      res[a-1] = ((a% 1000000007)*fact(res , (a% 1000000007)-1))% 1000000007;//<<"\n";
    
// }
    
    long long fact(vector <long long > &res , int n)
    {
        if(n==0)
        {res.push_back(1);
        return 1;
        }
        long long r = ((n%1000000007) * (fact(res,(n%1000000007)-1)% 1000000007))%1000000007;
        res.push_back(r);
        return r;
    }
    vector<long long> factorial(vector<long long> a, int n) {
       
       vector <long long > res;
        vector <long long > final_res;
       
           int num = *max_element(a.begin(), a.end() ) ;
           //cout<<num<<endl;
            num = fact(res,num);//<<endl;
           
           for(int i=0; i<n; i++)
           {
               final_res.push_back(res[a[i]]);
           }
           //cout<<"\n\n";
             //res.push_back(1);
       return final_res;
    }
};