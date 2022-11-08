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
    if (j + 1 < m and maze[i][j + 1] != 'X')
    {
        bool kyaRightSeRastaMilla = ratinmaze(maze, sol, i, j + 1, n, m);
        if (kyaRightSeRastaMilla == true)
        {
            return true;
        }
    }
    if (i + 1 < n and maze[i + 1][j] != 'X')
    {
        bool kyaNeecheSeRastaMila = ratinmaze(maze, sol, i + 1, j, n, m);
        if (kyaNeecheSeRastaMila == true)
        {
            return true;
        }
    }
    sol[i][j] = 0;
    return false;
}

int main()
{
    char maze[][5] = {
        "0000",
        "00XX",
        "0000",
        "XX00"

    };
    int sol[10][10] = {0};
    ratinmaze(maze, sol, 0, 0, 4, 4);
    return 0;
}