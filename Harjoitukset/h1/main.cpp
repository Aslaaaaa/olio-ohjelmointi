#include <iostream>

using namespace std;

void calcSum(int a, int b)
{
    cout << "Summa: " << a + b << endl;
}

void calcDiv(int a, int b)
{
    if(b == 0)
    {
        cout << "Virhe! Jakaja ei voi olla 0\n";
    }
    else
    {
        cout << "Osamäärä: " << static_cast<double>(a) / b << endl;
    }
}

int retSum(int a, int b)
{
    return a + b;
}

float retDiv(int a, int b)
{
    if(b == 0)
    {
        throw std::runtime_error("jakaja ei saa olla nolla!");
    }
    else
    {
        return static_cast<float>(a) / b;
    }
}

int main()
{
    int a;
    int b;

    cout << "Anna numero: ";
    cin >> a;

    cout << "Anna numero: ";
    cin >> b;

    calcSum(a,b);
    calcDiv(a,b);

    cout << a << " + " << b << " = " << retSum(a,b) << endl;

    float result;
    try {
        result = retDiv(a, b);
        cout << a << " / " << b << " = " << result << endl;
    } catch (runtime_error& e) {
        cout << "Error: " << e.what() << endl;
    }

    //Testi
    //cout << "Summa: " <<retSum(a, b) << endl;
    //cout << "Osamäärä: " <<retDiv(a, b) << endl;

    return 0;
}

