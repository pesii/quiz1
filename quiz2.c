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

/// Precondition: n > 0
int deleteAtPositionN(struct node **pHead, int n, int *pData) {
	int i=0;
	struct node *traverse = NULL, *prev = NULL;
	
	if(*pHead) {
		traverse = *pHead;
	} else {
		return 0;
	}
	
	while(pHead && (i < n)) {
		prev = traverse;
		traverse = traverse->pNext;
		i++;
	}
	prev->pNext = traverse->pNext;
	free(traverse);
	
	return 1;
}
/*
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
*/
