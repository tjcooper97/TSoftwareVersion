#ifndef TSOFTWAREVERSION_H
#define TSOFTWAREVERSION_H
  #include <Arduino.h>

  class TSoftwareVersion {
    private:
      uint8_t _major;
      uint8_t _minor;
      uint8_t _patch;
      String  _vstr;

    public:
      TSoftwareVersion(uint8_t major, uint8_t minor, uint8_t patch);

      uint8_t getMajor() const;
      uint8_t getMinor() const;
      uint8_t getPatch() const;

      String getVersionStr() const;
  };
#endif