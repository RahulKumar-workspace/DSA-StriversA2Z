#include <iostream>
#include <vector>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }

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

Node* removeElement(Node* head, int el){
    if(!head) return nullptr;
    if(head->data == el){
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
        if(temp->data == el){
            previous->next = previous->next->next;
            delete temp;
            break;
        }
        previous = temp;
        temp = temp->next;
    }
    return head;
}


Node* insertHead(Node* head, int val){
    Node* temp = new Node(val, head);
    return temp;
}

Node* insertTail(Node* head, int val){
    if(!head){
        return new Node(val);
    }

    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    Node* tail = new Node(val);
    temp->next = tail;
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

    /*
    cout<<endl;
    head = deleteKthElement(head, 3);
    cout<<"LL after removing Kth element:"<<endl;
    print(head);
    */

    /*
    cout<<endl;
    head = removeElement(head, 8);
    cout<<"LL after removing Value:"<<endl;
    print(head);
    */

    /*
    cout<<endl;
    head = insertHead(head, 100);
    cout<<"LL after inserting head: "<<endl;
    print(head);
    */

    cout<<endl;
    head = insertTail(head, 100);
    cout<<"LL after inserting tail: "<<endl;
    print(head);

    return 0;
}