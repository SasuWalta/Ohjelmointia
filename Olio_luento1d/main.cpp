#include <iostream>

using namespace std;

//funktion prototyyppi
int game(int);

int main()
{
   int lkm = game(40);

    cout << "Arvauksia oli: " << lkm << endl;

        return 0;

}
int game(int maxnum) {


    int arvaus = 0;
    int arvausten_lkm = 0;


    //arvotaan satunnaisluku
    srand(time(NULL));
    int satunnaisluku = (rand() % maxnum) + 1;
    //cout << "Satunnaisluku on " << satunnaisluku << endl;


    //jos vastaus oli väärä, peli palaa kohtaan kysymään lukua
    while (arvaus != satunnaisluku){
        //kysytään pelaajan arvaus
        cout << "Anna arvaus " << endl;
        cin >> arvaus;
        arvausten_lkm ++;
        cout << "Pelaajan arvaus oli: " << arvaus << endl;

        //tarkistetaan oliko pelaajan luku pienempi vai suurempi
        //kerrotaan tarkistuksen tulos
        if (arvaus < satunnaisluku){
            cout << "Arvaus oli liian pieni " << endl;
        } else if (arvaus > satunnaisluku){
            cout << "Arvaus oli liian suuri " << endl;
        } else{
            cout << "Arvaus oli oikein!" << endl;
        }



    }
    return arvausten_lkm;
}

