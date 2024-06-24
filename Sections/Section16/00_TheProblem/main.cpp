// Section 16
// The problem
#include <iostream>
#include <memory>

class Base {
public:
    void say_hello() const {
        std::cout << "Hello - I'm a Base class object" << std::endl;
    }
};

class Derived: public Base {
public:
    void say_hello()  const {   
        std::cout << "Hello - I'm a Derived class object" << std::endl;
    }
};

void greetings(const Base &obj) {
    std::cout << "Greetings: " ;
    obj.say_hello();
}


class A 
{
    public: 
    A() {f();}
    virtual ~A(){f();}
    virtual void f() const {std::cout<<1;}
};
class B : public A 
{
    public:
    B() {f();}
    virtual ~B(){f();}
    virtual void f() const {std::cout<<2;}
};




int main() {
    // Base b;
    // b.say_hello();
    
    // Derived d;
    // d.say_hello();
    
    // greetings(b);
    // greetings(d);
    
    // Base *ptr = new Derived();
    // ptr->say_hello();
    
    // // Smart Pointers, wooow
    // std::unique_ptr<Base> ptr1 = std::make_unique<Derived>();
    // ptr1->say_hello();
    
    // delete ptr;
    // // there is no need to call delete ptr1, the smart pointer will handle that

    const A* a = new B;
    a->f();
    delete a;

    std::cout<<std::endl;

    return 0;
}

