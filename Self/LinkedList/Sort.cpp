#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution_Brute {
public:
    ListNode* sortList(ListNode* head) {
        vector<int> arr;
        ListNode* temp = head;
        while(temp!=NULL){
            arr.push_back(temp->val);
            temp=temp->next;
        }

        sort(arr.begin(), arr.end());

        temp = head;
        int i = 0;
        while(temp!=NULL){
            temp->val = arr[i];
            i++;
            temp = temp->next;
        }

        return head;
    }
};

class Solution_Better{
public:
    ListNode* sortList(ListNode* head){

    }
};


class Solution_Optimal{
public:
    ListNode* sortList(ListNode* head){
        
    }
};





ListNode* createList(vector<int> arr) {
    if (arr.empty()) return nullptr;
    ListNode* head = new ListNode(arr[0]);
    ListNode* temp = head;
    for (int i = 1; i < arr.size(); i++) {
        temp->next = new ListNode(arr[i]);
        temp = temp->next;
    }
    return head;
}

void printList(ListNode* head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    vector<int> arr = {3,4,2,1,5};
    ListNode* head = createList(arr);

    // Solution_Brute sol1;
    // head = sol1.sortList(head);

    Solution_Better sol2;
    head = sol2.sortList(head);

    // Solution_Optimal sol3;
    // head = sol3.sortList(head);

    printList(head);
    return 0;
}
