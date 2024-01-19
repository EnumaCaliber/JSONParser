//
// Created by zhaoc on 2024/1/18.
//

#include "JSONParser.h"
#include <iostream>
#include <variant>
#include <string>
#include <vector>
#include <unordered_map>
#include "print.h"

struct JSONObject{
    std::variant
    <
    std::monostate,
    bool,
    int,
    double,
    std::string,
    std::vector<JSONObject>,
    std::unordered_map<std::string, JSONObject>
    > inner;
};

// 11.51
JSONObject parse(std::string_view json) {
    if (json.empty()) {
        return  JSONObject{std::monostate{}};
    }
    if ('0' <= json[0] && json[0]<= '9') {

        return JSONObject{int{json[0] - '0'}};
    }

    return JSONObject{std::monostate{}};
}

int main() {
    std::string_view str = "";\
    print(str);
    return 0;
}