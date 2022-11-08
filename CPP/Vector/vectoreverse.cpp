#include<iostream>
#include<vector>
using namespace std;

int main(){
    //vector<int>v(number_of_buckets.Initial_value); //Capacity:10000
    //vector<int>v(10000); capacity =1000
    int n=10;
    
    vector<int>v(n,10);
    cout<<v.capacity()<<endl;

    for (int i = 0; i < n; ++i)
    {
        /* code */
        v[i]= i+1;
    }
    for (int i = 0; i < n; ++i)
    {
        /* code */
        cout<<v[i]<<" ";


    }
    cout<<endl;
    return 0;
    
}