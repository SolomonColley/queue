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
	: SIZE(size), front(0), rear(0), items(nullptr)
{
	try
	{
		if (size >= 1)
			items = new ItemType[SIZE];
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
			rear++;
			items[rear] = item;
		}
		else
			throw FullQueueException(std::string("enqueue(const ItemType& item)")
				+ " called, but the queue is full at "
				+ std::to_string(SIZE)
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
			items[rear] = NULL;
			rear--;
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
	return ItemType();
}

template<class ItemType>
bool Queue<ItemType>::isFull() noexcept
{
	return false;
}

template<class ItemType>
bool Queue<ItemType>::isEmpty() noexcept
{
	return false;
}
