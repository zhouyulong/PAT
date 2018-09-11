#include <iostream>
#include <string>
#include <cstring>
#include <stack>
using namespace std;
int to_int(char& c){
    return c-48;
}
int to_sum(string& num);
void out_put(int& sum);



int main() {
    string num;
    int sum=0;
    cin>>num;
    sum=to_sum(num);
    out_put(sum);
    return 0;
}


int to_sum(string& num){
    int sum=0;
    char* num1=new char[num.length()+1];
    strcpy(num1,num.c_str());
    int i=0;
    while (*(num1+i)!= '\0'){
        sum+= to_int(*(num1+i));
        i++;
    }

    delete[] num1;
    return  sum;
}

void out_put(int& sum){
    string pinYin[10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    stack<int> num2;
    while(sum>0){
        num2.push(sum%10);
        sum=sum/10;
    }
    cout<<pinYin[num2.top()];
    num2.pop();
    while (!num2.empty()){
        cout<<" "<<pinYin[num2.top()];
        num2.pop();
    }
}