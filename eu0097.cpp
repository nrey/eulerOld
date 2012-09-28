#include"eu0097.h"

#include"principal.h"

void eu0097 :: solucion(){
	// ---------------------------------------------------- //
	tstart = (double)clock()/CLOCKS_PER_SEC;
	// ---------------------------------------------------- //
	
	output = 0;
	
	// ---------------------------------------------------- //
	
	temp_1 = 1;
	for( unsigned long long i=0; i<7830457; i++ ){
		temp_1 = temp_1*2;
		temp_1 = temp_1%10000000000;
	}
	temp_1 = 28433*temp_1+1;
	output = temp_1%10000000000;
	
	// ---------------------------------------------------- //
	tstop = (double)clock()/CLOCKS_PER_SEC;
	ttime= tstop-tstart;
	// ---------------------------------------------------- //
}


void eu0097 :: printsolution(){
	cout << "Euler 0097\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
