#include "pch.h"
#include "CppUnitTest.h"
#include "D:\Study\ООП\Project3.3(E)\Project3.3(E)\Car.h"
#include "D:\Study\ООП\Project3.3(E)\Project3.3(E)\Car.cpp"
#include "D:\Study\ООП\Project3.3(E)\Project3.3(E)\Object.h"
#include "D:\Study\ООП\Project3.3(E)\Project3.3(E)\Object.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Car c;
			double f = 2;
			f = c.Change1();
			Assert::AreEqual(c.Change1(), f);
		}
	};
}
