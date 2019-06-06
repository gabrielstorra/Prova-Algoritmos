#include <stdio.h>

int main(){
	 	int iValor, iNota100, iNota50, iNota10, iNota5, iNota1, iCont;
	 	iValor = iCont = 0;
		
		while(scanf("%d",&iValor), iValor>0) {
		iNota50 = iNota10 = iNota5 = 0;
				
				iNota100 = iNota50 = iNota10 = iNota10 = 0;
			if (iValor >= 100) {
					   iNota100 = iValor / 100;
					   iValor = iValor - 100*iNota100;
					   }
			if (iValor >= 50) {
					   iNota50 = iValor / 50;
					   iValor = iValor - 50*iNota50;
					   }
			if (iValor >= 10)  {
					   iNota10 = iValor / 10;
					   iValor = iValor - 10*iNota10;
					   } 
			if (iValor >= 5 ) {
					   iNota5 = iValor / 5;
					   iValor = iValor - 5*iNota5;
					   }
			printf("\nTeste %d\n%d %d %d %d\n", ++iCont, iNota50, iNota10, iNota5);
		}
		return 0;
