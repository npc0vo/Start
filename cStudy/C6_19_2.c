//�ַ�������
//�Ӽ����������ɸ��ַ�����ÿ���ַ����Ի��з�����
//����Щ�ַ���������������������ÿ���ַ���ռ��һ��
//�ⷨ2�������ռ����Ч�ʣ��ṩһ����ά���飬�洢������ÿ���ַ���
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXLINES 10
#define MAXLEN 80
//��ָ������sָ���size���ַ���������������
void strsort(char *s[],int size)
{
    char *temp;
    int i,j;
    for(i=0;i<size-1;i++)
    {
        for(j=0;j<size-1-i;j++)
        {
            if(strcmp(s[j],s[j+1])>0)
            {
                temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
        }
    }
}
//��ȡÿ���ַ���,������ָ������plineָ��Ŀռ䣬����ʵ�ʵ���������������-1
int readlines(char line[][MAXLEN],int maxlines)
{
    int nlines=0;
    
    for(int i=0;i<maxlines&&gets(line[i]);i++) //����ȡmaxlines�У���ֹ�ַ����������
    {
        nlines++;
    }
    return nlines;
}

//���ָ��plineָ���nlines���ַ���
void writelines(char *pline[],int nlines)
{
    while(nlines-->0)
    {
        printf("%s\n",*pline++);
    }

}
int main()
{
    int nlines;
    char lines[MAXLINES][MAXLEN];
    char *s[MAXLINES];
    //��ʼ��ָ������
    for(int i=0;i<MAXLINES;i++)
    {
        s[i]=lines[i];
    }
    printf("�����ַ�����һ��һ���ַ�������ctrl+z����\n");
    nlines=readlines(lines,MAXLINES);
    if(nlines>=0)
    {
        strsort(s,nlines);
        writelines(s,nlines);
        return 0;
    }
    printf("\nError!");
    return -1;
}