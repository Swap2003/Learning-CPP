#include<iostream>
#include<vector>
using namespace std;

int main(){
    //vector<int> v(10000); //Capacity : 10000
    int n;
    cin>>n;
    vector<int>v(n);
    cout<<v.capacity()<<endl;

    for (int i = 0; i < n; ++i)
    {
        /* code */
        cin>>v[i];
    }
    for (int i = 0; i < n; ++i)
    {
        /* code */
        cout<<v[i]<<" ";


    }
    cout<<endl;
    return 0;
    
}