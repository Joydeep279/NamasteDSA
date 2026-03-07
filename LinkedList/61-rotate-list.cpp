#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};


struct ListNode* rotateRight(struct ListNode* head, int k) {
  struct ListNode* leftNode=head;
  struct ListNode* rightNode=head->next;

  if (leftNode==NULL||rightNode==NULL)
    return head;

    
    leftNode=rightNode->next;

}

// Helper: create a linked list from an array
ListNode* createList(int arr[], int n) {
    if (n == 0) return nullptr;
    ListNode* head = new ListNode(arr[0]);
    ListNode* curr = head;
    for (int i = 1; i < n; i++) {
        curr->next = new ListNode(arr[i]);
        curr = curr->next;
    }
    return head;
}

// Helper: print a linked list
void printList(ListNode* head) {
    while (head) {
        cout << head->val;
        if (head->next) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3,5,6};
    int n = sizeof(arr) / sizeof(arr[0]);

    ListNode* head = createList(arr, n);
    cout << "Original List: ";
    printList(head);

    int k = 2;
    head = rotateRight(head, k);
    cout << "After rotating right by " << k << ": ";
    printList(head);

    return 0;
}
