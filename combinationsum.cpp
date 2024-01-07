

#include<iostream>

#include<algorithm>


#include<vector>
#include<map>



void set(int indx,int arr[],std::vector<int> & tempArr,int n){

    if(indx==n){
        std::cout<<"{";
        for(auto e :tempArr){
            std::cout<<e;
            std::cout<<" ";

        }
        std::cout<<"}"<<std::endl;
        return;

    }

    tempArr.push_back(arr[indx]);

    set(indx+1,arr,tempArr,n);

    tempArr.pop_back();

    set(indx+1,arr,tempArr,n);


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

    std::vector<int> tempArrs;
 std::cout<<"{"<<std::endl;
    set(0,arr,tempArrs,n);
 std::cout<<"}"<<std::endl;






  















    return 0;
}

 
