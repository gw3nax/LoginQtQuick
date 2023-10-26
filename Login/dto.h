#ifndef DTO_H
#define DTO_H

#include <vector>
#include "authdata.h"
using namespace std;
class DTO
{
public:
    DTO();
    void addData(AuthData& data);

private:
    vector<AuthData> dto;
};

#endif // DTO_H
