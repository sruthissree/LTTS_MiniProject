/**
 * @file add_mem.c
 * @author Sruthissree R (sruthissreerangha2000@gmail.com)
 * @brief function to add a new member to the library. Details of the member is obtained inside the function
 * @version 0.1
 * @date 2021-04-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "lib_mgmt.h"
Member* mem_add(){
	char temp[20]="";
	extern int ID;
	extern Member *newmem,*mem_ptr,*member_list;
	mem_ptr=member_list;
	newmem=(Member*)malloc(sizeof(Member));
	printf("NEW MEMBER ADDITION\nEnter the name : ");
	scanf("%19s",temp);
	strcpy(newmem->name,temp);
	printf("Enter ID : ");
	scanf("%d",&newmem->id);
	newmem->next=NULL;
	newmem->tot_books=0;
	
	if(member_list==NULL){
		member_list=newmem;
	}
	else{
	    while(mem_ptr->next!=NULL)
	        mem_ptr=mem_ptr->next;
	    mem_ptr->next=newmem;
	}
	return newmem;
}
