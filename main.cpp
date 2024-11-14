#include <iostream>
using namespace std;
int main() {
    int AgeSum = 0, Count = 0;
    int OldestAge = 0, OldestNumber = 0;
    char run = 'y';
    char *fnameoftheoldest = new char [10];
    char *nameoftheoldest = new char [10];
    char *profession = new char [10];
    do {
            int Age = 0;
            cout << "Введите Ваш возраст: ";
            cin >> Age;
            char *fnameoftheoldesttmp = new char [10];
            char *nameoftheoldesttmp = new char [10];
            char *professiontmp = new char [10];
        cout << "Введите Вашу фамилию: ";
        cin >> fnameoftheoldesttmp;
        cout << "Введите Ваше имя: ";
        cin >> nameoftheoldesttmp;
        cout << "Введите Вашу профессию: ";
        cin >> professiontmp;
            AgeSum += Age;
            Count++;
            if (OldestAge < Age) {
                delete[] fnameoftheoldest, nameoftheoldest, profession;
                fnameoftheoldest = fnameoftheoldesttmp;
                nameoftheoldest = nameoftheoldesttmp;
                profession = professiontmp;
                OldestAge = Age;
                OldestNumber = Count;
                cout << "Вы самый взрослый!" << endl;
            } else
            {
                delete[] fnameoftheoldesttmp, nameoftheoldesttmp, professiontmp;
                cout << fnameoftheoldest << " " << nameoftheoldest << " " << profession << " " << OldestAge << endl;
            }
            cout << "------------------------- " << endl;
            cout << "Средний возраст: " <<
                 (float) AgeSum / Count << endl;
            cout << "Продолжить? (y/n) ";
            cin >> run;
            if ((run != 'y') &&
                (run != 'n')) {
                cout << "говорите точно: да или нет " << endl;
                run = 'y';
            }
        }
        while (run == 'y');
        delete[] fnameoftheoldest, nameoftheoldest, profession;
        return 0;
    }
