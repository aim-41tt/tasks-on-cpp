#include <iostream>
#include <string>

using namespace std;

struct Human {
    string name;
    string surname;
    int age;
    float weight;
    float height;

    Human(string n, string s, int a, float w, float h)
        : name(n), surname(s), age(a), weight(w), height(h) {}

    double calculateBMI() const {
        return (weight / 2.205) / ((height / 39.37) * (height / 39.37));
    }

    int calculateBirthYear() const {
        return 2024 - age;
    }

    void display() const {
        cout << "Имя: " << name << ", Фамилия: " << surname
             << ", Возраст: " << age << ", Вес: " << weight
             << ", Рост: " << height << ", ИМТ: " << calculateBMI()
             << ", Год рождения: " << calculateBirthYear() << endl;
    }
};

struct Car {
    string brand;
    string color;
    string bodyType;
    float engineVolume;
    int mileage;

    Car(string b, string c, string bt, float ev, int m)
        : brand(b), color(c), bodyType(bt), engineVolume(ev), mileage(m) {}

    double calculateFuelConsumption() const {
        return (engineVolume / mileage) * 100;
    }

    void reduceMileage(int reduction) {
        mileage -= reduction;
        if (mileage < 0) mileage = 0;
    }

    void display() const {
        cout << "Марка: " << brand << ", Цвет: " << color
             << ", Тип кузова: " << bodyType << ", Объем двигателя: " << engineVolume
             << ", Пробег: " << mileage << ", Расход топлива на 100км: " << calculateFuelConsumption() << endl;
    }
};

struct Animal {
    string name;
    string species;
    string color;
    int age;
    float weight;

    Animal(string n, string sp, string c, int a, float w)
        : name(n), species(sp), color(c), age(a), weight(w) {}

    void increaseWeight(int daysFed) {
        weight += weight * 0.01 * daysFed;
    }

    void changeName(const string& newName) {
        name = newName;
    }

    void display() const {
        cout << "Имя: " << name << ", Вид: " << species
             << ", Окрас: " << color << ", Возраст: " << age
             << ", Вес: " << weight << endl;
    }
};

int main() {
    Human h1 = {"Иван", "Иванов", 30, 80.5, 175.0};
    Human h2("Мария", "Петрова", 25, 60.0, 165.0);
    Human h3("Алексей", "Смирнов", 40, 90.0, 180.0);
    Human* h4 = new Human("Светлана", "Попова", 28, 65.0, 170.0);

    h1.display();
    h2.display();
    h3.display();
    h4->display();

    delete h4;

    Car c1 = {"Toyota", "Черный", "Седан", 1.8, 20000};
    Car c2("Honda", "Красный", "Хэтчбек", 1.5, 15000);
    Car c3("Ford", "Синий", "Внедорожник", 2.0, 25000);
    Car* c4 = new Car("Mazda", "Белый", "Купе", 2.2, 10000);

    c1.display();
    c2.display();
    c3.display();
    c4->display();

    delete c4;

    Animal a1 = {"Мурзик", "Кот", "Черный", 3, 5.0};
    Animal a2("Бобик", "Собака", "Коричневый", 5, 10.0);
    Animal a3("Попугай", "Попугай", "Зеленый", 2, 0.5);
    a3.increaseWeight(1);
    Animal* a4 = new Animal("Кеша", "Попугай", "Синий", 1, 0.3);

    a1.display();
    a2.display();
    a3.display();
    a4->display();

    delete a4;

    return 0;
}
