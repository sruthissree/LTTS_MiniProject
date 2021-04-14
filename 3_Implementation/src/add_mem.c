
void mem_add(){
	extern char temp[20];
	extern int ID;
	extern Member *newnode,*mem_ptr=member_list;
	newnode=(Member*)malloc(sizeof(Member));
	printf("Enter the name : ");
	scanf("%s",temp);
	strcpy(newnode->name,temp);
	printf("Enter ID : ");
	scanf("%d",&newnode->id);
	newnode->next=NULL;
	newnode->tot_books=0;
	
	if(member_list==NULL){
		member_list=newnode;
	}
	else{
	    while(mem_ptr->next!=NULL)
	        mem_ptr=mem_ptr->next;
	    mem_ptr->next=newnode;
	}
}
