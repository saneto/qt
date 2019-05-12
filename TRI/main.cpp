
#include <QApplication>
#include <QMainWindow>
#include <QPushButton>
#include <QMessageBox>
#include <QTextEdit>

#include "tri.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Tri w;
    w.show();

    return a.exec();
}
