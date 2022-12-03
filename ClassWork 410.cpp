#include <iostream>
#include <string>


int main()
{
	//Task 1

    int mas1[10] = {10, 23, 2, 5, 123, 4, 54, 21, 11, 11};
	int mas2[10];
    int* ptr1 = &mas1[9];
	int* ptr2 = mas2;


	for (int i = 0; i < 10; i++)
	{
		*(ptr2 + i) = *(ptr1 - i);
		std::cout << *(ptr2 + i) << " ";
	}


	ptr1 = mas1;
	std::cout << "\n";
	for (int i = 0; i < 10; i++)
	{
		std::cout << (*ptr1++) << " - " << (*ptr2++) << "\n";
	}



	// Task 2

	int mas[10];
	int* ptr = mas;
	int min, max = 0;


	for (int i = 0; i < 10; i++)
	{
		int random = rand() % 20;
		*(ptr + i) = random;
	}
	min = *ptr;


	for (int i = 0; i < 10; i++)
	{
		if (*(ptr + i) > max)
			max = *(ptr + i);
		else if (*(ptr + i) < min)
			min = *(ptr + i);
	}


	std::cout << "Max = " << max << "\nMin = " << min;



	// Task 3

	const int size = 10;
	int mas[size] = {10, 23, 2, 5, 123, 4, 54, 21, 11, 11};
	int* ptr = mas;
	int user;
	std::cout << "Sdvig = ";
	std::cin >> user;


	while (user != 0)
	{
		int temp = *(ptr + size - 1);
		for (int i = size - 2; i >= 0; i--)
		{
			*(ptr + i + 1) = *(ptr + i);
		}
		*ptr = temp;
		user--;
	}


	for (int i = 0; i < 10; i++)
	{
		std::cout << *(ptr++) << " ";
	}
}
