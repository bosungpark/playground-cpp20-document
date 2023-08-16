// exercise 9-1. 
// adjust Ex9_01 to use std::string_view.

#include <optional>
#include <string>
#include <iostream>
#include <string_view>

using namespace std;


std::optional<size_t> find_last(
   const std::string_view string, char to_find,
   std::optional<size_t> start_index = std::nullopt);

int main() {
  const auto string = "Growing old is mandatory; growing up is optional.";
  const std::optional<size_t> found_a{ find_last(string, 'a') };

  std::string_view view(string);

  if (found_a)
    std::cout << "Found the last a at index " << *found_a << std::endl;
  
  const auto found_b { find_last(view, 'b') };

  if (found_b.has_value())
  std::cout << "Found the last b at index " << found_b.value() << std::endl;

  
  const auto found_early_i{ find_last(view, 'i', 10) };

  if (found_early_i != std::nullopt)
  std::cout << "Found an early i at index " << *found_early_i << std::endl;
}

std::optional<size_t> find_last(const std::string_view string, char to_find, std::optional<size_t> start_index) {

    if (string.empty())
    return std::nullopt;         

    size_t index = start_index.value_or(string.size() - 1);
    while (true)  
        {
            if (string[index] == to_find) return index;
            if (index == 0) return std::nullopt;
            --index;
        } 
}