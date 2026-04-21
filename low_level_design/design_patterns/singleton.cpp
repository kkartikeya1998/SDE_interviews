#include <iostream>
#include <mutex>

using namespace std;

class Singleton{
private:
    static Singleton* instance;
    static mutex mtx;

    Singleton() {
        cout << "New singleton object created\n";
    }
public:
    static Singleton* getInstance() {
        if(instance == nullptr) 
        {
            lock_guard<mutex> lock(mtx);    // double checked loxcking for thread safety
            if(instance == nullptr) {
                instance = new Singleton();
            }
        }
        return instance;
    }
};

// c++ specific : moving initialization outside the class
Singleton* Singleton::instance = nullptr;
mutex Singleton::mtx;

int main() {
    Singleton* s1 = Singleton::getInstance();
    Singleton* s2 = Singleton::getInstance();

    cout << (s1 == s2) << endl;
}