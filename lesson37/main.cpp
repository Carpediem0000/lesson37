#include "MyStack.h"
#include <string>

bool VaildBrackets(std::string line) {
	myStack::Stack<char> b;
	for (int i = 0; i < line.size(); i++)
	{
		if (line[i] == '(' || line[i] == '[' || line[i] == '{')
			b.push_back(line[i]);
		else if (line[i] == ')' || line[i] == ']' || line[i] == '}') {
			if (b.isEmpty())
				return false;
			if (b.top() == '(' && line[i] == ')' || b.top() == '[' && line[i] == ']' || b.top() == '{' && line[i] == '}')
			{
				b.pop_back();
			}
			else
			{
				return false;
			}
		}
	}
	if (b.isEmpty()) return true;
	else return false;
}

int main()
{
	/*myStack::Stack<std::string> a;

	a.push_back("students");
	a.push_back("of");
	a.push_back("the");
	a.push_back("group");
	a.push_back("PV");
	a.push_back("321");

	a.showStack();
	a.pop_back();
	a.showStack();

	cout << "-----------------------\n";

	while (!a.isEmpty())
	{
		if (a.top().size() == 2)
		{
			cout << a.top() << " ";
		}
		a.pop_back();
	}
	cout << endl;
	a.showStack();*/

	cout << "[()]{} => " << VaildBrackets("[()]{}") << endl;
	cout << "][ => " << VaildBrackets("][") << endl;
	cout << "[({)]} => " << VaildBrackets("[({)]}") << endl;
}