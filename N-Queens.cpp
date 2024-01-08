

#include<iostream>

#include<algorithm>


#include<vector>
#include<map>
#include<string>


bool isSafe(int row,int col,std::vector<std::string>& board,int n){


    int duprow=row;

    int dupcol=col;

    while(row>=0 && col>=0){


        if(board[row][col]=='Q') return false;

        row--;
        col--;
    }

    col=dupcol;
    row=duprow;

    while(col>=0){

        if(board[row][col]=='Q')return false;
        col--;


    }
    col=dupcol;
    row=duprow;


    while(row<n && col>=0){
        if(board[row][col]=='Q') return false;

        row++;
        col--;
    }


    return true;








}


void solve(int col,std::vector<std::string>& board,std::vector<std::vector<std::string>>& ans,int n){

    if(col==n){
        ans.push_back(board);
        return;
    }

    for(int row=0;row<n;row++){

        if(isSafe(row,col,board,n)){
            board[row][col]='Q';

            solve(col+1,board,ans,n);

            board[row][col]='.';

        }



    }





}




int main(){


    #ifndef ONLINE_JUDGE

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);


    #endif

    int n;

    std::cin>>n;


    std::vector<std::string> board(n);

    std::vector<std::vector<std::string>> ans;


    std::string s(n,'.');

    for(int i=0;i<n;i++){

        board[i]=s;
    }
     

    solve(0,board,ans,n);

   


    for(auto b:ans){
        std::cout<<" Board"<<std::endl;

       for(auto e:b){
        
       std::cout<<e<<std::endl;
    }

}
 

  






   










  















    return 0;
}

 
