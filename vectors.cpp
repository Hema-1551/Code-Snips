#include <iostream>
#include <vector>
using namespace std;
void display(vector<char> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<endl;
    }
    
}
int main()
{
    vector<char> vect1;
   char element='a';
    for (int i = 0; i < 4; i++)
    {
         cout<<"Enter the element to push to vector :  ";
         cin>>element;
         vect1.push_back(element);

    }
    display(vect1);
    // cout<<typeid(vect1);
    
    return 0;
}