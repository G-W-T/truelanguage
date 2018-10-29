#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class QTranslator;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionChinese_Traditional_triggered();

    void on_actionChinese_triggered();

    void on_actionJapanese_triggered();

    void on_actionKorean_triggered();

    void on_actionFranch_triggered();

    void on_actionEnglish_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
