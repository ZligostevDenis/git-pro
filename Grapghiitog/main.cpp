#include "function.h" // Подключаем заголовочный файл главного окна

#include <QApplication> // Подключаем для создания приложения

// Точка входа в программу
int main(int argc, char *argv[])
{
    QApplication a(argc, argv); // Создаем объект приложения
    Dialog w; // Создаем объект главного окна
    w.show(); // Отображаем главное окно
    return a.exec(); // Запускаем цикл обработки событий приложения
}