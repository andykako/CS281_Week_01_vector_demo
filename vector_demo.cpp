// vector_demo.cpp: code used in Week 1 recorded class meeting

#include <iostream>
#include <vector>

//using namespace std;

// entry point
int main()
{
	// static array
	int ai[3] = { 1, 2, 3 };
	std::cout << "Hello!\n";
	std::cout << "Hello!\n";
	// square bracket syntax for accessing array element
	int j = ai[2];

	// how to declare an empty vector
	//std::vector<int> vi;

	// how to declare a vector with initialization list
	std::vector<int> vi = { 1, 2, 3 };
	// vector vi now has 3 elements
	
	// add an element, make it the last element (at index 3)
	vi.push_back(55);

	// use range-based for loop to display element values
	for (int element : vi)
	{
		std::cout << element << "\n";
		//std::cout << vi.back() << "\n";
	}

	//--------------------------------------------------------------------------
	// This is the basic outline for Assignment 1
	// How to make your own outline for future assignments:
	//	- describe each task with a line comment
	//  - re-order the line comments as necessary
	//  - write the code for each task under its line comment
	//--------------------------------------------------------------------------

	// input loop: get user input
	// 
	// while ... 
		// for loop displays in forwards order
		
		// for loop displays in backwards order
		// vector will be empty here

	//--------------------------------------------------------------------------

	// get number of elements in vector vi
	size_t size = vi.size();

	// for loop displays elements in backward order
	// and removes the element just displayed

	//for (int i = 0; i < size; i++)
	//{
	//	std::cout << vi.back() << "\n";
	//	vi.pop_back();
	//}

	// this for loop will NOT work correctly
	// do you remember why from class?

	//for (int i = 0; i < vi.size(); i++)
	//{
	//	std::cout << vi.back() << "\n";
	//	vi.pop_back();
	//}

	// another way to display elements in backwards order
	// and remove each one after displaying it

	//while (!vi.empty())
	//{
	//	std::cout << vi.back() << "\n";
	//	vi.pop_back();
	//}

	// put the last element in vector vi into variable i
	int i = vi.back();

	// remove all elements from vector vi
	vi.clear();

	// put the first element in vector vi into variable f
	// this will crash because the vector is now empty!
	//int f = vi.front();

	// remove the last element from vector vi
	// this will crash because the vector is now empty!
	//vi.pop_back();

	// example for using the empty() method
	if (!vi.empty())
	{
		std::cout << "Hello World!\n" << std::endl;
	}

	if (true)
	{
		std::cout << "boo\n";
	}
}
