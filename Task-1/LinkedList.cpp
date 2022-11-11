#include <iostream>
using namespace std;
class SinglyLinkedList{
    struct node{
        int items;
        node *next;
    };
    node *head , *tail;
    int length;
public :
    SinglyLinkedList(){
        head = tail=NULL;
        length = 0;
    }
    void insertFirst(int element){
        node *newnode;
        newnode = new node;
        if (length == 0){
            head = tail = newnode;
            newnode ->items = element;
            newnode->next = NULL;
        }
        else {
            newnode->next = head;
            newnode->items = element;
            head = newnode;
        }
        length++;
    }

    void insertEnd(int element){
        node *newnode = new node;
        newnode->items = element;
        if (length == 0){
            head = tail = newnode;
            newnode->next = NULL;
        }
        else {
            tail->next = newnode;
            tail = newnode;
            newnode->next = NULL;
        }
        length++;
    }

    void insertAtPosition(int pos , int element){
        if (pos < 0 || pos > length) cout << "Out Of Range!";
        else {
        if(pos == 0) insertFirst(element);
        else if(pos == length) insertEnd(element);
        else {
                node *newnode = new node;
                newnode->items = element;
                node *curent = head;
                for (int i = 1 ; i < pos ; i++)
                        curent = curent->next;
                newnode->next = curent->next;
                curent->next = newnode;
                length++;
        }
        }

    }
    bool isEmpty(){
        return length == 0;
    }
    void print(){
        if (isEmpty()) cout << "Linked List Is Empty!\n";
        else {
        node *temp = head;
        while (temp!=NULL){
            cout << temp->items << " ";
            temp = temp->next;
        }
        cout << endl;
        }
    }

    void deletFirst(){
        if(isEmpty()) cout << "Linked List Is Empty!\n";
        else {
            if (length == 1){
                delete head;
                tail = head = NULL;
                length--;
            }
            else {
                    node *cur = head;
                    head = head->next;
                    length--;
                    delete cur;
            }

        }
    }
    void deletEnd(){
        if(isEmpty()) cout << "Linked List Is Empty!\n";
        else {
                if (length == 1){
                    delete head;
                    head = tail = NULL;
                    length--;
                }
            else {
            node *cur = head->next;
            node *prev = head;
           while(cur!=tail)
           {
                prev = cur;
                cur = cur->next;
           }
            delete cur;
            prev->next = NULL;
            tail = prev;
            length--;
        }
    }
    }

    void deletElement(int element){
        if(isEmpty()) cout << "Linked List Is Empty!\n";
        else {
                if (head->items == element){
                    deletFirst();
                }
                else if (tail->items==element){
                    deletEnd();
                }
                else {
                node *cur = head->next, *prev = head;
                while(cur!=NULL){
                    if (cur->items == element) break;
                    prev = cur;
                    cur = cur->next;
                }
                prev->next = cur->next;
                delete cur;
                length--;
                }
        }
        if (length==0){
            head = tail = NULL;
        }
    }
};
int main(){
    SinglyLinkedList l;
    l.insertFirst(50);
    l.insertEnd(60);
    l.insertEnd(70);
    l.insertAtPosition(1,40);
    l.deletFirst();
    l.deletEnd();
    l.deletElement(60);
    l.print();
    return 0;
}
