#ifndef COVID_MAINWIN_H
#define COVID_MAINWIN_H

#include <QDialog>

namespace Ui {
class covid_mainwin;
}

class covid_mainwin : public QDialog
{
    Q_OBJECT

public:
    explicit covid_mainwin(QWidget *parent = 0);
    ~covid_mainwin();

private:
    Ui::covid_mainwin *ui;
};

#endif // COVID_MAINWIN_H
