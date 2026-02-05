#include <iostream>
#include <vector>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node* convertArry2LL(vector<int>& arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for(int i=1; i<arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

void print(Node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

int lengthOfLL(Node* head){
    int count = 0;
    Node* temp = head;
    while(temp){
        temp = temp->next;
        count++;
    }
    return count;
}

Node* deleteHead(Node* head){
    // if(head==NULL) return head;
    if(!head) return nullptr;
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}

Node* deleteTail(Node* head){
    if(!head) return nullptr; //if no elements are there
    if(!head->next){ //if only one element is there
        delete head;
        return nullptr;
    }
    Node* temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    return head;
}

Node* deleteKthElement(Node* head, int k){
    if(!head) return nullptr;
    if(k==1){
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    int count = 0;
    Node* temp = head;
    Node* previous = NULL;
    while(temp != NULL){
        count++;
        if(count==k){
            previous->next = previous->next->next;
            delete temp;
            break;
        }
        previous = temp;
        temp = temp->next;
    }
    return head;
}

int main(){
    vector<int> arr = {1,8,9,3};
    Node* head = convertArry2LL(arr);

    /*
    cout<<"head element: "<<head->data<<endl;
    print(head);
    cout<<"Length: "<<lengthOfLL(head)<<endl;
    */

    /*
    cout<<endl;
    head = deleteHead(head);
    cout<<"LL after removing head:"<<endl;
    print(head);
    */

    /*
    cout<<endl;
    head = deleteTail(head);
    cout<<"LL after removing tail:"<<endl;
    print(head);
    */

    cout<<endl;
    head = deleteKthElement(head, 3);
    cout<<"LL after removing Kth element:"<<endl;
    print(head);

}