

// ���������� ����
// ������������������� ��������������� ����
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

    cout << "����� ���������� � ����������� ����\n\n";
    cout << "������� ���� �������: ";
    cin >> leader;
    // �����
    cout << "\n�������� ������ �� " << adventurers << " ������� ���������� �� ������ \n";
    cout << "� ������� ����������� ��������� ������� ������. ";
    cout << "������ ���������� ��� ����� ����������� �������. " << leader << ". \n";
goadv:
    cout << "\n �� ���� ����� ��������������� �����, � ���������� " << (OGRS = rand() % 10 + 10) << ", ������ �� ����� �� ������.\n ";
    {
        scoreogrs = scoreogrs + OGRS;
        killed = (OGRS / 3);
        scoreadv = scoreadv + killed;
        if (0 >= adventurers - (OGRS / 3))
        {
            cout << "��� ��� ������ ���������. �� ����� ��������� ������� �����. ��� ���� � ���\n        Game over\n";
            cout << "����� ����� - " << scoreogrs << endl;
            cout << "������� ����� - " << scoreadv;
            return 0;
        }
        else
        {
            cout << "��� ��� ������ ��������� ��� ������������� " << leader;
            cout << ". � ���� ���� ���������. �� ����� �����. \n";
            cout << "�� ��������� �����������. " << killed << " ���� �����.\n ";
        }
    }

    
    cout << "�������� " << (survivors = adventurers - killed) << " � ������.\n";
    cout << "����� ��������� " << (GOLD_PIECES = OGRS_POINT * OGRS) << " ������� � ��������� ����� �����. ";
    cout << leader << " ������� ������������� �������, " << (GOLD_PIECES % survivors);
    cout << " �������.\n�������, ����� ��� ���� ������.\n";

    
        cout << "� " << leader << " � ����� ���� " << (gold = gold + (GOLD_PIECES / survivors) + (GOLD_PIECES % survivors)) << " �������\n";
    


    cout << (leader) << "����� � �������.\n";
nogold:
    cout << "������� ��������� ������?.\n ���� ������: " << (gold) << "\n ���� �������� 25 �������.\n";
    cin >> mercenary;
    if (gold < (mercenary * value))
    {
        cout << "� ��� �� ������� ������\n";
        goto nogold;
    }
    else
    {
        cout << "\n � ��� �������� " << (gold = gold - mercenary * value) << " ������� \n";

    }
  
    // ��������
 
    {
        if (gold > 1000)
        {
            cout << "�� ����� ����\n";
            cout << "����� ����� - " << scoreogrs << endl;
            cout << "������� ����� - " << scoreadv;
            return 0;
        }
        else
        {
            cout << "������ �� " << (adventurers = survivors + mercenary) << " ������� ����������� �� ������.\n";
            goto goadv;
        }
    }
    

    return 0;
}
