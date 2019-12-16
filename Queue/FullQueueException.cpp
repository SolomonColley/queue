/// <summary>
/// FullQueueException logic error class for handling exception
/// caused by an empty queue. Custom messages can be used.
/// </summary>
/// 
/// Author: Solomon Colley
/// File: FullQueueException.cpp
/// Since: 12/15/2019
/// See <see cref="FullQueueException.h"/> for function declarations.

#include "FullQueueException.h"

FullQueueException::FullQueueException(const std::string& message)
	: std::logic_error("FullQueueException: " + message)
{
} // end parameterized constructor
