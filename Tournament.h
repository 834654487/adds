#include "Player.h"
class Tournament{
public:
	Player* run(std::array<Player*,8> competitors);
	string getName() {
		return "Tournament";
	}
};
