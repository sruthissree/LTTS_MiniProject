/**
 * @file obt_book.c
 * @author Sruthissree R (sruthissreerangha2000@gmail.com)
 * @brief function to get the details of a library by the access number
 * @version 0.1
 * @date 2021-04-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "lib_mgmt.h"
Book* get_book(int acc){
	extern Book *books_list;
	extern Book *book_ptr;
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
