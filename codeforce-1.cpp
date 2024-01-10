

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

    int T;

    std::cin>>T;

     int n;

    for(int i=0;i<T;i++){

        std::cin>>n;

       std::string strNum= std::to_string(n);

       int firstNumber=strNum[0]-'0';
       int count=(firstNumber-1)*10;

       for(int i=1;i<strNum.size()+1;i++){

        count+=i;
       }



       std::cout<<count<<std::endl;







    }

 





    return 0;
}

 
