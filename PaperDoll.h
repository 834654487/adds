#include "Player.h"
class PaperDoll :public Player {
public:
	char makeMove();
	PaperDoll();
	string getName() {
		return "PaperDoll";
	}
private:
	int now;
};
