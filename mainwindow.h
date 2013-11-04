
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow> /*!< \include QmainWindow */

namespace Ui {
    class MainWindow;
}
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void pushButton_clicked();

    void ck3_clicked(bool checked);

    void ck2_clicked(bool checked);

    void ck_clicked(bool checked);

    int check_sum();

    void pushButton2_clicked();

private:
    Ui::MainWindow *ui;
    int count;
    int ck, ck2, ck3;
};

#endif // MAINWINDOW_H
