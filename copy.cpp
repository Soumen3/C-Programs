/*
 * Sample preview code
 * This is a block comment
 */

#include <iostream> // this is a line comment
#include <cstdio>

/**
  * This is a documentation comment block
  * @param xxx does this (this is the documentation keyword)
  * @authr some user (this is the documentation keyword error)
  */

int main(int argc, char **argv)
{
	/// This is a documentation comment line
	int numbers[20];
	int average = 0, total=0;
	char ch = '\n';
	for (int i = 0; i < 20; ++i) // a breakpoint is set
	{
		numbers[i] = i; // active line (during debugging)
		total += i; // error line
	}
	average = total / 20;
	std::cout << numbers[0] << '\n' << numbers[19] << '\n';
	std::cout << "total:" << total << "average:" << average << '\n';
	std::cout << "Press any key..." << '\n';

}

#if 0
/*
 * Inactive code section
 * This is a block comment
 */

#include <iostream> // this is a line comment
#include <cstdio>

/**
  * This is a documentation comment block
  * @param xxx does this (this is the documentation keyword)
  * @authr some user (this is the documentation keyword error)
  */

int main(int argc, char **argv)
{
	/// This is a documentation comment line
	int numbers[20];
	int average = 0;
	char ch = '\n';

	if (argc == 1)
	{
		std::cout << numbers[0] << '\n' << numbers[19] << '\n';
	}

	std::cout << "total:" << total << "average:" << average << '\n';
	std::cout << "Press any key..." << '\n';
	getch();
}
#endif	// 0

