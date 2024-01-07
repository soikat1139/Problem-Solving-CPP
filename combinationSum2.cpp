

#include<iostream>

#include<algorithm>


#include<vector>
#include<map>

void combination(int indx ,int n, int target,int arr[],std::vector<std::vector<int>> & ans,std::vector<int> &ds ){

    if(indx==n){
        if(target==0){
            ans.push_back(ds);
            for(auto e:ans){
                for(auto b:e){
                    std::cout<<b<<" ";
                }
                std::cout<<std::endl;
            }
            return;
        }

        return;
    }


    if(arr[indx]<=target){

        ds.push_back(arr[indx]);

        combination(indx,n,target-arr[indx],arr,ans,ds);

        ds.pop_back();
    }




     combination(indx+1,n,target,arr,ans,ds);








}



int main(){


    #ifndef ONLINE_JUDGE

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);


    #endif

    int n;

    std::cin>>n;

    int arr[n];

   

    for(int i=0;i<n;++i){

        std::cin>>arr[i];
    }

    std::vector<std::vector<int>> ans;

    std::vector<int> ds;

    combination(0,n,13,arr,ans,ds);









  















    return 0;
}

 
