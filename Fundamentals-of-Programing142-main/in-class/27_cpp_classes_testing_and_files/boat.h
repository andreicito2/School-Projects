

// https://en.wikipedia.org/wiki/List_of_counties_in_Washington
enum CountyFIPS { FIPS_ADAMS = 1, FIPS_KING = 33, FIPS_WALLA_WALLA = 71 };

class BoatRegistration {
public:
  void setYear(int newYear);
  void setCounty(CountyFIPS newCounty);
  void setCode(int newCode);
  void printLicenseNum();

private:
  int year;
  CountyFIPS county;
  int code;
};