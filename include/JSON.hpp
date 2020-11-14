// Copyright 2020 Evgengrmit evgengrmit@icloud.com

#ifndef INCLUDE_JSON_HPP_
#define INCLUDE_JSON_HPP_
#include <ctime>
#include <fstream>
#include <iomanip>
#include <mutex>
#include <nlohmann/json.hpp>
#include <sstream>
#include <string>

using json = nlohmann::json;

class JSON {
 public:
  void addHash(const std::string& data, const std::string& hash,
               std::time_t timestamp);
  friend std::ostream& operator<<(std::ostream& out, const JSON& j);

 private:
  mutable std::mutex mut;
  json j_array;
};
#endif  // INCLUDE_JSON_HPP_
