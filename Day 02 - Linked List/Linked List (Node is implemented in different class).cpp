#include<bits/stdc++.h>
using namespace std;

/***
    Here we implemented the linked list we visualized in the class
    Here every node is only 2 blocks, Data and Next-Pointer

    In our class List, we append 'Node' in the list which is implemented in different class
    We had to make the access modifier of the class 'Node' public so the class List can
    access the values there.

    We can modify it further so that only the class 'List' can access Node's value, no other
    class or methods( functions ). That is for another day.
***/

class Node{
public:
    int data;
    Node* next;
};

class List{
private:
    Node* head;

public:
    List(){
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
            while(temp -> next != NULL){
                temp = temp -> next;
            }
            Node* n = new Node();
            n -> data = input;
            n -> next = NULL;
            temp -> next = n;
        }
    }
    void Show(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp -> data << endl;
            temp = temp -> next;
        }
    }
    void Search(int val){
        Node* temp = head;
        int i = 1;
        bool found = false;
        while(temp != NULL){
            if (temp -> data == val){
                cout << val << " found at node " << i << endl;
                found = true;
                break;
            }
            temp = temp -> next;
            i++;
        }
        if (found == false) cout << val << " not found in the List" << endl;
    }

};

int main()
{
    List A;
    A.Insert(10);
    A.Insert(20);
    A.Insert(30);
    A.Insert(40);
    A.Show();
    A.Search(20);
    A.Search(50);
    return 0;
}
