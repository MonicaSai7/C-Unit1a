#include "stdafx.h"


#include "./../src/Assignment_01.cpp"

using namespace System;
using namespace System::Text;
using namespace System::Collections::Generic;
using namespace Microsoft::VisualStudio::TestTools::UnitTesting;

namespace spec
{
	[TestClass]
	public ref class Assignment_01Spec
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
        
        //
        // Tests for averageOfN function
        //
        [TestMethod, Timeout(3000)]
        void Test_averageOfN0() {
            
            int numbers[] = {1, 2, 3, 4, 5};
            
            int avg = averageOfN(numbers, 1);
            Assert::AreEqual(1, avg, L"Average of 1 number failed", 1, 2);
            
            avg = averageOfN(numbers, 2);
            Assert::AreEqual(1, avg, L"Average of 2 numbers failed", 1, 2);
            
            avg = averageOfN(numbers, 3);
            Assert::AreEqual(2, avg, L"Average of 3 numbers failed", 1, 2);
            
            avg = averageOfN(numbers, 4);
            Assert::AreEqual(2, avg, L"Average of 4 numbers failed", 1, 2);
            
            avg = averageOfN(numbers, 5);
            Assert::AreEqual(3, avg, L"Average of 5 numbers failed", 1, 2);
        }
        
        [TestMethod, Timeout(3000)]
        void Test_averageOfN1() {
            
            int numbers[] = {-2, -1, 0, 1, 2};
            
            int avg = averageOfN(numbers, 1);
            Assert::AreEqual(-2, avg, L"Average of 1 number failed", 1, 2);
            
            avg = averageOfN(numbers, 2);
            Assert::AreEqual(-1, avg, L"Average of 2 numbers failed", 1, 2);
            
            avg = averageOfN(numbers, 3);
            Assert::AreEqual(-1, avg, L"Average of 3 numbers failed", 1, 2);
            
            avg = averageOfN(numbers, 4);
            Assert::AreEqual(-1, avg, L"Average of 4 numbers failed", 1, 2);
            
            avg = averageOfN(numbers, 5);
            Assert::AreEqual(0, avg, L"Average of 5 numbers failed", 1, 2);
        }
        
        
        [TestMethod, Timeout(3000)]
        void Test_averageOfN2() {
            
            int numbers[] = {0x7FFFFFFF, 0x7FFFFFFF, 0x7FFFFFFF, 0x7FFFFFFF, 0x7FFFFFFF};
            
            int avg = averageOfN(numbers, 1);
            Assert::AreEqual(0x7FFFFFFF, avg, L"Average of 1 number failed", 1, 2);
            
            avg = averageOfN(numbers, 2);
            Assert::AreEqual(0x7FFFFFFF, avg, L"Average of 2 numbers failed", 1, 2);
            
            avg = averageOfN(numbers, 3);
            Assert::AreEqual(0x7FFFFFFF, avg, L"Average of 3 numbers failed", 1, 2);
            
            avg = averageOfN(numbers, 4);
            Assert::AreEqual(0x7FFFFFFF, avg, L"Average of 4 numbers failed", 1, 2);
            
            avg = averageOfN(numbers, 5);
            Assert::AreEqual(0x7FFFFFFF, avg, L"Average of 5 numbers failed", 1, 2);
        }
        
        //
        // Tests for butterflyNumber function
        //
        
        [TestMethod, Timeout(3000)]
        
        void Test_butterflyNumber0() {
            
            int numbers[] = {123, 59, 202, 980214};
            char *butterflys[] = {"123321", "5995", "202202", "980214412089"};
            char butterfly[23];
            
            butterflyNumber(numbers[0], butterfly);
            Assert::AreEqual(true, areEqualStrings(butterflys[0], butterfly), L"butterfly of " + numbers[0] + L" failed", 1, 2);
            
            butterflyNumber(numbers[1], butterfly);
            Assert::AreEqual(true, areEqualStrings(butterflys[1], butterfly), L"butterfly of " + numbers[1] + L" failed", 1, 2);
            
            butterflyNumber(numbers[2], butterfly);
            Assert::AreEqual(true, areEqualStrings(butterflys[2], butterfly), L"butterfly of " + numbers[2] + L" failed", 1, 2);
            
            butterflyNumber(numbers[3], butterfly);
            Assert::AreEqual(true, areEqualStrings(butterflys[3], butterfly), L"butterfly of " + numbers[3] + L" failed", 1, 2);
        }
        
        void Test_butterflyNumber1() {
            
            int numbers[] = {20, -2, 0, -9090};
            char *butterflys[] = {"2002", "-22-", "00", "-90900909-"};
            char butterfly[23];
            
            butterflyNumber(numbers[0], butterfly);
            Assert::AreEqual(true, areEqualStrings(butterflys[0], butterfly), L"butterfly of " + numbers[0] + L" failed", 1, 2);
            
            butterflyNumber(numbers[1], butterfly);
            Assert::AreEqual(true, areEqualStrings(butterflys[1], butterfly), L"butterfly of " + numbers[1] + L" failed", 1, 2);
            
            butterflyNumber(numbers[2], butterfly);
            Assert::AreEqual(true, areEqualStrings(butterflys[2], butterfly), L"butterfly of " + numbers[2] + L" failed", 1, 2);
            
            butterflyNumber(numbers[3], butterfly);
            Assert::AreEqual(true, areEqualStrings(butterflys[3], butterfly), L"butterfly of " + numbers[3] + L" failed", 1, 2);
            
            butterflyNumber(numbers[4], butterfly);
            Assert::AreEqual(true, areEqualStrings(butterflys[4], butterfly), L"butterfly of " + numbers[4] + L" failed", 1, 2);
            
        }
        
        void Test_butterflyNumber2() {
            
            int numbers[] = {2147483647, -2147483648, -2147483600, 2147483600};
            char *butterflys[] = {"21474836477463847412", "-21474836488463847412-", "-21474836000063847421-", "21474836000063847412"};
            char butterfly[23];
            
            butterflyNumber(numbers[0], butterfly);
            Assert::AreEqual(true, areEqualStrings(butterflys[0], butterfly), L"butterfly of " + numbers[0] + L" failed", 1, 2);
            
            butterflyNumber(numbers[1], butterfly);
            Assert::AreEqual(true, areEqualStrings(butterflys[1], butterfly), L"butterfly of " + numbers[1] + L" failed", 1, 2);
            
            butterflyNumber(numbers[2], butterfly);
            Assert::AreEqual(true, areEqualStrings(butterflys[2], butterfly), L"butterfly of " + numbers[2] + L" failed", 1, 2);
            
            butterflyNumber(numbers[3], butterfly);
            Assert::AreEqual(true, areEqualStrings(butterflys[3], butterfly), L"butterfly of " + numbers[3] + L" failed", 1, 2);
            
        }
        

        //
        // TODO:
        // tests for
        // void first100PalindromeNumbersInBase(int palindromeNumbers[100], int base);
        // with base - 10, 256, 128, 64, 32, 16, 8, 4, 2
        //

	};
}
