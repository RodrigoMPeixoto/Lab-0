#include <iostream>
#include <vector>
#include <cstdlib>
#include <limits>
#include <algorithm>

#define MAX 200

// ********************************************************************
// ** Funcao que determina o maior elemento de um vetor com N elementos
// ********************************************************************
int maxVetor(std::vector<int> v) {

int max = v[0];

    for (unsigned int i = 1 ; i < v.size() ; i++)
        if (max < v[i])
            max = v[i];

    return max;
}

// ********************************************************************
// ** Funcao que determina o maior e o menor elemento de um vetor 
// ** com N elementos. 
// ** Primeira versão.
// ********************************************************************
int minMaxVetor1(std::vector<int> v) {

    return 0;
}

// ********************************************************************
// ** Funcao que determina o maior e o menor elemento de um vetor 
// ** com N elementos. 
// ** Segunda versão.
// ********************************************************************
int minMaxVetor2(std::vector<int> v) {

    return 0;
}

// ********************************************************************
// ** Funcao que determina o maior e o menor elemento de um vetor 
// ** com N elementos. 
// ** Terceira versão.
// ********************************************************************
int minMaxVetor3(std::vector<int> v) {

    return 0;
}

// ********************************************************************
// ********************************************************************
// ********************************************************************
int main() {

std::vector<int> v;

	std::cout << "tamanho do vetor = " << v.size() << std::endl;

    srand ( time(NULL) );

    for (unsigned int i=0; i < MAX; i++) {
        v.push_back(rand() % std::numeric_limits<int>::max());
        }

    std::cout << "conteudo de v: ";
    for (std::vector<int>::iterator it = v.begin() ; it != v.end(); ++it)
       std::cout << ' ' << *it << std::endl;

    std::cout << "====> O maior elemento do conjunto e': " << maxVetor(v) << std::endl;
    	
 	return 0;        
}