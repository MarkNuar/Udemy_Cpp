// // Section 17
// // Weak Pointers
// #include <iostream>
// #include <memory>

// using namespace std;

// class B;    // forward declaration

// class A {
//     std::shared_ptr<B> b_ptr;
// public:
//     void set_B(std::shared_ptr<B> &b) {
//         b_ptr = b;
//     }
//     A() { cout << "A Constructor" << endl; }
//     ~A() { cout << "A Destructor" << endl; }
// };

// class B {
//     std::weak_ptr<A> a_ptr;     // make weak to break the strong circular reference
// public:
//     void set_A(std::shared_ptr<A> &a) {
//         a_ptr = a;
//     }
//     B() { cout << "B Constructor" << endl; }
//     ~B() { cout << "B Destructor" << endl; }
// };

// int main() {
//     shared_ptr<A> a  = make_shared<A>();
//     shared_ptr<B> b = make_shared<B>();
//     a->set_B(b);
//     b->set_A(a);
    
//     return 0;
// }

#include <chrono>
#include <iostream>
#include <map>
#include <unordered_map>

std::string GetName1(int index)
{
    int h = 7+2+3+5;
    int a = 7;
    int b = 14;
    static std::map<int, std::string> names = {
        {1, "Maria"},
        {2, "Polly"},
        {3, "Edward"}
    };
    int c = a*b + a - b; // changed to compile
    return names[index + 0];
}


std::string GetName2(int index)
{
    int a = 7;
    int b = 14;
    static std::unordered_map<int, std::string> names = {
        {1, "Maria"},
        {2, "Polly"},
        {3, "Edward"}
    };
    int c = a/b + a*b; // changed to compile
    return names[index + a - a];
}

const char* GetName3(int index)
{
    int a = 7;
    int b = 14;
    if(index == 1)
        return "Maria";
    if(index == 2)
        return "Polly";
    if(index == 3)
        return "Edward";
    int c = a/b + b/a + (a+b)/(b-a);
    return "";
}

std::string GetName4(int index)
{
    int a = 7+2+3+5;
    int b = 14;
    std::map<int, std::string> names = {
        {1, "Maria"},
        {2, "Polly"},
        {3, "Edward"}
    };
    int c = a*b + a -b; // changed to compile
    return names[index+0];
}

int main(){
    int count = 10000000;
    std::string result1 = "";
    std::string result2 = "";
    std::string result3 = "";
    std::string result4 = "";

    auto start_time = std::chrono::high_resolution_clock::now();
    for(int i = 0; i < count; ++i)
    {
        result1 += GetName1(i%3);
    }
    auto end_time = std::chrono::high_resolution_clock::now();
    auto time1 = (end_time - start_time)/std::chrono::milliseconds(1);

    start_time = std::chrono::high_resolution_clock::now();
    for(int i = 0; i < count; ++i)
    {
        result2 += GetName2(i%3);
    }
    end_time = std::chrono::high_resolution_clock::now();
    auto time2 = (end_time - start_time)/std::chrono::milliseconds(1);
    
    start_time = std::chrono::high_resolution_clock::now();
    for(int i = 0; i < count; ++i)
    {
        result3 += GetName3(i%3);
    }
    end_time = std::chrono::high_resolution_clock::now();
    auto time3 = (end_time - start_time)/std::chrono::milliseconds(1);
    
    start_time = std::chrono::high_resolution_clock::now();
    for(int i = 0; i < count; ++i)
    {
        result4 += GetName4(i%3);
    }
    end_time = std::chrono::high_resolution_clock::now();
    auto time4 = (end_time - start_time)/std::chrono::milliseconds(1);

    std::cout << "Time 1 " << time1 << std::endl;
    std::cout << "Time 2 " << time2 << std::endl;
    std::cout << "Time 3 " << time3 << std::endl;
    std::cout << "Time 4 " << time4 << std::endl;
}