#include "ll_cycle.h"

bool ll_has_cycle(node *head) {
    node* rabbit = head;
    node* turtle = head;
    if (!head) {
    return false;
    }
    while (true) {
    if (rabbit->next) {
    rabbit = rabbit->next;
    }
    else {
    return false;
    }
    if (rabbit->next) {
    rabbit = rabbit->next;
    }
    else {
    return false;
    }
    turtle = turtle->next;
    if (turtle == rabbit) {
    return true;
    }
    }
}
