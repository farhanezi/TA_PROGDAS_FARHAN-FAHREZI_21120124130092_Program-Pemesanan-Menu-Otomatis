#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QGraphicsOpacityEffect>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class Menu{ //CLASSS MENUUUU
protected:
    QString kategori;
    int value;
    QString nama;
    int harga;

public:
    Menu(QString kategoriMenu, QString namamenu, int valuemenu, int hargamenu)
        : kategori(kategoriMenu), nama(namamenu), value(valuemenu), harga(hargamenu) {}

    QString getKategori() const { return kategori; }

    QString getOutput() const {
        return QString::number(value) + " x " + nama + " = " +
               QString::number(harga * value);
    }

    static QString combineOutputs(const QList<Menu> &menuList) {
        QString combinedOutput;
        for (const Menu &menu : menuList) {
            if (menu.value > 0) { // Hanya menu dengan kuantitas > 0
                combinedOutput += menu.getKategori() + ": " + menu.getOutput() + "\n";
            }
        }
        return combinedOutput;
    }

    static int calculateTotal(const QList<Menu> &menuList) {
        int totalHarga = 0;
        for (const Menu &menu : menuList) {
            totalHarga += menu.value * menu.harga; // Tambahkan total untuk setiap menu
        }
        return totalHarga;
    }

};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void hal3tohal4();
    void processMenu(QList<Menu> menuList);

    //hal1
    void on_bnmulai_clicked();

    //hal2
    void hal2_to_hal3(QString menu);
    void on_bnsushi_clicked();
    void on_bnminum_clicked();
    void on_bnramen_clicked();

    //hal3ramen
    void hal3ramen(QString menu);
    void on_back_2_clicked();
    void on_nextconfirm_3_clicked();

    void naikramen1();
    void turunramen1();

    void naikramen2();
    void turunramen2();

    void naikramen3();
    void turunramen3();

    //hal3sushi
    void hal3sushi(QString menu);
    void on_back_3_clicked();
    void on_nextconfirm_2_clicked();

    void naiksushi1();
    void turunsushi1();

    void naiksushi2();
    void turunsushi2();

    void naiksushi3();
    void turunsushi3();

    //hal3minum
    void hal3minum(QString menu);
    void on_nextconfirm_clicked();
    void on_back_clicked();

    void naikminum1();
    void turunminum1();

    void naikminum2();
    void turunminum2();

    void naikminum3();
    void turunminum3();

    //hal4

    void hal4(QString menu);
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

    //hal5
    void on_backfirst_clicked();

protected:
    int valueramen1; //value dari ramen1
    int valueramen2;
    int valueramen3;
    int valuesushi1;
    int valuesushi2;
    int valuesushi3;
    int valueminum1;
    int valueminum2;
    int valueminum3;

    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
