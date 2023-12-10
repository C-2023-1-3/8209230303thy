//#include<iostream>
//#include<cstring>
//using namespace std;
//
//int indexOf(char* string1, char* string2)
//{
//    int temp = 0;
//    int len1 = strlen(string1), len2 = strlen(string2);
//    for (int i = 0, j = 0; j < len2; j++)
//    {
//        if (string1[i] == string2[j])
//        {
//            for (int a = i + 1, b = j + 1; a < len1; a++, b++)
//            {
//                if (string1[a] == string2[b])
//                {
//                    temp = j;
//                }
//                else
//                {
//                    temp = -1;
//                    break;
//                }
//            }
//        }
//        else
//        {
//            temp = -1;
//        }
//        if (temp != -1)
//        {
//            break;
//        }
//    }
//    return temp;
//}
//
//int main()
//{
//    char string1[999], string2[999];
//    cout << "ÊäÈë×Ö·û´®1" << endl;
//    cin.getline(string1, 999);
//    cout << "ÊäÈë×Ö·û´®2" << endl;
//    cin.getline(string2, 999);
//    cout << "indexOf(" << string1 << "," << string2 << ") is:" << indexOf(string1, string2);
//    return 0;
//}
//
//
//
//
//
