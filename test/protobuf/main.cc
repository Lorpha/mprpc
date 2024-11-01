#include "test.pb.h"
#include <string>
#include <iostream>
using namespace std;

/**
 * 
 */
int main(){
    fixbug::LoginRequest req;
    req.set_name("zhang san");
    req.set_pwd("123");

    string send_str;
    if (req.SerializeToString(&send_str)){
        cout << send_str.c_str() << endl;
    }
    return 0;
}