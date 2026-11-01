#pragma once
#include "Document.h"
#include "View.h"
#include <memory>
#include <string>

class Controller {
public:
    // Конструктор принимает умные указатели на Документ и Представление
    Controller(std::shared_ptr<Document> doc, std::shared_ptr<View> view)
        : doc(doc), view(view) {}

    void createDocument() {
        doc = std::make_shared<Document>();
        view->render(doc);
    }

    void importDocument(const std::string& filename) {
        doc->importFromFile(filename);
        view->render(doc);
    }

    void exportDocument(const std::string& filename){
        doc->exportToFile(filename);
        view->render(doc);
    }

    void addPrimitive(std::shared_ptr<Primitive> primitive){
        doc->addPrimitive(primitive);
        view->render(doc);
    }
    
    void removePrimitive(std::shared_ptr<Primitive> primitive){
        doc->removePrimitive(primitive);
        view->render(doc);
    }

private:
    std::shared_ptr<Document> doc;
    std::shared_ptr<View> view;
};