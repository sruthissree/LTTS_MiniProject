/**
 * @file issue_book.c
 * @author Sruthissree R (sruthissreerangha2000@gmail.com)
 * @brief function to issue a library book to a member
 * @version 0.1
 * @date 2021-04-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "lib_mgmt.h"
void book_issue(){
	int mem_id,i,issue_acc,due_date[3];
	extern Book *book_ptr;
	extern Member *mem_ptr;
	
	printf("Enter member ID : ");
	scanf("%d",&mem_id);
	printf("Enter book access number : ");
	scanf("%d",&issue_acc);
	printf("Enter due date(DD/MM/YYYY) : ");
	scanf("%d/%d/%d",&due_date[0],&due_date[1],&due_date[2]);
	book_ptr=get_book(issue_acc);
	
	mem_ptr=get_mem(mem_id);
	
	if(!book_ptr->availability){
		printf("Book not available\n");
		return;
	}
	if(mem_ptr->tot_books>(MAX_BOOKS_PER_PERSON-1)){
		printf("Member exceeded the book limit\n");
		return;
	}
	book_ptr->availability=0;
	book_ptr->possess=mem_id;
	for(i=0;i<3;i++){
		book_ptr->due[i]=due_date[i];
	}
	mem_ptr->books_acc_no[mem_ptr->tot_books++]=issue_acc;
}

