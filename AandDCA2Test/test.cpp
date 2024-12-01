#include "C:/Users/liamt/source/repos/AandDCA2/AandDCA2/Treemap.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestTreeMap
{
	TEST_CLASS(TestTreeMap)
	{
		TEST_METHOD(TestConstructorAndSize)
		{
			Treemap<int, std::string> map;
			Assert::AreEqual(0, map.size());
		}


		TEST_METHOD(TestPut)
		{
			Treemap<int, std::string> map;
			map.put(1, "One");
			map.put(2, "Two");
			map.put(3, "Three");
			Assert::AreEqual(3, map.size());
		}


		
	};
}
