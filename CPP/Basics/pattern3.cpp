#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int row = 1, no, spaces, i;
    while (row <= n)
    {
        spaces = 1;
        while (spaces <= n-row)
        {
            cout<<' ';
            spaces = spaces+1;
        }

        no = row;
        i = 1;
        while (i<=row)
        {
             cout<<no;
             no = no+1;

             i = i+1;
        }

        no = no-2;
        i =1;
        while (i <= row-1)
        {
            cout<<no;
            no = no-1;

            i = i+1;
        }
    
        cout<<endl;
        row = row +1;
    }
    
    return 0;
}