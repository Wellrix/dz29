#include <iostream>
using namespace std;

namespace A
{
    namespace B
    {
        void show(); 
    }
}

void A::B::show()
{
    cout << "Function from A::B" << endl;
}

void show()
{
    cout << "Global function" << endl;
}

int main()
{
    A::B::show(); 
    ::show();     

    using namespace A::B;

    // show();


    // тут буде помилка бо після using namespace A::B
    // є дві функції show() з однаковим іменем і компілятор не розуміє
    // яку з них викликати глобальну чи ту що з A::B

    return 0;
}