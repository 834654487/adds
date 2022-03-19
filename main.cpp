#include <iostream>
#include "Avalanche.cpp"
#include "Bureaucrat.cpp"
#include "Crescendo.cpp"
#include "FistfullODollars.cpp"
#include "PaperDoll.cpp"
#include "RandomComputer.cpp"
#include "Toolbox.cpp"
#include "Tournament.cpp"
using namespace std;

int main() {
	Player* c[] = { new Avalanche(), new Bureaucrat(), new Bureaucrat(),
		new Toolbox(), new Toolbox(),new Crescendo(), new Crescendo(), new FistfullODollars() };
	Tournament t;
	Player* winner = t.run(c);
	cout << winner->getName() << endl;
	return 0;
}
