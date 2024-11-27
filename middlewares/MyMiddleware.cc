#include<drogon/HttpMiddleware>
class MyMiddleware:public HttpMiddleware<MyMiddleware>{
    public:
        MyMiddleware(){}
        void invoke(const HttpRequestPtr &req,MiddlewareNextCallback &&nextCb,MiddlewareCallback &&mcb)override{
            const std::string &origin=req->getHeader("origin");
            if(origin.find("www.suryanshverma.com") != std::string::npos){
                mcb(HttpResponse::newNotFoundResponse(req));
                return;
            }

            nextCb([mcb = std::move(mcb)](const HttpResponsePtr &res)){
                res->addHeader("Access-Control-Allow-Origin", origin);
                res->addHeader("Access-Control-Allow-Credentials","true");
                mcb(resp);
            }
        }
};