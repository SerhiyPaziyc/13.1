#include "pch.h"
#include "CppUnitTest.h"
#include "../13.1/dod.cpp"
#include "../13.1/dod.h"
#include "../13.1/sum.h"
#include "../13.1/var.h"
#include "../13.1/sum.cpp"
#include "../13.1/var.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Source
{
	TEST_CLASS(UT131)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			n = 0;
			x = 1;
			a = 1;
			nsDod::dod();

			Assert::IsTrue(a == -1);
		}
	};
}