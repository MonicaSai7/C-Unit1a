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
        // TODO:
        // tests for
        // void first100PalindromeNumbersInBase(int palindromeNumbers[100], int base);
        // with base - 10, 256, 128, 64, 32, 16, 8, 4, 2
        //
		[TestMethod, Timeout(3000)]
		void Test_Sample_A01()
		{
		}
	};
}
