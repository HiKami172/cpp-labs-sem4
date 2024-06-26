#include <iostream>
/* V3 != 0, V3 != 6, V2 < -V3, V1 = 6 - V3 - V2, V0 <= -V2 */
/* Изменяйте только эти 4 переменные */
constexpr int V0 = 0;
constexpr int V1 = 7;
constexpr int V2 = -6;
constexpr int V3 = 5;

/*
 * Точка входа с++ программы. Что передается через аргументы?
 */
int main(int argc, char** argv) {
    /* 
     * Вывод сообщения на консоль
     */
    std::cout << "Специальности ФКСИС" << std::endl;
    std::cout << "===================" << std::endl;

    /* for loop */
    for (int a = 0; a < V0 + V2; a++)
    {
        std::cout << "Самая ";
    }
    std::cout << "Лучшая специальность:" << std::endl;

    /* switch statement */
    switch (V1 + V2 + V3)
    {
    case 0:
        std::cout << "Конечно же ";
    case 1:
        std::cout << "Вычислительные машины, системы и сети";
        break;
    case 2:
        std::cout << "Информатика и технологии программирования и ";
    case 3:
        std::cout << "Программное обеспечение информационных технологий";
        break;
    case 4:
        std::cout << "Электронные вычислительные средства";
        break;
    case 5:
        std::cout << "Информатика и технологии программирования";
        break;
    case 6:
        std::cout << "Только ";
    case 7:
        std::cout << "Информатика и технологии программирования";
        break;
    case 8:
        std::cout << "Программное обеспечение информационных технологий";
        break;
    case 9:
        std::cout << "Вычислительные машины, системы и сети";
        break;
    case 10:
        std::cout << "Вычислительные машины, системы и сети и ";
    case 11:
        std::cout << "Программное обеспечение информационных технологий";
        break;
    case 12:
        std::cout << "Информатика и технологии программирования";
    default:
        std::cout << "Я не знаю, я кошу от армии";
    }
    std::cout << std::endl;

    /* ternary operator */
    const std::string s = (!V3 || V3 == 6) ? "МТЗ" : "БАТЭ";

    /* if statement */
    if (V2 + V3 < 0) {
	std::cout << s << " чемпион!" << std::endl;
    } else {
	std::cout << "Вперед " << s << '!' << std::endl;
    }

    return 0;
}
