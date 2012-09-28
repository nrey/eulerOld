#include"eu0278.h"

#include"principal.h"

void eu0278 :: solucion(){
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


void eu0278 :: printsolution(){
	cout << "Euler 0278\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
