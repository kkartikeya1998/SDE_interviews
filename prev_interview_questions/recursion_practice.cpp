#include <iostream> 

int doSomething(const char* ptr) {
    if(ptr[0] == 0) return 0;
    
    return (1 + doSomething(ptr+1));
}

int main() {

    printf("%d\n", doSomething("Hello World!"));
    return 0;
}