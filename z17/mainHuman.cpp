#include <iostream>
#include <fstream>
#include <string>
#include <vector>

class Human {
protected:
    std::string name;
    int age;

public:
    Human(const std::string& name = "", int age = 0) : name(name), age(age) {}
    virtual ~Human() = default;

    virtual void input() {
        std::cout << "Введите имя: ";
        std::cin >> name;
        std::cout << "Введите возраст: ";
        std::cin >> age;
    }

    virtual void display() const {
        std::cout << "Имя: " << name << ", Возраст: " << age << std::endl;
    }

    virtual void saveToFile(std::ofstream& out) const {
        out << name << "," << age << "\n";
    }
};

class Adult : virtual public Human {
protected:
    std::string job;

public:
    Adult(const std::string& name = "", int age = 0, const std::string& job = "") : Human(name, age), job(job) {}

    void input() override {
        Human::input();
        std::cout << "Введите работу: ";
        std::cin >> job;
    }

    void display() const override {
        Human::display();
        std::cout << "Работа: " << job << std::endl;
    }

    void saveToFile(std::ofstream& out) const override {
        out << name << "," << age << "," << job << "\n";
    }
};

class Child : virtual public Human {
protected:
    std::string school;

public:
    Child(const std::string& name = "", int age = 0, const std::string& school = "") : Human(name, age), school(school) {}

    void input() override {
        Human::input();
        std::cout << "Введите школу: ";
        std::cin >> school;
    }

    void display() const override {
        Human::display();
        std::cout << "Школа: " << school << std::endl;
    }

    void saveToFile(std::ofstream& out) const override {
        out << name << "," << age << "," << school << "\n";
    }
};

class Teenager : public Adult, public Child {
private:
    std::string hobby;

public:
    Teenager(const std::string& name = "", int age = 0, const std::string& job = "", const std::string& school = "", const std::string& hobby = "")
        : Human(name, age), Adult(name, age, job), Child(name, age, school), hobby(hobby) {}

    void input() override {
        Human::input();
        std::cout << "Введите работу: ";
        std::cin >> job;
        std::cout << "Введите школу: ";
        std::cin >> school;
        std::cout << "Введите хобби: ";
        std::cin >> hobby;
    }

    void display() const override {
        Human::display();
        std::cout << "Работа: " << job << ", Школа: " << school << ", Хобби: " << hobby << std::endl;
    }

    void saveToFile(std::ofstream& out) const override {
        out << name << "," << age << "," << job << "," << school << "," << hobby << "\n";
    }
};

// вспомогательная функция
void saveAllToFile(const std::vector<Human*>& humans, const std::string& filename) {
    std::ofstream out(filename);
    if (!out.is_open()) {
        std::cerr << "Не удалось открыть файл для записи." << std::endl;
        return;
    }
    for (const auto& human : humans) {
        human->saveToFile(out);
    }
    out.close();
}

int main() {
    std::vector<Human*> humans;
    char choice;

    do {
        std::cout << "Выберите тип человека для добавления (a: Взрослый, c: Ребенок, t: Подросток): ";
        std::cin >> choice;
        Human* human = nullptr;

        if (choice == 'a') {
            human = new Adult;
        } else if (choice == 'c') {
            human = new Child;
        } else if (choice == 't') {
            human = new Teenager;
        }

        if (human) {
            human->input();
            humans.push_back(human);
        } else {
            std::cout << "Неверный выбор." << std::endl;
        }

        std::cout << "Добавить еще? (y/n): ";
        std::cin >> choice;
    } while (choice == 'y');

    std::cout << "\nВсе люди:\n";
    for (const auto& human : humans) {
        human->display();
    }

    saveAllToFile(humans, "humans.txt");

    for (auto& human : humans) {
        delete human;
    }

    return 0;
}
