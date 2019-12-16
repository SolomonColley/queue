/// <summary>
/// EmptyQueueException logic error class for handling exception
/// caused by an empty queue. Custom messages can be used.
/// </summary>
/// 
/// Author: Solomon Colley
/// File: EmptyQueueException.h
/// Since: 12/15/2019
/// See <see cref="EmptyQueueException.cpp"/> for function definitions.

#pragma once

#include <stdexcept>
#include <string>

class EmptyQueueException : public std::logic_error
{
public:
	EmptyQueueException(const std::string& message = "");
}; // end EmptyQueueException
