#include"eu0175.h"

#include"principal.h"

void eu0175 :: solucion(){
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


void eu0175 :: printsolution(){
	cout << "Euler 0175\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
