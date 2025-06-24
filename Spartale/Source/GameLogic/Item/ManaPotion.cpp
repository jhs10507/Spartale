#include "GameLogic/Units/Player.h"
#include "Potion.h"
#include <iostream>

class ManaPotion : public Potion {
private:
	float manaAmount;
	//std::string name = "마나 포션"

public:
	ManaPotion(const std::string& name, float amount);
	virtual void use(Player& player) const override;
};

void ManaPotion::use(Player& player) const {
	std::cout << &name << "을 사용합니다.";
	//player.RestoreMana(manaAmount); // 플레이어 코드에 함수를 추가해야 함
}
