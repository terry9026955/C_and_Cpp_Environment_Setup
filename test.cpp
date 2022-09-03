#include <iostream>

using namespace std;

void call(int e, int f){
    cout << e << "  " << f << endl;
    cout << "123";
}

int main(){
    int a = 8;
    int b = 7;
    //int c;
    cout << "Hello world!!!!\n";
    std::cout << a << " " << b << endl;
    call(5, 6);
    return 0;
}

