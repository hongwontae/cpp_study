#pragma once

class Player {
private:
	int hp;

public:
	Player(int initialHp);

	void takeDamage(int damage);

	int getHp() const;

};