#include "lib_mgmt.h"
Book* get_book(int acc){
	extern Book *books_list;
	extern Book *book_ptr=NULL;
	book_ptr=books_list;
	while(book_ptr!=NULL && book_ptr->acc_no!=acc){
		book_ptr=book_ptr->next;
	}
	if(book_ptr==NULL){
		printf("Enter the correct access number\n");
		return NULL;
	}
	return book_ptr;
}
