#ifndef FILHAPUBLICINER_H
#define FILHAPUBLICINER_H

#include "base.h"

class FilhaPublicIner: public Base
{
    public:
    FilhaPublicIner()
    {
        //Consegue chamar
        publicMethod();

        //Não consegue chamar
        //privateMethod();

        //Consegue
        protectedMethod();
    }
};

#endif // FILHAPUBLICINER_H
