#include<iostream>
using namespace std;

bool isSafe(int board[][100],int i,int j, int n){
int l=i,m=j;
for (int k = 0; k<n; k++)
{
    if (board[i][j]==1 || board[i][k]==1)
    {
        return false;
    }
    
}
// check upper right diagnoal
while(i>=0 and j<n){
    if(board[i][j]==1){
        i--, j++;
    }
}
//check upper left diagnoal
while (l>=0 and m>=0)
{
    if(board[l--][m--]){
        return false;
        
    }
    return true;
}


}
bool NQueen(int board[][100], int i, int n){
    //base case
    if(i==n){
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                // cout<<board[i][j]<<" ";
                board[i][j]==1? cout<<"Q": cout<<"_";
            }
            cout<<endl;
        }
        return true;
        cout<<endl;
        
    }
    //recursive case
    //har column par jaoo ith row ke
    for (int j = 0; j < n; j++)
    {
        //check kro jise column pr ho waha queen rakhna safe h ya nahi
        if(isSafe(board,i,j,n)== true){
            board[i][j]=1;// agar safe h toh rakhdo
        }

        //ab baki n-1 queens recursion ko pucho usne rakhi h ya nahi?
        bool kyabakiPlacehui = NQueen(board, i+1, n);
        //Agar place nahi h to bS BAN GYI baat
        if (kyabakiPlacehui == true)
        {
            return true;
        }
        //agar place nahi hui queens toh jo rakhi thi uski pos galat h
        board[i][j]= 0;
        
    }
    return false; // har column pr check kar lia nahi hui, ab return false
    
}

int main(){
    int board[100][100];
    NQueen(board, 0, 4);

    return 0;
}
