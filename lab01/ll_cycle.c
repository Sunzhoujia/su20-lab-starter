#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    /* your code here */
    node* slow = head;
    node* fast = head;

    if (!head || !head->next) {
      return 0;
    }

    while (fast && fast->next) {
      slow = slow->next;
      fast = fast->next->next;
      if (slow == fast) {
        break;
      }
    }
    if (!fast || !fast->next) {
      return 0;
    }


    return 1;
}