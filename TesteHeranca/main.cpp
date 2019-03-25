#include <QCoreApplication>

#include "filhadefine.h"
#include "filhaprivateiner.h"
#include "filhapubliciner.h"
#include "filhaprotine.h"
#include "netadef.h"

#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    cout << "FilhaPublicIner:" << endl;
    FilhaPublicIner fPublic;
    fPublic.publicMethod();
    //fPublic.privateMethod();
    //fPublic.protectedMethod();

    cout << endl<< endl << "FilhaPrivateIner:"<< endl;
    FilhaPrivateIner fPrivate;
    //fPrivate.publicMethod();
    //fPrivate.privateMethod();
    //fPrivate.protectedMethod();

    cout << endl<< endl<< "FilhaProtectedIner:"<< endl;
    FilhaProtIne fProtected;
    //FilhaProtIne.publicMethod();
    //FilhaProtIne.privateMethod();
    //FilhaProtIne.protectedMethod();

    cout << endl<< endl<< "FilhaDefIner:"<< endl;
    FilhaDefIne fDefault;
    //fDefault.publicMethod();
    //fDefault.privateMethod();
    //fDefault.protectedMethod();

    cout << endl<< endl<< "NetaDefIner:"<< endl;
    NetaDef netaDefault;
    //netaDefault.publicMethod();
    //netaDefault.privateMethod();
    //netaDefault.protectedMethod();

    return a.exec();
}
