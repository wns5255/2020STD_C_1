#pragma once
#ifndef __ROOMCAFE_H_
#define __ROOMCAFE_H_

class OfferThings
{
public:
	virtual void ShowList() = 0;		// 해당 객체 구성목록 안내
	virtual int ExtraCharge(int num) = 0;		// 해당 객체 중 특정 메뉴 선택 시 추가 요금 부가
};

class OfferFood : public OfferThings
{
public:
	virtual void ShowList();
	virtual int ExtraCharge(int num);
};

class OfferMovie : public OfferThings
{
public:
	virtual void ShowList();
	virtual int ExtraCharge(int num);
};

class OfferBoardGame : public OfferThings
{
public:
	virtual void ShowList();
	virtual int ExtraCharge(int num);
};


#endif
