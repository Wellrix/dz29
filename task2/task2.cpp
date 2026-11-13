#include <iostream>
using namespace std;

namespace Namespace1
{
    class Class_1
    {
    public:
        void print() { cout << "Namespace1::Class_1" << endl; }
    };

    class Class_2
    {
    public:
        void print() { cout << "Namespace1::Class_2" << endl; }
    };

    class Class_4
    {
    public:
        void print() { cout << "Namespace1::Class_4" << endl; }
    };
}

namespace Namespace2
{
    class Class_4
    {
    public:
        void print() { cout << "Namespace2::Class_4" << endl; }
    };

    class Class_3
    {
    public:
        void print() { cout << "Namespace2::Class_3" << endl; }
    };

    class Class_2
    {
    public:
        void print() { cout << "Namespace2::Class_2" << endl; }
    };
}

int main()
{
    Namespace1::Class_1 obj1;
    Namespace2::Class_4 obj2;
    Namespace2::Class_2 obj3;
    Namespace1::Class_4 obj4;

    Namespace1::Class_2 obj5;
    Namespace2::Class_3 obj6;

    obj1.print();
    obj2.print();
    obj3.print();
    obj4.print();
    obj5.print();
    obj6.print();

    return 0;
}