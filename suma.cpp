#include <fstream>
using namespace std;
int main() {
    ifstream fd("input01.txt");
    ofstream fr("output01.txt");
    int a, b, suma;
    fd >> a >> b;
    suma = a + b;
    fr << suma << endl;
    fd.close();
    fr.close();
}
