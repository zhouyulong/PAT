//1005继续(3n+1)猜想
/*
 * 回顾3n+1猜想 对任何一个正整数 n，如果它是偶数，那么把它砍掉一半；
 * 如果它是奇数，那么把 (3n+1) 砍掉一半。这样一直反复砍下去，最后一定在某一步得到 n=1。
 *
 * 前期已经计算，（3n+1)猜想100以内的步数最长的是96，其最长的步数为118
 */
#include <iostream>
#include <algorithm>
using  namespace std;

int en_1(int num,int step[]){
    int i=0;
    //------------👇-------------
    /*
    cout<<num<<"_step:"<<endl<<endl;
    */
    //--------------👆----------
    while (num!=1){
        if (num%2==1)
        {num=(num*3+1)/2;step[i]=num;i++;}
        else if (num%2==0)
        {num/=2;step[i]=num;i++;}
    }

    //-------👇---------------
    /*
    for (int j = 0; j <i ; ++j) {
        cout<<step[j]<<" ";
    }
    cout<<endl<<endl;
     */
    //-------👆--------------
    return i;
}

int step_length(int *a){
    for (int i = 0;  ; ++i) {
        if (a[i]==0)
         return i;
    }
}
int main() {
    int n; cin>>n;
    int num[n];
    int step[n*118],posit=0;
    fill(step,step+n*118,0);
    for (int i = 0; i <n ; ++i) {
        cin>>num[i];
    }

  //  if(n=1&&num[0]==1)
   // {cout<<"1";
    //    return 0;}
    for (int j = 0; j < n; ++j) {
       int tmp_posit= en_1(num[j],step+posit);
        posit+=tmp_posit;
    }
    /*
    //--------------------test-------👇------
    cout<<"num: "<<endl;
    for (int k1 = 0; k1 <n ; ++k1) {

        cout<<num[k1]<<" ";
    }

    //--------------------test-------👆------
     */
    //int po=0;
    for (int k = 0; k <n ; ++k) {
        for (int i = 0; i <step_length(step) ; ++i) {
            if (num[k]==step[i]) {
                num[k]=-1;
                break;
            }
        }
    }

     //---------------test------👇------
    /*
    cout<<"sum_step: "<<endl;
    for (int j1 = 0; j1 <step_length(step) ; ++j1) {
         cout<<step[j1]<<"  ";
    }
    cout<<endl<<endl;
     */
     //-----------------test-----👆------
    int resu[100],i=0;
    for (int l = 0; l <n ; ++l) {
        if (num[l]!=-1)
        {
            resu[i++]=num[l];
        }
    }

    //sort
    int tmp=0;
    for (int m = 0; m <i-1 ; ++m) {
        for (int j = m+1; j <i; ++j) {
            if (resu[m]<resu[j])
            {
                tmp=resu[m];
                resu[m]=resu[j];
                resu[j]=tmp;
            }
        }
    }

    if(i==1)
        cout<<resu[0];
    else {
        for (int i1 = 0; i1 < i - 1; ++i1) {
            cout << resu[i1] << " ";
        }
        cout << resu[i - 1];
    }
    //std::cout << "Hello, World!" << std::endl;
    return 0;
}