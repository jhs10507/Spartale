#pragma once
#include <memory>
#include "GameLogic/Units/Player.h"

class Potion {
protected:
	std::string name;

public:
	Potion(const std::string& name);
	virtual ~Potion() = default;

	virtual void use(Player& player) const = 0; // 순수 가상 함수
	std::string getName() const;
};