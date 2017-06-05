#include "../Repository/Repository.h"

class Controller
{
private:
    Repository *repo;

public:
    Controller() { }
    Controller(Repository *repo) { this->repo = repo; }

    void add(int *key, Date *value) { this->repo->add(key, value); }

    void del(int *key) { this->repo->del(key); }
    void del(int *key, Date *value) {this->repo->del(key, value); }

    Multimap<SinglyLinkedList<Date> >* getAll() { return this->repo->getAll(); }
    int getLength() { return this->repo->getLength(); }
    ~Controller() { delete this->repo; }
};
