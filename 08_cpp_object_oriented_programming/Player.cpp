#include "Player.h"

Player::Player(int initialHp) : hp(initialHp) {
}

void Player::takeDamage(int damage) {
    hp -= damage;
}

int Player::getHp() const {
    return hp;
}