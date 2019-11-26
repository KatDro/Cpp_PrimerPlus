#pragma once

class Tv
{
	friend class Remote;
public:
	enum {Off, On};
	enum {MinVal, MaxVal=20};
	enum {Antenna, Cable};
	enum {TV, DVD};
	Tv(int s = Off, int mc = 125) : state(s), volume(5), maxchannel(mc), channel(2), mode(Cable), input(TV) {}
	void onoff() { state = (state == On) ? Off : On; }
	bool ison() const { return state == On; }
	bool volup();
	bool voldown();
	void chanup();
	void chandown();
	void set_mode() { mode = (mode == Cable) ? Antenna : Cable; }
	void set_input() { input = (input == TV) ? DVD : TV; }
	void settings() const; // show all settings
	void set_remote(Remote& r);
private:
	int state;
	int volume;
	int maxchannel;
	int channel;
	int mode;
	int input;
};

class Remote
{
	friend class Tv;
private:
	enum {Normal, Interactive};
	int mode;
	int function;
public:
	Remote(int m = Tv::TV, int f = Normal) : mode(m), function(f) {}
	bool volup(Tv &t) { return t.volup(); }
	bool voldown(Tv& t) { return t.voldown(); }
	void onoff(Tv& t) { t.onoff(); }
	void chanup(Tv& t) { return t.chanup(); }
	void chandown(Tv& t) { return t.chandown(); }
	void set_chan(Tv& t, int c) { t.channel = c; }
	void set_mode(Tv& t) { return t.set_mode(); }
	void set_input(Tv& t) { return t.set_input(); }
	void show_function();
};
