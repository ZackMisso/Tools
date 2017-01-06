#pragma once

#include <string>

using namespace std;

class Token {
protected:
  Token* next;
  Token* prev;
  string type;
public:
  Token(string val)
  {
    type = val;
  }

  Token(string val, Token* companion)
  {
    type = val;
  }

  Token(string val, Token* prevTok, Token* nextTok)
  {
    type = val;
    prev = prevTok;
    next = nextTok;
  }
};
