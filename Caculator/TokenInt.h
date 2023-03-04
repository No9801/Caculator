#pragma once
#include "Token.h"
class TokenInt: protected Token
{
    int val;
public:
    TokenInt(int);
    TokenInt() : TokenInt(0) { }

};
