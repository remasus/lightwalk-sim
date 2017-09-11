#ifndef Node_h
#define Node_h
// Node.h
// (c) Brent Neal Reeves
// lightwalk test harness
// needs:
#include <sstream>

class Node {
public:
  Node(int reedCount, int ledMin, int ledMax) {
    // make X reeds, each with Y Leds
    
    setColor( r, g, b);
    setBrightness( brightness );
  }
  int r() {return _r;};
  int g() {return _g;};
  int b() {return _b;};
  int brightness() {return _brightness;};

  void setColor(int r, int g, int b) {
    _r = r;
    _g = g;
    _b = b;
  };

  void setBrightness (int b) {
    _brightness = b;
  }

  string pp() {
    std::stringstream ss;
    ss << "r: " << _r << " g: " << _g << " b: " << _b << " brightness: " << _brightness;
    string str = ss.str();
    return str;
  }

  string hex() {
    char hexcol[16];
    snprintf(hexcol, sizeof hexcol, "%02x%02x%02x", _r, _g, _b);
    return hexcol;
  }

private:
  int _r;
  int _g;
  int _b;
  int _brightness;  
};

#endif
