#include <iostream>
#include <string>
using namespace std;

void judge(char& A, char &B,int A_i[],int B_i[],int&PJ);
int main() {
    int N,PJ=0,temp=0;
    int A_i[3],B_i[3],AWin=0,BWin=0;

    cin>>N;
    char A[N],B[N];
    for (int i = 0; i < N ; ++i){
        cin>>A[i]>>B[i];
    }
    for (int n = 0; n <3 ; ++n) {
        A_i[n]=0;
        B_i[n]=0;
    }
    for (int j = 0; j < N; ++j){
        judge(A[j],B[j],A_i,B_i,PJ);
       // cout<<"A_i["<<j<<"]:"<<" "<<A_i[j]<<endl;
    }

    //for (int m = 0; m <3 ; ++m) {
    //    cout<<"A_i["<<m<<"]:"<<" "<<A_i[m]<<endl;
  //  }


    for (int k = 0; k < 3; ++k) {
        if(temp<A_i[k])
            temp=A_i[k];
       // cout<<A_i[k]<<endl;
        AWin+=A_i[k];
        BWin+=B_i[k];
    }

    cout<<AWin<<' '<<PJ<<' '<<BWin<<endl;
    cout<<BWin<<' '<<PJ<<' '<<AWin<<endl;
    for (int l = 0; l <3 ; ++l) {
        if(temp==A_i[l]){
            if(l==0){
                cout<<'B';
                break;}
            else if(l==1){
                cout<<'C';
                break;}
            else if(l==2){
                cout<<'J';
            break;}
        }
    }

    temp=0;
    for (int k = 0; k < 3; ++k) {
        if(temp<B_i[k])
            temp=B_i[k];
    }
    for (int l = 0; l <3 ; ++l) {
        if(temp==B_i[l]){
            if(l==0) {
                cout <<' '<< 'B';
                break;
            }
            else if(l==1){
                cout<<' '<<'C';
                break;}
            else if(l==2){
                cout<<' '<<'J';
                break;}
        }
    }

    /*
    if(AC_i>AJ_i){
        if(AC_i>AB_i)
            cout<<'C';
       // else if(AC_i==AB_i)
        else
            cout<<'B';
    }else if(AC_i<AJ_i){
        if (AJ_i > AB_i)

            cout << 'J';
        else
            cout << 'B';
    }
    else if (AC_i==AJ_i==AB_i)
        cout<<'B';
    else if(AC_i==AJ_i&&AC_i!=0)
        cout<<'C';
    else if(AC_i==AJ_i&&AC_i==0)
        cout<<'B';

    if(BC_i>BJ_i){
        if(BC_i>BB_i)
            cout<<' '<<'C';
        else
            cout<<' '<<'B';
    }else if(BC_i<BJ_i){
        if(BJ_i>BB_i)
        cout<<' ' <<'J';
        else
        cout<<' '<<'B';
    }
    else if (BC_i==BJ_i==BB_i)
        cout<<' '<<'B';
    else if(BC_i==BJ_i&&BC_i!=0)
        cout<<' '<<'C';
    else if(BC_i==BJ_i&&BC_i==0)
        cout<<' '<<'B';
        */
   // std::cout << "Hello, World!" << std::endl;
    return 0;
}


//void judge(char &A,char &B,int& AC_i,int& AJ_i,int& AB_i,int&BC_i,int&BJ_i,int&BB_i,int&PJ){
void judge(char& A, char &B,int A_i[],int B_i[],int&PJ){

    if(A==B)
        PJ++;
    else if (A=='C'&& B=='J')
        A_i[1]++;
    else if(A=='B'&& B=='C')
        A_i[0]++;
    else if(A=='J'&& B=='B')
        A_i[2]++;
    else if (B=='J'&& A=='B')
        B_i[2]++;
    else if(B=='C'&& A=='J')
        B_i[1]++;
    else if(B=='B'&& A=='C')
        B_i[0]++;

}