/**
 * @file lib_mgmt.h
 * @author Sruthissree R (sruthissreerangha2000@gmail.com)
 * @brief This header contains the structure for two types of nodes and the prototypes for the functions defined in the source
 * @version 0.1
 * @date 2021-04-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __LIB_MGMT_H__
#define __LIB_MGMT_H__

#include<stddef.h>
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

/**
 * @brief Get the mem object
 * 
 * @param ID 
 * @return Member* 
 */
Member* get_mem(int ID);

/**
 * @brief Get the book object
 * 
 * @param acc 
 * @return Book* 
 */

Book* get_book(int acc);

/**
 * @brief determine whether a book is past due or not
 * 
 * @param b 
 * @return int 
 */
int overdue(int b[]);

/**
 * @brief check whether a book is available or not using access number
 * 
 * @param temp_acc 
 */
void book_avail(int temp_acc);

/**
 * @brief issuing a specific book to a specific member
 * 
 */
void book_issue();

/**
 * @brief  funtion is called when a member returns the book. Member ID and book access number are obtained inside the function
 * 
 */
void book_return();

/**
 * @brief display the details of a member, including the number of library books in possession
 * 
 * @param temp_ID 
 */
void mem_detail(int temp_ID);

/**
 * @brief adding a new member. Details of the member is obtained inside the function
 * 
 */
Member* mem_add();

/**
 * @brief adding a new book. Details of the book is obtained inside the function
 * 
 */
Book* book_add();

/**
 * @brief Display all the library books with their access number and availability
 * 
 */
void disp_books();

/**
 * @brief Display the details of all the members with their ID numbers
 * 
 */
void disp_mem();

#endif
