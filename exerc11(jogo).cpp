#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <fstream> //pra manipular ficheiros
using namespace std;

int main(){
    setlocale(LC_ALL, "portuguese");
    srand(time(NULL)); //serve pra fazer que cada número seja gerado automáticamente
	
	
	 
    //imprime cabeçalho do nosso jogo
    cout<<"******************************************\n";
    cout<<"* Bem vindo ao nosso jogo de adivinhação *\n";
    cout<<"******************************************\n \n";
    	
    int nsecreto = rand() %101; //define o número aleatório de 0 a 100
	int chute;
	int contador;
	int acertou;
	string nome;
	
	/*cout<<"Qual é o seu nome? ";
	cin>>nome;*/
		
	//cout<<nsecreto <<"\n";
	for(int i=1; i<=10; i++){
		cout<<"Tentativa "<<i<<" de 10. \n \n";
	
		
		cout<<"Qual é o seu chute? ";
		cin>>chute;
		cout<<"Seu chute foi "<<chute<<"\n";
		
	acertou = (chute==nsecreto); //bolean true (1) or false (0)
		
		if(acertou){ //ou if(chute==nsecreto){}
			cout<<"Parabéns! Você acertou na "<<i<<" tentativa. \n";
			cout<<"Jogue de novo, você é um bom jogador! \n \n";
			return 0;
			
		}else if(!acertou){
			if (chute<nsecreto){
				cout<<"Você errou! \n";
				cout<<"O número secreto é maior que seu chute.\n";
				cout<<"Mas não desanime, tente de novo. \n \n";
			
			}else{	
				cout<<"Você errou! \n";
				cout<<"O número secreto é menor que seu chute.\n";
				cout<<"Mas não desanime, tente de novo. \n \n";
			}
		} if(i==10 && !acertou) {
			cout<<"Você perdeu! utrapassou o número de jogadas. \n \n";
		}
	}
	
	/*string filename("ranking.txt");
	fstream file_out;
	file_out.open(filename, ios::out);
	file_out << "O nome do jogador é: "<<nome<<". E o número de tentativas foram: "<<i<<"."<<endl;*/
	
}
/* um if não precisa obrigatoriamente ter um else. */
