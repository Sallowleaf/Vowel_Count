// Vowel_Count.cpp : Counts number of vowels in line.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>


int main()
{
	int Vowel=0;
	std::string Lineinput;
	std::cout << "Give me a line, I'll give you a number instead:";
	std::getline (std::cin, Lineinput);

	for (int i=0; i<=Lineinput.size(); i++)
	{
		if (Lineinput[i] == *"a"||Lineinput[i] == *"i" || Lineinput[i] == *"e" || Lineinput[i] == *"o" || Lineinput[i] == *"u")
			Vowel++;
	}
	std::cout << Vowel<<"\n";

	return 0;
}

