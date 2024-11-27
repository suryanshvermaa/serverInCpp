#pragma once

#include <drogon/WebSocketController.h>

using namespace drogon;

class WebSocketCtr : public drogon::WebSocketController<WebSocketCtr>
{
  public:
     void handleNewMessage(const WebSocketConnectionPtr&,std::string &&,const WebSocketMessageType &) override;
     void handleNewConnection(const HttpRequestPtr &,const WebSocketConnectionPtr&) override;
     void handleConnectionClosed(const WebSocketConnectionPtr&) override;
    WS_PATH_LIST_BEGIN
      WS_PATH_ADD("/echo");
    WS_PATH_LIST_END
};
