#include <iostream>
#include <string>
#include <queue>
using namespace std;
int main() {
    string A;
    char temp,temp_c;
    queue<char> result;
    int B=0,R=0,temp_int,result_int;
    cin>>A>>B;
    while (!A.empty()){
        temp=A.front();
        temp_int=temp - '0';
        result_int=(temp_int+R*10)/B;
        R=(temp_int+R*10)%B;
        temp_c=result_int+'0';
        result.push(temp_c);
        A.erase(A.begin());
    }
    if(result.size()==1&&result.front()=='0')
        cout<<result.front();
    while (result.front()=='0')
        result.pop();
    while (!result.empty()){
        cout<<result.front();
        result.pop();
    }
    cout<<' '<<R;
    //std::cout << "Hello, World!" << std::endl;
    return 0;
}