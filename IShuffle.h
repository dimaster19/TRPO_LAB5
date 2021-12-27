#pragma once
class IShuffle
{
protected:
	virtual ~IShuffle() {}
public:
	virtual void shuffle() = 0;
	virtual void shuffle(size_t i, size_t j) = 0;
};
