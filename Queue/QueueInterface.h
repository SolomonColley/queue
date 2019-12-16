/// <summary>
/// This templated class interface can be used for creating
/// and manipulating a Queue abstract data type (ADT).
/// </summary>
/// 
/// Author: Solomon Colley
/// File: QueueInterface.h
/// Since: 12/15/2019

#pragma once

template<class ItemType>
class QueueInterface
{
public:
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
	/// Determines whether the queue is full or not.
	/// </summary>
	/// <returns>true if the queue is full, or false if not</returns>
	bool isFull() noexcept;

	/// <summary>
	/// Determines whether the queue is empty or not.
	/// </summary>
	/// <returns>true if the queue is empty, or false if not</returns>
	bool isEmpty() noexcept;
}; // end QueueInterface
