#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QDebug>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  explicit MainWindow(QWidget *parent = 0);
  ~MainWindow();
  
public slots:
  void tcpConnect();
  void tcpDisconnect();
  void showMessage(QString msg);
  void startTransmission();
  void stopTransmission();
  void generateInput();

private:
  Ui::MainWindow *ui;
  QTcpSocket *socket;
  QString str;
  QTimer *timer;
};

#endif // MAINWINDOW_H
