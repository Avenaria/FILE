#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <sstream>
using namespace std;

class
	turnover
{
public:
	string path = "C:\\Users\\1\\Desktop\\учёба FOX\\File23\\test.txt";//полный путь файла 
	FILE* f, f1;

	//void CreateFile(FILE* f, const char* pathP) {//создание файла
		/*if (!fopen_s(&f, pathP, "w")) {
			printf("Файл успешно создан\n");
		}
		else printf("Ошибка создания\n");
		fclose(f);
	}*/
	void PrintFile(FILE* f, const char* pathP) {// показать список из файла
		setlocale(0, "");//русский язык
		const char temp[1000] = " ";// временная переменная
		string storage;// строка которая хранит значение расшифрованного файла
		if (!fopen_s(&f, pathP, "w")) {// открываем с перезаписью 

			storage.push_back(*temp);// превращаем чар в стринг

			reverse(storage.begin(), storage.end());// переворачиваем 
			//fputs(A, f);//перезаписываем //// не нужно наверное
			while (!feof(f)) {// смотрим что получилось 

				fscanf_s(f, "%s", temp, sizeof(temp));
				printf("%s\n", temp);
			}

			// выделяем слово 
			string word;//разбиваем на слова
			word.assign(storage, 3);// разбиваем на слова
			cout << word;// слово
			fclose(f);// закрываем поток

		}
		else cout << "Ошибка открытия файла";

	}


};
int main() {
	setlocale(0, "");

	turnover a;
	FILE* g;
	//a.CreateFile(a.f, "C:\\Users\\1\\Desktop\\учёба FOX\\gzdfgzgzghz\\test.txt");
	a.PrintFile(a.f, "C:\\Users\\1\\Desktop\\учёба FOX\\gzdfgzgzghz\\test.txt");


}