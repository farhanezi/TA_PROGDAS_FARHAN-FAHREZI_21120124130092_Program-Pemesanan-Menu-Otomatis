#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)

    , valueramen1(0) //value ramen 1
    , valueramen2(0)
    , valueramen3(0)
    , valuesushi1(0) //value sushi 1
    , valuesushi2(0)
    , valuesushi3(0)
    , valueminum1(0) //value minuman 1
    , valueminum2(0)
    , valueminum3(0)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);

    //program jumlah menu
    ui->labelramen1->setText(QString::number(valueramen1)); //program jumlah ramen 1
    connect(ui->plusramen1, &QPushButton::clicked, this, &MainWindow::naikramen1);
    connect(ui->minramen1, &QPushButton::clicked, this, &MainWindow::turunramen1);

    ui->labelramen2->setText(QString::number(valueramen2)); //program jumlah ramen 2
    connect(ui->plusramen2, &QPushButton::clicked, this, &MainWindow::naikramen2);
    connect(ui->minramen2, &QPushButton::clicked, this, &MainWindow::turunramen2);

    ui->labelramen3->setText(QString::number(valueramen3)); //program jumlah ramen 3
    connect(ui->plusramen3, &QPushButton::clicked, this, &MainWindow::naikramen3);
    connect(ui->minramen3, &QPushButton::clicked, this, &MainWindow::turunramen3);

    ui->labelsushi1->setText(QString::number(valuesushi1)); //program jumlah sushi 1
    connect(ui->plussushi1, &QPushButton::clicked, this, &MainWindow::naiksushi1);
    connect(ui->minsushi1, &QPushButton::clicked, this, &MainWindow::turunsushi1);

    ui->labelsushi2->setText(QString::number(valuesushi2)); //program jumlah sushi 2
    connect(ui->plussushi2, &QPushButton::clicked, this, &MainWindow::naiksushi2);
    connect(ui->minsushi2, &QPushButton::clicked, this, &MainWindow::turunsushi2);

    ui->labelsushi3->setText(QString::number(valuesushi3)); //program jumlah sushi 3
    connect(ui->plussushi3, &QPushButton::clicked, this, &MainWindow::naiksushi3);
    connect(ui->minsushi3, &QPushButton::clicked, this, &MainWindow::turunsushi3);

    ui->labelminum1->setText(QString::number(valueminum1)); //program jumlah minum 1
    connect(ui->plusminum1, &QPushButton::clicked, this, &MainWindow::naikminum1);
    connect(ui->minminum1, &QPushButton::clicked, this, &MainWindow::turunminum1);

    ui->labelminum2->setText(QString::number(valueminum2)); //program jumlah minum 2
    connect(ui->plusminum2, &QPushButton::clicked, this, &MainWindow::naikminum2);
    connect(ui->minminum2, &QPushButton::clicked, this, &MainWindow::turunminum2);

    ui->labelminum3->setText(QString::number(valueminum3)); //program jumlah minum 3
    connect(ui->plusminum3, &QPushButton::clicked, this, &MainWindow::naikminum3);
    connect(ui->minminum3, &QPushButton::clicked, this, &MainWindow::turunminum3);

    //effect transparansi
    QGraphicsOpacityEffect *effect13 = new QGraphicsOpacityEffect(this);
    effect13->setOpacity(0); 
    ui->back_3->setGraphicsEffect(effect13);

    QGraphicsOpacityEffect *effect1 = new QGraphicsOpacityEffect(this);
    effect1->setOpacity(0); 
    ui->bnmulai->setGraphicsEffect(effect1);

    QGraphicsOpacityEffect *effect2 = new QGraphicsOpacityEffect(this);
    effect2->setOpacity(0); // Set opacity to 0 (invisible)
    ui->bnsushi->setGraphicsEffect(effect2);

    QGraphicsOpacityEffect *effect3 = new QGraphicsOpacityEffect(this);
    effect3->setOpacity(0); 
    ui->bnramen->setGraphicsEffect(effect3);

    QGraphicsOpacityEffect *effect4 = new QGraphicsOpacityEffect(this);
    effect4->setOpacity(0); 
    ui->bnminum->setGraphicsEffect(effect4);

    QGraphicsOpacityEffect *effect5 = new QGraphicsOpacityEffect(this);
    effect5->setOpacity(0); 
    ui->back->setGraphicsEffect(effect5);

    QGraphicsOpacityEffect *effect6 = new QGraphicsOpacityEffect(this);
    effect6->setOpacity(0); 
    ui->back_2->setGraphicsEffect(effect6);

    QGraphicsOpacityEffect *effect7 = new QGraphicsOpacityEffect(this);
    effect7->setOpacity(0); 
    ui->backfirst->setGraphicsEffect(effect7);

    QGraphicsOpacityEffect *effect8 = new QGraphicsOpacityEffect(this);
    effect8->setOpacity(0); 
    ui->nextconfirm->setGraphicsEffect(effect8);

    QGraphicsOpacityEffect *effect9 = new QGraphicsOpacityEffect(this);
    effect9->setOpacity(0); 
    ui->nextconfirm_2->setGraphicsEffect(effect9);

    QGraphicsOpacityEffect *effect10 = new QGraphicsOpacityEffect(this);
    effect10->setOpacity(0); 
    ui->nextconfirm_3->setGraphicsEffect(effect10);

    QGraphicsOpacityEffect *effect11 = new QGraphicsOpacityEffect(this);
    effect11->setOpacity(0); 
    ui->pushButton->setGraphicsEffect(effect11);

    QGraphicsOpacityEffect *effect12 = new QGraphicsOpacityEffect(this);
    effect12->setOpacity(0); 
    ui->pushButton_2->setGraphicsEffect(effect12);

    QGraphicsOpacityEffect *effect14 = new QGraphicsOpacityEffect(this);
    effect14->setOpacity(0); 
    ui->minramen1->setGraphicsEffect(effect14);

    QGraphicsOpacityEffect *effect15 = new QGraphicsOpacityEffect(this);
    effect15->setOpacity(0); 
    ui->plusramen1->setGraphicsEffect(effect15);

    QGraphicsOpacityEffect *effect16 = new QGraphicsOpacityEffect(this);
    effect16->setOpacity(0); 
    ui->minramen2->setGraphicsEffect(effect16);

    QGraphicsOpacityEffect *effect17 = new QGraphicsOpacityEffect(this);
    effect17->setOpacity(0); 
    ui->plusramen2->setGraphicsEffect(effect17);

    QGraphicsOpacityEffect *effect18 = new QGraphicsOpacityEffect(this);
    effect18->setOpacity(0); 
    ui->minramen3->setGraphicsEffect(effect18);

    QGraphicsOpacityEffect *effect19 = new QGraphicsOpacityEffect(this);
    effect19->setOpacity(0); 
    ui->plusramen3->setGraphicsEffect(effect19);

    QGraphicsOpacityEffect *effect20 = new QGraphicsOpacityEffect(this);
    effect20->setOpacity(0); 
    ui->minsushi1->setGraphicsEffect(effect20);

    QGraphicsOpacityEffect *effect21 = new QGraphicsOpacityEffect(this);
    effect21->setOpacity(0); 
    ui->plussushi1->setGraphicsEffect(effect21);

    QGraphicsOpacityEffect *effect22 = new QGraphicsOpacityEffect(this);
    effect22->setOpacity(0); 
    ui->minsushi2->setGraphicsEffect(effect22);

    QGraphicsOpacityEffect *effect23 = new QGraphicsOpacityEffect(this);
    effect23->setOpacity(0); 
    ui->plussushi2->setGraphicsEffect(effect23);

    QGraphicsOpacityEffect *effect24 = new QGraphicsOpacityEffect(this);
    effect24->setOpacity(0); 
    ui->minsushi3->setGraphicsEffect(effect24);

    QGraphicsOpacityEffect *effect25 = new QGraphicsOpacityEffect(this);
    effect25->setOpacity(0); 
    ui->plussushi3->setGraphicsEffect(effect25);

    QGraphicsOpacityEffect *effect26 = new QGraphicsOpacityEffect(this);
    effect26->setOpacity(0); 
    ui->minminum1->setGraphicsEffect(effect26);

    QGraphicsOpacityEffect *effect27 = new QGraphicsOpacityEffect(this);
    effect27->setOpacity(0); 
    ui->plusminum1->setGraphicsEffect(effect27);

    QGraphicsOpacityEffect *effect28 = new QGraphicsOpacityEffect(this);
    effect28->setOpacity(0); 
    ui->minminum2->setGraphicsEffect(effect28);

    QGraphicsOpacityEffect *effect29 = new QGraphicsOpacityEffect(this);
    effect29->setOpacity(0); 
    ui->plusminum2->setGraphicsEffect(effect29);

    QGraphicsOpacityEffect *effect30 = new QGraphicsOpacityEffect(this);
    effect30->setOpacity(0); 
    ui->minminum3->setGraphicsEffect(effect30);

    QGraphicsOpacityEffect *effect31 = new QGraphicsOpacityEffect(this);
    effect31->setOpacity(0); 
    ui->plusminum3->setGraphicsEffect(effect31);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::processMenu(QList<Menu> menuList) {
    QString combinedOutput = Menu::combineOutputs(menuList);
     int totalHarga = Menu::calculateTotal(menuList);

    if (!combinedOutput.isEmpty()) {
        ui->label->setText("Konfirmasi Pesanan:\n" + combinedOutput
                           + "\nTotal Harga: " + QString::number(totalHarga));
    } else {
        ui->label->setText("Tidak Ada Menu yang Dipesan");
    }
}

