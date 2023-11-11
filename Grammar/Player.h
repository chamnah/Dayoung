#pragma once
#include "Object.h"
//2. 경찰관 3. 청소부 4. 소방관 5. 의사
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
	//const 함수 - 클래스 멤버 함수를 const화 시킴
	//- 멤버 변수의 값을 변경할 수 없음
	//- 함수 내에서는 const 함수만 호출할 수 있음
	
	//- 멤버 변수 값 변경할 수 있긴 함 - 
	//함수 호출 - 함수 포인터 접근 - 참조한 함수 값을 불러옴
};

// Get/Set이라는 함수로 접근하는게 좋음
/*
유지보수
*/