#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *pNext;
};

int deleteAtPositionN(struct node **pHead, int n, int *pData);
int trav(struct node *pHead);


int main()
{
    struct node *head;
    struct node *traverse;
    struct node *list;
    
    list = (struct node *) malloc(sizeof(struct node));
    head = list;
    
    head->data = 2345;
    //printf("%d\n", list->data);
    

    list->pNext = (struct node *) malloc(sizeof(struct node));
    list = list->pNext;
    list->data = 36539;
    //printf("%d\n", list->data);
    
    list->pNext = (struct node *) malloc(sizeof(struct node));
    list = list->pNext;
    list->data = 1337;
    list->pNext=NULL;
    //printf("%d\n", list->data);
    
    int data=0;
    deleteAtPositionN(&head, 1, &data);

    //trav(&head);
    
    return 0;
}

// Precondition: n > 0
int deleteAtPositionN(struct node **pHead, int n, int *pData) {
    struct node *temp;
    struct node *temp2;
    temp = pHead;
    
    int i = 1;
    while (*pHead != NULL) {
        
        if (n == 1) {
            temp = *pHead;
            *pHead = (*pHead)->pNext;
            free(temp);
        } else if (n == i){
            temp2 = temp->pNext;
            free(temp);
        }
        
        
        /*
        if (i == n) {
            ;    
        }
        */
        
        temp2 = temp;
        temp = temp->pNext;
        i++;
    }
}

int trav(struct node *pHead) {
    printf("You entered traverse function\n");
    struct node *tmp;
    tmp = &pHead;
    while (tmp != NULL) {
        printf("Node #: %d\n", tmp->data);

        tmp = tmp->pNext;
        //free(node);
    }
}
