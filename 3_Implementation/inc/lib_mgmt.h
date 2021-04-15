/**
 * @file lib_mgmt.h
 * @author Sruthissree R (sruthissreerangha2000@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __LIB_MGMT_H__
#define __LIB_MGMT_H__

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <time.h>
#define MAX_BOOKS_PER_PERSON 5

typedef struct book{
	int acc_no;
	char title[20];
	char auth[20];
	int possess;
	int availability;
	int due[3];
	struct book *next;
}Book;

typedef struct member{
	char name[20];
	int id;
	int books_acc_no[MAX_BOOKS_PER_PERSON];
	int tot_books;
	struct member *next;
}Member;

#endif
