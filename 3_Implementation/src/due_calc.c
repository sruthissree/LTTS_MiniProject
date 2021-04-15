#include "lib_mgmt.h"
int overdue(int a[]){
	
	extern int b[3];
    int month;
	time_t curr_time;
    char* curr_time_string;
    char mon[4];
    
    curr_time = time(NULL);
	
    curr_time_string = ctime(&curr_time);

    if (curr_time_string == NULL)
    {
        printf("Failure to convert the current time.\n");
        exit(-1);
    }
    
	mon[0]=curr_time_string[4];
	mon[1]=curr_time_string[5];
	mon[2]=curr_time_string[6];
	mon[3]='\0';
    
	a[0]=curr_time_string[9]-48+(curr_time_string[8]-48)*10;
	a[2]=curr_time_string[23]-48 + (curr_time_string[22]-48)*10 + (curr_time_string[21]-48)*100 + (curr_time_string[20]-48)*1000;
	
	if(!strcmp(mon,"Jan")){
		month=1;
	}
	else if(!strcmp(mon,"Feb")){
		month=2;
	}
	else if(!strcmp(mon,"Mar")){
		month=3;
	}
	else if(!strcmp(mon,"Apr")){
		month=4;
	}
	else if(!strcmp(mon,"May")){
		month=5;
	}
	else if(!strcmp(mon,"Jun")){
		month=6;
	}
	else if(!strcmp(mon,"Jul")){
		month=7;
	}
	else if(!strcmp(mon,"Aug")){
		month=8;
	}
	else if(!strcmp(mon,"Sep")){
		month=9;
	}
	else if(!strcmp(mon,"Oct")){
		month=10;
	}
	else if(!strcmp(mon,"Nov")){
		month=11;
	}
	else if(!strcmp(mon,"Dec")){
		month=12;
	}

	a[1]=month;
	
	if(a[2]<b[2]){
		return 1;
	}
	if(a[2]==b[2]){
		if(a[1]<b[1]){
			return 1;
		}
		if(a[1]==b[1]){
			if(a[0]<b[0]){
				return 1;
			}
		}
	}
	return 0;
}
