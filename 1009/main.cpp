#include <iostream>
#include <string>
#include <stack>
using namespace std;


int main() {
    stack<string> In_S;
    string In,In1;
     while (1){
        cin>>In;

      //  cout<<In<<" "<<endl;
        In_S.push(In);
       // cout<<In<<" "<<endl;
        if(char ch=getchar()=='\n')
            break;
    }
    cout<<In_S.top();In_S.pop();
    while (!In_S.empty()){
        cout<<" "<<In_S.top();
        In_S.pop();
    }
    //std::cout << "Hello, World!" << std::endl;
    return 0;
}