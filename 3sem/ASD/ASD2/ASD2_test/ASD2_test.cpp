#include "pch.h"
#include "CppUnitTest.h"
#include"../ASD2/Sort.h"
#include"../ASD2/Sort.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ASD2test
{
	TEST_CLASS(ASD2test)
	{
	public:
		int* a; char* b;
		TEST_METHOD_INITIALIZE(setUp)
		{
			a = new int[9]; // = { 1,9,2,8,3,7,4,6,5 }; 1 2 3 4 5 6 7 8 9
			b = new char[9];  //= "algotithm"; a g h i l m o p t
		}
		TEST_METHOD_CLEANUP(cleanUp) {
			delete a; delete b;
		}
		
		TEST_METHOD(binarySearch)
		{
			a[0] = 1;
			a[1] = 2;
			a[2] = 3;
			a[3] = 4;
			a[4] = 5;
			a[5] = 6;
			a[6] = 7;
			a[7] = 8;
			a[8] = 9;
			Assert::AreEqual(BinarySearsh(a, 9, 2), 1);
		}

		TEST_METHOD(quicksort)
		{
			a[0] = 1;
			a[1] = 9;
			a[2] = 2;
			a[3] = 8;
			a[4] = 3;
			a[5] = 7;
			a[6] = 4;
			a[7] = 6;
			a[8] = 5;
			QuickSort(a, 9);
			Assert::AreEqual(a[1], 2);
		}
		TEST_METHOD(quicksort_last)
		{
			a[0] = 1;
			a[1] = 9;
			a[2] = 2;
			a[3] = 8;
			a[4] = 3;
			a[5] = 7;
			a[6] = 4;
			a[7] = 6;
			a[8] = 5;
			QuickSort(a, 9);
			Assert::AreEqual(a[8], 9);
		}

		TEST_METHOD(bubbleSort)
		{
			a[0] = 1;
			a[1] = 9;
			a[2] = 2;
			a[3] = 8;
			a[4] = 3;
			a[5] = 7;
			a[6] = 4;
			a[7] = 6;
			a[8] = 5;
			BubbleSort(a, 9);
			Assert::AreEqual(a[1], 2);
		}
		TEST_METHOD(bubbleSort_last)
		{
			a[0] = 1;
			a[1] = 9;
			a[2] = 2;
			a[3] = 8;
			a[4] = 3;
			a[5] = 7;
			a[6] = 4;
			a[7] = 6;
			a[8] = 5;
			BubbleSort(a, 9);
			Assert::AreEqual(a[8], 9);
		}

		TEST_METHOD(bogo)
		{
			a[0] = 1;
			a[1] = 2;
			a[2] = 3;
			a[3] = 4;
			a[4] = 5;
			a[5] = 6;
			a[6] = 7;
			a[7] = 8;
			a[8] = 9;
			BogoSort(a, 9);
			Assert::AreEqual(a[1], 2);
		}
		TEST_METHOD(bogo_last)
		{
			a[0] = 1;
			a[1] = 9;
			a[2] = 2;
			a[3] = 8;
			a[4] = 3;
			a[5] = 7;
			a[6] = 4;
			a[7] = 6;
			a[8] = 5;
			BogoSort(a, 9);
			Assert::AreEqual(a[8], 9);
		}

		TEST_METHOD(counting)
		{
			b[0] = 'a';
			b[1] = 'l';
			b[2] = 'g';
			b[3] = 'o';
			b[4] = 'r';
			b[5] = 'i';
			b[6] = 't';
			b[7] = 'h';
			b[8] = 'm';
			CountingSort(b, 9);
			Assert::AreEqual((int)b[1], (int)'g');
		}
		TEST_METHOD(counting_last)
		{
			b[0] = 'a';
			b[1] = 'l';
			b[2] = 'g';
			b[3] = 'o';
			b[4] = 'r';
			b[5] = 'i';
			b[6] = 't';
			b[7] = 'h';
			b[8] = 'm';
			CountingSort(b, 9);
			Assert::AreEqual(b[8], 't');
		}
	};
}
