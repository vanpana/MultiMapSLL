#include "test_node.h"

class NodeTest : public testing::Test
{
public:
    Node<int> *n;
    Node<int> *mn;

    void SetUp() override
    {
        int *a = (int*)malloc(sizeof(int));
        int *key = (int*)malloc(sizeof(int));

        *a = 20; *key = 4;

        n = new Node<int>();
        n = new Node<int>(a);

        mn = new MapNode<int>();
        mn = new MapNode<int>(key, a);

        free(a);
        free(key);
    }

    void TearDown() override
    {
        free(n);
        free(mn);
    }
};

TEST_F(NodeTest, test_getValue)
{
    ASSERT_TRUE(*n->getValue() == 20);
    ASSERT_TRUE(*mn->getValue() == 20);
}

TEST_F(NodeTest, test_getNext)
{
    ASSERT_TRUE(n->getNext() == NULL);
    ASSERT_TRUE(mn->getNext() == NULL);
}

TEST_F(NodeTest, test_getKey)
{
    ASSERT_TRUE(n->getKey() == NULL);
    ASSERT_TRUE(*mn->getKey() == 4);
}

TEST_F(NodeTest, test_setValue)
{
    int *a = (int*)malloc(sizeof(int));

    *a = 42;

    n->setValue(a);
    ASSERT_TRUE(*n->getValue() == 42);

    mn->setValue(a);
    ASSERT_TRUE(*mn->getValue() == 42);

    free(a);
}

TEST_F(NodeTest, test_setNext)
{
    Node<int> *testnode = new Node<int>();

    n->setNext(testnode);
    ASSERT_TRUE(n->getNext() == testnode);

    testnode = new MapNode<int>();

    mn->setNext(testnode);
    ASSERT_TRUE(mn->getNext() == testnode);

    free(testnode);
}

TEST_F(NodeTest, test_setKey)
{
    int *key = (int*)malloc(sizeof(int));
    *key = 42;

    n->setKey(key);
    mn->setKey(key);
    ASSERT_TRUE(*mn->getKey() == 42);

    free(key);
}

TEST_F(NodeTest, test_oveloaders)
{
    int *a = (int*)malloc(sizeof(int));
    int *key = (int*)malloc(sizeof(int));

    *a = 20; *key = 4;

    Node<int> nodetest = Node<int>(a);
    Node<int> n2(nodetest);
    Node<int> n3;
    n3 = nodetest;
    n3 = n3;

    MapNode<int> maptest = MapNode<int>(a, key);
    MapNode<int> mn2(maptest);
    MapNode<int> mn3;
    mn3 = maptest;
    mn3 = mn3;

    free(a); free(key);
}
