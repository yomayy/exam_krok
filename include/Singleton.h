#ifndef SINGLETON_H
#define SINGLETON_H


class Singleton
{
protected:
	static Singleton* _self;
	Singleton() {}
	virtual ~Singleton() {}

public:
	static Singleton* Instance()
	{
		if(!_self)
		{
			_self = new Singleton();
		}
		return _self;
	}

	static bool DeleteInstance()
	{
		if(_self)
		{
			delete _self;
			_self = 0;
			return true;
		}
		return false;
	}
};

Singleton* Singleton ::_self = 0;

#endif // SINGLETON_H
