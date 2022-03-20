#include "Player.h"
class Bureaucrat :public Player {
public:
	char makeMove();
	string getName() {
		return "Bureaucrat";
	}
};
