#include <iostream>

using namespace std;

int main() {
    cout << "Hello Beaux Gosse" << endl << "Comment tu vas ?" << endl;
    cout << "Moi je vais bien" << endl;
    cout << "je suis la première application de maxime en c++ : " ;
    cout << "\\ test" << endl;

    string myMessage("je suis une variable");
    cout << myMessage << endl;

    int agePersonne(17);
    cout << "qu'elle est ton age ?" << endl;
    cout << "Mon age est de : " << agePersonne << endl;

    int qiUtilisateur(150);
    string nomUtilisateur("Albert Einstein");
    cout << "Vous vous appelez " << nomUtilisateur << " et votre QUi vaut " << qiUtilisateur << endl;

    int& maRef(agePersonne);
    cout << "Variable origine : " << agePersonne << " = et la variable via ref " << maRef << endl;

    cout << "C'est quoi ton prenom ?" << endl;
    string resultName("null");
    cin >> resultName;

    cout << "Qu'elle est ton age :" << endl;
    int resultAge(0);
    cin >> resultAge;

    cout << "Combien fait PI pour toi ?" << endl;
    double resultPi(-1);
    cin >> resultPi;

    cout << "Vous vous appelez " << resultName << " et vous avez " << resultAge << " ans et vous pensez que pi est égal a " << resultPi << endl;


    return 0;
}
