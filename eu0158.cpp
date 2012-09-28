#include"eu0158.h"

#include"principal.h"

void eu0158 :: solucion(){
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


void eu0158 :: printsolution(){
	cout << "Euler 0158\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
