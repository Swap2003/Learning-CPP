#include <iostream>
#include<queue>
#include<functional>
using namespace std;

class meriClass{
public:
// Functor
    bool operator()(int a, int b){
        return a<b;
    }
};    
int main()
{
    // priority_queue<int>q;  
    // priority_queue<int,vector<int>,greater<int>>q;
    priority_queue<int,vector<int>,meriClass>q;

    q.push(1);
    q.push(3);
    q.push(4);
    q.push(6);
    q.push(5);
    q.push(2);

    while(!q.empty()){
        cout<<q.top()<<" ";
        q.pop();
    }
    cout<<endl;

    return 0;
}