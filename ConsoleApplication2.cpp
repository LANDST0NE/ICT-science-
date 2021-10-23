#include <iostream>  
#include <string>
#include <sstream>
#include <ctime>



using namespace std;



int main() {
    git remote add origin https ://github.com/LANDST0NE/ICT-science-.git
    git branch - M main
    git push - u origin main
    time_t now = time(0);

    string dt = ctime(&now);
    cout << dt;
    int w;
    string s_num, s_ccv, s_exdt;
    string date;
    //input
    cout << "Hello, please send me your number of debit card" << endl;
    cin >> s_num;
    cout << "Cool, after this send me your expiry date" << endl;
    cin >> s_exdt;
    cout << "Outstanding! And finally, send me your ccv ;) " << endl;
    cin >> s_ccv;
    string s = " ";
    //what's bank?
    for (int i = 0; i < 6; i++) {
        s += s_num[i];
    }
    istringstream(s) >> w;
    if (w == 527883 or w == 427229 or w == 447520)  cout << "You have a card from VTB" << endl;
    else if (w == 54899 or w == 526483) cout << "You have a from GAZPROM bank" << endl;
    else {
        cout << "I don't know this bank ):" << endl;
    }
    //expiry date
    string s1 = " ";
    cout << "Send me date and time, please" << endl;
    cin >> s1;
    int x1, x2;
    istringstream(s1) >> x1;
    istringstream(s_exdt) >> x2;
    if (x1 >= x2) {
        cout << "expired" << endl;
    }
    else {
        cout << "not expired";
    }
    


    return 0;
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
