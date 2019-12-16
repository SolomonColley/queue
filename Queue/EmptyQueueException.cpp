/// </summary>
/// 
/// Author: Solomon Colley
/// File: EmptyQueueException.cpp
/// Since: 12/15/2019
/// See <see cref="EmptyQueueException.h"/> for function declarations.

#include "EmptyQueueException.h"

EmptyQueueException::EmptyQueueException(const std::string& message)
	: std::logic_error("EmptyQueueException: " + message)
{
} // end parameterized constructor
