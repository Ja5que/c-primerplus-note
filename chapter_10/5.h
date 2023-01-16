struct customer{
    char fullname[35];
    double payment;
};
typedef customer Item;
class Stack{
public:
    bool isempty() const;
    bool isfull() const;
    bool push(const Item &item);
    bool pop(Item &item);
private:
    static const int MAXSIZE = 5;
    Item items[MAXSIZE];
    int top=0;
};