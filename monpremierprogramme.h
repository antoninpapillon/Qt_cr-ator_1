#ifndef MONPREMIERPROGRAMME_H
#define MONPREMIERPROGRAMME_H

#include <QMainWindow>

namespace Ui {
class MonPremierProgramme;
}

class MonPremierProgramme : public QMainWindow
{
    Q_OBJECT

public:
    explicit MonPremierProgramme(QWidget *parent = 0);
    ~MonPremierProgramme();

private slots:
    void on_pushButton_clicked();

    void on_checkBox_clicked();

    void on_checkBox_clicked(bool checked);

private:
    Ui::MonPremierProgramme *ui;
};

#endif // MONPREMIERPROGRAMME_H
