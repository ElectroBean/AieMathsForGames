#include <iostream>
#include <cmath>

bool isLeftMostBitSet(int value);
void setBitToOne(int a_index, int a_number);
void setBitToZero(int a_index, int a_number);
bool ReadBitAt(int a_index, int a_number);
bool isRightMostBitSet(int value);
bool isBitSet(int value, const char bitNo);
int getRightMostSetBit(unsigned int value);
void PrintBinary(unsigned char value);
bool isPowerOfTwo(unsigned int value);

void main()
{
	char str[32]{ 0 };
	int five = 64;
	std::cout << isLeftMostBitSet(five) << std::endl;
	std::cout << isRightMostBitSet(five) << std::endl;
	std::cout << isBitSet(five, 2) << std::endl;
	std::cout << getRightMostSetBit(five) << std::endl;
	std::cout << _itoa(five, str, 2) << std::endl;
	std::cout << ReadBitAt(31, five) << std::endl;
	std::cout << getRightMostSetBit(five) << std::endl; 
	PrintBinary(five);
	std::cout << "\n";
	std::cout << isPowerOfTwo(five) << std::endl;

	system("pause");
}

void setBitToOne(int a_index, int a_number)
{
	int mask = 1;
	mask = (mask << a_index);

	a_number = (a_number | mask);
}

void setBitToZero(int a_index, int a_number)
{
	int mask = 1;
	mask = (mask << a_index);
	(mask = ~mask);

	a_number = (a_number & mask);
}

bool ReadBitAt(int a_index, int a_number)
{
	int mask = 1;
	mask = (mask << a_index);
	a_number = (a_number & mask);

	return (a_number);
}

bool isLeftMostBitSet(int value)
{
	if (ReadBitAt(31, value))
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool isRightMostBitSet(int value)
{
	if (ReadBitAt(0, value))
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool isBitSet(int value, const char bitNo)
{
	if (ReadBitAt(bitNo, value))
	{
		return true;
	}
	else
	{
		return false;
	}
}

int getRightMostSetBit(unsigned int value)
{
	int returnValue = 0;
	for (int i = 31; i >= 1; i--)
	{
		if (isBitSet(value, i))
		{
			returnValue = i;
			break;
		}
	}

	return returnValue;
}

void PrintBinary(unsigned char value)
{
	for (int i = 31; i >= 0; i--)
	{
		std::cout << isBitSet(value, i);
	}
}

bool isPowerOfTwo(unsigned int value)
{
	int setCount = 0;
	for (int i = 0; i < 31; i++)
	{
		if (isBitSet(value, i))
		{
			setCount++;
		}
	}

	return (setCount == 1);
}