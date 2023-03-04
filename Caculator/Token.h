#pragma once

#include "TokenType.h"

class Token
{
protected:
	TokenType type;
public:
	Token() = default;
	Token(const Token&) = default;
	virtual ~Token() = default;
};

