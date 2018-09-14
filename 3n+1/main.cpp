
//枚举100以内(3n+1)猜想的所有情况中的最长步数

#include <iostream>
#include <array>
using namespace std;


int Guess(int n){
    int step=0;
    while (n!=1){
        if (n%2==0)
        { n/=2; step++;}
        else
        { n=(3*n+1); step++;}
    }
    return step;
}

int main() {
    int  step=0;
    array<int,100> st;
    for (int i = 1; i <101 ; ++i) {
        st[i-1]=Guess(i);
        if (step<st[i-1])
        step=st[i-1];
    }
    for (int j = 0; j < 100; ++j) {
        if (step==st[j])
            cout<<j<<"  ";
    }

    cout<<endl<<step;
    //std::cout << "Hello, World!" << std::endl;
    return 0;
}
// 最长步数的数字是96，其最长的步数为118