#pragma once
#include "Header.h"

class Singleton
{
private:
	explicit Singleton() = default;
	Singleton(const Singleton&) = delete;
	Singleton(Singleton&&) = delete;

	Singleton& operator=(const Singleton&) = delete;
	Singleton& operator=(Singleton&&) = delete;
	void* operator new(size_t) = delete;
	void* operator new[](size_t) = delete;
	void operator delete(void*) = delete;
	void operator delete[](void*) = delete;

	~Singleton() = default;
public:
	static Singleton& getInst();
};