#include "monpremierprogramme.h"
#include "ui_monpremierprogramme.h"

MonPremierProgramme::MonPremierProgramme(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MonPremierProgramme)
{
    ui->setupUi(this);
}

MonPremierProgramme::~MonPremierProgramme()
{
    delete ui;
}

void MonPremierProgramme::on_pushButton_clicked()
{
    qApp ->quit();
}



void MonPremierProgramme::on_checkBox_clicked(bool checked)
{

    if (checked == true)
    {
        showFullScreen();
    }

    else
    {
        showNormal();
    }
}

