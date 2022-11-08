#include<iostream>
using namespace std;
char keys[][10] = {
    "","", "ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"
};

void Phonekeypad(char*in,int i,char*out,int j ){
    //base case
    if(in[i] == '\0')
    {
        out[j] = '\0';
        cout<<out<<endl;
        return;
    }
    //recursive case
    int d = in[i] - '0';
    for (int k = 0; keys[d][k] != '\0'; ++k)
    {
        out[j] = keys[d][k];
        Phonekeypad(in, i+1,out,j+1);
    }
    

    
}
int main(){
    char in[100], out[100];
    cin>>in;
    Phonekeypad(in,0,out,0);

    return 0;
}