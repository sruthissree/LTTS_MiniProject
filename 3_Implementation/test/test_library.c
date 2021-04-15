#include "unity.h"
#include "lib_mgmt.h"
#define PROJECT_NAME    "Library"

/* Prototypes for all the test functions */
void test_get_book(void);
void test_get_mem(void);
void test_add_mem(void);
void test_add_book(void); 

void setUp(){}
void tearDown(){}
Book *books_list=NULL,*newbook=NULL,*book_ptr=NULL;
Member *member_list=NULL,*newmem=NULL,*mem_ptr=NULL,*ptr=NULL;

int main()
{

  UNITY_BEGIN();
  
  RUN_TEST(test_add_book);
  RUN_TEST(test_add_mem);
  RUN_TEST(test_get_book);
  RUN_TEST(test_get_mem);
  

  return UNITY_END();
}

void test_add_book(void) {
	
  TEST_ASSERT_NOT_NULL(book_add())
  
}

void test_add_mem(void) {
  TEST_ASSERT_NOT_NULL(mem_add())
  
}

void test_get_book(void) {
  TEST_ASSERT_NOT_NULL(get_book())
  
}

void test_get_mem(void) {
  TEST_ASSERT_NOT_NULL(get_mem())
}

