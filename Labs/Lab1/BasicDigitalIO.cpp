//
//  BasicDigitalIO.cpp
//  ECE4180Projects
//--------------------------------------------------------------------------
//
//
//
//
//

#include "BasicDigitalIO.hpp"

#include "DebounceIn.hpp"


namespace Lab1 {

	void BasicDigitalIO()
	{
		
		while(true)
		{
			// Create a de-bounced input for the switch.
			// Note, DebounceIn is in the Common namespace.
			Common::DebounceIn TheSwitch(p13);
			
			// Create a digital out for the LED.
			DigitalOut TheLED(p14);
			
			while(1)
			{
				// We can continuously set the value of the LED to the value of the switch.
				TheLED = TheSwitch;
			}
		}
	}

}