/**
 * @file add_book.c
 * @author Sruthissree R (sruthissreerangha2000@gmail.com)
 * @brief function to add a new book to the library databse. Details of the book is obtained inside the function
 * @version 0.1
 * @date 2021-04-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "lib_mgmt.h"
Book* book_add(){
	char temp[20]; 
	int acc;
	extern Book *books_list;
	extern Book *book_ptr;
	book_ptr=books_list;
	Book *newbook;
	newbook=(Book *)malloc(sizeof(Book));
	
	printf("NEW BOOK ADDITION\nEnter the title : "); scanf("%19s",temp);
	strcpy(newbook->title,temp);
	printf("Enter author name : "); scanf("%19s",temp);
	strcpy(newbook->auth,temp);
	printf("Enter access number : "); scanf("%d",&acc);
	
	

    newbook->acc_no=acc;
    newbook->possess=0;
	newbook->availability=1;
	newbook->next=NULL;
	
	if(books_list==NULL){	
		books_list=newbook;
	}
	else{
		while(book_ptr->next!=NULL)
	        book_ptr=book_ptr->next;
	    book_ptr->next=newbook;
	}
	return newbook;
}

