#include"eu0115.h"

#include"principal.h"

void eu0115 :: solucion(){
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


void eu0115 :: printsolution(){
	cout << "Euler 0115\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
