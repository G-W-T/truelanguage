#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTranslator>
#include <QSettings>
#include <QProcess>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
          QTranslator *m_Translator=new QTranslator;
          m_Translator->load("../Multilingual/simplify.qm");//设定初始语言问Chinese_Simplify
          qApp->installTranslator(m_Translator);
          ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionChinese_Traditional_triggered()
{
    QTranslator *m_Translator=new QTranslator;
    m_Translator->load("../Multilingual/traditional.qm");
    qApp->installTranslator(m_Translator);

    ui->retranslateUi(this);

}

void MainWindow::on_actionChinese_triggered()
{
    QTranslator *m_Translator=new QTranslator;
    m_Translator->load("../Multilingual/simplify.qm");
    qApp->installTranslator(m_Translator);

    ui->retranslateUi(this);

}

void MainWindow::on_actionJapanese_triggered()
{
    QTranslator *m_Translator=new QTranslator;
    m_Translator->load("../Multilingual/japanese.qm");
    qApp->installTranslator(m_Translator);

    ui->retranslateUi(this);
}

void MainWindow::on_actionKorean_triggered()
{
    QTranslator *m_Translator=new QTranslator;
    m_Translator->load("../Multilingual/korean.qm");
    qApp->installTranslator(m_Translator);

    ui->retranslateUi(this);
}

void MainWindow::on_actionFranch_triggered()
{
    QTranslator *m_Translator=new QTranslator;
    m_Translator->load("../Multilingual/franch.qm");
    qApp->installTranslator(m_Translator);

    ui->retranslateUi(this);
}

void MainWindow::on_actionEnglish_triggered()
{
    QTranslator *m_Translator=new QTranslator;
    m_Translator->load("../Multilingual/english.qm");
    qApp->installTranslator(m_Translator);

    ui->retranslateUi(this);
}
