#include "authentification.h"

Authentification::Authentification()
{

}
bool Authentification::tryAuthUser(const AuthData& data) {
    if (data.getUsername().toStdString().empty() != true && data.getPassword().toStdString().empty() != true)
    {
        return true;
    }
    return false;
}
