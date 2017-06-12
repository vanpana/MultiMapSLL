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

    sll->removeNode(a);
    sll->addNode(a);

    *a = 124;
    sll->addNode(a);

    *a = 125;
    sll->addNode(a);

    *a = 124;
    sll->removeNode(a);

    *a = 125;
    sll->removeNode(a);

    *a = 123;
    sll->removeNode(a);
    //If only one node is available, it will be set to NULL, but will still exist.
    cout << sll->getLength() << endl<<endl;
    ASSERT_TRUE(sll->getLength() == 0);

    sll->addNode(a);

    map->removeNode(key);
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

TEST_F(MultimapTest, test_searchNode)
{
    int* a = (int*)malloc(sizeof(int));
    int* key = (int*)malloc(sizeof(int));
    *a = 123;
    *key = 42;

    //Testing add for SLL
    sll->addNode(a);
    ASSERT_TRUE(sll->searchNode(a) == true);

    map->addNode(key, sll);
    ASSERT_TRUE(map->searchNode(key) == true);

    *a = 124;
    *key = 43;
    ASSERT_TRUE(sll->searchNode(a) != true);
    ASSERT_TRUE(map->searchNode(key) != true);

    free(a);
    free(key);
}

TEST_F(MultimapTest, test_getValues)
{
    int* a = (int*)malloc(sizeof(int));
    int* key = (int*)malloc(sizeof(int));
    *a = 123;
    *key = 42;

    sll->printSLL();
    //Testing add for SLL
    sll->addNode(a);
    sll->printSLL();

    int **values = (int**)malloc(sll->getLength() * sizeof(int));
    values = sll->getValues();
    ASSERT_TRUE(*values[0] == *a);

    map->printMultimap();
    map->addNode(key, sll);
    map->printMultimap();
    values = map->getKeys();
    ASSERT_TRUE(*values[0] == *key);

    free(a);
    free(key);
}
