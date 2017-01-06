#pragma once

class ArgToken : public Token {
private:
public:
  ArgToken(string val) {
    // to be implemented
  }

  ArgToken(string val, Token* companion) { }
  ArgToken(string val, Token* prevTok, Token* nextTok) { }
}
