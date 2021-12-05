#ifndef IMENU_H
#define IMENU_H

class IMenu {
protected:
	virtual void Start()     = 0;
	virtual void Save()      = 0;
	virtual void Continue()  = 0;
	virtual void Exit()      = 0;
	virtual void ShowMenu()  = 0;
};

#endif