#include <stdio.h>
#include <string.h>
#include <iostream>
#include <unistd.h>

using namespace std;

int main(){

		setlocale(LC_ALL, "Portuguese"); 
		
//====================================================================		
puts("=============INSERINDO ELEMENTO==============");	


	//posição [tab1] texto[tab2]
	char palavra[5][50];
	
	
	for(int posicao = 0; posicao <5; posicao++){
			printf("%d\370 Palavra: \n",posicao+1);
			gets(palavra[posicao]);			
	}
system("cls");
//=====================================================================
puts("==============EXIBINDO ELEMENTO===============");	


	
	for(int posicao = 0; posicao < 5; posicao++){
			// "  " entre colunas
			printf("%d\370 Palavra: %s ", posicao +1, palavra[posicao]);
		}
		//entre linhas
		puts("\n");
	

//=====================================================================
puts("===============BUSCANDO ELEMENTO==================");		
		
		
		int encontrada=0;
		char busca[50];
		
			// remover indice linha/coluna
		puts("\nBuscar Palavra: ");
		gets(busca);
			
		for(int posicao = 0; posicao < 5; posicao++){
			if (strcmp (palavra[posicao], busca) == 0){
				encontrada = 1;
				puts("Encontrada.");
			}
			
		}
		if (!encontrada){
		puts("Palavra não encontrada\n");
		}
sleep(1);
system ("cls");		
/*=====================================================================
puts("===============REMOVENDO ELEMENTO==================");		*/		
	
	return 0;
}



