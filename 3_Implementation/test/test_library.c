#include "unity.h"
#include "lib_mgmt.h"
#define PROJECT_NAME    "Library"

/* Prototypes for all the test functions */
void test_get_book(void);
void test_get_mem(void);
void test_get_book2(void);
void test_get_mem2(void);
void test_add_mem(void);
void test_add_book(void); 

void setUp(){}
void tearDown(){}
Book *books_list=NULL,*newbook=NULL,*book_ptr=NULL;
Member *member_list=NULL,*newmem=NULL,*mem_ptr=NULL,*ptr=NULL;
int var,b[3]={0};


int main()
{

  UNITY_BEGIN();
  
  RUN_TEST(test_add_book);
  RUN_TEST(test_add_mem);
  
  printf("Enter the existing acc. no\n");
  scanf("%d",&var);
  RUN_TEST(test_get_book);
  printf("Enter different acc. no\n");
  scanf("%d",&var);
  RUN_TEST(test_get_book2);
  
  printf("Enter the existing ID no\n");
  scanf("%d",&var);
  RUN_TEST(test_get_mem);
  printf("Enter different ID no\n");
  scanf("%d",&var);
  RUN_TEST(test_get_mem2);
  

  return UNITY_END();
}

void test_add_book(void) {
	
  TEST_ASSERT_NOT_NULL(book_add());
  
}

void test_add_mem(void) {
  TEST_ASSERT_NOT_NULL(mem_add());
  
}

void test_get_book2(void) {
  TEST_ASSERT_NULL(get_book(var));
  
}

void test_get_mem2(void) {
  TEST_ASSERT_NULL(get_mem(var));
}

void test_get_book(void) {
  TEST_ASSERT_NOT_NULL(get_book(var));
  
}

void test_get_mem(void) {
  TEST_ASSERT_NOT_NULL(get_mem(var));
}

