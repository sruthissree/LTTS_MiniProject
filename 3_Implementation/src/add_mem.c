#include "lib_mgmt.h"
Member* mem_add(){
	char temp[20];
	extern int ID;
	extern Member *newmem,*mem_ptr,*member_list;
	mem_ptr=member_list;
	newmem=(Member*)malloc(sizeof(Member));
	printf("NEW MEMBER ADDITION\nEnter the name : ");
	scanf("%s",temp);
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
