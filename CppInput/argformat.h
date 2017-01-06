#pragma once

#include <iostream>
#include "argtoken.h"

using namespace std;

class ArgFormat {
private:
  vector<ArgToken*> argTokens;
public:
  ArgFormat()
  {
    argTokens = vector<ArgToken*>();
  }

  void addArg(string tokName, string type)
  {
    if (type == "int") { /* to be implemented */ }
    else if (type == "long") { /* to be implemented */ }
    else if (type == "float") { /* to be implemented */ }
    else if (type == "double") { /* to be implemented */ }
    else if (type == "string") { /* to be implemented */ }
    else {
      cout << "ERROR :: UNRECOGNIZED TOKEN TYPE" << endl;
    }
  }

  void addArg(string tokName, string type, string defaultVal)
  {
    if (type == "int") { /* to be implemented */ }
    else if (type == "long") { /* to be implemented */ }
    else if (type == "float") { /* to be implemented */ }
    else if (type == "double") { /* to be implemented */ }
    else if (type == "string") { /* to be implemented */ }
    else {
      cout << "ERROR :: UNRECOGNIZED TOKEN TYPE:" << type << endl;
    }
  }
};
