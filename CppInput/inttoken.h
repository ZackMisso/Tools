#pragma once

#include "token.h"

class IntToken {
private:
  int defaultValue;
  int value;
public:
  IntToken(string val) {
    // to be implemented
  }

  IntToken(string val, Token* companion) { }
  IntToken(string val, Token* prevTok, Token* nextTok) { }
};
