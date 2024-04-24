#include <iostream>

using namespace std;

//1.
double SumAvg(int x, int y);
void OneOut();

//2.
int TwoIn(double * ary[], int size);
double TwoAvg(const double ary [],int size);
void Show();

//3.
struct box {
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};
void OnlyValue(box stc);
void UseAddress(box * ptr);
void Three();

//4.
long double probability(unsigned numbers, unsigned picks);
void Four();



int main() {
    Four();
    return 0;
}

//1.
double SumAvg(int x, int y){
    double avg {};
    avg = 2.0 * x * y / (x + y);
    return avg;
}
void OneOut(){
    cout << "Please input two number until one of is zero" << endl;
    int x {}, y {};
    while (cin >> x >> y && x != 0 && y != 0)
        cout << "SumAvg is: " << SumAvg(x, y) << endl;
}

//2.
int TwoIn(double ary[], int size){
    cout << "Please input less than 10 golf score, input 'q' to end" << endl;
    int i;
    for (i = 0; i < size; ++i) {
        if (!(cin >> ary[i])){
            cin.clear();
            break;
        }
    }
    return i;
}
double TwoAvg(const double ary [], int size){
    double count {};
    for (int i = 0; i < size; ++i) {
        count += ary[i];
    }
    return count / size;
}
void Show(){
    const int size = 10;
    double ary [size] {};
    int length = TwoIn(ary, size);
    for (int i = 0; i < length; ++i) {
        cout << ary[i] << " ";
    }
    cout << endl << TwoAvg(ary, length) << endl;
}

//3.
void OnlyValue(box stc){
    cout << stc.length << " " << stc.volume << " " << stc.height << " " << stc.maker << " " << stc.width << endl;
}
void UseAddress(box * ptr){
    ptr->volume = ptr->height * ptr->width * ptr->length;
}
void Three(){
    box stc = {"hello", 2.0, 3.0 , 4.0, 5.0};
    OnlyValue(stc);
    UseAddress(&stc);
    OnlyValue(stc);
}

//4.
long double probability(unsigned numbers, unsigned picks){
    long double result = 1.0;
    long double n;
    unsigned p;
    for (n = numbers, p = picks; p > 0; n--, p--)
        result = result * n / p;
    return 1.0 / result / 27.0;
}
void Four(){
    double total, choices;
    cout << "Enter the total number of choices on the game card and\n"
         << "the number of picks allowed:\n";
    while ((cin >> total >> choices) && choices <= total)
    {
        cout << "You have one chance in ";
        cout << probability(total, choices);
        cout << " of winning.\n";
        cout << "Next two numbers (q to quit)";
    }
    cout << "bye.\n";
}