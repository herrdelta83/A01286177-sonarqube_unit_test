#include <gtest/gtest.h>
#include "mult.h"

TEST(MultTest, HandlesPositiveInput)
{
    int multiplicacion = mult(1, 5);

    EXPECT_EQ(multiplicacion, 5);
}
