#pragma once
#include "Primitive.h"
#include <iostream>
#include <string>
#include <vector>
#include <memory>

class Document {
public:
    Document() {
        std::cout << "Создан новый документ" << std::endl;
    }

    void addPrimitive(std::shared_ptr<Primitive> primitive) {
        primitives.push_back(primitive);
        std::cout << "Добавлен графический примитив" << std::endl;
    }

    void importFromFile(const std::string& filename){
        std::cout << "Импортирован из файла: " << filename << std::endl;

    }

    void exportToFile(const std::string& filename){
        std::cout << "Экспортирован в файл: " << filename  << std::endl;

    }

    void removePrimitive(std::shared_ptr<Primitive> primitive){
        primitives.pop_back();
        std::cout << "Удалён графический примитив" << std::endl;

    }

    const std::vector<std::shared_ptr<Primitive>>& getPrimitives() const {
        return primitives;
    }
private:
    std::vector<std::shared_ptr<Primitive>> primitives;
};