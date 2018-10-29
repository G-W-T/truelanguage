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
          QSettings settings("GWT", "Language");
          QString lang=settings.value("Language","simplify").toString();

          m_Translator->load("../Multilingual/"+lang+".qm");
          qApp->installTranslator(m_Translator);
          ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionChinese_Traditional_triggered()
{
    QSettings settings("GWT", "Language");
    settings.setValue("Language","traditional");
    QTranslator *m_Translator=new QTranslator;
    m_Translator->load("../Multilingual/traditional.qm");
    qApp->installTranslator(m_Translator);

    ui->retranslateUi(this);

}

void MainWindow::on_actionChinese_triggered()
{
    QSettings settings("GWT", "Language");
    settings.setValue("Language","simplify");
    QTranslator *m_Translator=new QTranslator;
    m_Translator->load("../Multilingual/simplify.qm");
    qApp->installTranslator(m_Translator);

    ui->retranslateUi(this);

}

void MainWindow::on_actionJapanese_triggered()
{
    QSettings settings("GWT", "Language");
    settings.setValue("Language","japanese");
    QTranslator *m_Translator=new QTranslator;
    m_Translator->load("../Multilingual/japanese.qm");
    qApp->installTranslator(m_Translator);

    ui->retranslateUi(this);
}

void MainWindow::on_actionKorean_triggered()
{
    QTranslator *m_Translator=new QTranslator;
    QSettings settings("GWT", "Language");
    settings.setValue("Language","korean");
    m_Translator->load("../Multilingual/korean.qm");
    qApp->installTranslator(m_Translator);

    ui->retranslateUi(this);
}

void MainWindow::on_actionFranch_triggered()
{
    QTranslator *m_Translator=new QTranslator;
    QSettings settings("GWT", "Language");
    settings.setValue("Language","franch");
    m_Translator->load("../Multilingual/franch.qm");
    qApp->installTranslator(m_Translator);

    ui->retranslateUi(this);
}

void MainWindow::on_actionEnglish_triggered()
{
    QTranslator *m_Translator=new QTranslator;
    QSettings settings("GWT", "Language");
    settings.setValue("Language","english");
    m_Translator->load("../Multilingual/english.qm");
    qApp->installTranslator(m_Translator);

    ui->retranslateUi(this);
}
