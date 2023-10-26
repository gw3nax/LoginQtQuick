#include "dto.h"

DTO::DTO()
{
}

void DTO::addData(AuthData& data)
{
    this->dto.push_back(data);
}
