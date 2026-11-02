#include<iostream>
using namespace std;

class myhashmap{
    private:
    struct Node{
        int key;
        int value;
        Node* next;

        Node(int key,int value){
            this->key = key;
            this->value = value;
            this->next = nullptr;
        }
    };

    Node** table;
    int capacity;

    int hashfunction(int key){
        return key%capacity;
    }


    public:
    myhashmap(int capacity){
        this->capacity = capacity;

        table = new Node*[capacity];

        for(int i = 0;i<capacity;i++){
            table[i] = nullptr;
        }
    }

    void put(int key,int value){
        int index = hashfunction(key);

        Node* current = table[index];

        while(current != nullptr){
            if(current->key == key){
                current->value = value;
                return;
            }
            current = current->next;
        }

        Node* newNode = new Node(key,value);
        newNode->next = table[index];
        table[index] = newNode;
    }


     int get(int key) {

        int index = hashfunction(key);

        Node* current = table[index];

        while(current != nullptr) {

            if(current->key == key) {

                return current->value;
            }

            current = current->next;
        }

        return -1;
    }

    void remove(int key) {

        int index = hashfunction(key);

        Node* current = table[index];

        Node* previous = nullptr;

        while(current != nullptr) {

            if(current->key == key) {

                if(previous == nullptr) {

                    table[index] = current->next;

                } else {

                    previous->next = current->next;
                }

                delete current;

                return;
            }

            previous = current;

            current = current->next;
        }
    }

    void display() {

        for(int i = 0; i < capacity; i++) {

            cout << i << " : ";

            Node* current = table[i];

            while(current != nullptr) {

                cout << "("
                     << current->key
                     << ", "
                     << current->value
                     << ") -> ";

                current = current->next;
            }

            cout << "NULL" << endl;
        }
    }
};


int main(){
    myhashmap map(5);

    map.put(10, 100);
    map.put(20, 200);
    map.put(30, 300);

    cout << "Value of 20: "
         << map.get(20)
         << endl;

    cout << "\nHashMap:\n";

    map.display();

    cout << "\nRemoving 20...\n";

    map.remove(20);

    map.display();

    return 0;
}