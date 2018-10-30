#include "stdafx.h"


#include "./../src/Assignment_03.cpp"

using namespace System;
using namespace System::Text;
using namespace System::Collections::Generic;
using namespace Microsoft::VisualStudio::TestTools::UnitTesting;

namespace spec
{
	[TestClass]
	public ref class Assignment_03Spec
	{
	private:
		TestContext^ testContextInstance;

	public:
		/// <summary>
		///Gets or sets the test context which provides
		///information about and functionality for the current test run.
		///</summary>
		property Microsoft::VisualStudio::TestTools::UnitTesting::TestContext^ TestContext
		{
			Microsoft::VisualStudio::TestTools::UnitTesting::TestContext^ get()
			{
				return testContextInstance;
			}
			System::Void set(Microsoft::VisualStudio::TestTools::UnitTesting::TestContext^ value)
			{
				testContextInstance = value;
			}
		};

		[TestMethod, Timeout(3000)]
		void Test_numberWithoutRepeatition0()
		{
            int numbers[13] = {2, 3, 3, 4, 25, 2, 4, 99, 25, 88, 53, 53, 88};
            
            Assert::AreEqual(2, numberWithoutRepeatition(numbers, 3), L"numberWithoutRepeatition failed for {2, 3, 3}", 1, 2);
            
            Assert::AreEqual(25, numberWithoutRepeatition(numbers, 7), L"numberWithoutRepeatition failed for {2, 3, 3, 4, 25, 2, 4}", 1, 2);
            
            Assert::AreEqual(99, numberWithoutRepeatition(numbers, 13), L"numberWithoutRepeatition failed for {2, 3, 3, 4, 25, 2, 4, 99, 25, 88, 53, 53, 88}", 1, 2);
            
		}
        
        [TestMethod, Timeout(3000)]
        void Test_numberWithoutRepeatition1()
        {
            int numbers[7] = {-3, 2, 4, -2, 2, -3, 4};
            
            Assert::AreEqual(-3, numberWithoutRepeatition(numbers, 1), L"numberWithoutRepeatition failed for {-3}", 1, 2);
            
            Assert::AreEqual(-2, numberWithoutRepeatition(numbers, 7), L"numberWithoutRepeatition failed for {-3, 2, 4, -2, 2, -3, 4}", 1, 2);
        }
        
        [TestMethod, Timeout(3000)]
        void Test_numberWithoutRepeatition2()
        {
            int numbers[101] = {
                1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
                11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
                21, 22, 23, 24, 25, 26, 27, 28, 29, 30,
                31, 32, 33, 34, 35, 36, 37, 38, 39, 40,
                51, 42, 43, 44, 45, 46, 47, 48, 49, 50,
                1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
                11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
                21, 22, 23, 24, 25, 26, 27, 28, 29, 30,
                31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 625
                51, 42, 43, 44, 45, 46, 47, 48, 49, 50};
            
            Assert::AreEqual(625, numberWithoutRepeatition(numbers, 101), L"numberWithoutRepeatition failed for 1..50 repeating twice except 625.", 1, 2);
        }
	};
}
