#include "GameLogic/Units/Player.h"
#include "Potion.h"
#include <iostream>

class HealingPotion : public Potion {
private:
	float healAmount;
	//std::string name = "회복 포션";

public:
	HealingPotion(const std::string& name, float amount);
	virtual void use(Player& player) const override;
};

void HealingPotion::use(Player& player) const {
	std::cout << &name << "을 사용합니다.";
	//player.Heal(healAmount); // 플레이어 코드에 함수를 추가해야 함
}

//Potion::Potion(const std::string& name, int healAmount) 
//	: name(name), healAmount(healAmount) { 
//}
//
//void Potion::use(Player& player) const {
//	std::cout << "포션 사용: " << name << std::endl;
//	
//	player.Heal(healAmount);
//}
//
//std::string Potion::getName() const {
//	return name;
//}
//
//int Potion::getHealAmount() const {
//	return healAmount;
//}