#pragma once
#include <iostream>

// Базовый класс для всех фигур
class Primitive {
public:
    virtual ~Primitive() = default; // Обязательный виртуальный деструктор
    virtual void draw() const = 0;  // Чисто виртуальный метод: «каждая фигура обязана уметь рисоваться»
};

class Circle : public Primitive {
public:
    void draw() const override {
        std::cout << "Нарисован круг" << std::endl;
    }
};

class Triangle : public Primitive {
public:
    void draw() const override {
        std::cout << "Нарисован треугольник" << std::endl;
    }
};

class Rectangle : public Primitive {
public:
    void draw() const override {
        std::cout << "Нарисован прямоугольник" << std::endl;
    }
};