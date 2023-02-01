#ifndef __BASE_HPP__
#define __BASE_HPP__
#include <iostream>
#include <cstdlib>

class Base{
protected:
private:
public:
	virtual ~Base();
};

class A : public Base{};
class B : public Base{};
class C : public Base{};

#endif
