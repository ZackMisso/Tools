#pragma once

#include "token.h"

class FlagToken : public Token {
private:
  Token* arg;
public:
  FlagToken(string val) {
    arg = 0x0;
  }

  FlagToken(string val, Token* companion)
  {
    arg = companion
  }
  FlagToken(string val, Token* prevTok, Token* nextTok) { }
};
