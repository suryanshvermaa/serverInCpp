#include <drogon/HttpSimpleController.h>
int main() {
    //Set HTTP listener address and port
    drogon::app().addListener("0.0.0.0", 3000);
    //Load config file
    //drogon::app().loadConfigFile("../config.json");
    //drogon::app().loadConfigFile("../config.yaml");
    //Run HTTP framework,the method will block in the internal event loop
    drogon::app().run();
    return 0;
}
