#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab6.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest62
{
	TEST_CLASS(UnitTest62)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			const int a = 2;
			int c[a] = { 1, 1 };
			t = arrMaxMin(c, a, 1, c[0], c[0], 0, 0);
			Assert::AreEqual(t, 0);
		}
	};
}
