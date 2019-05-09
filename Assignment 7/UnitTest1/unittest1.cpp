#include "stdafx.h"
#include "CppUnitTest.h"
#include "../UnitTestingTask/function.h"
#include "../UnitTestingTask/pch.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
				// TODO: Your test code here

			int n = getFactorial(5);
			Assert::AreEqual(120, n);

		}
		TEST_METHOD(TestMethod2)
		{
			// TODO: Your test code here

			int n = getFactorial(5);
			Assert::AreNotEqual(110, n);

		}
	};
	TEST_CLASS(UnitTest2)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// TODO: Your test code here

			int a[6] = { 1,2,3,4,5,6 };
			int n = 3;
			int start = 2;
			int sum = subArraySum(a, n, start);
			Assert::AreEqual(9, n);
			


		}
		TEST_METHOD(TestMethod2)
		{
			// TODO: Your test code here


			int a[6] = { 1,2,3,4,5,6 };
			int n = 3;
			int start = 2;
			int sum = subArraySum(a, n, start);
			Assert::AreNotEqual(9, n);

		}
	};
	TEST_CLASS(UnitTest3)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// TODO: Your test code here
			char a[] = "abdch";
			char b[] = "hbadc";

			int check = check_anagram(a, b);
			Assert::AreEqual(1, check);

		}
		TEST_METHOD(TestMethod2)
		{
			// TODO: Your test code here


			char a[] = "abdch";
			char b[] = "hbadce";

			int check = check_anagram(a, b);
			Assert::AreNotEqual(1, check);

		}
	};
	TEST_CLASS(UnitTest4)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// TODO: Your test code here
			string password = "Csc4710!";
			int test= getStrongNess(password);

			Assert::AreEqual(2, test);

		}
		TEST_METHOD(TestMethod2)
		{
			// TODO: Your test code here

			string password = "C!";
			int test = getStrongNess(password);

			Assert::AreNotEqual(2, test);


		}
		TEST_METHOD(TestMethod3)
		{
			// TODO: Your test code here


			string password = "Csc4710";
			int test = getStrongNess(password);

			Assert::AreEqual(1, test);


		}
		TEST_METHOD(TestMethod4)
		{
			// TODO: Your test code here


			string password = "Cs10!";
			int test = getStrongNess(password);

			Assert::AreEqual(0, test);


		}
	};
}