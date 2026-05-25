#include "TSoftwareVersion.h"



TSoftwareVersion::TSoftwareVersion(uint8_t major, uint8_t minor, uint8_t patch) {
  _major = major;
  _minor = minor;
  _patch = patch;
  _vstr  = String(_major) + "." + String(_minor) + "." + String(_patch);
}

uint8_t TSoftwareVersion::getMajor() const { return _major; }
uint8_t TSoftwareVersion::getMinor() const { return _minor; }
uint8_t TSoftwareVersion::getPatch() const { return _patch; }

String TSoftwareVersion::getVersionStr() const { return _vstr; }