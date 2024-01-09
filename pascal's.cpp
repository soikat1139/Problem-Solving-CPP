

#include<iostream>

#include<algorithm>


#include<vector>
#include<map>
#include<string>





int main(){


    #ifndef ONLINE_JUDGE

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);


    #endif

    int n;

    std::cin>>n;

    std::vector<std::vector<int>> pascal;

    pascal.push_back({1});
    pascal.push_back({1,1});

    

    for(int j=2;j<n;j++){

        std::vector<int> tempVec;

        tempVec.push_back(1);

        for(int i=0;i<pascal[j-1].size()-1;i++){
            tempVec.push_back(pascal[j-1][i]+pascal[j-1][i+1]);
        }

         tempVec.push_back(1);

         pascal.push_back(tempVec);

    }

    for(int i=0;i<n;i++){

        std::cout<<"[";

        for (size_t j = 0; j<pascal[i].size(); j++)
        {

            std::cout<<pascal[i][j]<<" ";
    

        }

        std::cout<<"]"<<std::endl;
        



    }







    return 0;
}

 
