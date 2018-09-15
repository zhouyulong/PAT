//素数，此题借鉴网上他人思路
//出现过问题，素数从2开始1h


#include <iostream>
#include <cmath>
//#include <array>
//#include <queue>
using namespace std;

int main() {
    int  n,flag=0;
    cin>>n;
    bool num[n+1];
   // queue<int> re;

    for (int i = 2; i <=n ; ++i) {
        num[i]=true;
    }
    for (int j = 2; j < sqrt(n)+1 ; ++j) {
        if(num[j])
            for (int i = j; i*j < n ; ++i) {
                num[j*i]= false;
            }
    }
    for (int k = 2; k < n-1 ; ++k) {
        if (num[k]==true&&num[k+2]==true ){
            flag++;
        }
    }
    cout<<flag;
   // std::cout << "Hello, World!" << std::endl;
    return 0;
}