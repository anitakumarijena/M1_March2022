#include "unity.h"

extern void manual_test_add_integers();

void setUp(void)
{
}

void tearDown(void)
{
}



int main(void)
{
    manual_test_add_integers();

    UnityBegin(NULL);

    RUN_TEST(test_add_integers);

    return (UnityEnd());
}