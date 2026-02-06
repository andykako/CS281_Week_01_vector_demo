// vector_demo.cpp: code used in Week 1 recorded class meeting

#include <iostream>
#include <vector>

//using namespace std;

// entry point
int main()
{
	// static array
	int ai[3] = { 1, 2, 3 };

	int j = ai[2];

	std::vector<int> vi = { 1, 2, 3 };

	vi.push_back(55);

	// use range-based for loop
	for (int element : vi)
	{
		std::cout << element << "\n";
		//std::cout << vi.back() << "\n";
	}

	// input loop: get user input
	// 
	// while ... 
		// for loop displays in forwards order
		
		// for loop displays in backwards order
		// vector will be empty here

	size_t size = vi.size();
	//for (int i = 0; i < size; i++)
	//{
	//	std::cout << vi.back() << "\n";
	//	vi.pop_back();
	//}

	//for (int i = 0; i < vi.size(); i++)
	//{
	//	std::cout << vi.back() << "\n";
	//	vi.pop_back();
	//}

	//while (!vi.empty())
	//{
	//	std::cout << vi.back() << "\n";
	//	vi.pop_back();
	//}

	int i = vi.back();

	vi.clear();

	int f = vi.front();
	vi.pop_back();

	if (!vi.empty())
	{
		std::cout << "Hello World!\n" << std::endl;
	}
	if (true)
	{
		std::cout << "boo\n";
	}
}
