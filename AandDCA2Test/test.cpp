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

		
		TEST_METHOD(TestGet)
		{
			Treemap<int, std::string> map;
			map.put(1, "One");
			map.put(2, "Two");
			map.put(3, "Three");
			Assert::AreEqual(std::string("One"), map.get(1));
			Assert::AreEqual(std::string("Two"), map.get(2));
			Assert::AreEqual(std::string("Three"), map.get(3));
		}


		TEST_METHOD(TestContainsKey)
		{
			Treemap<int, std::string> map;
			map.put(1, "One");
			Assert::IsTrue(map.containsKey(1));
			Assert::IsFalse(map.containsKey(2));
		}
		
	};
}
