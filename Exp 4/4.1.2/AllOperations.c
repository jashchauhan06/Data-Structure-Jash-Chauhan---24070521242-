// Aim : 4.1.2. Concatenate operation on Single Linked List

typedef struct node{
int data;
struct node *next;
} Node;
typedef Node* NODE;

NODE addNode(NODE head, int data){
	NODE newNode = (NODE)malloc(sizeof(Node));
	newNode->data = data;
	newNode->next = NULL;
	if(head == NULL){
		head = newNode;
	} else {
		NODE temp = head;
		while(temp->next!=NULL){
			temp = temp->next;
		}
		temp->next=newNode;
	}
	return head;
}

	void displayList(NODE head){
		NODE temp = head;
		while(temp!=NULL){
			printf("%d --> ",temp->data);
			temp = temp->next;
		}
		printf("NULL\n");
	}

NODE concatenate(NODE list1, NODE list2){
	if(list1 == NULL)
		return list2;

	NODE temp = list1;
	while(temp->next!=NULL){
		temp = temp->next;
	}
	temp->next=list2;
	return list1;
}