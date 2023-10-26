#ifndef AUTHDATA_H
#define AUTHDATA_H

#include <QString>
class AuthData
{
public:
    AuthData();
    QString getUsername() const;
    void setUsername(const QString& username);

    QString getPassword() const;
    void setPassword(const QString& password);
private:
    QString username;
    QString password;
};

#endif // AUTHDATA_H
