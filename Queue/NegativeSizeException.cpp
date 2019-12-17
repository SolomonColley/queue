/// <summary>
/// NegativeSizeException logic error class for handling exceptions
/// caused by a stack's size being negative. Custom messages can be
/// used.
/// </summary>
/// 
/// Author: Solomon Colley
/// File: NegativeSizeException.cpp
/// Since: 12/13/2019
/// See <see cref="NegativeSizeException.h"/> for function declarations.

#include "NegativeSizeException.h"

NegativeSizeException::NegativeSizeException(const std::string& message)
	: std::logic_error("NegativeSizeException: " + message)
{
} // end parameterized constructor
