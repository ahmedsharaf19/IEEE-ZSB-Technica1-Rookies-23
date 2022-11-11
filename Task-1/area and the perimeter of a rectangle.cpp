#include <iostream>
using namespace std;

int main(){
    double width , length , area , perimeter ;
    cin >> width ;
    cin >> length ;
    area = width * length;
    perimeter = (width + length ) * 2;
    cout << area << endl << perimeter << endl;
    return 0;
}
