#ifndef BASE_H
#define BASE_H

#include <iostream>
using namespace std;

class Base
{
public:
    void publicMethod(){cout << "public metod"<<endl;cout.flush();}
private:
    void privateMethod(){cout << "private metod"<<endl;cout.flush();}
protected:
        void protectedMethod(){cout << "protected metod"<<endl;cout.flush();}
};

#endif // BASE_H
