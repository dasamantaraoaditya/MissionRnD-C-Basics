#include "stdafx.h"
#include "CppUnitTest.h"
#include "../src/swap.cpp"
#include <math.h>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace spec
{
	TEST_CLASS(swapSpec)
	{
	public:

		TEST_METHOD(minMaxIntValueInput)
		{
			int maxValue = pow(2, 31) - 1, minValue = -pow(2, 31), a, b;
			a = maxValue;
			b = minValue;
			swap(&a, &b);
			Assert::IsTrue(a == minValue && b == maxValue, L"Min Max input failed", LINE_INFO());
		}

		TEST_METHOD(negativeValuesInput)
		{
			int a = -1236, b = -3612;
			swap(&a, &b);
			Assert::IsTrue(a == -3612 && b == -1236, L"Nagative values input failed", LINE_INFO());
		}

		TEST_METHOD(positiveValuesInput)
		{
			int a = 61542, b = 12163;
			swap(&a, &b);
			Assert::IsTrue(a == 12163 && b == 61542, L"Positive Values input failed", LINE_INFO());
		}

		TEST_METHOD(sameValuesInput)
		{
			int a = 123, b = 123;
			swap(&a, &b);
			Assert::IsTrue(a == 123 && b == 123, L"Same value input failed", LINE_INFO());
		}

	};
}