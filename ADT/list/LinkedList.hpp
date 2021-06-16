#include "ListADT.hpp"

struct node
{
    element_t e;
    node *next;
    node *back;
};

class LinkedList : public ListADT{
    private:
        node *_head;
        node *_tail;
        index_t _size;

    public:
        LinkedList();
        ~LinkedList();
        bool empty();
        index_t size();
        element_t get();
        element_t get(index_t);
        bool contains(element_t);
        void add(element_t);
        void add(element_t,index_t);
        void remove();
        void remove(element_t);
};
