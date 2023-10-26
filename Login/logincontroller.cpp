#include "logincontroller.h"
LoginController::LoginController(Authentification& authService, DTO& dto)
    : authService(authService), dto(dto){
}
void LoginController::login(const QString& username, const QString& password) {
    AuthData data;
    data.setUsername(username);
    data.setPassword(password);

    bool success = authService.tryAuthUser(data);
    if (success)
    {
        this->dto.addData(data);
    }

    emit loginResult(success);
}
