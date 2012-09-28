#include"eu0055.h"

#include"principal.h"

void eu0055 :: solucion(){
	// ---------------------------------------------------- //
	tstart = (double)clock()/CLOCKS_PER_SEC;
	// ---------------------------------------------------- //
	
	output = 0;
	
	// ---------------------------------------------------- //
	
	infinite_precition pru_1(28);
	infinite_precition pru_2(28);
	
	temp_2 = 0;
	for( unsigned long long i=10; i<10000; i++ ){
		
		pru_1.setvalue(i);
		temp_1 = 0;
		
		while( temp_1<50 ){
			pru_1.reverse(&pru_2);
			pru_1.add(&pru_1,&pru_2);
			if( pru_1.ispalind( ) ){
				break;
			}
			temp_1++;
		}
		if( temp_1 ==50 ){
			temp_2++;
		}
	}
	output = temp_2;
	
	// ---------------------------------------------------- //
	tstop = (double)clock()/CLOCKS_PER_SEC;
	ttime= tstop-tstart;
	// ---------------------------------------------------- //
}


void eu0055 :: printsolution(){
	cout << "Euler 0055\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
