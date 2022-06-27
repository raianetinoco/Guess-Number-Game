#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <fstream> //pra manipular ficheiros
using namespace std;

int main(){
    setlocale(LC_ALL, "portuguese");
    srand(time(NULL)); //serve pra fazer que cada n�mero seja gerado autom�ticamente
	
	
	 
    //imprime cabe�alho do nosso jogo
    cout<<"******************************************\n";
    cout<<"* Bem vindo ao nosso jogo de adivinha��o *\n";
    cout<<"******************************************\n \n";
    	
    int nsecreto = rand() %101; //define o n�mero aleat�rio de 0 a 100
	int chute;
	int contador;
	int acertou;
	string nome;
	
	/*cout<<"Qual � o seu nome? ";
	cin>>nome;*/
		
	//cout<<nsecreto <<"\n";
	for(int i=1; i<=10; i++){
		cout<<"Tentativa "<<i<<" de 10. \n \n";
	
		
		cout<<"Qual � o seu chute? ";
		cin>>chute;
		cout<<"Seu chute foi "<<chute<<"\n";
		
	acertou = (chute==nsecreto); //bolean true (1) or false (0)
		
		if(acertou){ //ou if(chute==nsecreto){}
			cout<<"Parab�ns! Voc� acertou na "<<i<<" tentativa. \n";
			cout<<"Jogue de novo, voc� � um bom jogador! \n \n";
			return 0;
			
		}else if(!acertou){
			if (chute<nsecreto){
				cout<<"Voc� errou! \n";
				cout<<"O n�mero secreto � maior que seu chute.\n";
				cout<<"Mas n�o desanime, tente de novo. \n \n";
			
			}else{	
				cout<<"Voc� errou! \n";
				cout<<"O n�mero secreto � menor que seu chute.\n";
				cout<<"Mas n�o desanime, tente de novo. \n \n";
			}
		} if(i==10 && !acertou) {
			cout<<"Voc� perdeu! utrapassou o n�mero de jogadas. \n \n";
		}
	}
	
	/*string filename("ranking.txt");
	fstream file_out;
	file_out.open(filename, ios::out);
	file_out << "O nome do jogador �: "<<nome<<". E o n�mero de tentativas foram: "<<i<<"."<<endl;*/
	
}
/* um if n�o precisa obrigatoriamente ter um else. */
