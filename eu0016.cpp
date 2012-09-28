#include"eu0016.h"

#include"principal.h"

void eu0016 :: solucion(){
	// ---------------------------------------------------- //
	tstart = (double)clock()/CLOCKS_PER_SEC;
	// ---------------------------------------------------- //
	
	output = 0;
	infivar_1 = new infinite_precition(301);
	
	// ---------------------------------------------------- //
	
	infivar_1->setvalue(1,1);
	
	for( unsigned long long i=1; i<=1000; i++ ){
		infivar_1->mul(infivar_1,2);
	}
	
	output = infivar_1->sumdig();
	
	// ---------------------------------------------------- //
	tstop = (double)clock()/CLOCKS_PER_SEC;
	ttime= tstop-tstart;
	// ---------------------------------------------------- //
}


void eu0016 :: printsolution(){
	cout << "Euler 0016\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
