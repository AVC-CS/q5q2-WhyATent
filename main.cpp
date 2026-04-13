#include <iostream>
using namespace std;

int main()
{
    int N, M;
    int result = 1;

    cout << "Enter your base number: ";
    cin >> N;
    cout << "Enter your exponent: ";
    cin >> M;
    cout << N << " to power number: " << result << " ";
    for(int i=0; i<M; i++){
        result *= N;
        cout << result << " ";
    }

    // TODO

    cout << endl;

    return 0;
}
