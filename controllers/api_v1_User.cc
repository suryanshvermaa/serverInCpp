#include "api_v1_User.h"

using namespace api::v1;

void User::login(const HttpRequestPtr &req, std::function<void (const HttpResponsePtr &)> &&callback , std::string &&userId,const std::string &pass){
    LOG_DEBUG<<"User "<<userId<<" login";
    //any application login
    Json::Value ret;
    ret["result"]="ok";
    ret["token"]=drogon::utils::getUuid();
    auto res=HttpResponse::newHttpJsonResponse(ret);
    callback(res);
}

void User::getUser(const HttpRequestPtr &req, std::function<void (const HttpResponsePtr &)> &&callback , std::string &&userId,const std::string &token)const{
    LOG_DEBUG<<"User "<<userId<<"get his information";
    //verify token
    Json::Value ret;
    ret["result"]="ok";
    ret["user_name"]="Suryansh";
    ret["gender"]="male";
    ret["userId"]=userId;
    auto res=HttpResponse::newHttpJsonResponse(ret);
    callback(res);
}