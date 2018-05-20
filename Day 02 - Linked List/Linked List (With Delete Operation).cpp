#include<bits/stdc++.h>
using namespace std;

class List{
private:
    int data;
    List* head;
    List* next;
public:
    /**Constructor method (same name as the class) initializes the object.
        In this case, it set the value of the head as NULL
    **/
    List(){
        head = NULL;
    }

    ///Method to insert / append a value at the end of the list
    void Append(int input){
        /**There are 2 cases
            if head is NULL, we have to set a new head
            if head is not NULL, then we append the value to the end of the list
        **/
        if (head==NULL){
            head = new List();
            head -> data = input;
            head -> next = NULL;
        }
        else{
            List* temp = head;
            while(temp->next!=NULL) temp = temp -> next;
            List* n = new List();
            n -> data = input;
            n -> next = NULL;
            temp -> next = n;
        }
    }

    /**
        Delete() method deletes a value from the list. This particular method will delete
        only 1 value at a time. It traverse the list and search for the value.
    **/
    void Delete(int x){
        /**
            There are 2 cases. If head's value we want to delete, then we update the head.
            If it is another value, then we simply link it's previous node to it's next node, so
            that node is unlined from the list.
        **/
        if (head -> data == x){
            head = head -> next;
        }
        else{
            List* temp = head;
            while(temp -> next != NULL){
                if (temp -> next -> data == x){
                    temp -> next = temp -> next -> next;
                    break;
                }
                temp = temp -> next; ///moving to next node
            }
        }
    }

    /**
        Show() method prints every element of the list.
        First we take the value of the head in a temporary variable.
        Then we traverse the list by moving from node to node's next.
    **/
    void Show(){
        List* temp = head;
        while(temp!=NULL){
            cout << temp -> data << endl;
            temp = temp -> next; ///moving to next node
        }
    }

    /**
        Search() method traverses the list just like Show() method to
        search for a particular value.
        If the value is found then we break the loop.
        We keep a counter variable to check at which position the value
        was found.
    **/
    void Search(int x){
        List* temp = head;
        int counter = 1;
        bool found = false;
        while(temp!=NULL){
            if (temp -> data == x){
                found = true;
                cout << x << " found at node " << counter << endl;
                break;
            }
            temp = temp -> next; ///moving to next node
        }
        if (!found) cout << x << " not found in the list" << endl;
    }
};

int main()
{
    List A;
    A.Append(10);
    A.Append(20);
    A.Append(30);
    A.Append(90);
    A.Append(200);
    A.Append(70);
    //A.Show();
    A.Delete(10);
    A.Search(200);
    A.Append(90);
    A.Show();
    return 0;
}
