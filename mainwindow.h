#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLineEdit>
#include <QLabel>
#include <QPushButton>
#include <QDragEnterEvent>
#include <QMimeData>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


protected:
    void dragEnterEvent(QDragEnterEvent *event) override;
    void dropEvent(QDropEvent *event) override;

private slots:
    void calculateBMI();


private slots:



    void on_signup_clicked();

    void on_register_2_clicked();

    void on_login_clicked();

    void on_backtologin_clicked();

    void on_nexttobodytypes_clicked();

    void on_ectomorph_clicked();

    void on_backtobmi_clicked();

    void on_characteristics_clicked();

    void on_nutritionanddiet_clicked();

    void on_hometoectobody_clicked();

    void on_hometoecto_2_clicked();

    void on_pushButton_19_clicked();

    void on_mesomorph_clicked();

    void on_characteristicsmeso_clicked();

    void on_nutritionmeso_clicked();

    void on_homenutro_clicked();

    void on_homemeso_clicked();

    void on_characteristicsendo_clicked();

    void on_backtohomeendo_clicked();

    void on_nutritionendo_clicked();

    void on_pushButton_13_clicked();

    void on_endomorph_clicked();

    void on_pushButton_24_clicked();

private:
    Ui::MainWindow *ui;

    void setupConnections();
};


#endif // MAINWINDOW_H
