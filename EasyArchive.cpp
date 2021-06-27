// EasyArchive.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cstdio>

int main()
{
    int menu_param; // parameter to choosing archive or dearchive
    char filename[FILENAME_MAX]; // filename
    FILE* fin; // pointer to input file
    errno_t err;
    std::cout << "Please choose archivating(1) dearchivating(2) or another to quit\n";
    std::cin >> menu_param;
    std::cout << "Please enter filename\n";
    std::cin >> filename;
    
    err = fopen_s(&fin, filename, "r");

    if (!err)
    {
        // File opened. Lets work
        if (1 == menu_param) // archivator
        {

        }
        else if (2 == menu_param) // dearchivator
        {

        }
        fclose (fin);
        return 0;
    }
    else 
    {
        // File is not opened
        std::cout << "Error of opening file";
        return 0;
    }
    
    
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