void MainWindow::hal3tohal4(){ 
    QList<Menu> menuList = {
        Menu("Minuman", "Matcha", valueminum1, 12000),
        Menu("Minuman", "Yuzu Lemon", valueminum2, 12000),
        Menu("Minuman", "Ramune", valueminum3, 12000),
        Menu("Ramen", "Shio Ramen", valueramen1, 25000),
        Menu("Ramen", "Shoyu Ramen", valueramen2, 25000),
        Menu("Ramen", "Spicy Ramen", valueramen3, 25000),
        Menu("Sushi", "Tuna Roll", valuesushi1, 120000),
        Menu("Sushi", "Nigiri Sushi", valuesushi2, 20000),
        Menu("Sushi", "Tempura Roll", valuesushi3, 20000),
    };
    processMenu(menuList);

    ui->stackedWidget->setCurrentWidget(ui->Hal4);
}

//hal1
void MainWindow::on_bnmulai_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->Hal2);
}

//hal2
void MainWindow::on_bnramen_clicked()
{
    hal2_to_hal3("ramen");
}
void MainWindow::on_bnsushi_clicked()
{
     hal2_to_hal3("sushi");
}
void MainWindow::on_bnminum_clicked()
{
     hal2_to_hal3("minum");
}

void MainWindow::hal2_to_hal3(QString menu)
{
    if (menu == "ramen") {
        ui->stackedWidget->setCurrentWidget(ui->Hal3Ramen);
    } else if (menu == "sushi") {
        ui->stackedWidget->setCurrentWidget(ui->Hal3Sushi);
    } else if (menu == "minum") {
        ui->stackedWidget->setCurrentWidget(ui->Hal3Minum);
    } else {
        ui->stackedWidget->setCurrentWidget(ui->Hal2);
    }
}

