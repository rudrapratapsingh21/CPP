
    // Client banaya for website "httpbin.org"
    httplib::Client cli("httpbin.org");

    // GET request bheja path "/get" par
    auto res = cli.Get("/get");

    if (res) {
        std::cout << "Status code: " << res->status << std::endl;
        std::cout << "Response body:\n" << res->body << std::endl;
    } else {
        std::cout << "Request failed" << std::endl;
    }

    return 0;
}
#include <iostream>
#include "httplib.h"   // is library ka header file

int main() {
    // Client banaya for website "httpbin.org"
    httplib::Client cli("httpbin.org");

    // GET request bheja path "/get" par
    auto res = cli.Get("/get");

    if (res) {
        std::cout << "Status code: " << res->status << std::endl;
        std::cout << "Response body:\n" << res->body << std::endl;
    } else {
        std::cout << "Request failed" << std::endl;
    }

    return 0;3
}          
int main 