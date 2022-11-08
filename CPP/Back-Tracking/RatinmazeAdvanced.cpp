#include <iostream>
using namespace std;
bool ratinmaze(char maze[][5], int sol[][10], int i, int j, int n, int m)
{
    // base case
    if (i == n - 1 and j == m - 1)
    {
        sol[i][j] = 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << sol[i][j] << " ";
            }
            cout << endl;
         }
         cout<<endl;
          return false;
    }
    // recursive case
    sol[i][j] = 1; // ho skta i and j sol ka part ho
    // 1. check right se rasta mila?--> (i,j+1)
    if (j + 1 < m and maze[i][j + 1] != 'X' and sol[i][j+1] != 1)
    {
        bool kyaRightSeRastaMilla = ratinmaze(maze, sol, i, j + 1, n, m);
        if (kyaRightSeRastaMilla == true)
        {
            return true;
        }
    }
    //2. neche se rasta mila?(j,i+1)
    if (i + 1 < n and maze[i + 1][j] != 'X' and sol[i][j+1] != 1)
    {
        bool kyaNeecheSeRastaMila = ratinmaze(maze, sol, i + 1, j, n, m);
        if (kyaNeecheSeRastaMila == true)
        {
            return true;
        }
    } 

    //3. check backward se rasta mila?(i,j-1)
    if (j -1 >= 0 and maze[i][j-1] != 'X' and sol[i][j-1] != 1)
    {
        bool kyaBackwardserastamila = ratinmaze(maze,sol,i,j-1,n,m);
        if (kyaBackwardserastamila == true)
        {
            return true;
        }
        
    }

    //4. check upward se rasta mila?(i-1,j)
    if (i -1 >= 0 and maze[i-1][j] != 'X' and sol[i-1][j] != 1)
    {
        bool kyaupwardserastamila = ratinmaze(maze,sol,i-1,j,n,m );
        if (kyaupwardserastamila == true)
        {
            return 0;
        }
        
    }
    
    
    sol[i][j] = 0;
    return false;
}

int main()
{
    char maze[][100] = {
        "0X000",
        "0XXX0",
        "000X0",
        "000XX"

    };
    int sol[10][10] = {0};
    ratinmaze(maze, sol, 0, 0, 4, 4);
    return 0;
}