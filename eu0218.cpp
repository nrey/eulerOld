#include"eu0218.h"

#include"principal.h"

void eu0218 :: solucion(){
	// ---------------------------------------------------- //
	tstart = (double)clock()/CLOCKS_PER_SEC;
	// ---------------------------------------------------- //
	
	output = 0;
	
	// ---------------------------------------------------- //
	
	
	
	// ---------------------------------------------------- //
	tstop = (double)clock()/CLOCKS_PER_SEC;
	ttime= tstop-tstart;
	// ---------------------------------------------------- //
}


void eu0218 :: printsolution(){
	cout << "Euler 0218\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
