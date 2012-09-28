#include"eu0256.h"

#include"principal.h"

void eu0256 :: solucion(){
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


void eu0256 :: printsolution(){
	cout << "Euler 0256\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
