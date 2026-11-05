#include <iostream>
#include <bitset>


int big_flag_test() {

	using namespace std;

	constexpr unsigned char RUN = 1 << 0;
	constexpr unsigned char JUMP = 1 << 1;
	constexpr unsigned char ATTACT = 1 << 2;
	constexpr unsigned char HIDE = 1 << 3;

	 unsigned char flags = 0b00000000;

	// 비트 플래그 설정하기 -> RUN과 HIDE 추가하기
	 flags |= RUN;
	 flags |= HIDE;
	 cout << bitset<8>(flags) << endl; // 00001001
	 
	 // 동시에 JUMP와 ATTCK 추가하기
	 flags |= JUMP | ATTACT;
	 cout << bitset<8>(flags) << endl; // 00001111


	 // 비트 플래그 해제하기
	 flags &= ~RUN; 
	 cout << bitset<8>(flags) << endl; // 00001110

	 // 동시에 ATTACK과 HIDE 삭제하기
	 flags &= ~(ATTACT | HIDE);
	 cout << bitset<8>(flags) << endl; // 00000010


	 // 비트 플래그 여부 확인하기
	 if (flags & ATTACT) {

		 cout << "ATTACT exist." << endl;
	 }
	 else {
		 cout << "ATTACT NONE" << endl;
	 }

	 if (flags & JUMP) {
		 cout << "JUMP exist" << endl;
	 }
	 else {
		 cout << "JUMP NONE" << endl;
	 }

	 flags |= ATTACT;

	 // 비트 플래그 여부 동시 확인
	 if (flags & (JUMP | ATTACT)) {
		 cout << "JUMP AND ATTACT exist" << endl;
	 }
	 else {
		 cout << "JUMP AND ATTACT NONE" << endl;
	 }


	 // 비트 플래그 토글
	 flags ^= JUMP;
	 cout << bitset<8>(flags) << endl;
	 flags ^= JUMP;
	 cout << bitset<8>(flags) << endl;
	 flags ^= JUMP;
	 cout << bitset<8>(flags) << endl;
	 flags ^= JUMP;
	 cout << bitset<8>(flags) << endl;



	 return 0;

}