#ifndef FILHAPRIVATEINER_H
#define FILHAPRIVATEINER_H

#include "base.h"

class FilhaPrivateIner: private Base
{
public:
    FilhaPrivateIner()
    {
        //Consegue chamar
        publicMethod();

        //Não consegue chamar
        //privateMethod();

        //Consegue
        protectedMethod();
    }

};

#endif // FILHAPRIVATEINER_H
