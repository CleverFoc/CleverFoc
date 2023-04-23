#include "acutest.h"
#include "acutest_ext.h"

void test_example(void)
{

}

TEST_LIST = {
    {"example", test_example},
    {NULL, NULL} /* zeroed record marking the end of the list */
};