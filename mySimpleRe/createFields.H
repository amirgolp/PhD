
Info<< "Reading field U\n" << endl;
volVectorField U
(
    IOobject
    (
        "U",
        runTime.timeName(),
        mesh,
        IOobject::MUST_READ,
        IOobject::AUTO_WRITE
    ),
    mesh
);

#include "createPhi.H"

IOdictionary transportProperties
(
    IOobject
    (
	"transportProperties",
	runTime.constant(),
	mesh,
	IOobject::MUST_READ,
        IOobject::NO_WRITE
    )
);

Info << "Reading component A" << endl;
volScalarField A
(
    IOobject
    (
	"A",
	runTime.timeName(),
        mesh,
        IOobject::MUST_READ,
        IOobject::AUTO_WRITE
    ),
    mesh
);

dimensionedTensor DT
(
    transportProperties.lookup("DT")
);

dimensionedScalar DA
(
    transportProperties.lookup("DA")
);

/*dimensionedScalar value
(
    transportProperties.lookup("value")
);

symmTensor I(0,0,0,1,0,0);
symmTensorField DDD=5*I;*/
