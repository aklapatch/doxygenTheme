
/// \mainpage Example Documentation
/// This page demonstrates this custom doxygen theme. Play around and have a look!

/// \file
/// This is an example file for this example project.

/// An example struct with a couple members
struct ExampleStruct {
	
	int IntMember; ///< An integer member
	
	double DoubleMember; ///< A double member
	
	/// Sets both members to zero
	ExampleStruct() : IntMember(0), DoubleMember(0.0) { }
};

/// An example class with a few functions/members
class ExampleClass {
	
	char CharMember;	///< character member
	
	/// Default constructor
	ExampleClass() : CharMember('\0') { }
	
	/// Regular constructor.
	/// Sets CharMember to equal Character
	ExampleClass(char Character) : CharMember(Character) { }
}

/// An example function prototype
/// \param ExampleParam An int * parameter
/// \param ExampleArg A double type argument
char * exampleFunction( int * ExampleParam, double ExampleArg);
	
	
