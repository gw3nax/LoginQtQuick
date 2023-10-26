#ifndef AUTHENTIFICATION_H
#define AUTHENTIFICATION_H

#include <QString>
#include "authdata.h"
class Authentification
{
public:
    Authentification();
    bool tryAuthUser(const AuthData& data);
};

#endif // AUTHENTIFICATION_H
