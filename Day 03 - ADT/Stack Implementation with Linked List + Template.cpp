#include<bits/stdc++.h>
using namespace std;

template <class Type> class Stack{
    private:
        Type val;
        int sz;
        Stack* head;
        Stack* next;
    public:
        Stack(){
            head = NULL;
            next = NULL;
            sz = 0;
        }

        void Push(Type val){
            if (head==NULL){
                head = new Stack();
                head -> val = val;
                head -> next = NULL;
            }
            else{
                Stack* temp = new Stack();
                temp -> val = val;
                temp -> next = head;
                head = temp;
            }
            ++sz;
        }

        void Pop(){
            if (head!=NULL){
                head = head -> next;
                --sz;
            }
        }

        Type Top(){
            if (head!=NULL) return head -> val;
        }

        bool Empty(){
            if (head==NULL) return true;
        }
        int Size(){
            return sz;
        }

};

int main()
{
    Stack < string > St;
    St.Push("Hello");
    St.Push("World");

    cout << St.Top() << endl;
    St.Pop();
    cout << St.Size() << endl;
    return 0;
}
