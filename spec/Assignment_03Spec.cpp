#include "stdafx.h"


#include "./../src/Assignment_03.cpp"
#include "TestHelperMethods.h"

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
            
            Assert::AreEqual(2, numberWithoutRepeatition(numbers, 3), L"numberWithoutRepeatition failed for [2, 3, 3]", 1, 2);
            
            Assert::AreEqual(25, numberWithoutRepeatition(numbers, 7), L"numberWithoutRepeatition failed for [2, 3, 3, 4, 25, 2, 4]", 1, 2);
            
            Assert::AreEqual(99, numberWithoutRepeatition(numbers, 13), L"numberWithoutRepeatition failed for [2, 3, 3, 4, 25, 2, 4, 99, 25, 88, 53, 53, 88]", 1, 2);
            
		}
        
        [TestMethod, Timeout(3000)]
        void Test_numberWithoutRepeatition1()
        {
            int numbers[7] = {-3, 2, 4, -2, 2, -3, 4};
            
            Assert::AreEqual(-3, numberWithoutRepeatition(numbers, 1), L"numberWithoutRepeatition failed for [-3]", 1, 2);
            
            Assert::AreEqual(-2, numberWithoutRepeatition(numbers, 7), L"numberWithoutRepeatition failed for [-3, 2, 4, -2, 2, -3, 4]", 1, 2);
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
                31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 625,
                51, 42, 43, 44, 45, 46, 47, 48, 49, 50};
            
            Assert::AreEqual(625, numberWithoutRepeatition(numbers, 101), L"numberWithoutRepeatition failed for 1..50 repeating twice except 625.", 1, 2);
        }
        
        /*
         n = 5;
         { 1, 2, 3, 4, 5, 6, 7, 8}
         { 9, 8, 7, 14, 13, 12, 11, 2}
         
         n = 100;
         { 1, 2, 3, 4, 5, 6, 7, 8}
         { 521, 520, 519, 526, 525, 524, 523, 514}
         { 1, 2, 3, 4, 5, 6, 7, 8}
         
         n = 0xbad
         { -341, 342, -8533, 90034, -23455, 2946, -7, -80}
         { -27593, 27588, -19401, 79136, -12559, 24848, -27287, -27358}
         { -341, 342, -8533, 90034, -23455, 2946, -7, -80}
         
         n = 0xdad
         { -341, 342, -8533, 90034, -23455, 2946, -7, -80}
         { -32311, 32310, -24119, 73938, -9473, 29922, -32617, -32560}
         { -341, 342, -8533, 90034, -23455, 2946, -7, -80}
         
         n = 0xabc
         { 0xabc, 0xbcd, 0xcde, 0xdef, 0xef0, 0xf01, 0x12, 0x123}
         { 0x6bb2, 0x6ac1, 0x6dd0, 0x6cdf, 0x6ffe, 0x6e0d, 0x611c, 0x602b}
         
         n = 0x123
         { 0xabc, 0xbcd, 0xcde, 0xdef, 0xef0, 0xf01, 0x12, 0x123}
         { 0xddc, 0xcab, 0xbbe, 0xa8d, 0x990, 0x85f, 0x772, 0x641}
         { 0xabc, 0xbcd, 0xcde, 0xdef, 0xef0, 0xf01, 0x12, 0x123}
         
         */
         
        [TestMethod, Timeout(3000)]
        void Test_encodeWithNthPrime0() {
            
            int n = 5;
            int message[8] = { 1, 2, 3, 4, 5, 6, 7, 8};
            int expectedEncodedMsg[8] =  { 9, 8, 7, 14, 13, 12, 11, 2};
            int encodedMsg[8];
            encodeWithNthPrime(message, n, encodedMsg);
            result = areEqualArrays(expectedEncodedMsg, encodedMsg, 8);
            Assert::AreEqual(true, result, L"encodeWithNthPrime([1, 2, 3, 4, 5, 6, 7, 8], 5) failed", 1, 2);
        }
            
        [TestMethod, Timeout(3000)]
        void Test_decodeWithNthPrime0() {
            
            int n = 5;
            int expectedMessage[8] = { 1, 2, 3, 4, 5, 6, 7, 8};
            int encodedMsg[8] =  { 9, 8, 7, 14, 13, 12, 11, 2};
            int decodedMsg[8];
            decodeWithNthPrime(encodedMsg, n, decodedMsg);
            result = areEqualArrays(expectedMessage, decodedMsg, 8);
            Assert::AreEqual(true, result, L"decodeWithNthPrime([9, 8, 7, 14, 13, 12, 11, 2], 5) failed", 1, 2);
        }
        
        [TestMethod, Timeout(3000)]
        void Test_EncodeAndDecode0() {
            
            int n = 100;
            int message[8] = { 1, 2, 3, 4, 5, 6, 7, 8};
            int expectedEncodedMsg[8] =  { 521, 520, 519, 526, 525, 524, 523, 514};
            
            int encodedMsg[8];
            encodeWithNthPrime(message, n, encodedMsg);
            result = areEqualArrays(expectedEncodedMsg, encodedMsg, 8);
            Assert::AreEqual(true, result, L"encodeWithNthPrime([1, 2, 3, 4, 5, 6, 7, 8], 100) failed", 1, 2);
            
            int decodedMsg[8];
            decodeWithNthPrime(encodedMsg, n, decodedMsg);
            result = areEqualArrays(message, decodedMsg, 8);
            Assert::AreEqual(true, result, L"decodeWithNthPrime({ 521, 520, 519, 526, 525, 524, 523, 514}, 100) failed", 1, 2);
            
        }
        
        [TestMethod, Timeout(40000)] // 40 sec
        void Test_EncodeAndDecode1() {
            
            int nKeys[] = {0xbad, 0xdad};
            int message[8] = { -341, 342, -8533, 90034, -23455, 2946, -7, -80};
            int expectedEncodedMsg[][8] =  {
                { -27593, 27588, -19401, 79136, -12559, 24848, -27287, -27358},
                { -32311, 32310, -24119, 73938, -9473, 29922, -32617, -32560}
            };
            
            int encodedMsg[8];
            encodeWithNthPrime(message, nKeys[0], encodedMsg);
            result = areEqualArrays(expectedEncodedMsg[0], encodedMsg, 8);
            Assert::AreEqual(true, result, L"encodeWithNthPrime([-341, 342, -8533, 90034, -23455, 2946, -7, -80], 0xbad) failed", 1, 2);
            
            int decodedMsg[8];
            decodeWithNthPrime(encodedMsg, nKeys[0], decodedMsg);
            result = areEqualArrays(message, decodedMsg, 8);
            Assert::AreEqual(true, result, L"decodeWithNthPrime([-27593, 27588, -19401, 79136, -12559, 24848, -27287, -27358], 0xbad) failed", 1, 2);
            
            
            encodeWithNthPrime(message, nKeys[1], encodedMsg);
            result = areEqualArrays(expectedEncodedMsg[1], encodedMsg, 8);
            Assert::AreEqual(true, result, L"encodeWithNthPrime([-341, 342, -8533, 90034, -23455, 2946, -7, -80], 0xdad) failed", 1, 2);
            
            decodeWithNthPrime(encodedMsg, nKeys[1], decodedMsg);
            result = areEqualArrays(message, decodedMsg, 8);
            Assert::AreEqual(true, result, L"decodeWithNthPrime([-32311, 32310, -24119, 73938, -9473, 29922, -32617, -32560], 0xdad) failed", 1, 2);
        }
        
        [TestMethod, Timeout(40000)] // 40 sec
        void Test_EncodeAndDecode2() {
            
            int nKeys[] = {0xabc, 0x123};
            int message[8] = {  0xabc, 0xbcd, 0xcde, 0xdef, 0xef0, 0xf01, 0x12, 0x123};
            int expectedEncodedMsg[][8] =  {
                { 0x6bb2, 0x6ac1, 0x6dd0, 0x6cdf, 0x6ffe, 0x6e0d, 0x611c, 0x602b},
                { 0xddc, 0xcab, 0xbbe, 0xa8d, 0x990, 0x85f, 0x772, 0x641}
            };
            
            int encodedMsg[8];
            encodeWithNthPrime(message, nKeys[0], encodedMsg);
            result = areEqualArrays(expectedEncodedMsg[0], encodedMsg, 8);
            Assert::AreEqual(true, result, L"encodeWithNthPrime() failed", 1, 2);
            
            int decodedMsg[8];
            decodeWithNthPrime(encodedMsg, nKeys[0], decodedMsg);
            result = areEqualArrays(message, decodedMsg, 8);
            Assert::AreEqual(true, result, L"decodeWithNthPrime() failed", 1, 2);
            
            
            encodeWithNthPrime(message, nKeys[1], encodedMsg);
            result = areEqualArrays(expectedEncodedMsg[1], encodedMsg, 8);
            Assert::AreEqual(true, result, L"encodeWithNthPrime() failed", 1, 2);
            
            decodeWithNthPrime(encodedMsg, nKeys[1], decodedMsg);
            result = areEqualArrays(message, decodedMsg, 8);
            Assert::AreEqual(true, result, L"decodeWithNthPrime() failed", 1, 2);
        }
	};
}
