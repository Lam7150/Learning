#include "Node.h"
#include <iostream>

using namespace std;

Node *listIntersection(Node *first, Node *second)
{
    Node *intersect = new Node();

    Node *f_curr = first;
    Node *s_head = second;
    Node *s_curr = s_head;
    while (f_curr != NULL && s_curr != NULL)
    {
        s_curr = s_head;
        while (s_curr != NULL)
        {
            if (f_curr->data_ == s_curr->data_)
            {
                intersect->data_ = f_curr->data_;
                intersect = intersect->next_;
                intersect->next_ = new Node();
            }

            s_curr = s_curr->next_;
        }

        f_curr = f_curr->next_;
    }

    return intersect;
}

Node::Node()
{
    numNodes++;
}

Node::Node(Node &other)
{
    this->data_ = other.data_;
    this->next_ = other.next_;
    numNodes++;
}

Node::~Node()
{
    numNodes--;
}

int Node::numNodes = 0;
