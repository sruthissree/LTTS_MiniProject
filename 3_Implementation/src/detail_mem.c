
void mem_detail(int temp_ID){
	extern Member *mem_ptr=member_list;
	extern Book *book_ptr;
	extern int i;
	mem_ptr=get_mem(temp_ID);
	if(!mem_ptr)
	    return;
	    
	printf("NAME : %s\nID : %d\nBOOKS BORROWED : %d\n",mem_ptr->name,mem_ptr->id,mem_ptr->tot_books);
	if(mem_ptr->tot_books<1){
		return;
	}
	printf("BOOKS ACC NO : ");

	for(i=0;i<mem_ptr->tot_books;i++){
		printf("%d ",mem_ptr->books_acc_no[i]);
		book_ptr=get_book(mem_ptr->books_acc_no[i]);
		if(overdue(book_ptr->due,curr_date)){
			printf("DUE");
		}
		printf("\n");
	}printf("\n");
	
}
