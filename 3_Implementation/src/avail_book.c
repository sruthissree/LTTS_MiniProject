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
