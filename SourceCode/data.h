//
//  problem.1\2
//

#ifndef data_h
#define data_h
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

#endif /* data_h */