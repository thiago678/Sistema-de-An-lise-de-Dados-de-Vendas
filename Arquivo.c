#include <stdio.h>





int main(){
    
    int escolha = 0;
    
    printf("===== SISTEMA DE ANALISE DE VENDAS ===== \n1. Mostrar vendas ordenadas por ID \n2. Buscar venda por ID \n3. Calcular faturamento total \n4. Identificar produto mais vendido \n5. Sair da aplicacao \nEscolha uma opcao:");
    scanf("%d", &escolha);

    while (escolha!5){
        if(escolha == 1){

        }
        else if (escolha == 2){
            menu_busca()
        }
        else if (escolha == 3){
            
        }
        else if (escolha == 4){
            
        }
        else{
            printf("Essa opção não esta no menu.\n Por favor, escolha outra opção");
        }

    }

    return 0;
}