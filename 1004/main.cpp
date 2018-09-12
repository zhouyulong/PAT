#include <iostream>
#include <string>
using namespace std;


int Max(int n,int* grade){
    int temp=0;

    for (int i = 0; i <n ; ++i) {
        if(temp<grade[i])
            temp=grade[i];
    }
    return  temp;
}

int Min(int n,int* grade){
    int temp=100;

    for (int i = 0; i <n ; ++i) {
        if(temp>grade[i])
            temp=grade[i];
    }
    return temp;
}

int main() {
   // string *name=NULL,*SNu=NULL;
    int n,maxG,minG;

    cin>>n;
    int * grade=new int[n];
    string* name = new string[n];
    string* SNu = new string[n];
    for (int i = 0; i <n ; ++i) {
        cin>>name[i]>>SNu[i]>>grade[i];
    }
    maxG=Max(n,grade);
    minG=Min(n,grade);

    for (int j = 0; j <n ; ++j) {
        if(grade[j]==maxG){
            cout<< name[j]<<" "<<SNu[j]<<endl;
        break;}
    }
    for (int k = 0; k <n ; ++k) {
        if (grade[k]==minG){
            cout<<name[k]<<" "<<SNu[k]<<endl;
            break;
        }
    }
    delete [] name;
    delete [] SNu;
  //  delete grade;
   // std::cout << "Hello, World!" << std::endl;
    return 0;
}