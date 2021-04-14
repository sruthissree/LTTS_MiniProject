
void book_add(){
	char temp[20]; 
	int acc;
	Book *newnode,*book_ptr=books_list;
	newnode=(Book *)malloc(sizeof(Book));
	
	printf("Enter the title : "); scanf("%s",temp);
	strcpy(newnode->title,temp);
	printf("Enter author name : "); scanf("%s",temp);
	strcpy(newnode->auth,temp);
	printf("Enter access number : "); scanf("%d",&acc);
	
	

    newnode->acc_no=acc;
    newnode->possess=0;
	newnode->availability=1;
	newnode->next=NULL;
	
	if(books_list==NULL){	
		books_list=newnode;
	}
	else{
		while(book_ptr->next!=NULL)
	        book_ptr=book_ptr->next;
	    book_ptr->next=newnode;
	}
}

