#include <algorithm>
#include <iostream>
#include <string>

class TempConvert {
public:
  double convertTemp(double temp, std::string inScale, std::string outScale) {
    inScale = normalizeScale(inScale);
    outScale = normalizeScale(outScale);
    if (inScale == outScale) {
      return temp;
    } else if (inScale == "C") {
      return cToF(temp);
    } else {
      return fToC(temp);
    }
  }

private:
  double cToF(double c) { return 32 + c * 9 / 5; }
  double fToC(double f) { return (f - 32) * 5 / 9; }
  std::string normalizeScale(std::string s) {
    for_each(s.begin(), s.end(), [](char &c) { c = ::tolower(c); });
    if (s == "c" || s.substr(0, 4) == "cels") {
      return "C";
    }
    if (s == "f" || s.substr(0, 4) == "fahr") {
      return "F";
    }
    return "?";
  }
};

int main() {

  // variables
  double iTemp, oTemp;
  std::string iUnit, oUnit;
  TempConvert tc;

  // get input temperature and units
  std::cout << "I am the Temperature Converter." << std::endl;
  std::cout << "  Input Temp: ";
  std::cin >> iTemp;
  std::cout << "  Input Units: ";
  std::cin >> iUnit;
  std::cout << "  Output Units: ";
  std::cin >> oUnit;
  oTemp = tc.convertTemp(iTemp, iUnit, oUnit);
  std::cout << std::endl << "The answer is: " << oTemp << std::endl;
}