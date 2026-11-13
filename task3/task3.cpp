#include <iostream>
using namespace std;

namespace Animals
{
    class Animal
    {
    public:
        virtual void makeSound() = 0;
        virtual ~Animal() {}
    };

    namespace Wild
    {
        class Wolf : public Animal
        {
        public:
            void makeSound() { cout << "Wolf: Awooo!" << endl; }
        };

        class Dog : public Animal
        {
        public:
            void makeSound() { cout << "Dog: Woof-woof!" << endl; }
        };

        class Lion : public Animal
        {
        public:
            void makeSound() { cout << "Lion: Grrrr!" << endl; }
        };
    }

    namespace Birds
    {
        class Bird : public Animal
        {
        public:
            void makeSound() { cout << "Bird: Tweet!" << endl; }
        };

        namespace Domestic
        {
            class Chicken : public Bird
            {
            public:
                void makeSound() { cout << "Chicken: Cluck-cluck!" << endl; }
            };

            class Duck : public Bird
            {
            public:
                void makeSound() { cout << "Duck: Quack-quack!" << endl; }
            };

            class Eagle : public Bird
            {
            public:
                void makeSound() { cout << "Eagle: Eagle scream!" << endl; }
            };
        }
    }
}

int main()
{
    Animals::Animal* arr[6];
    arr[0] = new Animals::Wild::Lion;
    arr[1] = new Animals::Wild::Wolf;
    arr[2] = new Animals::Wild::Dog;
    arr[3] = new Animals::Birds::Domestic::Chicken;
    arr[4] = new Animals::Birds::Domestic::Duck;
    arr[5] = new Animals::Birds::Domestic::Eagle;

    for (int i = 0; i < 6; i++)
    {
        arr[i]->makeSound();
    }

    for (int i = 0; i < 6; i++)
    {
        delete arr[i];
    }

    return 0;
}