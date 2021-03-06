/**
 * @file driver_prog.c
 * @author Sruthissree R (sruthissreerangha2000@gmail.com)
 * @brief driver program containing main funtion for the library management system
 * @version 0.1
 * @date 2021-04-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "lib_mgmt.h"

int b[3]={0};
Book *books_list=NULL,*newbook=NULL,*book_ptr=NULL;
Member *member_list=NULL,*newmem=NULL,*mem_ptr=NULL,*ptr=NULL;

int main(){
	int ch=0,acc,temp_ID,copies;
	char temp[20]="";
	printf("MENU \n");
	printf("1. Book issue\n2. Book return\n3. Check book availability\n4. Check member details\n5. Add a new member\n6. Add a new book\n7. View all books\n8. View all members\n9. Exit\n");
	while(1){
		printf("\nSelect an operation to perform : ");
		scanf("%d",&ch);
		switch(ch){
			case 1:printf("BOOK ISSUE\n");book_issue(); printf("Successful\n"); break;
			case 2:printf("BOOK RETURN\n");book_return(); printf("Successful\n"); break;
			
			case 3:printf("BOOK AVAILABILITY\nEnter access number : "); scanf("%d",&acc);
			       book_avail(acc); break;
			case 4:printf("MEMBER DETAILS\nEnter member ID : "); scanf("%d",&temp_ID); 
			       mem_detail(temp_ID);break;
			
			case 5:mem_add(); printf("Member added successfully\n"); break;
			
			case 6:book_add(); printf("Book added successfully\n"); break;
			
			case 7:printf("%25s\n","LTTS LIBRARY"); disp_books(); break;
			
			case 8:printf("%25s\n","LTTS LIBRARY MEMBERS"); disp_mem(); break;
			       
			case 9:printf("Exiting program"); exit(0);
			
			default:printf("Invalid choice. Try again");
		}
	}
	return 0;
}
