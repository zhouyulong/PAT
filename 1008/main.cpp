#include <iostream>
#include <stack>
using namespace std;
struct list_l {
    int n;
    struct list_l * link;
}L;
int main() {
    stack<int > stk;
    int ar,move;
    cin>>ar>>move;
    struct list_l* l=new(struct list_l);
    struct list_l* tail,*head,*temp;
    tail=l;tail->link=NULL;
    for (int i = 0; i <ar ; ++i) {
        cin>>l->n;
        head =l;
        l=new(struct list_l);
        l->link=head;
    }
/*
    if (move==0){
        for (int i = 0; i <ar-1 ; ++i) {
            cout<<head->n<<" ";
            head=head->link;
        }
        cout
    }
    */
    tail->link=head;
    temp=head;
    for (int j = 0; j <move-1 ; ++j) {
        temp=temp->link;
    }
    head=temp->link;
    tail=temp;
    tail->link=NULL;

    while(head->link!=NULL){
        stk.push(head->n);
        head=head->link;
    }

    cout<<head->n;
    for (int k = 0; k <ar-1 ; ++k) {
        cout<<" "<<stk.top();
        stk.pop();
    }

    //std::cout << "Hello, World!" << std::endl;
    return 0;
}