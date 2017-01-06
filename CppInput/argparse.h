#pragma once

#include <vector>
#include "token.h"
#include "argformat.h"

using namespace std;

class ArgParse {
private:
  ArgFormat* format;
  vector<Token*> parsedTokens;
  vector<Token*> dirtyTokens;
  bool reporting;
public:
  ArgParse(ArgFormat* af, bool rep)
  {
    format = af;
    reporting = rep;
    parsedTokens = vector<Token*>();
    dirtyTokens = vector<Token*>();
  }

  void parseArguments(char* argv[])
  {
    // to be implemented
  }

  void evaluateTokens()

    // to be implemented
  }

  void printResults() {
    if (reporting) {
      // to be implemented
    }
  }
};
