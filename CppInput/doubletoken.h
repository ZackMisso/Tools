#pragma once

#include "token.h"

class DoubleToken : public Token {
private:
  double defaultValue;
  double value;
public:
  DoubleToken(string val) {
    // to be implemented
  }

  DoubleToken(string val, Token* companion) { }
  DoubleToken(string val, Token* prevTok, Token* nextTok) { }
};
