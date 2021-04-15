/* Thie file gets the pointer to the correct member when ID is provided.
ID is unique for each member node.
If ID is not found, 
*/
extern  Member* mem_ptr;
Member* get_mem(int ID){
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