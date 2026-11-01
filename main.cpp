#include "Controller.h"
#include "Primitive.h"
#include <memory>
#include <string>


void onNewDocumentGui(Controller& controller) {
    controller.createDocument();
}


void onImportDocumentGui(Controller& controller, const std::string& filename) {
    controller.importDocument(filename);
}

void onExportDocumentGui(Controller& controller, const std::string& filename){
    controller.exportDocument(filename);
}

void onAddPrimitiveGui(Controller& controller, std::shared_ptr<Primitive> primitive){
    controller.addPrimitive(primitive);
}

void onRemovePrimitiveGui(Controller& controller, std::shared_ptr<Primitive> primitive){
    controller.removePrimitive(primitive);
}

int main(){
    auto doc = std::make_shared<Document>();
    auto view = std::make_shared<ConsoleView>();
    Controller controller(doc, view);
    auto circle = std::make_shared<Circle>();
    auto triangle = std::make_shared<Triangle>();
    auto rectangle = std::make_shared<Rectangle>();
    onNewDocumentGui(controller);
    onImportDocumentGui(controller, "Тест");
    onExportDocumentGui(controller, "Тест");
    onAddPrimitiveGui(controller, triangle);
    onAddPrimitiveGui(controller, rectangle);
    onRemovePrimitiveGui(controller, circle);
    onAddPrimitiveGui(controller, circle);

    return 0;
}