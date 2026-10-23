
#include "desktop/core.hpp"

namespace desktop {
    MainWindow::MainWindow(QWidget *parent) : QWidget(parent) {
        // Set up layout and window options
        auto *layout = new QVBoxLayout(this);
        setWindowTitle("Desktop Application");
        resize(400, 200);

        // Add a friendly hello world text label
        auto *label = new QLabel("Hello World from Qt6 & Arch Linux!", this);
        label->setAlignment(Qt::AlignCenter);
        
        // Inline CSS styling using Qt Style Sheets
        label->setStyleSheet("font-size: 16px; font-weight: bold; color: #1793D1;"); 

        layout->addWidget(label);
    }
}
