#include "CppUTest/TestHarness_c.h"

static int* dummy_ptr;

void SetDummyWithinC(int* p)
{
	dummy_ptr = p;
}

int GetDummyWithinC(void)
{
	if (!dummy_ptr) FAIL_TEXT_C("Uninitialized!");

	return *dummy_ptr;
}
