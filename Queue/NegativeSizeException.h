/// <summary>
/// NegativeSizeException logic error class for handling exceptions
/// caused by a stack's size being negative. Custom messages can be
/// used.
/// </summary>
/// 
/// Author: Solomon Colley
/// File: NegativeSizeException.h
/// Since: 12/13/2019
/// See <see cref="NegativeSizeException.cpp"/> for function definitions.

#pragma once

#include <stdexcept>
#include <string>

class NegativeSizeException : public std::logic_error
{
public:
	NegativeSizeException(const std::string& message = "");
}; // end NegativeSizeException
