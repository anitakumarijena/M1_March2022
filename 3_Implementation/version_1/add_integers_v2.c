#include "stdio.h"
#include "unity.h"



int add_integers(int a, int b)
{
    int sum = a + b;   
    return sum;
}

void test_add_integers()
{
    #if 0
    if(0 == add_integers(0, 0))
        printf("Add function works\n");
    else 
        printf("Add function is not working\n");

    if(30 == add_integers(20, 20))
        printf("Add function works for positive numbers\n");
    else 
        printf("Add function is not working for positive numbers\n");
    
    if(-40 == add_integers(-20, -20))
        printf("Add function works for negative numbers\n");
    else 
        printf("Add function is not working for negative numbers\n");
    #endif
    TEST_ASSERT_EQUAL(0, add_integers(0, 0));
    TEST_ASSERT_EQUAL(30, add_integers(10, 20));
    TEST_ASSERT_EQUAL(-10, add_integers(-10, -20));
   
}

#if 0
int main(){
    test_add_integers();
    return 0;
}
#endif