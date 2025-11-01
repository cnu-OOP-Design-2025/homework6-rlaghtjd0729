#include <iostream>
#include "bird.h"

// ******************************
// Bird 클래스 구현
// ******************************
// Bird 클래스는 생성자/소멸자 외에는 순수 가상 함수를 사용하거나 기본 구현을 사용하므로,
// 여기에 추가 구현은 필요하지 않습니다.

// ******************************
// Duck 클래스 구현
// ******************************
Duck::Duck() : Bird("Duck") {
    cry(); 
}

Duck::~Duck() {
    cry(); // 소멸자에서 cry() 호출
}

void Duck::cry() {
    std::cout << "Quack!" << std::endl;
}

// ******************************
// Penguin 클래스 구현
// ******************************
Penguin::Penguin() : Bird("Penguin") {
    cry(); 
}

Penguin::~Penguin() {
    cry(); // 소멸자에서 cry() 호출
}

void Penguin::cry() {
    std::cout << "Squawk!" << std::endl;
}

void Penguin::fly() {
    std::cout << "This bird can't fly." << std::endl; // 오버라이딩 구현
}

// ******************************
// Eagle 클래스 구현
// ******************************
Eagle::Eagle() : Bird("Eagle") {
    cry(); 
}

Eagle::~Eagle() {
    cry(); // 소멸자에서 cry() 호출
}

void Eagle::cry() {
    std::cout << "Screech!" << std::endl;
}

void Eagle::swim() {
    std::cout << "This bird can't swim." << std::endl; // 오버라이딩 구현
}