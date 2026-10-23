
#include "desktop/core.hpp"
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    desktop::MainWindow window;
    window.show();

    return app.exec();
}
