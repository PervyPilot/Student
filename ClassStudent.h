#pragma once
#include <string>

using namespace std;

struct Date
{
    int year;
    int month;
    int day;
};

class Student
{
public:
    string lastName; //Фамилия
    string firstName; //Имя
    Date dateBirth; //Дата рождения
    string faculty; //Факультет
    string group; //Группа
    int stage; //Курс
    bool study; //Учится?
    void SetAge(int age); //Установка занчения возраста
    int GetAge(); //Получение значения возраста
    int ratingStage[6];   //оценки за 6 месяцев
    double GetRating();   //Получение средней оценки
private:
    int age;			//Возраст
    double rating;      //средняя оценка
    void CalculateRating(); //расчет средней оценки
};
void Student::CalculateRating()
{
    double count = 0;
    for (int i = 0; i < 6; i++)
    {
        count += ratingStage[i];
    }
    rating = count / 6;
}
double Student::GetRating()
{
    return rating;
}
void Student::SetAge(int age)
{
    if (age <= 10  || age > 80) {
        throw -1;
    } else {
        this->age = age;
    }
}

int Student::GetAge()
{
    return age;
}