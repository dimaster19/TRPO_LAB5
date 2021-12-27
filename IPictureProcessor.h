#pragma once
class IPictureProcessor
{
protected:
	virtual ~IPictureProcessor() {}

public:
	virtual void process(const std::string& photo_path)=0;
};

