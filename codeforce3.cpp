#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
#include<string>
#include<climits>

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int n;
    std::cin >> n;

    int c7 = 0;
    int c4 = 0;
    int minDigits = INT_MAX; // Include <climits> for INT_MAX

    for(int i = n/7; i >= 0; i--) {
        if((n-7*i) % 4 == 0) {
            int currentDigits = i + (n-7*i)/4;
            if(currentDigits < minDigits) {
                minDigits = currentDigits;
                c7 = i;
                c4 = (n-7*i)/4;
            }
        }
    }

    if(c4 == 0 && c7 == 0) {
        std::cout << -1;
    } else {
        for(int i = 0; i < c4; i++) {
            std::cout << 4;
        }
        for(int i = 0; i < c7; i++) {
            std::cout << 7;
        }
    }

    return 0;
}
