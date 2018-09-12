#include <iostream>
#include <string>
using namespace std;

//void split(int&in,int temp[4]);
void split(const int& in,int temp[4]){
    int  in_i=in;
    for (int i = 3; i >=0 ; --i) {
        temp[i]=in_i%10;
        in_i=in_i/10;
    }

}

void sort_D(int temp[]){
    int t;
    for (int i = 0; i <3 ; ++i) {
        for (int j = i+1; j <4 ; ++j) {
            if (temp[i]<temp[j]){
                t=temp[i];
                temp[i]=temp[j];
                temp[j]=t;
            }

        }
    }
}

void sort_U(int temp[]){
    int t;
    for (int i = 0; i <3 ; ++i) {
        for (int j = i+1; j <4 ; ++j) {
            if (temp[i]>temp[j]){
                t=temp[i];
                temp[i]=temp[j];
                temp[j]=t;
            }

        }
    }
}
int Pro(int A){
    int a;
    if (A==0)
        a= 1;
    else if(A==1)
        a=10;
    else if(A==2)
        a=100;
    else if(A==3)
        a=1000;
    return a;
}

int sum(int temp[]){
    int S=0;
    for (int i = 0; i < 4; ++i) {
        S+=temp[i]*Pro(3-i);
    }
    return S;
}
void arrCp(int A[],int B[]){
    for (int i = 0; i < 4; ++i) {
        A[i]=B[i];
    }
}
int main() {
    int in=0,A[4],D1[4],U1[4],temp[4],num=0,D=0,U=0,re[4];
    cin>>in;

    split(in,temp);
    num=in;
    if (temp[0]==temp[1]&&temp[1]==temp[2]&&temp[2]==temp[3])
        cout<<in<<" - " << in <<" = "<<"0000";
    else if(temp[0]==6&&temp[1]==1&&temp[2]==7&&temp[3]==4)
    cout<<"7641"<<" - " << "1467" <<" = "<<in;
    else {
        while (num!=6174){
            split(num,A);
            sort_D(A);
            D=sum(A);
            arrCp(D1,A);
            sort_U(A);
            arrCp(U1,A);
            U=sum(A);
            num=D-U;
            split(num,re);
         //   cout<<num<<endl;
            cout<<*D1<<*(D1+1)<<*(D1+2)<<*(D1+3)
            <<" - "<<
            *U1<<*(U1+1)<<*(U1+2)<<*(U1+3)<<" = "<<
            *re<<*(re+1)<<*(re+2)<<*(re+3)<<endl;



        }
    }

   // std::cout << "Hello, World!" << std::endl;
    return 0;
}