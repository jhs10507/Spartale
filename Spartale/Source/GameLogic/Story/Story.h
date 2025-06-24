#pragma once
#include <iostream>
#include <string>
#include <chrono>
#include <thread>

// 스토리 관련 폰트
void Scene_Prologue(); // 프롤로그(오프닝)
void Scene_Begin();   // 마을에서 께어남 - 끝나면 게임 플레이 시작.
//void Scene_Field();   // 현재는 사용 중지
void Scene_TowerGate(); // 탑의 정문에 들어가기 직전
void Scene_FinalBoss(); // 최상층에서 보스와 조우. 끝나면 최종보스전 시작.
void Scene_Epiloge(); // 에필로그(엔딩)

void typeEffect(std::string text, int delay = 30);

void waitForEnter() {
	std::cout << "\n[Enter를 눌러 계속하세요...]";
	std::cin.ignore(); // 이전 버퍼 비우기
	std::cin.get();    // 사용자 입력 기다리기
}

void typeEffect(std::string text, int delay = 30) {
	for (char c : text) {
		std::cout << c << std::flush;
		std::this_thread::sleep_for(std::chrono::milliseconds(delay));
	}
	std::cout << std::endl;
}