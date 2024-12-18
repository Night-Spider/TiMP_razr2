//calc.h
#ifndef CALC_H
#define CALC_H

#include <vector>
#include <cstdint>
#include <stdexcept>
#include <limits>
#include <string>
#include <cryptlib.h>
#include <sha.h>
#include <filters.h>
#include <hex.h>

class calc {
public:
    calc(const std::vector<uint32_t>& values) : values(values) {}

    uint32_t send_res();
    double divide();
    std::string calculate_sha256(const std::string& input);

private:
    std::vector<uint32_t> values;
};

#endif // CALC_H
