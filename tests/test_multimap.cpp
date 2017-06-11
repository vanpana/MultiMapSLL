#include "test_multimap.h"

class MultimapTest : public testing::Test
{
public:
    SinglyLinkedList<int> *sll;
    Multimap<SinglyLinkedList<int> > *map;

    void SetUp() override
    {
        sll = new SinglyLinkedList<int>();
        map = new Multimap<SinglyLinkedList<int> >();
    }

    void TearDown() override
    {
        free(sll);
        free(map);
    }
};

TEST_F(MultimapTest, test_addNode)
{
    int* a = (int*)malloc(sizeof(int));
    int* key = (int*)malloc(sizeof(int));
    *a = 123;
    *key = 42;

    //Testing add for SLL
    sll->addNode(a);
    ASSERT_TRUE(sll->getLength() == 1);

    //Testing add for map
    map->addNode(key, sll);
    ASSERT_TRUE(map->getLength() == 1);

    //Testing for no duplicate keys
    try
    {
        map->addNode(key, sll);
        ASSERT_TRUE (1 == 2);
    }
    catch(...)
    {
        ASSERT_TRUE(map->getLength() == 1);
    }

    free(a);
    free(key);
}

TEST_F(MultimapTest, test_removeNode)
{
    int* a = (int*)malloc(sizeof(int));
    int* key = (int*)malloc(sizeof(int));
    *a = 123;
    *key = 42;

    //Testing add for SLL
    sll->addNode(a);

    *a = 124;
    sll->addNode(a);
    sll->removeNode(a);
    //If only one node is available, it will be set to NULL, but will still exist.
    ASSERT_TRUE(sll->getLength() == 1);

    //Testing add for map
    map->addNode(key, sll);

    *key = 43;
    map->addNode(key, sll);

    *key = 44;
    map->addNode(key, sll);

    //Testing middle delete, last delete and first delete.
    *key = 43;
    map->removeNode(key);
    ASSERT_TRUE(map->getLength() == 2);

    *key = 44;
    map->removeNode(key);
    ASSERT_TRUE(map->getLength() == 1);

    *key = 42;
    map->removeNode(key);
    ASSERT_TRUE(map->getLength() == 0);

    free(a);
    free(key);
}
