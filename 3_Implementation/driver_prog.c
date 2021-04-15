#include "lib_mgmt.h"

Member *member_list=NULL;
Book *books_list=NULL;
int curr_date[3];

int main(){
	int ch=0,acc,temp_ID,copies;
	char temp[20];
	printf("MENU \n");
	printf("1. Book issue\n2. Book return\n3. Check book availability\n4. Check member details\n5. Add a new member\n6. Add a new book\n7. Exit\n");
	while(1){
		printf("\nSelect an operation to perform : ");
		scanf("%d",&ch);
		switch(ch){
			case 1:book_issue(); printf("Successful\n"); break;
			case 2:book_return(); printf("Successful\n"); break;
			
			case 3:printf("Enter access number : "); scanf("%d",&acc);
			       book_avail(acc); break;
			case 4:printf("Enter member ID : "); scanf("%d",&temp_ID); 
			       mem_detail(temp_ID);break;
			
			case 5:mem_add(); printf("Member added successfully\n"); break;
			
			case 6:book_add(); printf("Book added successfully\n"); break;
			       
			case 7:printf("Exiting program"); exit(0);
			
			default:printf("Invalid choice. Try again");
		}
	}
	return 0;
}