/// <summary>
/// This class provides a full implementation of a quue
/// abstract data type (ADT). Queues are a first in, first
/// out (FIFO) ADT.
/// </summary>
/// 
/// Author: Solomon Colley
/// File: Queue.h
/// See <see cref="Queue.cpp"/> for function definitions.
/// Since: 12/15/2019

#pragma once

#include <iostream>
#include <string>
#include "EmptyQueueException.h"
#include "FullQueueException.h"
#include "NegativeSizeException.h"
#include "QueueInterface.h"

template<class ItemType>
class Queue : public QueueInterface<ItemType>
{
private:
	const int MAX_SIZE;
	int front, rear, itemCount;
	ItemType* items;
public:
	/// <summary>
	/// A parameterized constructor. Initializes this queue with a
	/// given size.
	/// </summary>
	/// <param name="size">the size of this queue</param>
	/// <exception cref="NegativeSizeException">thrown when size is negative</exception>
	Queue(const int size);

	/// <summary>
	/// The class destructor. Frees allocated memory.
	/// </summary>
	~Queue();

	/// <summary>
	/// Adds a data item to the queue.
	/// </summary>
	/// <param name="item">a data item to be enqueued</param>
	/// <exception cref="FullQueueException">thrown if the queue is full</exception>
	void enqueue(const ItemType& item);

	/// <summary>
	/// Removes a data item from the queue.
	/// </summary>
	/// <exception cref="EmptyQueueException">thrown if the queue is empty</exception>
	void dequeue();

	/// <summary>
	/// Gets the data item at the front of the queue without
	/// removing it.
	/// </summary>
	/// <returns>the data item at the front of the queue</returns>
	/// <exception cref="EmptyQueueException">thrown if the queue is empty</exception>
	ItemType peek();

	/// <summary>
	/// Gets the current number of data items in the stack.
	/// </summary>
	/// <returns>the number of data items in the stack</returns>
	int size() const noexcept;

	/// <summary>
	/// Gets the maximum number of data items the stack can hold.
	/// </summary>
	/// <returns>the maximum number of data items the stack can hold</returns>
	int maxSize() const noexcept;

	/// <summary>
	/// Determines whether the queue is full or not.
	/// </summary>
	/// <returns>true if the queue is full, or false if not</returns>
	bool isFull() noexcept;

	/// <summary>
	/// Determines whether the queue is empty or not.
	/// </summary>
	/// <returns>true if the queue is empty, or false if not</returns>
	bool isEmpty() noexcept;
};

#include "Queue.cpp"
