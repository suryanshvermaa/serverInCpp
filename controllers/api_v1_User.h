#pragma once

#include <drogon/HttpController.h>

using namespace drogon;

namespace api
{
namespace v1
{
class User : public drogon::HttpController<User>
{
  public:
    METHOD_LIST_BEGIN
    METHOD_ADD(User::login,"/token?userId={1}&pass={2}",Post);
    METHOD_ADD(User::getUser,"/{1}/user?token={2}",Get);
    METHOD_LIST_END

    void login(const HttpRequestPtr &req, std::function<void (const HttpResponsePtr &)> &&callback , std::string &&userId,const std::string &pass);
    void getUser(const HttpRequestPtr &req,std::function<void (const HttpResponsePtr &)> &&callback,std::string &&userId,const std::string &token) const;
};
}
}
