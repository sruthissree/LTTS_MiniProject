#include "lib_mgmt.h"
Book* book_add(){
	char temp[20]; 
	int acc;
	extern Book *books_list;
	extern Book *book_ptr;
	book_ptr=books_list;
	Book *newbook;
	newbook=(Book *)malloc(sizeof(Book));
	
	printf("NEW BOOK ADDITION\nEnter the title : "); scanf("%s",temp);
	strcpy(newbook->title,temp);
	printf("Enter author name : "); scanf("%s",temp);
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

