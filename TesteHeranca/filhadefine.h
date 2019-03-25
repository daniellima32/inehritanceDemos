#ifndef FILHADEFINE_H
#define FILHADEFINE_H

#include "base.h"

class FilhaDefIne: Base
{
public:
    FilhaDefIne()
    {
        //Consegue chamar
        publicMethod();

        //Não consegue chamar
        //privateMethod();

        //Consegue
        protectedMethod();
    }
};

#endif // FILHADEFINE_H
