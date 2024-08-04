#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setAcceptDrops(true);
    setupConnections();
}

MainWindow::~MainWindow()
{
    delete ui;

}





void MainWindow::setupConnections()
{
    connect(ui->calculateButton_9, &QPushButton::clicked, this, &MainWindow::calculateBMI);
}

void MainWindow::dragEnterEvent(QDragEnterEvent *event)
{
    if (event->mimeData()->hasText()) {
        event->acceptProposedAction();
    }
}

void MainWindow::dropEvent(QDropEvent *event)
{
    QString data = event->mimeData()->text();
    QStringList values = data.split(",");

    if (values.size() == 2) {
        ui->weightEdit_9->setText(values.at(0));
        ui->heightEdit_9->setText(values.at(1));
        event->acceptProposedAction();
    }
}

void MainWindow::calculateBMI()
{
    bool weightOk, heightOk;
double weight = ui->weightEdit_9->text().toDouble(&weightOk);
double height = ui->heightEdit_9->text().toDouble(&heightOk);

// Debugging: Print the input values
qDebug() << "Weight:" << weight << "WeightOk:" << weightOk;
qDebug() << "Height:" << height << "HeightOk:" << heightOk;

if (weightOk && heightOk && height > 0) {
    double bmi = weight / (height * height);

    // Debugging: Print the BMI value
    qDebug() << "BMI:" << bmi;

    QString category;
    if (bmi < 18.5) {
        category = "Underweight";
    } else if (bmi < 24.9) {
        category = "Normal weight";
    } else if (bmi < 29.9) {
        category = "Overweight";
    } else {
        category = "Obesity";
    }
    ui->resultLabel_9->setText("Your BMI is: " + QString::number(bmi, 'f', 2) + "\nCategory: " + category);
} else {
    ui->resultLabel_9->setText("Invalid input");
}
}



















void MainWindow::on_signup_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);

}



void MainWindow::on_register_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);

}



void MainWindow::on_login_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}



void MainWindow::on_backtologin_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}



void MainWindow::on_nexttobodytypes_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}



void MainWindow::on_ectomorph_clicked()
{
     ui->stackedWidget->setCurrentIndex(4);
}



void MainWindow::on_backtobmi_clicked()
{
     ui->stackedWidget->setCurrentIndex(2);
}




void MainWindow::on_characteristics_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}


void MainWindow::on_nutritionanddiet_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}



void MainWindow::on_hometoectobody_clicked()
{
     ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_hometoecto_2_clicked()
{
     ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_pushButton_19_clicked()
{
     ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_mesomorph_clicked()
{
     ui->stackedWidget->setCurrentIndex(7);
}


void MainWindow::on_characteristicsmeso_clicked()
{
     ui->stackedWidget->setCurrentIndex(8);
}




void MainWindow::on_nutritionmeso_clicked()
{
     ui->stackedWidget->setCurrentIndex(9);
}


void MainWindow::on_homenutro_clicked()
{
     ui->stackedWidget->setCurrentIndex(7);
}


void MainWindow::on_homemeso_clicked()
{
     ui->stackedWidget->setCurrentIndex(7);
}


void MainWindow::on_characteristicsendo_clicked()
{
     ui->stackedWidget->setCurrentIndex(11);
}



void MainWindow::on_backtohomeendo_clicked()
{
     ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_nutritionendo_clicked()
{
     ui->stackedWidget->setCurrentIndex(12);
}


void MainWindow::on_pushButton_13_clicked()
{
     ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_endomorph_clicked()
{
    ui->stackedWidget->setCurrentIndex(10);
}



void MainWindow::on_pushButton_24_clicked()
{
    ui->stackedWidget->setCurrentIndex(10);
}


