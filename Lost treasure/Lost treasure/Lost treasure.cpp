

// Утраченный клад
// Персонализированная приключенческая игра
#include <iostream>
#include <string>
#include <ctime>
using std:: cout;
using std:: cin;
using std:: endl;
using std:: string;
int main()
{
    setlocale(LC_ALL, "ru");
    srand(time(NULL));
    const int OGRS_POINT = 40;
    int adventurers = 10, killed, survivors, gold = 0, GOLD_PIECES, value = 20, mercenary, OGRS = rand() % 10 + 10, scoreogrs = 0, scoreadv = 0;
    string leader;
    char restartKey;

    cout << "Добро пожаловать в «Утраченный клад»\n\n";
    cout << "Введите свою фамилию: ";
    cin >> leader;
    // сюжет
    cout << "\nОтважная группа из " << adventurers << " человек отправился на поиски \n";
    cout << "В поисках затерянного сокровища Древних Гномов. ";
    cout << "Группу возглавлял тот самый легендарный негодяй. " << leader << ". \n";
goadv:
    cout << "\n по пути банда мародерствующих огров, в количестве " << (OGRS = rand() % 10 + 10) << ", напала на отряд из засады.\n ";
    {
        scoreogrs = scoreogrs + OGRS;
        killed = (OGRS / 3);
        scoreadv = scoreadv + killed;
        if (0 >= adventurers - (OGRS / 3))
        {
            cout << "Все они храбро сражались. Но огров оказалось слишком много. Все пали в бою\n        Game over\n";
            cout << "Убито огров - " << scoreogrs << endl;
            cout << "Погибло людей - " << scoreadv;
            return 0;
        }
        else
        {
            cout << "Все они храбро сражались под командованием " << leader;
            cout << ". и огры были побеждены. но какой ценой. \n";
            cout << "Из искателей приключений. " << killed << " были убиты.\n ";
        }
    }

    
    cout << "осталось " << (survivors = adventurers - killed) << " в группе.\n";
    cout << "Отряд заработал " << (GOLD_PIECES = OGRS_POINT * OGRS) << " золотых и разделили между собой. ";
    cout << leader << " получал дополнительно остатки, " << (GOLD_PIECES % survivors);
    cout << " золотых.\nКонечно, чтобы все было честно.\n";

    
        cout << "У " << leader << " в итоге было " << (gold = gold + (GOLD_PIECES / survivors) + (GOLD_PIECES % survivors)) << " золотых\n";
    


    cout << (leader) << "вошел в таверну.\n";
nogold:
    cout << "Сколько наемников нанять?.\n Ваше золото: " << (gold) << "\n Цена наемника 25 золотых.\n";
    cin >> mercenary;
    if (gold < (mercenary * value))
    {
        cout << "У вас не хватает золота\n";
        goto nogold;
    }
    else
    {
        cout << "\n У вас осталось " << (gold = gold - mercenary * value) << " золотых \n";

    }
  
    // проверка
 
    {
        if (gold > 1000)
        {
            cout << "Вы нашли клад\n";
            cout << "Убито огров - " << scoreogrs << endl;
            cout << "Погибло людей - " << scoreadv;
            return 0;
        }
        else
        {
            cout << "Группа из " << (adventurers = survivors + mercenary) << " человек отправились на поиски.\n";
            goto goadv;
        }
    }
    

    return 0;
}
