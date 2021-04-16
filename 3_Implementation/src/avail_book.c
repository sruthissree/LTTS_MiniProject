/**
 * @file avail_book.c
 * @author Sruthissree R (sruthissreerangha2000@gmail.com)
 * @brief function to know the availability of a library book by its access number
 * @version 0.1
 * @date 2021-04-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "lib_mgmt.h"
void book_avail(int temp_acc){
	extern Book *book_ptr;
	book_ptr=get_book(temp_acc);
	if(book_ptr==NULL)
	    return;
	printf("TITLE : %s\tAUTHOR : %s\n",book_ptr->title,book_ptr->auth);
	printf("AVAILABILITY : %d\n",book_ptr->availability);
	if(!book_ptr->availability){
		printf("BORROWER ID : %d\n",book_ptr->possess);
	}
	return;
}
