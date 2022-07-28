#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    ifstream f;
    f.open("CreativeTask1.txt");
    int max_count = 0;
    int count = 0;
    string s;
    getline(f, s);
    f.close();
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '-') {
            count++;
            max_count = max(max_count, count);
        }
        else {
            count = 0;
        }
    }
    cout << max_count;
}
//объяснение:
//проходимся по строке; 
//если символ — "-", тогда count увеличиваем на 1 и сразу же сравниваем с текущим max_count, заносим туда наибольшее значение;
//если символ — "+", тогда count приравниваем к нулю;
//выводим max_count - ответ