#include <iostream>
#include <string>
using namespace std;

void Len_1(const string & str) {
    int n1=str.at(0)-'0';
    for (int i = 1; i <=n1 ; ++i) {
        cout<<i;
    }
}

void Len_2(string& str){
    int n=str.at(0)-'0';
    for (int i = 0; i < n; ++i) {
        cout<<'S';
    }
    n=str.at(1)-'0';
    for (int j = 1; j <=n ; ++j) {
        cout<<j;
    }
}
void Len_3(string& str ){
    int n=str.at(0)-'0';
    for (int i = 0; i <n ; ++i) {
        cout<<'B';
    }
    for (int j = 0; j < str.at(1)-'0'; ++j) {
        cout<<'S';
    }
    for (int k = 1; k <=str.at(2)-'0' ; ++k) {
        cout<<k;
    }
}
int main() {
    string in_put_s;
    cin>>in_put_s;
    switch (in_put_s.length()) {
        case 1:
            Len_1( in_put_s);
            break;
        case 2:
            Len_2(in_put_s);
            break;
        case 3:
            Len_3(in_put_s);
            break;
    }


   // std::cout << "Hello, World!" << std::endl;
    return 0;
}