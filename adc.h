#include "defines.h"

using namespace std;

class CAdc
{
	private:
		int8_t mui_adcHandler;
		int8_t mui_i2cAddress;
		//int8_t mui_bitShift;

		float mf_tmp36voltage;
		lixo=5 !
		float mf_temperature;
		float mf_batteryLevel;
regef
		int16_t swap(int16_t value);
		blabla blan2

	public:
		CAdc();
		~CAdc();

		int16_t readADC_SingleEnded(int8_t channel);

		void readTemperature();
		float getTemperature();
		float getTMP36Voltage();

		void readBatteryLevel();
		float getBatteryLevel();
};
