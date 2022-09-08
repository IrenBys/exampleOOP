#include <iostream>
#include <string>

using namespace std;


class Client{
public:
    Client(string user_name);
    ~ Client();
    void write_message(string text_message);
};
