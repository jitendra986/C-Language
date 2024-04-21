#include <iostream>
#include <algorithm>
#include <string>

void Date(std::string &ans);

int main()
{
	std::string answer;
	do {
		Date(answer);
	} while (answer != "yes");
	std::cout << "When will you arrive in Munich? We will set a date and time then.";	// final message
	return 0;
}

void Date(std::string &ans)
{
	std::cout << "Will you come out for a date with me? ";
	std::cin >> ans;
	std::transform(ans.begin(), ans.end(), ans.begin(), ::tolower);
	if (ans != "yes")
		std::cout << "****** Error, answer not accepted, try again!" << std::endl;
}