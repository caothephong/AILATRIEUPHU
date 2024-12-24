#include "ManagerQuestion.h"
#include "ManagerPlayer.h"
#include <windows.h>
#include <cstring>

void LoadingGame();
void MenuGame(); // Giao dien
void DataTxt(ManagerQuestion &, ifstream &);// Doc du lieu
void DataPTxt(ManagerPlayer &, ifstream &);
void DataOut(ManagerPlayer &, ofstream &);

int Select();
void RandomQuestion(ManagerQuestion &, ManagerPlayer &);
void RandomAnswer(Question &, string A[]);
string SearchAnswer(Question &, string A[]);
void SelectMenu(ManagerQuestion &, ManagerPlayer &, ofstream &);
void Resetgame(ManagerQuestion &);
void SaveScore(ManagerPlayer &, int);

string TienThuong(int );
void MenuPlay(int);
void HelpCall(Question &, int, string A[]);
void TuVanTaiCho(Question &, int, string A[]);
void ThamKhaoYKienKhanGia(Question &, int, string A[]);
void LoaiBo50(Question &, int, string A[]);

string doi(int);

void SetColor(int backgound_color, int text_color);

