#include <iostream>
#include <fstream>
#include <conio.h>
#include <windows.h>
#include <string>

using namespace std;

//Função para tocar musica
void tocarNota(int frequencia, int duracao){
if(frequencia >0){
    Beep(frequencia, duracao);
 }
}
//Função para salvar notas 
  void salvarToque(char tecla) {
    ofstream arq;
    arq.open("resultado.txt", ios::app); 
    if (arq.is_open()) {
        arq << tecla << endl; 
         cout << "Caractere '" << tecla << " salvo!" << endl;
       
    } else {
        cout << "Não foi possível acessar o arquivo para salvar!" << endl;
    } arq.close();
  }


// Função para reproduzir as teclas salvas como música
void reproduzirMusica() {
    ifstream arq("resultado.txt"); // Abre o arquivo para leitura

    if (arq.is_open()) {
        cout << "Reproduzindo trilha salva:" << endl;
        string linha;

        while (getline(arq, linha)) {
                char tecla = linha[0]; // Lê a primeira tecla de cada linha
                switch (tecla) {
                    
                    case 'a': tocarNota(261,300); break; // Do
                    case 's': tocarNota(293,300); break; // Re
                    case 'd': tocarNota(329,300); break; // Mi
                    case 'f': tocarNota(349,300); break; // Fa
                    case 'g': tocarNota(392,300); break; // Sol
                    case 'h': tocarNota(440,300); break; // La
                    case 'j': tocarNota(493,300); break; // Si
                    case 'k': tocarNota(523,300); break; // Do
                   
                    case 'z': tocarNota(523,330); break; // Guitarra
                    case 'x': tocarNota(587,300); break; // Guitarra
                    case 'c': tocarNota(695,300); break; // Guitarra
                    case 'v': tocarNota(698,300); break; // Guitarra
                    case 'b': tocarNota(784,300); break; // Guitarra
                    case 'n': tocarNota(880,300); break; // Guitarra
                    case 'm': tocarNota(987,300); break; // Guitarra
                   break;

                    default:
                        cout << "Tecla não reconhecida no arquivo: " << tecla << endl;
                        break;
                }
        }
        arq.close();
    } else {
        cout << "Não foi possível abrir o arquivo para reprodução!" << endl;
    }
}

 int main()
 {

// Função para ler pontuação
    setlocale(LC_ALL, "pt_BR.UTF-8");
	SetConsoleOutputCP(CP_UTF8);


      void instrumentoVirtual();

        system ("color F0");
        cout << "\n\n";
         cout << "                                   Bem vindos ao Produtor Musical de Trilhas Sonoras"<< endl;
         cout << "\n\n";
         system("pause");
         system("cls"); 


          system ("color B0");
          cout << "                                                 COMECE A TOCAR..."<< endl;
          cout << "\n\n";
          cout << "                                                    Piano"<< endl;
          cout << "                                           A  S  D  F  G  H  J  K  "<< endl;
          cout <<"\n";
          cout << "                                                    Gitarra"<< endl;
          cout << "                                            Z  X  C  V  B  N  M  "<< endl;
          cout << "\n\n";
          cout << "                                            Tecle a letra 'o' para reproduzir" << endl;
          cout << "\n\n";
          cout <<"                                             Tecle 'p' para sair!!!"<< endl;
          
void instrumentoVirtual() ;

  while (true)
    {
        char tecla = getch();
         salvarToque (tecla);
        switch (tecla)

        {
                    case 'a': tocarNota(261,300); break; // Do
                    case 's': tocarNota(293,300); break; // Re
                    case 'd': tocarNota(329,300); break; // Mi
                    case 'f': tocarNota(349,300); break; // Fa
                    case 'g': tocarNota(392,300); break; // Sol
                    case 'h': tocarNota(440,300); break; // La
                    case 'j': tocarNota(493,300); break; // Si
                    case 'k': tocarNota(523,300); break; // Do
                   
                    case 'z': tocarNota(523,330); break; // Guitarra
                    case 'x': tocarNota(587,300); break; // Guitarra
                    case 'c': tocarNota(695,300); break; // Guitarra
                    case 'v': tocarNota(698,300); break; // Guitarra
                    case 'b': tocarNota(784,300); break; // Guitarra
                    case 'n': tocarNota(880,300); break; // Guitarra
                    case 'm': tocarNota(987,300); break; // Guitarra
                   break;
                   case 'o':
                    reproduzirMusica(); // Reproduz a música salva
                    break;
                    case 'p':
                    system ("cls");
                    cout <<"                                      ENCERANDO O PIANO VIRTUAL" << endl;
                    cout << "                                             Até mais!!!" << endl;
                  return 1;
                break;
        
            default:
            cout << "você usou uma tecla não mapeada!"<< endl;
                break;

            }
    
    }

return 0;  
 }