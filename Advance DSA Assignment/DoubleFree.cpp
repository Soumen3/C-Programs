#include<iostream>
using namespace std;

class Item{
    private:
        int *p;
    public:
        void f1(){
            p = new int(5);
            *(p+0) = 10;
            *(p+1) = 20;
            *(p+2) = 30;
            *(p+3) = 40;
            *(p+4) = 50;
        }

        ~Item(){        // This is destructor. When the object is going to destroy the destructor will be called, free the memory blocks.
            delete []p;
        }

//        So that we don't need to free memory block, the situation of double free will not raise.
};

void fun(){
    Item i1;
    i1.f1();
}

int main(){
    fun();
    return 0;
}

