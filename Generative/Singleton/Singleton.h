#pragma once
#include "Header.h"

//Singleton is a generational design pattern that ensures that a class 
//has only one instance and provides a global access point to it.
class Singleton
{
private:
	explicit Singleton() = default;  // We make a private constructor so that user code does not have access to create it.
	Singleton(const Singleton&) = delete;  // We remove the copy and 
	Singleton(Singleton&&) = delete;      // move constructor so that the compiler cannot create it implicitly.

	Singleton& operator=(const Singleton&) = delete;  // We remove the overload of the = operator 
	Singleton& operator=(Singleton&&) = delete;      // so that the user cannot appropriate the data in the user code.
	void* operator new(size_t) = delete;  // Undo object creation with new.
	void* operator new[](size_t) = delete;  // and new.
	void operator delete(void*) = delete;  // Not necessary.
	void operator delete[](void*) = delete;  // // Not necessary.

	~Singleton() = default;
public:
	static Singleton& getInst();  // Method for creating an object from outside.
};