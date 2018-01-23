/*

Programa em C++ que recebe dados (peso, idade, nome) de dois gatos e os imprime na tela;
Implementação fora da classe Gato.

*/

#include<iostream>
#include<string>
using namespace std;
class Gato
{
	private:
		string nome;
		float peso;
		int idade;
	public:
		void set_dados();
		void print_dados();
		string ret_nome();
		int ret_idade();
		float ret_peso();
		void barra();
};
void Gato::set_dados(){

	cout<<"\nDigite o nome do gato: "; getline(cin,nome);
	cout<<"\nDigite o peso do gato: "; cin>>peso;
	cout<<"\nDigite a idade do gato: "; cin>>idade;

	cin.ignore();
}
void Gato::print_dados(){
	cout<<"\nNome do gato: "<<nome;
	cout<<"\nPeso do gato: "<<peso;
	cout<<"\nIdade do gato: "<<idade;
}
string Gato::ret_nome(){
	return nome;
}
int Gato::ret_idade(){
	return idade;
}
float Gato::ret_peso(){
	return peso;
}
void Gato::barra(){

	for(int i=0;i<80;i++)
	cout<<"\333";

}
int main(){
	Gato X,Y,b;

	b.barra();
	cout<<"\n\333                                                                              \333";
	cout<<"\n\333                           CADASTRAMENTO DE GATOS                             \333";
	cout<<"\n\333                                                                              \333\n";
	b.barra();

	X.set_dados();
	Y.set_dados();

	b.barra();
	cout<<"\n\333                                                                              \333";
	cout<<"\n\333                               RELATORIO GERAL                                \333";
	cout<<"\n\333                                                                              \333\n";
	b.barra();

	X.print_dados();
	Y.print_dados();

	cout<<"\n\n";
	return 0;
}
