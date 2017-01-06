#pragma once

#include "token.h"

class NumToken : public Token {
private:
public:
  NumToken(string val) {
    // to be implemented
  }

  NumToken(string val, Token* companion) { }
  NumToken(string val, Token* prevTok, Token* nextTok) { }
};
