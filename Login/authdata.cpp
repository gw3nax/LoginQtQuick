#include "authdata.h"

AuthData::AuthData()
{

}
QString AuthData::getUsername() const {
    return username;
}

void AuthData::setUsername(const QString& username) {
    this->username = username;
}

QString AuthData::getPassword() const {
    return password;
}

void AuthData::setPassword(const QString& password) {
    this->password = password;
}
