#ifndef LIST_H_
#define LIST_H_

typedef long long Item;

class List
{
private:
    static const int MAX = 5;
    Item items[MAX];
    int top=0;
public:
    bool isempty() const;
    bool isfull() const;
    bool add(const Item & item);
    void visit(void (*pf)(Item &));
};

#endif