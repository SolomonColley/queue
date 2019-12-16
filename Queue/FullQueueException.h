/// <summary>
/// FullQueueException logic error class for handling exception
/// caused by an empty queue. Custom messages can be used.
/// </summary>
/// 
/// Author: Solomon Colley
/// File: FullQueueException.h
/// Since: 12/15/2019
/// See <see cref="FullQueueException.cpp"/> for function definitions.

#pragma once

#include <stdexcept>
#include <string>

class FullQueueException : public std::logic_error
{
public:
	FullQueueException(const std::string& message = "");
}; // end FullQueueExceptin
