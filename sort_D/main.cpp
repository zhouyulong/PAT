#include <iostream>

int main() {

    int temp[4]={6,8,6,7},t;
    for (int i = 0; i <3 ; ++i) {
        for (int j = i+1; j <4 ; ++j) {
            if (temp[i]>temp[j]){
                t= temp[i];
                temp[i]=temp[j];
                temp[j]=t;
            }
        }

    }
    for (int k = 0; k <4 ; ++k) {
        std::cout<<temp[k];
    }
    std::cout<<std::endl;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}