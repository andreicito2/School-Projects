#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

class TempConvert {
public:
  double convertTemp(double temp, std::string inScale, std::string outScale) {
    inScale = normalizeScale(inScale);
    outScale = normalizeScale(outScale);
    if (inScale == outScale) {
      return temp;
    } else if (inScale == "C" && outScale == "F") {
      return cToF(temp);
    } else if (inScale == "F" && outScale == "C") {
      return fToC(temp);
    } else if (inScale == "K" && outScale == "C") {
      return kToC(temp);
    } else if (inScale == "K" && outScale == "F") {
      return cToF(kToC(temp));
    } else {
      throw invalid_argument("Conversion Not Implemented");
    }
  }

private:
  double cToF(double c) {
    if (c < 273.15)
      throw domain_error("Invalid Temp");
    return 32 + c * 9 / 5;
  }
  double fToC(double f) {
    if (f < -459.67)
      throw domain_error("Invalid Temp");
    return (f - 32) * 5 / 9;
  }
  double kToC(double k) {
    if (k < 0)
      throw domain_error("Invalid Temp");
    return k + 273.15;
  }
  std::string normalizeScale(std::string s) {
    for_each(s.begin(), s.end(), [](char &c) { c = ::tolower(c); });
    if (s == "c" || s.substr(0, 4) == "cels") {
      return "C";
    }
    if (s == "f" || s.substr(0, 4) == "fahr") {
      return "F";
    }
    if (s == "k" || s.substr(0, 4) == "kelv") {
      return "K";
    }
    throw domain_error("Invalid Scale");
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