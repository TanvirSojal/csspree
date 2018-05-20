#include<bits/stdc++.h>
using namespace std;

template <class Type> class Queue{
    private:
        Type val;
        long long sz;
        Queue* next;
        Queue* prev;
        Queue* head;
        Queue* tail;
    public:
        Queue(){
            sz = 0;
            head = NULL;
            tail = NULL;
        }

        void Push(Type val){
            if (head==NULL){
                head = new Queue();
                head -> val = val;
                head -> next = NULL;
                head -> prev = NULL;
                tail = head;
            }
            else{
                Queue* temp = new Queue();
                temp -> val = val;
                temp -> next = head;
                head -> prev = temp;
                head  = temp;
            }
            ++sz;
        }

        void Pop(){
            if (tail!=NULL){
                tail = tail -> prev;
                --sz;
            }
        }

        Type Front(){
            if (tail!=NULL) return tail -> val;
        }

        bool Empty(){
            if (tail==NULL) return true;
        }

        long long Size(){
            return sz;
        }
};

int main()
{
    Queue <int> Q;
    Q.Push(10);
    Q.Push(20);
    Q.Push(67);
    Q.Pop();
    cout << Q.Front() << endl;
    return 0;
}
