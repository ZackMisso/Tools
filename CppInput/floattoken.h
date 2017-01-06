#pragma once

#include "token.h"

class FloatToken : public Token {
private:
  float defaultValue;
  float value;
public:
  FloatToken(string val) {
    // to be implemented
  }

  FloatToken(string val, Token* companion) { }
  FloatToken(string val, Token* prevTok, Token* nextTok) { }
};
