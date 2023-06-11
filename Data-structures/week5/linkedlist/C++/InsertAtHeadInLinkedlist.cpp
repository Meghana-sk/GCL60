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
    //1. Create a new node with the  data to be insertec
    Node* newNode = new Node(data);
    //2. Point new node's next to head
    newNode->next = head;
    //3. Make new node as head
    head = newNode;
    return head;
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

    return 0;
}