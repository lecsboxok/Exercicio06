#include <locale>
#include <iostream>
#include <vector>
#include <algorithm>

//1 – Peça para o usuário inserir dados em um vetor de 10 posições e depois, mostre os elementos(um em cada linha)

/*using namespace std;

int main() {

	locale::global(locale("pt-br.UTF-8"));

	cout << "Insira 10 números\n";
	vector<int> numeros(10);
	for (int i = 0; i < 10; i++) {
		cout << "Insira um número: ";
		cin >> numeros[i];
	}
	for (int i = 0; i < numeros.size(); i++) {
		cout << numeros[i];
		cout << "\n";
	}

	return 0;
}*/

//2 – Peça para o usuário inserir dados em um vetor de 7 posições e depois, mostre o resultado da soma dos elementos

/*using namespace std;

int main() {

	locale::global(locale("pt-br.UTF-8"));

	cout << "Insira 7 posições e veja o resultado da soma\n";
	vector<int> num(7);
	int soma = 0;

	for (int i = 0; i < 7; i++) {
		cout << "Insira um número: ";
		cin >> num[i];
	}
	for (int i = 0; i < num.size(); i++) {
		soma += num[i];
	}
	cout << "O resultado da soma é " << soma;

	return 0;
}*/

//3 – Uma sala tem alunos com diferentes idades, existe nessa sala, três alunos com 18 anos, 2 alunos com 17 anos e 12 alunos com 16 anos.Qual a média das idades ?

/*using namespace std;

int main() {

	locale::global(locale("pt-br.UTF-8"));

	vector<int> idade = { 18, 18, 18, 17, 17, 16, 16, 16, 16, 16, 16, 16, 16, 16 , 16, 16, 16 };
	double soma = 0;
	double media = 0;
	for (int i = 0; i < idade.size(); i++) {
		soma += idade[i];
	}
	media = soma / idade.size();
	cout << "A média de todos as idade é " << media;

	return 0;
}*/

//4 – Um homem resolveu fazer diversos pequenos depósitos no banco, ele depositou os seguintes valores : 5, 9, 7, 10, 15, 23 e depois colocou mais alguns valores, 20, 30. Quanto ele tem ?

/*using namespace std;

int main() {

	locale::global(locale("pt-br.UTF-8"));

	vector<int> deposito = { 5, 9, 7, 10, 15, 23 };
	int soma = 0;

	deposito.push_back(20);
	deposito.push_back(30);

	for (int i = 0; i < deposito.size(); i++) {
		soma += deposito[i];
	}

	cout << "O valor que ele tem é: " << soma;

	return 0;
}*/

//5 – Peça para o usuário preencher um vetor com 10 posições, e depois de uma opção a ele
//- Se ele escolha a opção 1, faça a soma de todos os elementos do vetor.
//- Se ele escolher a opção 2, faça a subtração de todos os elementos do vetor
//- Se ele escolher a opção 3, faça a multiplicação de todos os elementos do vetor

/*using namespace std;

int main() {

	locale::global(locale("pt-br.UTF-8"));

	vector<int> num(10);
	int resultado = 0;
	int resultadoMult = 1;

	for (int i = 0; i < 10; i++) {
		cout << "Insira um número: ";
		cin >> num[i];
	}

	int codigo;
	cout << "\nQue operação você deseja fazer?\nAperte 1 para soma;\nAperte 2 para subtração;\nAperte 3 para multiplicação\n-----> ";
	cin >> codigo;

	switch (codigo)
	{
	case 1:
		for (int i = 0; i < num.size(); i++) {
			resultado += num[i];
		}
		cout << "O resultado da soma é " << resultado;
		break;
	case 2:
		for (int i = 0; i < num.size(); i++) {
			resultado -= num[i];
		}
		cout << "O resultado da subtração é " << resultado;
		break;
	case 3:
		for (int i = 0; i < num.size(); i++) {
			resultadoMult *= num[i];
		}
		cout << "O resultado da multiplicação é " << resultadoMult;
		break;

	default:
		cout << "Número inválido";
		break;
	}

	return 0;
}*/
