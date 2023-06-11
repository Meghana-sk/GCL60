// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        Node(int data) {
            this->data = data;
            next = nullptr;
        }
};

Node* insertAtHead(Node* head, int data){
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
    return head;
}

Node* insertAtTail(Node* head, int data) {
     Node* newNode = new Node(data);
    if(head == nullptr) {
        head = newNode;
        return head;
    } 
    Node* temp = head;
   
    while(temp->next != nullptr){
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = nullptr;
    return temp;
}

void print(Node* head) {
    Node* temp = head;
    while(temp != nullptr) {
        cout << temp->data << "-->";
        temp = temp->next;
    }
}
int main() {
    Node* head = nullptr;
    print(insertAtHead(head, 10));
    print(insertAtHead(head, 20));
    print(insertAtHead(head, 30));
    print(insertAtTail(head, 99));
    return 0;
}