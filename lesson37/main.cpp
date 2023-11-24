#include "Kupe.h"
#include <string>
#include <list>
#include <stack>
#include <algorithm>
#include "MyStack.h"

int main()
{
	stack<Vagon*> trainLviv;
	trainLviv.push(new Plazkart(1, 50));
	trainLviv.push(new Plazkart(2, 50));
	trainLviv.push(new Kupe(6, 50, true));
	trainLviv.push(new Plazkart(3, 50));
	trainLviv.push(new Kupe(8, 50, true));
	trainLviv.push(new Plazkart(4, 50));
	trainLviv.push(new Kupe(5, 50, false));
	trainLviv.push(new Kupe(7, 50, false));

	stack<Vagon*> statePlazkart;
	stack<Vagon*> stateKupe;

	while (!trainLviv.empty())
	{
		if (trainLviv.top()->type() == "Plazkart")
		{
			statePlazkart.push(trainLviv.top());
			trainLviv.pop();
		}
		else if (trainLviv.top()->type() == "Kupe") {
			stateKupe.push(trainLviv.top());
			trainLviv.pop();
		}
	}

	if (trainLviv.empty())
	{
		cout << "Train succsessfully sorted\n";
	}

	list<Vagon*> trainKyiv;

	trainKyiv.push_back(statePlazkart.top());
	statePlazkart.pop();
	trainKyiv.push_back(statePlazkart.top());
	statePlazkart.pop();
	trainKyiv.push_back(statePlazkart.top());
	statePlazkart.pop();
	trainKyiv.push_back(stateKupe.top());
	stateKupe.pop();
	trainKyiv.push_back(stateKupe.top());
	stateKupe.pop();
	trainKyiv.push_back(stateKupe.top());
	stateKupe.pop();

	for_each(trainKyiv.begin(), trainKyiv.end(), [](Vagon* obj) {obj->show(); });
}