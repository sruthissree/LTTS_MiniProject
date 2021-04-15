#include "lib_mgmt.h"
void book_return(){
	int mem_id,book_acc;
	int i=0,j=0,flag=0;
	extern Book *book_ptr;
	extern Member *mem_ptr;
	
	printf("Enter member ID : ");
	scanf("%d",&mem_id);
	printf("Enter book access number : ");
	scanf("%d",&book_acc);
	
	book_ptr=get_book(book_acc);
	mem_ptr=get_mem(mem_id);
	
	if(mem_ptr->tot_books<1){
	    printf("Enter valid member ID\n");
		flag=1;
	}
	
	if(book_ptr->availability){
		printf("Enter valid access number\n");
		flag=1;
	}
	
	if(flag)
	    return;
	
	book_ptr->availability=1;
	book_ptr->possess=0;
	for(i=0;i<3;i++){
		book_ptr->due[i]=0;
	}
	i=0;
	while(i<mem_ptr->tot_books){
		if(mem_ptr->books_acc_no[i]==book_acc){
			break;
		}
		i++;
	}
	while(i<(mem_ptr->tot_books-1)){
		mem_ptr->books_acc_no[i]=mem_ptr->books_acc_no[i+1];
		i++;
	}
	mem_ptr->tot_books--;
}

