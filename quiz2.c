// Precondition: n > 0
int deleteAtPositionN(struct node **pHead, int n, int *pData) {
	int i=0;
	struct node *traverse = NULL, *prev = NULL;
	
	if(*pHead) {
		traverse = *pHead;
	} else {
		return 0;
	}
	
	prev = traverse;
	while(pHead && (i < n)) {
		prev = traverse;
		traverse = traverse->pNext;
		i++;
	}
	prev->pNext = traverse->pNext;
	free(traverse);
	
	return 1;
}
