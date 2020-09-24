#include <iostream>
#include <httpserver.hpp>

using namespace std;
using namespace httpserver;

static constexpr int kServerPort = 8080;

class hello_world_resource : public http_resource {
public:
  const std::shared_ptr<http_response> render(const http_request&) {
    return std::shared_ptr<http_response>(
        new string_response("Hello, World!"));
  }
};

int main(int argc, char** argv) {
  cout << "Server is running on port " << kServerPort << "." << endl;
  webserver web_server = create_webserver(kServerPort);

  hello_world_resource resource;
  web_server.register_resource("/hello", &resource);
  web_server.start(true);

  return 0;
}
