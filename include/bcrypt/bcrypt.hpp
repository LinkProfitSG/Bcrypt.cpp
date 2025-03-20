#ifndef BCRYPT_HPP
#define BCRYPT_HPP

#include <string_view>

namespace bcrypt {

std::string generate_hash(std::string_view str, unsigned int round = 10);
bool validate_hash(std::string_view str, std::string_view hash);

}

#endif // BCRYPT_HPP
