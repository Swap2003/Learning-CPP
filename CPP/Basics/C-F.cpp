#include<iostream>
using namespace std;

int main(){


    int ini = 0, fval = 300, step = 20;
    
    int f,c;
    f = ini;

    while (f<=fval)
    {
        c = (5/9.0)*(f-32);

        cout<<f<<'\t'<<c<<endl;
        f = f+step;
    }
    
    
    
    return 0;
}