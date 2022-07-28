#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    ifstream f;
    f.open("CreativeTask2.txt");
    int max_count = 0;
    int count = 0;
    string s;
    getline(f, s);
    f.close();
    for (int i = 65; i <= 90; i++) {
        int flag = 0;
        for (int j = 0; j < s.size(); j++) {
            if (s[j] == char(i)) {
                flag = 1;
                count++;
            }
        }
        max_count = max(max_count, count);
        count = 0;
        if (flag == 1) {
            cout << char(i);
        }
    }
    cout << max_count;
}
//объяснение:
//по порядку проходимся по всем прописным буквам латинского алфавита (будем называть рассматриваемую букву на данной итерации текущей);
//проходимся по строке;
//если символ — текущая буква, то отмечаем, что нашли её (flag = 1), и увеличиваем count на 1 (показывает, сколько раз нашли текущую букву);
//сравниваем count и max_count, во вторую переменную заносим наибольшее значение;
//если мы нашли текущую букву в строке (flag == 1), то выводим её;
//выводим max_count — количество раз, сколько встретилась самая часто употребляемая буква

