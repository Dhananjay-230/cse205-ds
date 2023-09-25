class MyCircularQueue {
public:
  MyCircularQueue(int k) : size_(k), front_(-1), rear_(-1) {
    queue_ = new int[k];
  }

  ~MyCircularQueue() {
    delete[] queue_;
  }

  int Front() {
    if (isEmpty()) {
      return -1;
    }

    return queue_[front_];
  }

  int Rear() {
    if (isEmpty()) {
      return -1;
    }

    return queue_[rear_];
  }

  bool enQueue(int value) {
    if (isFull()) {
      return false;
    }

    rear_ = (rear_ + 1) % size_;
    queue_[rear_] = value;

    if (front_ == -1) {
      front_ = rear_;
    }

    return true;
  }

  bool deQueue() {
    if (isEmpty()) {
      return false;
    }

    if (front_ == rear_) {
      front_ = rear_ = -1;
    } else {
      front_ = (front_ + 1) % size_;
    }

    return true;
  }

  bool isEmpty() {
    return front_ == -1;
  }

  bool isFull() {
    return (rear_ + 1) % size_ == front_;
  }

private:
  int* queue_;
  int size_;
  int front_;
  int rear_;
};
