/* Small library of WDF filters designed using Will Pirkles fxobjects library

Author: Jordan Evans
Date: 18/6/2022
*/
#include "fxobjects.h"

class WDF_RC_HPF : public IAudioSignalProcessor {

public:
	WDF_RC_HPF(void){ createWDF(); }
	~WDF_RC_HPF(void) {}


	void WDF_RC_HPF::createWDF() {

		seriesAdapterC1.setComponent(wdfComponent::C, 1.5927804624265786e-8);
		parallelTerminatedAdapterR1.setComponent(wdfComponent::R, 10000);

		WdfAdaptorBase::connectAdaptors(&seriesAdapterC1, &parallelTerminatedAdapterR1); 

		seriesAdapterC1.setSourceResistance(600);
		parallelTerminatedAdapterR1.setTerminalResistance(600);

	};


	bool reset(double _sampleRate) override {
	
		seriesAdapterC1.reset(_sampleRate);
		parallelTerminatedAdapterR1.reset(_sampleRate);

		seriesAdapterC1.initializeAdaptorChain();

		return true;
	
	};


	double processAudioSample(double xn) override {
	
		seriesAdapterC1.setInput1(xn);

		return parallelTerminatedAdapterR1.getOutput2();

	};

	bool canProcessAudioFrame() override {
	
		return false;
	}

protected:

	WdfSeriesAdaptor seriesAdapterC1;
	WdfParallelTerminatedAdaptor parallelTerminatedAdapterR1;
};