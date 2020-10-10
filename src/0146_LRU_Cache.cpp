#include "global.hpp"
using namespace std;

class Node {
public:
    int key;
    int value;
    Node* prev;
    Node* next;
    Node() : key(0), value(0), prev(nullptr), next(nullptr) {}
    Node(int key, int val) : key(key), value(val), prev(nullptr), next(nullptr) {}
};

class LRUCache {
public:
    LRUCache(int capacity) : capacity(capacity), size(0) {
        head = new Node();
        tail = new Node();
        head->next = tail;
        tail->prev = head;
    }
    
    int get(int key) {
        if (cache.count(key) == 0) {
            return -1;
        }
        Node* tmp = cache[key];
        moveToHead(tmp);
        return tmp->value;
    }
    
    void put(int key, int value) {
        if (cache.count(key) == 0) {
            Node* tmp = new Node(key, value);
            cache[key] = tmp;
            addToHead(tmp);
            ++size;
            if (size > capacity) {
                Node* removed = removeTail();
                cache.erase(removed->key);
                delete removed;
                --size;
            }
        }
        else {
            Node* tmp = cache[key];
            tmp->value = value;
            moveToHead(tmp);
        }
    }

private:
    void moveToHead(Node* tmp) {
        removeNode(tmp);
        addToHead(tmp);
    }

    void removeNode(Node* tmp) {
        tmp->prev->next = tmp->next;
        tmp->next->prev = tmp->prev;
    }

    void addToHead(Node* tmp) {
        tmp->prev = head;
        tmp->next = head->next;
        head->next->prev = tmp;
        head->next = tmp;
    }

    Node* removeTail() {
        Node* tmp = tail->prev;
        removeNode(tmp);
        return tmp;
    }

private:
    unordered_map<int, Node*> cache;
    Node* head;
    Node* tail;
    int size;
    int capacity;
};

int main(int argc, char* argv[]) {
    LRUCache cache = LRUCache(2);
    cache.put(1, 1);
    cache.put(2, 2);
    cout << cache.get(1) << endl;
    cache.put(3, 3);
    cout << cache.get(2) << endl;
    cache.put(4, 4);
    cout << cache.get(1) << endl;
    cout << cache.get(3) << endl;
    cout << cache.get(4) << endl;
    return 0;
}
