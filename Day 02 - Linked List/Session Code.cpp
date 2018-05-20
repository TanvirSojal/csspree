#include<bits/stdc++.h>
using namespace std;

class Node{
private:
    int data;
    Node* head;
    Node* next;
public:
    Node(){
        head = NULL;
    }
    void Insert(int input){
        if (head==NULL){
            head = new Node();
            head -> data = input;
            head -> next = NULL;
        }
        else{
            Node* temp = head;
            while(temp->next!=NULL){
                temp = temp -> next;
            }
            Node* n = new Node();
            n -> data = input;
            n -> next = NULL;
            temp -> next = n;
        }
    }
    void Print(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp -> data << endl;
            temp = temp -> next;
            //i = i + 1
        }
    }
    void Search( int n ){
        Node* temp = head;
        bool flag = false;
        int i = 1;
        while(temp != NULL){
            if (temp->data == n){
                flag = true;
                cout << "Found at node " << i << endl;
                break;
            }
            else{
                temp = temp -> next;
                i = i + 1;
            }
            //i = i + 1
        }
        if (flag==false) cout << "Not Found" << endl;
    }
};

int main()
{
    Node List;
    List.Insert(8);
    List.Insert(18);
    List.Insert(20);
    List.Insert(34);
    List.Insert(-78);
    List.Insert(-20);
    List.Print();
    List.Search(-78);
    return 0;
}
