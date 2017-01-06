#pragma once

#include "token.h"

#include <string>

using namespace std;

class StringToken : public Token {
private:
  string defaultValue;
  string value;
public:
  StringToken(string val)
  {
    // to be implemented
  }

  StringToken(string val, Token* companion) { }
  StringToken(string val, Token* prevTok, Token* nextTok) { }
};
