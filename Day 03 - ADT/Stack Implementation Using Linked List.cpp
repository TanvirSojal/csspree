#include<bits/stdc++.h>
using namespace std;

class Stack{
private:
    int data;
    int sz;
    Stack* next;
    Stack* head;
public:
    Stack(){
        sz = 0;
        head = NULL;
    }
    void Push(int input){
        if (head == NULL){
            head = new Stack();
            head -> data = input;
            head -> next = NULL;
        }
        else{
            Stack* temp = new Stack();
            temp -> data = input;
            temp -> next = head;
            head = temp;
        }
        sz = sz + 1;
    }

    void Pop(){
        if (head != NULL){
            head = head -> next;
            sz = sz - 1;
        }
    }

    int Top(){
        if (head != NULL){
            return head -> data;
        }
    }

    int Size(){
        return sz;
    }

    bool isEmpty(){
        return  head == NULL;
    }
};

int main()
{
    Stack A;
    A.Push(10);
    A.Push(90);
    A.Push(35);
    cout << A.Top() << endl;
    //cout << A.Size() << endl;
    A.Pop();
    cout << A.Top() << endl;
    A.Pop();
    cout << A.Top() << endl;
    A.Pop();
    if (A.isEmpty() == true) cout << "Empty Stack" << endl;
    else cout << "Stack has values" << endl;
    return 0;
}
