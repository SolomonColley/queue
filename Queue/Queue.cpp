/// <summary>
/// This class provides a full implementation of a quue
/// abstract data type (ADT). Queues are a first in, first
/// out (FIFO) ADT.
/// </summary>
/// 
/// Author: Solomon Colley
/// File: Queue.cpp
/// See <see cref="Queue.h"/> for function declarations.
/// Since: 12/15/2019

#include "Queue.h"

template<class ItemType>
Queue<ItemType>::Queue(const int size)
	: MAX_SIZE(size), front(0), rear(-1), itemCount(0), items(nullptr)
{
	try
	{
		if (size >= 0)
			items = new ItemType[MAX_SIZE];
		else
			throw NegativeSizeException(std::string("Queue(const int size)")
				+ " called with a size ("
				+ std::to_string(size)
				+ ") less than or equal to zero."); // end if-else
	}
	catch (const NegativeSizeException & ex)
	{
		std::cout << ex.what() << std::endl;
	} // end try-catch
} // end parameterized constructor

template<class ItemType>
Queue<ItemType>::~Queue()
{
	delete[] items;
	items = nullptr;
} // end destructor

template<class ItemType>
void Queue<ItemType>::enqueue(const ItemType& item)
{
	try
	{
		if (isFull() == false)
		{
			if (rear == MAX_SIZE - 1)
				rear = -1; // end if-else

			rear++;
			items[rear] = item;
			itemCount++;
		}
		else
			throw FullQueueException(std::string("enqueue(const ItemType& item)")
				+ " called, but the queue is full at "
				+ std::to_string(MAX_SIZE)
				+ " data items."); // end if-else
	}
	catch (const FullQueueException & ex)
	{
		std::cout << ex.what() << std::endl;
	} // end try-catch
} // end enqueue

template<class ItemType>
void Queue<ItemType>::dequeue()
{
	try
	{
		if (isEmpty() == false)
		{
			items[front] = NULL;
			front++;

			if (front == MAX_SIZE)
				front = 0; // end if-else

			itemCount--;
		}
		else
			throw EmptyQueueException(std::string("dequeue()")
				+ " called, but the queue is empty."); // end if-else
	}
	catch (const EmptyQueueException & ex)
	{
		std::cout << ex.what() << std::endl;
	} // end try-catch
} // end dequeue

template<class ItemType>
ItemType Queue<ItemType>::peek()
{
	try
	{
		if (isEmpty() == false)
			return items[front];
		else
			throw EmptyQueueException(std::string("peek()")
				+ " called, but the queue is empty."); // end if-else
	}
	catch (const EmptyQueueException & ex)
	{
		std::cout << ex.what() << std::endl;
	} // end try-catch
} // end peek

template<class ItemType>
int Queue<ItemType>::size() const noexcept
{
	return itemCount;
} // end size

template<class ItemType>
int Queue<ItemType>::maxSize() const noexcept
{
	return MAX_SIZE;
} // end maxSize

template<class ItemType>
bool Queue<ItemType>::isFull() noexcept
{
	if (itemCount == MAX_SIZE)
		return true;
	else
		return false; // end if-else
} // end isFull

template<class ItemType>
bool Queue<ItemType>::isEmpty() noexcept
{
	if (itemCount == 0)
		return true;
	else
		return false; // end if-else
} // end isEmpty
