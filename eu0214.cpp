#include"eu0214.h"

#include"principal.h"

void eu0214 :: solucion(){
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


void eu0214 :: printsolution(){
	cout << "Euler 0214\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
