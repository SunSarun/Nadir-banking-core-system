
#pragma once
#include <QWidget>
#include <QLabel>
#include <QVBoxLayout>

namespace desktop {
    class MainWindow : public QWidget {
        Q_OBJECT
    public:
        explicit MainWindow(QWidget *parent = nullptr);
    };
}
