#include <iostream>
#include <string>
#include <vector>
#include <fstream>

// Базовый класс для всех людей
class Person {
protected:
    std::string name;
    int id;

public:
    Person(const std::string& name = "", int id = 0) : name(name), id(id) {}
    virtual ~Person() = default;

    virtual void input() {
        std::cout << "Введите имя: ";
        std::cin >> name;
        std::cout << "Введите ID: ";
        std::cin >> id;
    }

    virtual void display() const {
        std::cout << "Имя: " << name << ", ID: " << id << std::endl;
    }

    virtual void save(std::ofstream& out) const {
        out << "Имя: " << name << ", ID: " << id << std::endl;
    }
};

// Сотрудник библиотеки
class Librarian : public Person {
private:
    std::string position;

public:
    Librarian(const std::string& name = "", int id = 0, const std::string& position = "")
        : Person(name, id), position(position) {}

    void input() override {
        Person::input();
        std::cout << "Введите должность: ";
        std::cin >> position;
    }

    void display() const override {
        Person::display();
        std::cout << "Должность: " << position << std::endl;
    }

    void save(std::ofstream& out) const override {
        Person::save(out);
        out << "Должность: " << position << std::endl;
    }
};

// Клиент библиотеки
class Client : public Person {
private:
    int booksBorrowed;

public:
    Client(const std::string& name = "", int id = 0, int booksBorrowed = 0)
        : Person(name, id), booksBorrowed(booksBorrowed) {}

    void input() override {
        Person::input();
        std::cout << "Введите количество взятых книг: ";
        std::cin >> booksBorrowed;
    }

    void display() const override {
        Person::display();
        std::cout << "Количество взятых книг: " << booksBorrowed << std::endl;
    }

    void save(std::ofstream& out) const override {
        Person::save(out);
        out << "Количество взятых книг: " << booksBorrowed << std::endl;
    }
};

// Книга
class Book {
private:
    std::string title;
    std::string author;
    int id;

public:
    Book(const std::string& title = "", const std::string& author = "", int id = 0)
        : title(title), author(author), id(id) {}

    void input() {
        std::cout << "Введите название книги: ";
        std::cin >> title;
        std::cout << "Введите автора книги: ";
        std::cin >> author;
        std::cout << "Введите ID книги: ";
        std::cin >> id;
    }

    void display() const {
        std::cout << "Название: " << title << ", Автор: " << author << ", ID: " << id << std::endl;
    }

    void save(std::ofstream& out) const {
        out << "Название: " << title << ", Автор: " << author << ", ID: " << id << std::endl;
    }
};

// Библиотека
class Library {
private:
    std::vector<Book> books;
    std::vector<Librarian> librarians;
    std::vector<Client> clients;

public:
    void addBook() {
        Book book;
        book.input();
        books.push_back(book);
    }

    void addLibrarian() {
        Librarian librarian;
        librarian.input();
        librarians.push_back(librarian);
    }

    void addClient() {
        Client client;
        client.input();
        clients.push_back(client);
    }

    void displayAll() const {
        std::cout << "\nСписок книг:\n";
        for (const auto& book : books) {
            book.display();
        }

        std::cout << "\nСписок сотрудников:\n";
        for (const auto& librarian : librarians) {
            librarian.display();
        }

        std::cout << "\nСписок клиентов:\n";
        for (const auto& client : clients) {
            client.display();
        }
    }

    void saveToFile(const std::string& filename) const {
        std::ofstream outFile(filename);

        outFile << "Список книг:\n";
        for (const auto& book : books) {
            book.save(outFile);
        }

        outFile << "\nСписок сотрудников:\n";
        for (const auto& librarian : librarians) {
            librarian.save(outFile);
        }

        outFile << "\nСписок клиентов:\n";
        for (const auto& client : clients) {
            client.save(outFile);
        }

        outFile.close();
    }
};

// Основная программа
int main() {
    Library library;
    int choice;

    do {
        std::cout << "\nМеню:\n"
                  << "1. Добавить книгу\n"
                  << "2. Добавить сотрудника\n"
                  << "3. Добавить клиента\n"
                  << "4. Показать все записи\n"
                  << "5. Сохранить в файл\n"
                  << "0. Выйти\n"
                  << "Ваш выбор: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            library.addBook();
            break;
        case 2:
            library.addLibrarian();
            break;
        case 3:
            library.addClient();
            break;
        case 4:
            library.displayAll();
            break;
        case 5:
            library.saveToFile("library_data.txt");
            std::cout << "Данные сохранены в файл library_data.txt\n";
            break;
        case 0:
            std::cout << "Выход из программы.\n";
            break;
        default:
            std::cout << "Неверный выбор, попробуйте снова.\n";
        }
    } while (choice != 0);

    return 0;
}
