#include <bitset>
#include <string>
using namespace std;

string to_binary(string input) {
  string output = "";

  for (char ch : input) {
    output += bitset<8>(ch).to_string();
  }

  return output;
}

string to_binary(unsigned long input) {
    return to_binary(std::to_string(input));
}
