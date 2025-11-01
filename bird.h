#pragma once

#include <iostream>
#include <string> // std::string을 사용하기 위해 추가

class Bird {
protected: // 자식 클래스에서 접근할 수 있도록 private에서 protected로 변경
    std::string species; 
public:
    // 기본 생성자는 제거합니다. (Bird는 추상 클래스로 사용되므로)
    Bird(std::string species): species(species){
        std::cout << species << " has borned" << std::endl;
    }

    virtual void display() {
        std::cout << "Species: " << species << std::endl;
    }

    virtual void fly() {
        std::cout << "This bird can fly." << std::endl;
    }

    virtual void swim() {
        std::cout << "This bird can swim." << std::endl;
    }

    virtual void cry() = 0; // 순수 가상 함수

    virtual ~Bird() { // 가상 소멸자 유지
        std::cout << species << " has died" << std::endl;
     }
};

// ------------------------------------
// 자식 클래스 선언 (main.cpp가 인식할 수 있도록 추가)
// ------------------------------------

class Duck : public Bird {
public:
    Duck();
    ~Duck() override;
    void cry() override;
};

class Penguin : public Bird {
public:
    Penguin();
    ~Penguin() override;
    void cry() override;
    void fly() override; // fly() 오버라이딩 선언
};

class Eagle : public Bird {
public:
    Eagle();
    ~Eagle() override;
    void cry() override;
    void swim() override; // swim() 오버라이딩 선언
};