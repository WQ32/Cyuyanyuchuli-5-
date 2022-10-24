#include <stdio.h>

//命令行定义  - 把命令放在编译的时候的命令行进行定义
// gcc test.c -D SZ=10   (这里D是一个参数，可以定义一个SZ的值为10)
//对于经常变的参数，可以放在编译环节进行定义

//条件编译
//选择性的按着某种条件来编译
//条件满足，编译，不满足，不编译

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
//		printf("%d ", arr[i]);    //如果定义了DEBUG，就执行这条语句，否者不执行
//#endif
//	}
//	return 0;
//}

#include <string.h>

////单分支
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
//		printf("%d ", arr[i]);   //#if后面的表达式如果为真，就执行这条语句，否者不执行
//#endif
//	}
//	return 0;
//}

////多分支
//
//int main()
//{
//#if 1==2
//	printf("哈哈\n");
//#elif 2==1
//	printf("呵呵\n");
//#else
//	printf("嘿嘿\n");
//#endif
//	return 0;
//}

////判断是否被定义的条件编译
//
//#define DEBUG 10
//int main()
//{
//	printf("\n");
//#if defined(DEBUG)
//	printf("o(*￣︶￣*)o\n");
//#endif
////等同于
//#ifdef DEBUG
//	printf("O(∩_∩)O哈哈~\n");
//#endif
//
////对立面
//#if !defined(DEBUG)
//	printf("(*^▽^*)\n");
//#endif
//
//#ifndef DEBUG
//	printf("\(^o^)/\n");
//#endif
//
//	return 0;
//}  

//嵌套指 令

//文件包含         - 头文件的包含，就是把头文件的内容给拷贝一份，放在当前文件中
//#include <>    库文件 
//  直接在标准路径下查找
//#include ""    包含本地文件，自己创建的文件，
//  先在源文件目录下去找，没找到就像查找库函数头文件一样在标准位置查找头文件
//  VS就按照自己的安装路径去找

//解决嵌套包含头文件（头文件多次被引用）
//在头文件中包含以下代码
//#ifndef __TEST_H__
//#define __TEST_H__
//
//#endif // !__TEST_H__   //防止头文件被重复多次包含

//另一种写法：
//#pragma once  (在老编译器下编不过去)

//预处理指令 
// 1.条件编译指令
// 2.#include
// 3.#define
// 4.#pragma pnce
// 5.#pragma pack()

//《C语言深度解剖》


