//
//  problem.1\2
//

#ifndef problem2_h
#define problem2_h
#define Max 30
#define fix_arr 10

typedef struct{
	int age;
	int salary;
	char Name[Max];
}myData;
myData record[fix_arr];

int GetData();
void ShowData(int i);

#endif /* problem2_h */