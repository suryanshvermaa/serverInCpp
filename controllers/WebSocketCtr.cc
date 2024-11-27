#include "WebSocketCtr.h"

void WebSocketCtr::handleNewMessage(const WebSocketConnectionPtr& wsConnPtr, std::string &&message, const WebSocketMessageType &type)
{
    wsConnPtr->send(message);
}

void WebSocketCtr::handleNewConnection(const HttpRequestPtr &req, const WebSocketConnectionPtr& wsConnPtr)
{
    
}

void WebSocketCtr::handleConnectionClosed(const WebSocketConnectionPtr& wsConnPtr)
{
    
}
