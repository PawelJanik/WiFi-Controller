class LEDclass
{	
public:
	LEDclass(int Pin, int num);
	
	void turnOn();
	void turnOff();
	bool isOn(){return onOff;}
	void setValue(int Value);
	void set();
	void setNow();
	
	static int speed;
	
private:
	int pin;
	int number;
	
	int value;
	int targetValue;
	int lastTargetValue;
	
	bool onOff;
};
