#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv); // 创建应用程序对象

    QLabel *label = new QLabel("Hello, Qt!"); // 创建标签控件
    label->setWindowTitle("My First Qt App"); // 设置窗口标题
    label->resize(300, 200); // 设置控件大小
    label->show(); // 显示控件

    return app.exec(); // 进入事件循环
}