//hal3minum
void MainWindow::on_back_clicked() //pindah halaman
{
    hal3minum("back");
}
void MainWindow::on_nextconfirm_clicked()
{
    hal3minum("continue");
}
void MainWindow::hal3minum(QString menu) {
    if (menu == "continue") {
        hal3tohal4();
    } else if (menu == "back") {
        ui->stackedWidget->setCurrentWidget(ui->Hal2);
    }
}


void MainWindow::naikminum1() //ubah value minum 1 (Matcha)
{
    valueminum1++; // Tambah nilai
    ui->labelminum1->setText(QString::number(valueminum1));
}
void MainWindow::turunminum1()
{
    if(valueminum1==0){
        ui->labelminum1->setText(QString::number(0));
    }else{
    valueminum1--; // Kurangi nilai
    ui->labelminum1->setText(QString::number(valueminum1));
    }
}

void MainWindow::naikminum2() //ubah value minum 2
{
    valueminum2++; // Tambah nilai
    ui->labelminum2->setText(QString::number(valueminum2));
}
void MainWindow::turunminum2()
{
    if(valueminum2==0){
        ui->labelminum2->setText(QString::number(0));
    }else{
        valueminum2--; // Kurangi nilai
        ui->labelminum2->setText(QString::number(valueminum2));
    }
}

void MainWindow::naikminum3() //ubah value minum 3
{
    valueminum3++; // Tambah nilai
    ui->labelminum3->setText(QString::number(valueminum3));
}
void MainWindow::turunminum3()
{
    if(valueminum3==0){
        ui->labelminum3->setText(QString::number(0));
    }else{
    valueminum3--; // Kurangi nilai
    ui->labelminum3->setText(QString::number(valueminum3));
    }
}

//hal3ramen
void MainWindow::on_back_2_clicked()
{
    hal3ramen("back");
}
void MainWindow::on_nextconfirm_3_clicked()
{
    hal3ramen("continue");
}
void MainWindow::hal3ramen(QString menu)
{
    if (menu == "continue") {
        hal3tohal4();
    } else if (menu == "back") {
        ui->stackedWidget->setCurrentWidget(ui->Hal2);
    }
}

