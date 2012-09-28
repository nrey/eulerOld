#include"eu0324.h"

#include"principal.h"

void eu0324 :: solucion(){
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


void eu0324 :: printsolution(){
	cout << "Euler 0324\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
