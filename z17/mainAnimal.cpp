#include <iostream>
#include <fstream>
#include <string>
#include <vector>

class Animal {
protected:
    std::string name;
    int age;

public:
    Animal(const std::string& name = "", int age = 0) : name(name), age(age) {}
    virtual void input() {
        std::cout << "Введите имя животного: ";
        std::cin >> name;
        std::cout << "Введите возраст: ";
        std::cin >> age;
    }
    virtual void display() const {
        std::cout << "Имя: " << name << ", Возраст: " << age << " лет" << std::endl;
    }
    virtual void save(std::ofstream& out) const {
        out << "Имя: " << name << ", Возраст: " << age << " лет" << std::endl;
    }
    virtual ~Animal() = default;
};

class DomesticAnimal : virtual public Animal {
protected:
    std::string ownerName;

public:
    DomesticAnimal(const std::string& name = "", int age = 0, const std::string& ownerName = "")
        : Animal(name, age), ownerName(ownerName) {}

    void input() override {
        Animal::input();
        std::cout << "Введите имя владельца: ";
        std::cin >> ownerName;
    }

    void display() const override {
        Animal::display();
        std::cout << "Имя владельца: " << ownerName << std::endl;
    }

    void save(std::ofstream& out) const override {
        Animal::save(out);
        out << "Имя владельца: " << ownerName << std::endl;
    }
};

class WildAnimal : virtual public Animal {
protected:
    std::string habitat;

public:
    WildAnimal(const std::string& name = "", int age = 0, const std::string& habitat = "")
        : Animal(name, age), habitat(habitat) {}

    void input() override {
        Animal::input();
        std::cout << "Введите среду обитания: ";
        std::cin >> habitat;
    }

    void display() const override {
        Animal::display();
        std::cout << "Среда обитания: " << habitat << std::endl;
    }

    void save(std::ofstream& out) const override {
        Animal::save(out);
        out << "Среда обитания: " << habitat << std::endl;
    }
};

class StreetAnimal : public DomesticAnimal, public WildAnimal {
private:
    std::string streetName;

public:
    StreetAnimal(const std::string& name = "", int age = 0, const std::string& ownerName = "",
                 const std::string& habitat = "", const std::string& streetName = "")
        : Animal(name, age), DomesticAnimal(name, age, ownerName),
          WildAnimal(name, age, habitat), streetName(streetName) {}

    void input() override {
        DomesticAnimal::input();
        std::cout << "Введите название улицы: ";
        std::cin >> streetName;
    }

    void display() const override {
        DomesticAnimal::display();
        std::cout << "Название улицы: " << streetName << std::endl;
    }

    void save(std::ofstream& out) const override {
        DomesticAnimal::save(out);
        out << "Название улицы: " << streetName << std::endl;
    }
};

int main() {
    std::vector<Animal*> animals;
    int choice;

    do {
        std::cout << "Выберите тип животного:\n"
                  << "1. Домашнее животное\n2. Дикое животное\n3. Уличное животное\n0. Завершить ввод\n";
        std::cin >> choice;

        Animal* animal = nullptr;
        switch (choice) {
        case 1:
            animal = new DomesticAnimal();
            break;
        case 2:
            animal = new WildAnimal();
            break;
        case 3:
            animal = new StreetAnimal();
            break;
        default:
            break;
        }

        if (animal) {
            animal->input();
            animals.push_back(animal);
        }
    } while (choice != 0);

    std::ofstream outFile("animals.txt");
    for (const auto& animal : animals) {
        animal->display();
        animal->save(outFile);
    }

    for (auto& animal : animals) {
        delete animal;
    }

    return 0;
}