void MainWindow::naikramen1()
{
    valueramen1++; // Tambah nilai
    ui->labelramen1->setText(QString::number(valueramen1)); 
}
void MainWindow::turunramen1()
{
    if(valueramen1==0){
        ui->labelramen1->setText(QString::number(0));
    }else{
    valueramen1--; // Kurangi nilai
    ui->labelramen1->setText(QString::number(valueramen1)); 
    }
}

void MainWindow::naikramen2()
{
    valueramen2++; // Tambah nilai
    ui->labelramen2->setText(QString::number(valueramen2)); 
}
void MainWindow::turunramen2()
{
    if(valueramen2==0){
        ui->labelramen2->setText(QString::number(0));
    }else{
    valueramen2--; // Kurangi nilai
    ui->labelramen2->setText(QString::number(valueramen2)); 
    }
}

void MainWindow::naikramen3()
{
    valueramen3++; // Tambah nilai
    ui->labelramen3->setText(QString::number(valueramen3)); 
}
void MainWindow::turunramen3()
{
    if(valueramen3==0){
        ui->labelramen3->setText(QString::number(0));
    }else{
    valueramen3--; // Kurangi nilai
    ui->labelramen3->setText(QString::number(valueramen3)); 
    }
}

//hal3sushi
void MainWindow::on_back_3_clicked()
{
    hal3sushi("back");
}
void MainWindow::on_nextconfirm_2_clicked()
{
    hal3sushi("continue");
}
void MainWindow::hal3sushi(QString menu)
{
    if (menu == "continue") {
        hal3tohal4();
    } else if (menu == "back") {
        ui->stackedWidget->setCurrentWidget(ui->Hal2);
    }
}

void MainWindow::naiksushi1()
{
    valuesushi1++; // Tambah nilai
    ui->labelsushi1->setText(QString::number(valuesushi1)); 
}
void MainWindow::turunsushi1()
{
    if(valuesushi1==0){
        ui->labelsushi1->setText(QString::number(0));
    }else{
    valuesushi1--; // Kurangi nilai
    ui->labelsushi1->setText(QString::number(valuesushi1)); 
    }
}

void MainWindow::naiksushi2()
{
    valuesushi2++; // Tambah nilai
    ui->labelsushi2->setText(QString::number(valuesushi2)); 
}
void MainWindow::turunsushi2()
{
    if(valuesushi2==0){
        ui->labelsushi2->setText(QString::number(0));
    }else{
    valuesushi2--; // Kurangi nilai
    ui->labelsushi2->setText(QString::number(valuesushi2)); 
    }
}

void MainWindow::naiksushi3()
{
    valuesushi3++; // Tambah nilai
    ui->labelsushi3->setText(QString::number(valuesushi3)); 
}
void MainWindow::turunsushi3()
{
    if(valuesushi3==0){
        ui->labelsushi3->setText(QString::number(0));
    }else{
    valuesushi3--; // Kurangi nilai
    ui->labelsushi3->setText(QString::number(valuesushi3)); 
    }
}

//hal4confirm
void MainWindow::on_pushButton_2_clicked()
{
    hal4("continue");
}
void MainWindow::on_pushButton_clicked()
{
    hal4("back");
}
void MainWindow::hal4(QString menu)
{
    if (menu == "continue") {
        ui->stackedWidget->setCurrentWidget(ui->Hal5);
    } else if (menu == "back") {
        ui->stackedWidget->setCurrentWidget(ui->Hal2);
    }
}

//hal5
void MainWindow::on_backfirst_clicked()
{
    valuesushi3 =0;
    valuesushi2 =0;
    valuesushi1 =0;

    valueminum3 =0;
    valueminum2 =0;
    valueminum1 =0;

    valueramen3 =0;
    valueramen2 =0;
    valueramen1 =0;

    ui->stackedWidget->setCurrentWidget(ui->Hal1);

    ui->labelminum1->setText(QString::number(0));
    ui->labelminum2->setText(QString::number(0));
    ui->labelminum3->setText(QString::number(0));

    ui->labelramen1->setText(QString::number(0));
    ui->labelramen2->setText(QString::number(0));
    ui->labelramen3->setText(QString::number(0));

    ui->labelsushi1->setText(QString::number(0));
    ui->labelsushi2->setText(QString::number(0));
    ui->labelsushi3->setText(QString::number(0));
}
