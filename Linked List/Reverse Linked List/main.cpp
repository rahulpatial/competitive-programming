#include <bits/stdc++.h>
using namespace std;

typedef struct node {
  int key;
  node *next;
  node (int x) {
    key = x;
    next = NULL;
  }
} node;

// Creation of Linked List
node *creationOfLinkedList(node *head, int key) {
  node *temp = new node(key);
  if (head == NULL) {
    head = temp;
    return head;
  } else {
    node *current = head;
    // GEtting hold of last node
    while (current -> next != NULL) {
      current = current -> next;
    }
    current -> next = temp;
    return head;
  }
}

// Reverse of Linked List
node *reverseLinkedList(node *head) {
  node *current = head;
  node *prev = NULL, *next = NULL;
  
  while (current != NULL) {
    next = current -> next;
    current -> next =  prev;
    prev = current;
    current = next;
  }
  
  return prev;

}

void printLinkedList(node *head) {
  node *current = head;
  while (current != NULL) {
    cout << current -> key << " ";
    current = current -> next;
  }
  cout << endl;
}

int main() {
  node *head = NULL;
  head = creationOfLinkedList(head, 10);
  head = creationOfLinkedList(head, 20);
  head = creationOfLinkedList(head, 30);
  head = creationOfLinkedList(head, 40);
  node *reversedList = reverseLinkedList(head);
  printLinkedList(reversedList);
  return 0;
}
