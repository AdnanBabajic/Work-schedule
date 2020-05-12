#include "widget.h"
#include "ui_widget.h"
#include <QIODevice>
#include <QTextEdit>
#include <QFile>
#include <QTextStream>
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    QFile file("C:\\Users\\User\\Desktop\\workDay\\storage.txt");
          if(file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text))
          {
              QTextStream stream(&file);
              if(ui->textEdit->document()->isEmpty()) {stream<<"empty"<<endl;}
              else {
                  stream<<ui->textEdit->toPlainText()<<endl;}
              if(ui->textEdit_2->document()->isEmpty()) {stream<<"empty"<<endl;}
              else {
                  stream<<ui->textEdit_2->toPlainText()<<endl;}
              if(ui->textEdit_3->document()->isEmpty()) {stream<<"empty"<<endl;}
              else {
                  stream<<ui->textEdit_3->toPlainText()<<endl;}
              if(ui->textEdit_4->document()->isEmpty()) {stream<<"empty"<<endl;}
              else {
                  stream<<ui->textEdit_4->toPlainText()<<endl;}
              if(ui->textEdit_5->document()->isEmpty()) {stream<<"empty"<<endl;}
              else {
                  stream<<ui->textEdit_5->toPlainText()<<endl;}
              if(ui->textEdit_6->document()->isEmpty()) {stream<<"empty"<<endl;}
              else {
                  stream<<ui->textEdit_6->toPlainText()<<endl;}
              if(ui->textEdit_7->document()->isEmpty()) {stream<<"empty"<<endl;}
              else {
                  stream<<ui->textEdit_7->toPlainText()<<endl;}
              if(ui->textEdit_8->document()->isEmpty()) {stream<<"empty"<<endl;}
              else {
                  stream<<ui->textEdit_8->toPlainText()<<endl;}
              if(ui->textEdit_9->document()->isEmpty()) {stream<<"empty"<<endl;}
              else {
                  stream<<ui->textEdit_9->toPlainText()<<endl;}
              if(ui->textEdit_10->document()->isEmpty()) {stream<<"empty"<<endl;}
              else {
                  stream<<ui->textEdit_10->toPlainText()<<endl;}
              if(ui->textEdit_11->document()->isEmpty()) {stream<<"empty"<<endl;}
              else {
                  stream<<ui->textEdit_11->toPlainText()<<endl;}
              if(ui->textEdit_12->document()->isEmpty()) {stream<<"empty"<<endl;}
              else {
                  stream<<ui->textEdit_12->toPlainText()<<endl;}
              if(ui->textEdit_13->document()->isEmpty()) {stream<<"empty"<<endl;}
              else {
                  stream<<ui->textEdit_13->toPlainText()<<endl;}
              if(ui->textEdit_14->document()->isEmpty()) {stream<<"empty"<<endl;}
              else {
                  stream<<ui->textEdit_14->toPlainText()<<endl;}
              if(ui->textEdit_15->document()->isEmpty()) {stream<<"empty"<<endl;}
              else {
                  stream<<ui->textEdit_15->toPlainText()<<endl;}

              file.close();          }
}

void Widget::on_pushButton_2_clicked()
{
    QFile file("C:\\Users\\User\\Desktop\\workDay\\storage.txt");
    if(file.open((QIODevice::ReadOnly | QIODevice::Text)))
{
        QTextStream stream(&file);

        ui->textEdit->setText(file.readLine());
        ui->textEdit_2->setText(file.readLine());
        ui->textEdit_3->setText(file.readLine());
        ui->textEdit_4->setText(file.readLine());
        ui->textEdit_5->setText(file.readLine());
        ui->textEdit_6->setText(file.readLine());
        ui->textEdit_7->setText(file.readLine());
        ui->textEdit_8->setText(file.readLine());
        ui->textEdit_9->setText(file.readLine());
        ui->textEdit_10->setText(file.readLine());
        ui->textEdit_11->setText(file.readLine());
        ui->textEdit_12->setText(file.readLine());
        ui->textEdit_13->setText(file.readLine());
        ui->textEdit_14->setText(file.readLine());
        ui->textEdit_15->setText(file.readLine());

        file.close();
    }
}

void Widget::on_pushButton_4_clicked()
{
    QFile file("C:\\Users\\User\\Desktop\\workDay\\storage.txt");
    file.resize(0);
    ui->textEdit->setText("");
    ui->textEdit_2->setText("");
    ui->textEdit_3->setText("");
    ui->textEdit_4->setText("");
    ui->textEdit_5->setText("");
    ui->textEdit_6->setText("");
    ui->textEdit_7->setText("");
    ui->textEdit_8->setText("");
    ui->textEdit_9->setText("");
    ui->textEdit_10->setText("");
    ui->textEdit_11->setText("");
    ui->textEdit_12->setText("");
    ui->textEdit_13->setText("");
    ui->textEdit_14->setText("");
    ui->textEdit_15->setText("");
    file.close();
}
