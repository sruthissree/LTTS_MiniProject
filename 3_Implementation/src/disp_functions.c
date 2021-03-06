/**
 * @file detail_mem.c
 * @author Sruthissree R (sruthissreerangha2000@gmail.com)
 * @brief functions to display the details of all members and all books in the library
 * @version 0.1
 * @date 2021-04-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "lib_mgmt.h"
void disp_books(){
	extern Book *books_list, *book_ptr;
	book_ptr=books_list;
	while(book_ptr!=NULL){
		printf("%5d	%20s	%20s	%3d\n",book_ptr->acc_no,book_ptr->title,book_ptr->auth,book_ptr->availability);
		book_ptr=book_ptr->next;
	}
	return;	
}

void disp_mem(){
	extern Member *member_list, *mem_ptr;
	mem_ptr=member_list;
	while(mem_ptr!=NULL){
		printf("%5d    %20s   %2d\n",mem_ptr->id,mem_ptr->name,mem_ptr->tot_books);
		mem_ptr=mem_ptr->next;
	}
	return;
}
