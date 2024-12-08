#include <stdio.h>
#include <stdlib.h>

struct node {
    float coeff;
    int expo;
    struct node* next;
};

struct node* create(struct node*);
struct node* insert(struct node*, float, int);
void print(struct node*);
void polyAdd(struct node*,struct node*);
int main() {
    struct node* head1 = NULL;
    struct node* head2 = NULL;
    printf("Enter the first polynomial\n");
    head1 = create(head1);
    printf("Enter the second polynomial\n");
    head2 = create(head2);
    polyAdd(head1,head2);


    return 0;
}

struct node* create(struct node* head) {
    int n;
    float co;
    int ex;

    printf("Enter the number of terms\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter the coefficient for term %d\n", i + 1);
        scanf("%f", &co);
        printf("Enter the exponent for term %d\n", i + 1);
        scanf("%d", &ex);
        head = insert(head, co, ex);
    }

    return head;
}

struct node* insert(struct node* head, float co, int ex) {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->coeff = co;
    newnode->expo = ex;
    newnode->next = NULL;

    if (head == NULL || ex > head->expo) {
        newnode->next = head;
        head = newnode;
    } else {
        struct node* temp = head;
        while (temp->next != NULL && temp->next->expo > ex) {
            temp = temp->next;
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }

    return head;
}

void print(struct node* head) {
    printf("Displaying polynomial:\n");
    if (head == NULL) {
        printf("No polynomial\n");
    } else {
        struct node* temp = head;
        while (temp != NULL) {
            printf("(%.1fX^%d)", temp->coeff, temp->expo);
            temp = temp->next;
            if (temp != NULL) {
                printf("  + ");
            } else {
                printf("\n");
            }
        }
    }
}
void polyAdd(struct node*head1,struct node*head2){
    struct node*ptr1 = head1;
    struct node*ptr2 = head2;
    struct node*head3 = NULL;
    while(ptr1 !=NULL && ptr2 != NULL){
        if(ptr1->expo == ptr2->expo){
            head3=insert(head3,ptr1->coeff + ptr2->coeff,ptr1->expo);
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
        else if(ptr1->expo > ptr2->expo){
            head3=insert(head3,ptr1->coeff,ptr1->expo);
            ptr1=ptr1->next;
        }
        else if(ptr1->expo < ptr2->expo){
            head3=insert(head3,ptr2->coeff,ptr2->expo);
            ptr2=ptr2->next;
        }
    }
    while(ptr1 !=NULL){
        head3=insert(head3,ptr1->coeff,ptr1->expo);
        ptr1=ptr1->next;
    }
    while(ptr2 !=NULL){
        head3=insert(head3,ptr2->coeff,ptr2->expo);
        ptr2=ptr2->next;
    }
    printf("Added Polynomial is:\n");
    print(head3);
}

