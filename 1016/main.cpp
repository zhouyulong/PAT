#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {
    string a,b;
    char a1,b1;
    int numa=0,numb=0,sum1=0,sum2=0;
    cin >> a >> a1 >> b >> b1;
    while (!a.empty()){
        if(a1==a.back())
            numa++;
            a.pop_back();
    }
    while(!b.empty()){
        if(b1==b.back())
            numb++;
        b.pop_back();
    }
    int z;
    if(numa!=0){
     z = a1-'0';
    sum1 = z;}
    for(int i=numa;i>1;i--){
        sum1=sum1*10+z;
    }
    int z1;
    if(numb!=0){
        z1 = b1-'0';
    sum2=z1;}
    for(int i =numb;i>1;i--){
        sum2=sum2*10+z1;
    }
    cout<<sum1+sum2;
   // std::cout << "Hello, World!" << std::endl;
    return 0;
}