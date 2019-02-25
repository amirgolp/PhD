

{
    /*fvScalarMatrix AEqn
    (
	fvm::ddt(A)
	+ fvm::div(phi, A, "div(phi,C)")
	- fvm::laplacian(DA, A, "laplacian(C)")
	, mesh.solutionDict().solver("A")
    );

    AEqn.solve();*/

    solve
        (
            fvm::ddt(A)
          + fvm::div(phi, A, "div(phi,C)")
          - fvm::laplacian(DA, A, "laplacian(C)")
         ,
            mesh.solutionDict().solver("A")
        );

    /*solve
    (
      fvm::div(phi, A, "div(phi,C)")
      - fvm::laplacian(DT, A, "laplacian(C)")

     ,
        mesh.solver("A")
    );*/
}

