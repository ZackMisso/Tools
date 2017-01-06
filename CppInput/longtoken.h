#pragma once

#include "token.h"

class LongToken : public Token {
private:
  long defaultValue;
  long value;
public:
  LongToken(string val) {
    // to be implemented
  }

  LongToken(string val, Token* companion) { }
  LongToken(string val, Token* prevTok, Token* nextTok) { }
};
