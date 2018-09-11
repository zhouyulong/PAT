#include <iostream>
#include <string>
#include <complex>
#include <stdio.h>
using namespace std;

int main() {
   // cout << "Hello, World!" << std::endl;
   /* string s1;
    int i=1;
    int *i1=&i;
    char c='c';
    char *c1=&c;
    long l=1;
    long *l1=&l;
    double d=1;
    double *d1=&d;
    float f=1;
    float *f1=&f;
    cout << "size of string S1 : "<< sizeof(s1)<<endl
        << "size of int i : "<< sizeof(i)<<endl
        <<"size of char c : "<< sizeof(c)<<endl
        <<"size of long l : "<< sizeof(l)<<endl
        <<"size of double : "<< sizeof(d)<<endl
        <<"size of float : "<< sizeof(f)<<endl<<endl<<endl;
    cout <<"size of every point"<< sizeof(i1)<<" "<< sizeof(c1)<< sizeof(l1)<< sizeof(d1)<< sizeof(f1)<<endl;

*/

  int a =0;
  cout << "a is :" << a <<endl;

  int c = 5;
  int& b=a;
  b=c;
  cout << "b is :" << b <<endl<<"c is :"<< c << endl << "a is :" << a<<endl;
  //b=a;

 //  printf("")
    return 0;
}