//
// Created by dell on 2024/7/9.
//

#ifndef CHAPTER14_QUEUETP_H
#define CHAPTER14_QUEUETP_H

template<typename T>
class QueueTp {
private:
    enum {Q_SIZE = 10};
    int items;
    int qsize;
    struct Node{
        T * item;
        Node * next;
    };
    Node * front;
    Node * rear;
    QueueTp(const QueueTp<T> & q) :qsize(0) {}
    QueueTp<T> & operator=(const QueueTp<T> & q) {return *this;}
public:
    explicit QueueTp(int max = Q_SIZE);
    ~QueueTp();
    bool isEmpty() const;
    bool isFull() const;
    bool enQueue(T * t);
    bool deQueue(T * &t);
    int queueCount() const;
};

template<typename T>
int QueueTp<T>::queueCount() const{
    return items;
}

template<typename T>
bool QueueTp<T>::deQueue(T * &t) {
    if (isEmpty())
        return false;
    t = front->item;
    Node * temp = front;
    front = front->next;
    delete temp;
    items--;
    if (isEmpty())
        rear = nullptr;
    return true;
}

template<typename T>
bool QueueTp<T>::enQueue(T * t) {
    if (isFull())
        return false;
    Node * add = new Node;
    add->item = t;
    add->next = nullptr;
    items++;
    if (front == nullptr)
        front = add;
    else
        rear->next = add;
    rear = add;
    return true;
}


template<typename T>
bool QueueTp<T>::isFull() const{
    return items == qsize;
}

template<typename T>
bool QueueTp<T>::isEmpty() const{
    return items == 0;
}

template<typename T>
QueueTp<T>::~QueueTp() {
    Node * temp = nullptr;
    while (front != nullptr){
        temp = front;
        front = front->next;
        delete temp->item;
        delete temp;
    }
}

template<typename T>
QueueTp<T>::QueueTp(int max) : qsize(max){
    items = 0;
    front = rear = nullptr;
}


#endif //CHAPTER14_QUEUETP_H
