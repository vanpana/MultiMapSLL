#include "test_controller.h"

class ControllerTest : public testing::Test
{
public:
    Repository *repo;
    Controller *ctrl;

    void SetUp() override
    {
        repo = new FileRepository("data/bankaccounts_testing.txt");
        ctrl = new Controller(repo);

        int* key = (int*)malloc(sizeof(int));
        Date *d;

        *key = 32010; d = new Date(12,1,2017); ctrl->add(key, d);
        *key = 32010; d = new Date(13,1,2017); ctrl->add(key, d);
        *key = 32010; d = new Date(25,2,2017); ctrl->add(key, d);

        *key = 45505; d = new Date(23,2,2017); ctrl->add(key, d);
        *key = 45505; d = new Date(24,2,2017); ctrl->add(key, d);

        *key = 55201; d = new Date(1,6,2017); ctrl->add(key, d);

        free(key);
    }

    void TearDown() override
    {
        system("rm \"data/bankaccounts_testing.txt\"");
        // free(repo);
        // free(ctrl);
    }
};

TEST_F(ControllerTest, test_getLength)
{
    Repository *newr = new FileRepository("data/bankaccounts.txt");

    ASSERT_TRUE(ctrl->getLength() == 3);
}

TEST_F(ControllerTest, test_add)
{
    int* key = (int*)malloc(sizeof(int));
    Date *d;

    *key = 32010; d = new Date(20,1,2017); ctrl->add(key, d);
    ASSERT_TRUE(ctrl->getLength() == 3);

    *key = 32011; d = new Date(20,1,2017); ctrl->add(key, d);
    ASSERT_TRUE(ctrl->getLength() == 4);
}

TEST_F(ControllerTest, test_del)
{
    int* key = (int*)malloc(sizeof(int));
    Date *d;

    *key = 32010; ctrl->del(key);
    ASSERT_TRUE(ctrl->getLength() == 2);

    *key = 45505; d = new Date(25,2,2017); ctrl->del(key, d);
    ASSERT_TRUE(ctrl->getLength() == 2);
}

TEST_F(ControllerTest, test_getters)
{
    Multimap<SinglyLinkedList<Date> > *all = ctrl->getAll();
    ASSERT_TRUE(all->getLength() == 3);
}
