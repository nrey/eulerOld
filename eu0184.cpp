#include"eu0184.h"

#include"principal.h"

void eu0184 :: solucion(){
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


void eu0184 :: printsolution(){
	cout << "Euler 0184\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
