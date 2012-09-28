#include"eu0107.h"

#include"principal.h"

void eu0107 :: solucion(){
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


void eu0107 :: printsolution(){
	cout << "Euler 0107\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
