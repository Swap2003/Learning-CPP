#include <iostream>
using namespace std;

bool RatInMaze(char maze[][100], int sol[][10], int i, int j, int n, int m)
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
        /*cout<<endl;      //isse saare paths output m milenge
        return false;*/

        return true; // isse srf 1st right path output m milega
    }

    // recursive case
    sol[i][j] = 1; // ho sakta hai i, j solution ka part ho

    // 1. check right se raasta mila?
    if (j + 1 < m and maze[i][j + 1] != 'X' and sol[i][j + 1] != 1)
    {
        bool kyarightSeRaastaMila = RatInMaze(maze, sol, i, j + 1, n, m);
        if (kyarightSeRaastaMila == true)
        {
            return true;
        }
    }

    // 2. check neeche se raasta mila?
    if (i + 1 < n and maze[i + 1][j] != 'X' and sol[i + 1][j] != 1)
    {
        bool kyaNeecheSeRaastaMila = RatInMaze(maze, sol, i + 1, j, n, m);
        if (kyaNeecheSeRaastaMila == true)
        {
            return true;
        }
    }

    // 3. check backward se raasta mila?
    if (j - 1 >= 0 and maze[i][j - 1] != 'X' and sol[i][j - 1] != 1)
    {
        bool kyaBackwardseRaastaMila = RatInMaze(maze, sol, i, j - 1, n, m);
        if (kyaBackwardseRaastaMila == true)
        {
            return true;
        }
    }

    // 4. check upward se raasta mila?
    if (i - 1 >= 0 and maze[i - 1][j] != 'X' and sol[i - 1][j] != 1)
    {
        bool kyaUpwardSeRaastaMila = RatInMaze(maze, sol, i - 1, j, n, m);
        if (kyaUpwardSeRaastaMila == true)
        {
            return true;
        }
    }

    sol[i][j] = 0;
    return false;
}

int main()
{
    char maze[][100] = {
        "0X000",
        "0X0X0",
        "000X0",
        "XXXX0"
    };

    int sol[10][10] = {0};

    RatInMaze(maze, sol, 0, 0, 4, 5);
    return 0;
}