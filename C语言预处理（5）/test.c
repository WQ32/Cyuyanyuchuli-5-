#include <stdio.h>

//�����ж���  - ��������ڱ����ʱ��������н��ж���
// gcc test.c -D SZ=10   (����D��һ�����������Զ���һ��SZ��ֵΪ10)
//���ھ�����Ĳ��������Է��ڱ��뻷�ڽ��ж���

//��������
//ѡ���Եİ���ĳ������������
//�������㣬���룬�����㣬������

//#include <string.h>
//
//#define DEBUG
//int main()
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//#ifdef DEBUG
//		printf("%d ", arr[i]);    //���������DEBUG����ִ��������䣬���߲�ִ��
//#endif
//	}
//	return 0;
//}

#include <string.h>

////����֧
//int main()
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//// #if 1-2
//#if 0
//		printf("%d ", arr[i]);   //#if����ı��ʽ���Ϊ�棬��ִ��������䣬���߲�ִ��
//#endif
//	}
//	return 0;
//}

////���֧
//
//int main()
//{
//#if 1==2
//	printf("����\n");
//#elif 2==1
//	printf("�Ǻ�\n");
//#else
//	printf("�ٺ�\n");
//#endif
//	return 0;
//}

////�ж��Ƿ񱻶������������
//
//#define DEBUG 10
//int main()
//{
//	printf("\n");
//#if defined(DEBUG)
//	printf("o(*�����*)o\n");
//#endif
////��ͬ��
//#ifdef DEBUG
//	printf("O(��_��)O����~\n");
//#endif
//
////������
//#if !defined(DEBUG)
//	printf("(*^��^*)\n");
//#endif
//
//#ifndef DEBUG
//	printf("\(^o^)/\n");
//#endif
//
//	return 0;
//}  

//Ƕ��ָ ��

//�ļ�����         - ͷ�ļ��İ��������ǰ�ͷ�ļ������ݸ�����һ�ݣ����ڵ�ǰ�ļ���
//#include <>    ���ļ� 
//  ֱ���ڱ�׼·���²���
//#include ""    ���������ļ����Լ��������ļ���
//  ����Դ�ļ�Ŀ¼��ȥ�ң�û�ҵ�������ҿ⺯��ͷ�ļ�һ���ڱ�׼λ�ò���ͷ�ļ�
//  VS�Ͱ����Լ��İ�װ·��ȥ��

//���Ƕ�װ���ͷ�ļ���ͷ�ļ���α����ã�
//��ͷ�ļ��а������´���
//#ifndef __TEST_H__
//#define __TEST_H__
//
//#endif // !__TEST_H__   //��ֹͷ�ļ����ظ���ΰ���

//��һ��д����
//#pragma once  (���ϱ������±಻��ȥ)

//Ԥ����ָ�� 
// 1.��������ָ��
// 2.#include
// 3.#define
// 4.#pragma pnce
// 5.#pragma pack()

//��C������Ƚ��ʡ�


