#pragma once
#include <string>
class ILoggable
{
protected:
	virtual ~ILoggable() {}
public:
	virtual void logToScreen() const = 0;
	virtual void logToFile(const std::string& filename) const = 0;
};