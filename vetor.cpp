#include <iostream>
#include <vector>
#include <cstdlib>
#include <limits>
#include <algorithm>
#include <string>
#include <stdlib.h>
#include <time.h>

#define MAX 10

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
  int min, max, count=0;
  min = v[0];
  max = v[0];
  
  for(unsigned int i=1; i<v.size();i++)
  {
    if(min > v[i])
    {
      min = v[i];
      count++;
    }else
	{
		count++;
	}
    
    if(max < v[i])
    {
      max = v[i];
      count++;
    }else
	{
		count++;
	}
  }
  
  std::cout << "Contagem minMaxCetor1: " << count << std::endl;
  std::cout << "Max: " << max << std::endl;
  std::cout << "Min: " << min << std::endl;

  return 0;
}

// ********************************************************************
// ** Funcao que determina o maior e o menor elemento de um vetor 
// ** com N elementos. 
// ** Segunda versão.
// ********************************************************************
int minMaxVetor2(std::vector<int> v) {
  int min, max, count=0;
  min = v[0];
  max = v[0];

  for(unsigned int i=1; i<v.size();i++)
  {
  	
    if(min > v[i])
    {
      min = v[i];
      count++;
    }else if(max < v[i])
    {
      max = v[i];
      count++;
    }else
	{
		count++;
	}
  }
  
  std::cout << "Contagem minMaxCetor2: " << count << std::endl;
  std::cout << "Max: " << max << std::endl;
  std::cout << "Min: " << min << std::endl;

  return 0;
}

// ********************************************************************
// ** Funcao que determina o maior e o menor elemento de um vetor 
// ** com N elementos. 
// ** Terceira versão.
// ********************************************************************
int minMaxVetor3(std::vector<int> v) {
  int min, max,count =0;
  min = v[0];
  max = v[0];
  //Não entendi como fazer o terceiro formato
  for(unsigned int i=1; i<v.size();i++)
  {
    if(min > v[i])
    {
      min = v[i];
    }else if(max < v[i])
    {
      max = v[i];
    }
  }
  
  std::cout << "Contagem minMaxCetor3: " << count << std::endl;
  std::cout << "Max: " << max << std::endl;
  std::cout << "Min: " << min << std::endl;

  return 0;
}

// ********************************************************************
// ********************************************************************
// ********************************************************************
int main() {

	std::vector<int> v;

	std::cout << "tamanho do vetor = " << v.size() << std::endl;

    srand(time(NULL));

    for (unsigned int i=0; i < MAX; i++) {
        v.push_back(rand() % std::numeric_limits<int>::max());
        }

    std::cout << "conteudo de v: ";
    for (std::vector<int>::iterator it = v.begin() ; it != v.end(); ++it)
       std::cout << ' ' << *it << std::endl;
   
	minMaxVetor1(v);
	minMaxVetor2(v);
	minMaxVetor3(v);
    std::cout << "====> O maior elemento do conjunto e': " << maxVetor(v) << std::endl;
    	
 	return 0;        
}