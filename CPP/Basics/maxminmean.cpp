#include<iostream>
#include<climits> // INT_MAX: 2^31-1 AND INT_MIN: -2^31 
using namespace std;

int main(){

    int n, sum = 0, no, largest = INT_MIN, smallest = INT_MAX;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cin>>no;
        sum = sum+no;

        if (no > largest)
        {
            largest = no;
        }

        if (no< smallest)
        {
            smallest = no;
        }
        
        
    }
    
    float mean;
    mean = sum/n;
    cout<<"Mean is"<<mean<<endl;
    cout<<"Largest is"<<largest<<endl;
    cout<<"Smallest is"<<smallest<<endl;

return 0;
}