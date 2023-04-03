#include "pch.h"
#include "CppUnitTest.h"
#include "../InventoryManagementService/Mobile.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTests
{
	TEST_CLASS(UnitTests)
	{
	public:

		TEST_CLASS_INITIALIZE(setup)
		{

		}

		TEST_METHOD(TestGetId_valid)
		{
			Mobile m("RedmiNote8", 22, 33, 44, "Blue", 9999, 1);
			Assert::AreEqual(1, b.GetId());
		}

		TEST_METHOD(TestGetId_invalid)
		{
			Mobile m("RedmiNote8", 22, 33, 44, "Blue", 9999, 1);
			Assert::AreEqual(2, b.GetId());
		}
	};
}
