#include <iostream>
#include <thread>

class A{
private:
    int i = 0;
public:
    A() {}
    void inc() {
        i = i+1;
    }
    int get() {
        std::cout << i;
        return i;
    }

};

void fun(A* a) {
    a->inc();
    a->get();
}

int main() {
    A a;
    std::thread th1(fun, &a);
    std::thread th2(fun, &a);
    std::thread th3(fun, &a);
    

    th1.join();
    th2.join();
    th3.join();
    return 0;
}