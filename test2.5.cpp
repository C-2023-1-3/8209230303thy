#include <iostream>
#include <string>
using namespace std;
int main() 
{
    string str;
    int letter = 0, space = 0, num = 0, other = 0;
    cout << "�������ַ���: ";
    getline(cin, str);
    for (auto sign : str) {
        if (sign >= 'A' && sign <= 'z') {
            letter+=1;
        }
        else if (sign == ' ') {
            space+=1;
        }
        else if (sign >= '1' && sign <= '9') {
            num+=1;
        }
        else {
            other+=1;
        }
    }
    cout << "Ӣ����ĸ��" << letter << "��,"
        << "�ո���" << space << "��,"
        << "������" << num << "��,"
        << "�����ַ�" << other << "��";
    return 0;
}