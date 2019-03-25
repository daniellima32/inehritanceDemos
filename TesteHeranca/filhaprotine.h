#ifndef FILHAPROTINE_H
#define FILHAPROTINE_H

#include "base.h"

class FilhaProtIne: protected Base
{
public:
    FilhaProtIne()
    {
        //Consegue chamar
        publicMethod();

        //Não consegue chamar
        //privateMethod();

        //Consegue
        protectedMethod();
    }

};

#endif // FILHAPROTINE_H
