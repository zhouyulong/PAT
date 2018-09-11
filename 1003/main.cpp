#include <iostream>
#include <string>
#include <cstring>
using namespace std;

string* input_s(int& amount, string* s);
bool judge1(string& s);
bool judge2(string& s);



int main() {
    int amount;
    cin >> amount;
    string* sTemp = new string[amount+1];
         sTemp = input_s(amount,sTemp);

    for (int i = 0; i < amount; ++i) {
        if (!judge1(sTemp[i]))
            cout<<"NO"<<endl;
        else if(judge2(sTemp[i]))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    //std::cout << "Hello, World!" << std::endl;
    delete []sTemp;
    return 0;
}


string* input_s(int& amount,string* s){

    for (int i = 0; i <amount ; ++i) {
        cin >> s[i];
    }

    return s;
}

bool judge1(string& s){
    int tag=0;
    char *c = new char[s.length()+1];
    strcpy(c,s.c_str());
    for (int i = 0; i < s.length();++i ){
        if(c[i]=='P'||c[i]=='A'||c[i]=='T')
        tag++;
        else
            return false;
    }
    return true;
}

bool judge2(string& s){
    char*c=new char[s.length()+1];
    int front=0,front1=0,tail=0,tail1=0,med=0,med1=0;
    strcpy(c,s.c_str());

    // search position of 'P' and judge false
    for (int i = 0; i <s.length() ; ++i) {
        if (c[i] == 'P')
        {front=i;front1++;}
    }
    if (front1!=1)
        return false;


    //search position of 'T' and judge false
    for (int j = s.length()-1; j >=0 ; --j) {
        if (c[j] =='T')
        {tail=j;tail1++;}
    }
    if (tail1!=1)
        return false;

    //Is it have 'A'?
    {
        int token=0;
        for (int k = 0; k < s.length(); ++k) {
            if (c[k] == 'A')
            { token++; break;}
        }
        if (token==0)
            return false;
    }

    if (front*(tail-front-1)==s.length()-tail-1)
        return  true;
    else
        return false;
}
