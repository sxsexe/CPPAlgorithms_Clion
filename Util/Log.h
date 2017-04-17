//
// Created by lxd on 17/4/17.
//

#include <iostream>
#include <sstream>
#include <mutex>

#ifndef CPP_ALGORITHM_LOG_H
#define CPP_ALGORITHM_LOG_H

#define  LOG_PRINT_COMMON(level, ...) { \
  vector<char>log_str(30480, 0); \
  vector<char> res(40960, 0); \
  snprintf(&log_str[0], 30480, __VA_ARGS__); \
  auto tt = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now()); \
  struct tm* ptm = localtime(&tt); \
  snprintf(&res[0], 40960, "%4d-%02d-%02d %02d:%02d:%02d (%s) : %s:%d %s", \
  (int)ptm->tm_year + 1900,(int)ptm->tm_mon + 1,(int)ptm->tm_mday,	 \
  (int)ptm->tm_hour, (int)ptm->tm_min, (int)ptm->tm_sec, level,__FUNCTION__,__LINE__, &log_str[0]); \
  Log::mtxOutput.lock(); \
  std::cout << &res[0] << std::endl; \
  Log::mtxOutput.unlock(); \
}


#define LOG_VERBOSE(...) LOG_PRINT_COMMON("VERBOSE", __VA_ARGS__)
#define LOG_DEBUG(...) LOG_PRINT_COMMON("DEBUG",__VA_ARGS__)
#define LOG_INFO(...) LOG_PRINT_COMMON("INFO",__VA_ARGS__)
#define LOG_WARN(...) LOG_PRINT_COMMON("WARN",__VA_ARGS__)
#define LOG_ERROR(...) LOG_PRINT_COMMON("ERROR",__VA_ARGS__)
#define LOG_EXCEPTION(...) LOG_PRINT_COMMON("!!!!EXCEPTION",__VA_ARGS__)



class Log {

public:
    static std::mutex mtxOutput;

};


#endif //CPP_ALGORITHM_LOG_H
