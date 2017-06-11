#include "test_date.h"
#include <sstream>
using namespace std;

class DateTest : public testing::Test
{
public:
    Date *d;

    void SetUp() override
    {
        d = new Date(12,12,2017);
    }

    void TearDown() override
    {
        free(d);
    }
};

TEST_F(DateTest, test_getters)
{
    ASSERT_TRUE(d->getDay() == 12);
    ASSERT_TRUE(d->getMonth() == 12);
    ASSERT_TRUE(d->getYear() == 2017);
}

TEST_F(DateTest, test_operators)
{
    Date *d2 = new Date(12,12,2017);
    Date *d3 = new Date(12,11,2017);

    ASSERT_TRUE(*d == *d2);
    ASSERT_TRUE(*d != *d3);

    stringstream ss;
    ss << d;
}
