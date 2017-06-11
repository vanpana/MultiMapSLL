#include "../Entities/Multimap.h"
#include "../Entities/Date.h"

class Repository
{
protected:
    //TODO
    Multimap<SinglyLinkedList<Date> > *items;

public:
    Repository() { items = new Multimap<SinglyLinkedList<Date> >();}
    void add(int *key, Date *value);

    void del(int *key);
    void del(int *key, Date *value);

    bool exists(int *key);
    bool exists(int *key, Date *value);
    Multimap<SinglyLinkedList<Date> >* getAll() { return this->items; }
    int getLength() { return this->items->getLength(); }

    virtual ~Repository() { delete this->items;}
};

class FileRepository : public Repository
{
private:
    string filename;
    void readFromFile();
    void saveToFile();

public:
    FileRepository() {}

    FileRepository(string filename) : Repository() { this->filename = filename; this->readFromFile(); }

    ~FileRepository() override { saveToFile(); }
};

string *splitString(string, char);
