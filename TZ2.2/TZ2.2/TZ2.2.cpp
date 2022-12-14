#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    ifstream f;
    f.open("CreativeTask2.txt");
    string s;
    getline(f, s);
    f.close();
    int a[26];
    for (int i = 0; i < 26; i++) {
        a[i] = 0;
    }
    for (int i = 0; i < s.size(); i++) {
        int tmp = int(s[i]);
        tmp = tmp - 65;
        a[tmp]++;
    }
    int max_count = 0;
    for (int i = 0; i < 26; i++) {
        if (a[i] > 0) {
            cout << char(i + 65);
        }
        max_count = max(max_count, a[i]);
    }
    cout << max_count;
}
//объяснение:
//создаём массив на 26 элементов, по одному на каждую прописную букву латинского алфавита (по порядку: 0 — A, 1 — B и т.д);
//каждый элемент массива приравниваем к нулю;
//проходимся по строке;
//хитрым способом (через ASCII таблицу) узнаём, какой элемент массива "отвечает" за текущий символ (букву латинского алфавита); 
//увеличиваем этот элемент на 1 (каждый элемент массива показывает количество раз, сколько встретилась буква, которая к нему "прикреплена");
//проходимся по массиву;
//если элемент массива больше 0, то выводим букву, за которую этот элемент "отвечает";
//сравниваем элемент массива и max_count, записываем во вторую переменную наибольшее значение;
//выводим max_count — количество раз, сколько встретилась самая часто употребляемая буква