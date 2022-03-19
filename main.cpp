#include <iostream>
#include "Avalanche.h"
#include "Bureaucrat.h"
#include "Crescendo.h"
#include "FirstfullDollars.h"
#include "PaperDoll.h"
#include "RandomComputer.h"
#include "Toolbox.h"
#include "Tournament.h"
using namespace std;

int main() {
	Computer* c[] = { new Avalanche(), new Bureaucrat(), new Bureaucrat(),
		new Toolbox(), new Toolbox(),new Crescendo(), new Crescendo(), new FirstfullDollars() };
	Tournament t;
	Computer* winner = t.run(c);
	cout << winner->getName() << endl;
	return 0;
}