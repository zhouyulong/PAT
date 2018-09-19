#include <iostream>
#include <queue>
using namespace std;


int main() {

    queue<int> num;
    int tmp;
    while(1){
        cin>>tmp;
        num.push(tmp);
        if (char ch=getchar()=='\n')
            break;

    }

    if(!num.empty()){
        int tmp=num.front();
        num.pop();
        if(num.front()!=0){
        cout<<num.front()*tmp<<" "<<num.front()-1;}
        if(num.front()==0)
            cout<<0<<" "<<0;
        num.pop();
    }
    while(!num.empty()){
        int num1,num2;
        num1=num.front();
        num.pop();
        num2=num.front();
        num.pop();
        if(num2!=0)
            cout<<" "<<num1*num2<<" "<<num2-1;
    }
    //cout << "Hello, World!" << std::endl;
    return 0;
}