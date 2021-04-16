/**
 * @file obt_mem.c
 * @author Sruthissree R (sruthissreerangha2000@gmail.com)
 * @brief Thie function gets the pointer to the correct member when ID is provided. ID is unique for each member node. If ID is not found, NULL is returned
 * @version 0.1
 * @date 2021-04-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */
/*  
*/
#include "lib_mgmt.h"
Member* get_mem(int ID){
	extern Member *member_list;
	extern  Member* mem_ptr;
	mem_ptr=NULL;
	Member *ptr=member_list;
	while(ptr!=NULL && ptr->id!=ID){
		ptr=ptr->next;
	} if(ptr==NULL){
		printf("Invalid member ID\n");
		return NULL;
	}
	mem_ptr=ptr;
	return mem_ptr;
}
