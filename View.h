#pragma once
#include "Document.h"
#include <iostream>
#include <memory>

// Абстрактный интерфейспредставления
class View {
public:
    virtual ~View() = default;
    virtual void render(const std::shared_ptr<Document>& doc) const = 0;
};

// Конкретная реализация представления для вывода в консоль
class ConsoleView : public View {
public:
    void render(const std::shared_ptr<Document>& doc) const override {
        std::cout << "Отрисовка документа" << std::endl;
        for (const auto& primitive : doc->getPrimitives()) {
            primitive->draw();
    }
    }
};