#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

#define NUM_PERSONAS 5
#define NUM_RONDAS 5

void asignarVotosAleatorios(int votos[][NUM_PERSONAS]) {
    srand(time(nullptr));
    for (int i = 0; i < NUM_RONDAS; ++i) {
        for (int j = 0; j < NUM_PERSONAS; ++j) {
            votos[i][j] = rand() % 51;
        }
    }
}

void mostrarTabla(const string nombres[], const int votos[][NUM_PERSONAS]) {
    cout << "Resultados Elecciones 2024:" << endl;
    cout << "Candidato\t\!       Resultados por ronda\t                                                !Promedio de votos" << endl;
    for (int i = 0; i < NUM_PERSONAS; ++i) {
        double sumaVotos = 0;
        cout << nombres[i] << "\t\t";
        for (int j = 0; j < NUM_RONDAS; ++j) {
            cout << votos[j][i] << "\t\t";
            sumaVotos += votos[j][i];
        }
        double promedioVotos = sumaVotos / NUM_RONDAS;
        cout << fixed << setprecision(2) << promedioVotos << endl;
    }
}

string calcularGanador(const string nombres[], const int votos[][NUM_PERSONAS]) {
    int totalVotos[NUM_PERSONAS] = {0};
    for (int i = 0; i < NUM_RONDAS; ++i) {
        for (int j = 0; j < NUM_PERSONAS; ++j) {
            totalVotos[j] += votos[i][j];
        }
    }
    int maxVotos = 0;
    int indiceGanador = 0;
    for (int i = 0; i < NUM_PERSONAS; ++i) {
        if (totalVotos[i] > maxVotos) {
            maxVotos = totalVotos[i];
            indiceGanador = i;
        }
    }
    return nombres[indiceGanador];
}

int main() {
    string nombres[NUM_PERSONAS];
    int votos[NUM_RONDAS][NUM_PERSONAS] = {0};

    char repetir;
    do {
        cout << "Ingrese el nombre de los candidatos participantes :" << endl;
        for (int i = 0; i < NUM_PERSONAS; ++i) {
            cout << "candidato " << i+1 << ": ";
            getline(cin, nombres[i]);
        }

        asignarVotosAleatorios(votos);

        mostrarTabla(nombres, votos);

        string ganador = calcularGanador(nombres, votos);
        cout << "\ El ganador de las elecciones 2024 es: " << ganador << endl;

        cout << "\n¿Desea repetir el proceso de votación? (si = s /no = n): ";
        cin >> repetir;
        cin.ignore();
    } while (repetir == 's' || repetir == 'S');

    return 0;
}
