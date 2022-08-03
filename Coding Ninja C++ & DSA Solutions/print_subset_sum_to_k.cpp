{\rtf1\ansi\ansicpg1252\cocoartf2638
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 void printSubsetSumK(int input[],int size,int startIndex,int output[],int outSize,int k)\
\{\
    if(size==startIndex)\
    \{\
        if(k==0)\{\
            for(int i=0;i<OutSize;i++)\
            cout<<output[i]<<" ";\
            \
            cout<<endl;\
            \
        \}\
        return;\
    \}\
    \
    // exclude\
	printSubsetSumK(input,size,startIndex+1,output,outSize,k);\
    \
	// include\
    printSubsetSumK(input,size,startIndex+1,output,outSize,k-input[startIndex]);\
    \
    \
\}\
\
void printSubsetSumToK(int input[], int size, int k) \{\
    // Write your code here\
    \
    int output[1000];\
    printSubsetSumK(input,size,0,output,0,k);\
    \
\}\
}