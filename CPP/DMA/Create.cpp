#include<iostream>
using namespace std;

int *createArray(int n){
    int *a = new int[n];
    for (int i = 0; i < n; ++i)
    {
        a[i] = i*i;
    }
    return a;
    
}

int main(){
    int *a = new int;
    *a = 10;
    cout<<*a<<endl;

    float *f = new float;
    *f = 11.11;
    cout<<*f<<endl;

    //////////////////////////Create Array//////////////////////////

   int *arr = createArray(10);
   for (int i = 0; i < 10; ++i)
   {
     cout<<arr[i]<<" ";
   }
   cout<<endl;
   
    
    
    

    return 0;

}