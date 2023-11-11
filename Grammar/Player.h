#pragma once
#include "Object.h"
//2. ������ 3. û�Һ� 4. �ҹ�� 5. �ǻ�
enum JobType : int
{
	NONE,
	PART_TIMER,
	POLICE,
	CLEANER,
	FIREFIGHTER,
	DOCTOR
};

class Player : public Object
{
private:
	JobType job_;
	

public:
	
	void SetJob(JobType type);
	JobType GetJob() const { return job_; }
	void ShowStatus() const;
	const char* GetJobName() const;
	//const �Լ� - Ŭ���� ��� �Լ��� constȭ ��Ŵ
	//- ��� ������ ���� ������ �� ����
	//- �Լ� �������� const �Լ��� ȣ���� �� ����
	
	//- ��� ���� �� ������ �� �ֱ� �� - 
	//�Լ� ȣ�� - �Լ� ������ ���� - ������ �Լ� ���� �ҷ���
};

// Get/Set�̶�� �Լ��� �����ϴ°� ����
/*
��������
*/