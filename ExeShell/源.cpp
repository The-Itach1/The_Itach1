#include<stdio.h>
#include<windows.h>
#include "BlowFish.h"
#pragma warning(disable:4996)

unsigned char shellcode[] = "\x55\x8B\xEC\x81\xEC\xB8\x03\x00\x00\x53\x56\x57\x8D\xBD\x48\xFC\xFF\xFF\xB9\xEE\x00\x00\x00\xB8\xCC\xCC\xCC\xCC\xF3\xAB\x64\xA1\x18\x00\x00\x00\x3E\x8B\x40\x30\x89\x45\xF8\x8B\x45\xF8\x8B\x48\x0C\x89\x4D\xEC\x8B\x45\xEC\x8B\x48\x14\x8B\x11\x8B\x02\x89\x45\xE0\x8B\x45\xE0\x8B\x48\x10\x89\x4D\xD4\x8B\x45\xD4\x89\x45\xC8\x8B\x45\xC8\x8B\x48\x3C\x8B\x55\xD4\x8D\x44\x0A\x18\x89\x45\xBC\xB8\x08\x00\x00\x00\x6B\xC8\x00\x8B\x55\xBC\x8B\x45\xD4\x03\x44\x0A\x60\x89\x45\xB0\x8B\x45\xB0\x8B\x48\x14\x89\x4D\xA4\xC7\x45\x98\x00\x00\x00\x00\xC7\x45\x8C\x00\x00\x00\x00\x8B\x45\xB0\x8B\x4D\xD4\x03\x48\x20\x89\x4D\x80\x8B\x45\xB0\x8B\x4D\xD4\x03\x48\x1C\x89\x8D\x74\xFF\xFF\xFF\xC7\x85\x60\xFF\xFF\xFF\x47\x65\x74\x50\xC7\x85\x64\xFF\xFF\xFF\x72\x6F\x63\x41\xC7\x85\x68\xFF\xFF\xFF\x64\x64\x72\x65\xC7\x85\x54\xFF\xFF\xFF\x00\x00\x00\x00\xEB\x0F\x8B\x85\x54\xFF\xFF\xFF\x83\xC0\x01\x89\x85\x54\xFF\xFF\xFF\x8B\x85\x54\xFF\xFF\xFF\x3B\x45\xA4\x73\x72\x8B\x85\x54\xFF\xFF\xFF\x8B\x4D\x80\x8B\x55\xD4\x03\x14\x81\x89\x55\x98\xB8\x04\x00\x00\x00\x6B\xC8\x00\x8B\x55\x98\x8B\x84\x0D\x60\xFF\xFF\xFF\x3B\x02\x75\x45\xB8\x04\x00\x00\x00\xC1\xE0\x00\x8B\x4D\x98\x8B\x94\x05\x60\xFF\xFF\xFF\x3B\x51\x04\x75\x2E\xB8\x04\x00\x00\x00\xD1\xE0\x8B\x4D\x98\x8B\x94\x05\x60\xFF\xFF\xFF\x3B\x51\x08\x75\x18\x8B\x85\x54\xFF\xFF\xFF\x8B\x8D\x74\xFF\xFF\xFF\x8B\x55\xD4\x03\x54\x81\x08\x89\x55\x8C\xEB\x05\xE9\x74\xFF\xFF\xFF\x33\xC0\x89\x85\x34\xFF\xFF\xFF\x89\x85\x38\xFF\xFF\xFF\x89\x85\x3C\xFF\xFF\xFF\x89\x85\x40\xFF\xFF\xFF\x89\x85\x44\xFF\xFF\xFF\x89\x85\x48\xFF\xFF\xFF\xB8\x04\x00\x00\x00\x6B\xC8\x00\xC7\x84\x0D\x34\xFF\xFF\xFF\x47\x65\x74\x4D\xB8\x04\x00\x00\x00\xC1\xE0\x00\xC7\x84\x05\x34\xFF\xFF\xFF\x6F\x64\x75\x6C\xB8\x04\x00\x00\x00\xD1\xE0\xC7\x84\x05\x34\xFF\xFF\xFF\x65\x48\x61\x6E\xB8\x04\x00\x00\x00\x6B\xC8\x03\xC7\x84\x0D\x34\xFF\xFF\xFF\x64\x6C\x65\x41\xB8\x04\x00\x00\x00\xC1\xE0\x02\xC7\x84\x05\x34\xFF\xFF\xFF\x00\x00\x00\x00\x90\x90\x8D\x85\x34\xFF\xFF\xFF\x50\x8B\x4D\xD4\x51\xFF\x55\x8C\x90\x90\x90\x90\x90\x90\x90\x89\x85\x28\xFF\xFF\xFF\x90\x90\x6A\x00\xFF\x95\x28\xFF\xFF\xFF\x90\x90\x90\x90\x90\x90\x90\x89\x85\x1C\xFF\xFF\xFF\x8B\x85\x1C\xFF\xFF\xFF\x89\x85\x10\xFF\xFF\xFF\x8B\x85\x10\xFF\xFF\xFF\x8B\x48\x3C\x8B\x95\x1C\xFF\xFF\xFF\x8D\x44\x0A\x18\x89\x85\x04\xFF\xFF\xFF\x8B\x85\x10\xFF\xFF\xFF\x8B\x48\x3C\x8B\x95\x1C\xFF\xFF\xFF\x8D\x44\x0A\x04\x89\x85\xF8\xFE\xFF\xFF\x8B\x85\x10\xFF\xFF\xFF\x8B\x48\x3C\x8B\x95\x1C\xFF\xFF\xFF\x8D\x84\x0A\xF8\x00\x00\x00\x89\x85\xEC\xFE\xFF\xFF\x8B\x85\xF8\xFE\xFF\xFF\x0F\xB7\x48\x02\x83\xE9\x01\x89\x8D\xE0\xFE\xFF\xFF\xC7\x85\xC8\xFE\xFF\xFF\x00\x00\x00\x00\x8B\x85\xEC\xFE\xFF\xFF\x8B\x48\x08\x8B\x95\xEC\xFE\xFF\xFF\x03\x4A\x0C\x89\x8D\xBC\xFE\xFF\xFF\xC7\x85\xB0\xFE\xFF\xFF\x00\x00\x00\x00\xEB\x0F\x8B\x85\xEC\xFE\xFF\xFF\x83\xC0\x28\x89\x85\xEC\xFE\xFF\xFF\x8B\x85\xB0\xFE\xFF\xFF\x3B\x85\xE0\xFE\xFF\xFF\x73\x36\x8B\x85\xEC\xFE\xFF\xFF\x81\x38\x2E\x74\x65\x78\x75\x26\x8B\x85\xEC\xFE\xFF\xFF\x8B\x48\x08\x89\x8D\xD4\xFE\xFF\xFF\x8B\x85\xEC\xFE\xFF\xFF\x8B\x48\x0C\x03\x8D\x10\xFF\xFF\xFF\x89\x8D\xC8\xFE\xFF\xFF\xEB\x02\xEB\xAD\xC6\x85\x98\xFE\xFF\xFF\x56\xC6\x85\x99\xFE\xFF\xFF\x69\xC6\x85\x9A\xFE\xFF\xFF\x72\xC6\x85\x9B\xFE\xFF\xFF\x74\xC6\x85\x9C\xFE\xFF\xFF\x75\xC6\x85\x9D\xFE\xFF\xFF\x61\xC6\x85\x9E\xFE\xFF\xFF\x6C\xC6\x85\x9F\xFE\xFF\xFF\x50\xC6\x85\xA0\xFE\xFF\xFF\x72\xC6\x85\xA1\xFE\xFF\xFF\x6F\xC6\x85\xA2\xFE\xFF\xFF\x74\xC6\x85\xA3\xFE\xFF\xFF\x65\xC6\x85\xA4\xFE\xFF\xFF\x63\xC6\x85\xA5\xFE\xFF\xFF\x74\xC6\x85\xA6\xFE\xFF\xFF\x00\x90\x90\x8D\x85\x98\xFE\xFF\xFF\x50\x8B\x4D\xD4\x51\xFF\x55\x8C\x90\x90\x90\x90\x90\x90\x90\x89\x85\x8C\xFE\xFF\xFF\x90\x90\x8D\x85\x80\xFE\xFF\xFF\x50\x6A\x40\x8B\x8D\xD4\xFE\xFF\xFF\x51\x8B\x95\xC8\xFE\xFF\xFF\x52\xFF\x95\x8C\xFE\xFF\xFF\x90\x90\x90\x90\x90\x90\x90\xB8\x08\x00\x00\x00\x6B\xC8\x05\x8B\x95\x04\xFF\xFF\xFF\x8B\x85\x1C\xFF\xFF\xFF\x03\x44\x0A\x60\x89\x85\x74\xFE\xFF\xFF\x8B\x85\x04\xFF\xFF\xFF\x8B\x48\x1C\x8B\x95\x04\xFF\xFF\xFF\x8B\x42\x10\x8B\x4C\x01\x04\x89\x8D\x68\xFE\xFF\xFF\xC7\x85\x5C\xFE\xFF\xFF\x00\x00\x00\x00\x8B\x85\xD4\xFE\xFF\xFF\xC1\xE8\x02\x89\x85\x5C\xFE\xFF\xFF\xB8\x08\x00\x00\x00\x6B\xC8\x05\x8B\x95\x04\xFF\xFF\xFF\x83\x7C\x0A\x60\x00\x75\x54\xC7\x85\x50\xFE\xFF\xFF\x00\x00\x00\x00\xEB\x0F\x8B\x85\x50\xFE\xFF\xFF\x83\xC0\x01\x89\x85\x50\xFE\xFF\xFF\x8B\x85\x50\xFE\xFF\xFF\x3B\x85\x5C\xFE\xFF\xFF\x73\x26\x8B\x85\x50\xFE\xFF\xFF\x8B\x8D\xC8\xFE\xFF\xFF\x8B\x14\x81\x81\xF2\x78\x56\x34\x12\x8B\x85\x50\xFE\xFF\xFF\x8B\x8D\xC8\xFE\xFF\xFF\x89\x14\x81\xEB\xBD\xE9\x51\x02\x00\x00\x8B\x85\x74\xFE\xFF\xFF\x83\x38\x00\x0F\x84\xE3\x00\x00\x00\x8B\x85\x74\xFE\xFF\xFF\x8B\x08\x89\x8D\x44\xFE\xFF\xFF\x8B\x85\x74\xFE\xFF\xFF\x83\xC0\x08\x89\x85\x38\xFE\xFF\xFF\x8B\x85\x74\xFE\xFF\xFF\x8B\x48\x04\x83\xE9\x08\xD1\xE9\x89\x8D\x2C\xFE\xFF\xFF\xC7\x85\x20\xFE\xFF\xFF\x00\x00\x00\x00\xEB\x0F\x8B\x85\x20\xFE\xFF\xFF\x83\xC0\x01\x89\x85\x20\xFE\xFF\xFF\x8B\x85\x20\xFE\xFF\xFF\x3B\x85\x2C\xFE\xFF\xFF\x7D\x6F\x8B\x85\x20\xFE\xFF\xFF\x8B\x8D\x38\xFE\xFF\xFF\x0F\xB7\x14\x41\x81\xE2\xFF\x0F\x00\x00\x03\x95\x44\xFE\xFF\xFF\x3B\x95\xBC\xFE\xFF\xFF\x76\x02\xEB\xBD\x8B\x85\x20\xFE\xFF\xFF\x8B\x8D\x38\xFE\xFF\xFF\x0F\xB7\x14\x41\x81\xE2\xFF\x0F\x00\x00\x03\x95\x1C\xFF\xFF\xFF\x03\x95\x44\xFE\xFF\xFF\x89\x95\x14\xFE\xFF\xFF\x8B\x85\x14\xFE\xFF\xFF\x8B\x08\x03\x8D\x68\xFE\xFF\xFF\x2B\x8D\x1C\xFF\xFF\xFF\x8B\x95\x14\xFE\xFF\xFF\x89\x0A\xE9\x74\xFF\xFF\xFF\x8B\x85\x74\xFE\xFF\xFF\x8B\x8D\x74\xFE\xFF\xFF\x03\x48\x04\x89\x8D\x74\xFE\xFF\xFF\xE9\x0E\xFF\xFF\xFF\xC7\x85\x08\xFE\xFF\xFF\x00\x00\x00\x00\xEB\x0F\x8B\x85\x08\xFE\xFF\xFF\x83\xC0\x01\x89\x85\x08\xFE\xFF\xFF\x8B\x85\x08\xFE\xFF\xFF\x3B\x85\x5C\xFE\xFF\xFF\x73\x26\x8B\x85\x08\xFE\xFF\xFF\x8B\x8D\xC8\xFE\xFF\xFF\x8B\x14\x81\x81\xF2\x78\x56\x34\x12\x8B\x85\x08\xFE\xFF\xFF\x8B\x8D\xC8\xFE\xFF\xFF\x89\x14\x81\xEB\xBD\xB8\x08\x00\x00\x00\x6B\xC8\x05\x8B\x95\x04\xFF\xFF\xFF\x8B\x85\x1C\xFF\xFF\xFF\x03\x44\x0A\x60\x89\x85\x74\xFE\xFF\xFF\x8B\x85\x74\xFE\xFF\xFF\x83\x38\x00\x0F\x84\xE3\x00\x00\x00\x8B\x85\x74\xFE\xFF\xFF\x8B\x08\x89\x8D\xFC\xFD\xFF\xFF\x8B\x85\x74\xFE\xFF\xFF\x83\xC0\x08\x89\x85\xF0\xFD\xFF\xFF\x8B\x85\x74\xFE\xFF\xFF\x8B\x48\x04\x83\xE9\x08\xD1\xE9\x89\x8D\xE4\xFD\xFF\xFF\xC7\x85\xD8\xFD\xFF\xFF\x00\x00\x00\x00\xEB\x0F\x8B\x85\xD8\xFD\xFF\xFF\x83\xC0\x01\x89\x85\xD8\xFD\xFF\xFF\x8B\x85\xD8\xFD\xFF\xFF\x3B\x85\xE4\xFD\xFF\xFF\x7D\x6F\x8B\x85\xD8\xFD\xFF\xFF\x8B\x8D\xF0\xFD\xFF\xFF\x0F\xB7\x14\x41\x81\xE2\xFF\x0F\x00\x00\x03\x95\xFC\xFD\xFF\xFF\x3B\x95\xBC\xFE\xFF\xFF\x76\x02\xEB\xBD\x8B\x85\xD8\xFD\xFF\xFF\x8B\x8D\xF0\xFD\xFF\xFF\x0F\xB7\x14\x41\x81\xE2\xFF\x0F\x00\x00\x03\x95\x1C\xFF\xFF\xFF\x03\x95\xFC\xFD\xFF\xFF\x89\x95\xCC\xFD\xFF\xFF\x8B\x85\xCC\xFD\xFF\xFF\x8B\x08\x2B\x8D\x68\xFE\xFF\xFF\x03\x8D\x1C\xFF\xFF\xFF\x8B\x95\xCC\xFD\xFF\xFF\x89\x0A\xE9\x74\xFF\xFF\xFF\x8B\x85\x74\xFE\xFF\xFF\x8B\x8D\x74\xFE\xFF\xFF\x03\x48\x04\x89\x8D\x74\xFE\xFF\xFF\xE9\x0E\xFF\xFF\xFF\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x5F\x5E\x5B\x81\xC4\xB8\x03\x00\x00\x90\x90\x90\x90\x90\x90\x90\x8B\xE5\x5D";

DWORD ShellCodeLenth = 1760;



BOOL ReadExeFile(CHAR* szNewFilePath, BYTE** buffer)
{
	DWORD dwNumberOfBytesRead = 0;
	HANDLE hFile;
	DWORD dwFileSize = 0;

	hFile = CreateFileA(szNewFilePath, GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
	if (hFile == INVALID_HANDLE_VALUE)
	{
		printf("CreateFileA Failed !!! GetLastError: %d", GetLastError());
		return FALSE;
	}

	dwFileSize = GetFileSize(hFile, NULL);
	//这里申请的空间+多少需要根据生成的shellcode长度来确定
	*buffer = new BYTE[dwFileSize+2000];

	if (ReadFile(hFile, *buffer, dwFileSize, &dwNumberOfBytesRead, NULL) == FALSE)
	{
		printf("ReadFile Failed !!! GetLastError: %d", GetLastError());
		return FALSE;
	}
	return TRUE;

}

BOOL AddNewSectionHeader(PBYTE pbuf)
{
	PIMAGE_DOS_HEADER       pIDH = (PIMAGE_DOS_HEADER)pbuf;
	PIMAGE_NT_HEADERS		INH = (PIMAGE_NT_HEADERS)(pbuf + pIDH->e_lfanew);
	PIMAGE_FILE_HEADER      pIFH = (PIMAGE_FILE_HEADER)(pbuf + pIDH->e_lfanew + 4);
	PIMAGE_OPTIONAL_HEADER  pIOH = (PIMAGE_OPTIONAL_HEADER)(pbuf + pIDH->e_lfanew + 0x18);
	PIMAGE_SECTION_HEADER   pISH = (PIMAGE_SECTION_HEADER)(pbuf + pIDH->e_lfanew + sizeof(IMAGE_NT_HEADERS));

	DWORD OldSectionNumber = pIFH->NumberOfSections;

	//节区数加1
	pIFH->NumberOfSections = OldSectionNumber + 1;

	//修改PMAGE_OPTIONAL_HEADER中的Size of Image，添加大小必须满足Section Alignment的倍数关系
	pIOH->SizeOfImage = (ShellCodeLenth / pIOH->SectionAlignment + 1) * pIOH->SectionAlignment+ pIOH->SizeOfImage;


	//获取最后一个节区的一些数据
	PIMAGE_SECTION_HEADER pLastSectionHeader = (PIMAGE_SECTION_HEADER)(pISH + OldSectionNumber - 1);
	DWORD LastVirtualSize = pLastSectionHeader->Misc.VirtualSize;
	DWORD LastVirtualAddress = pLastSectionHeader->VirtualAddress;
	DWORD LastSizeOfRawData = pLastSectionHeader->SizeOfRawData;
	DWORD LastPointerToRawData = pLastSectionHeader->PointerToRawData;

	//添加新节区
	PIMAGE_SECTION_HEADER pNewSectionHeader = (PIMAGE_SECTION_HEADER)(pISH + OldSectionNumber);
	memcpy(&pNewSectionHeader->Name, ".Shell", 6);
	pNewSectionHeader->Misc.VirtualSize = ShellCodeLenth;
	pNewSectionHeader->VirtualAddress = (LastVirtualSize / pIOH->SectionAlignment + 1) * pIOH->SectionAlignment + LastVirtualAddress;
	pNewSectionHeader->SizeOfRawData = (ShellCodeLenth / pIOH->FileAlignment + 1) * pIOH->FileAlignment;
	pNewSectionHeader->PointerToRawData = LastSizeOfRawData + LastPointerToRawData;
	pNewSectionHeader->PointerToRelocations = 0;
	pNewSectionHeader->PointerToLinenumbers = 0;
	pNewSectionHeader->NumberOfLinenumbers = 0;
	pNewSectionHeader->NumberOfRelocations = 0;
	pNewSectionHeader->Characteristics = IMAGE_SCN_CNT_CODE | IMAGE_SCN_MEM_EXECUTE | IMAGE_SCN_MEM_READ;

	return TRUE;

}

BOOL EncodeTextSection(PBYTE pbuf)
{

	PIMAGE_DOS_HEADER       pIDH = (PIMAGE_DOS_HEADER)pbuf;
	PIMAGE_NT_HEADERS		pINH = (PIMAGE_NT_HEADERS)(pbuf + pIDH->e_lfanew);
	PIMAGE_FILE_HEADER      pIFH = (PIMAGE_FILE_HEADER)(pbuf + pIDH->e_lfanew + 4);
	PIMAGE_OPTIONAL_HEADER  pIOH = (PIMAGE_OPTIONAL_HEADER)(pbuf + pIDH->e_lfanew + 0x18);
	PIMAGE_SECTION_HEADER   pISH = (PIMAGE_SECTION_HEADER)(pbuf + pIDH->e_lfanew + sizeof(IMAGE_NT_HEADERS));

	DWORD OldSectionNumber = pIFH->NumberOfSections - 1;
	DWORD dwTextsize;
	DWORD* pTextStart=NULL;

	for (int i = 0; i < OldSectionNumber; pISH++)
	{
		if (memcmp(pISH->Name, ".text", 6) == 0)
		{
			dwTextsize = pISH->Misc.VirtualSize;
			pTextStart = (DWORD*)(pISH->PointerToRawData + (DWORD)pIDH);
			break;
		}
	}

	DWORD Round=0;
	if (dwTextsize % 4 == 0)
	{
		Round = dwTextsize / 4;
	}
	else
	{
		Round = dwTextsize/4 + 1;
	}

	for (int i = 0; i < Round; i++)
	{
		*(unsigned int*)(pTextStart + i ) = *(unsigned int*)(pTextStart + i ) ^ 0x12345678;
	}



	//本来想用blowfish加密方式加密的，但是写shellcode解密比较麻烦，就放弃了。
	//BLOWFISH_CTX ctx;
	//BlowFishInit(&ctx, (unsigned char*)"Shell", strlen("Shell"));

	//DWORD Round;
	//if (dwTextsize / 8 == 0)
	//{
	//	Round = dwTextsize / 8;
	//}
	//else
	//{
	//	Round = dwTextsize + 1;
	//}
	//printf("%x ", dwTextsize);
	////BlowFish_Encry(&ctx, &L, &R);
	//for (int i = 0; i < Round; i++)
	//{
	//	BlowFish_Encry(&ctx, (unsigned int*)(pTextStart + i * 8), (unsigned int*)(pTextStart + i * 8 + 4));
	//}

	return TRUE;

}

BOOL AddShellCode(PBYTE pbuf)
{
	PIMAGE_DOS_HEADER       pIDH = (PIMAGE_DOS_HEADER)pbuf;
	PIMAGE_OPTIONAL_HEADER  pIOH = (PIMAGE_OPTIONAL_HEADER)(pbuf + pIDH->e_lfanew + 0x18);
	PIMAGE_FILE_HEADER      pIFH = (PIMAGE_FILE_HEADER)(pbuf + pIDH->e_lfanew + 4);
	PIMAGE_SECTION_HEADER   pISH = (PIMAGE_SECTION_HEADER)(pbuf + pIDH->e_lfanew + sizeof(IMAGE_NT_HEADERS));
	PIMAGE_SECTION_HEADER pNewSectionHeader = (PIMAGE_SECTION_HEADER)(pISH + pIFH->NumberOfSections - 1);

	PBYTE ShellSectionStart = pbuf + pNewSectionHeader->PointerToRawData;

	//添加绝对跳转，并且空出4byte空间存储原来的ImageBase，用于shellcode还原到重定位前。
	*(DWORD*)ShellSectionStart = 0x4750674;
	ShellSectionStart = ShellSectionStart+ 4;

	*(DWORD*)ShellSectionStart = pIOH->ImageBase;
	ShellSectionStart = ShellSectionStart + 4;

	//添加shellcode到新节区
	memcpy(ShellSectionStart, shellcode, ShellCodeLenth);
	ShellSectionStart = ShellSectionStart + ShellCodeLenth;

	//执行完shellcode解密后，跳转到原EP，需要算一下偏移。
	*(char*)ShellSectionStart = 0xe9;
	ShellSectionStart = ShellSectionStart + 1;
	DWORD offset = pIOH->AddressOfEntryPoint - pNewSectionHeader->VirtualAddress - ShellCodeLenth-13;
	memcpy(ShellSectionStart, &offset, 4);

	//修改EP为shellcode的起始地址，也就是OEP
	DWORD OldEntryPoint = pIOH->AddressOfEntryPoint;
	pIOH->AddressOfEntryPoint = pNewSectionHeader->VirtualAddress;
	

	//将修改后的数据写入新文件中
	FILE* fp = NULL;
	fp = fopen("test_shell.exe", "wb");
	DWORD NewFileSize = pNewSectionHeader->PointerToRawData + pNewSectionHeader->SizeOfRawData;
	fwrite(pbuf, sizeof(unsigned __int8), NewFileSize, fp);
	fclose(fp);
	return TRUE;
}
BOOL Blowfishtest()
{
	unsigned int L = 0x546F4EBF, R = 0xB4ED937B;
	unsigned char enc[] = { 0xBF, 0x4E, 0x6F, 0x54, 0x7B, 0x93, 0xED, 0xB4, 0x7E, 0xA0,
  0xD2, 0x82, 0xDD, 0xEF, 0xD3, 0x13, 0x0F, 0xAE, 0x09, 0x22,
  0x61, 0xDF, 0x4E, 0x59, 0x2C, 0x78, 0x33, 0xB9, 0x32, 0xE5,
  0x07, 0x1C };
	
	BLOWFISH_CTX ctx;
	//BlowFish_Encry(&ctx, &L, &R);
	for (int i = 0; i < 4; i++)
	{
		BlowFish_Decrypt(&ctx, (unsigned int*)(enc + i * 8), (unsigned int*)(enc + i * 8 + 4));
	}
	printf("%s", enc);
	return TRUE;
}

BOOL ExeShell(PBYTE pbuf)
{
	//添加一个新节区，用来装解密的shellcode。
	AddNewSectionHeader(pbuf);

	
	//采用异或加密text节区。
	EncodeTextSection(pbuf);

	//添加shellcode
	AddShellCode(pbuf);

	//Blowfishtest();
	return TRUE;

}

int main(int argc, char* argv[])
{
	//CHAR szExePath[MAX_PATH] = "D:\\xor.exe";
	PBYTE buf;
	if (argc == 2)
	{
		//申请空间，并读取目标exe文件
		ReadExeFile(argv[1], &buf);

		//加壳
		ExeShell(buf);

		printf("Packing Success!!!\n\n");
	}
	else
	{
		printf("USAGE  : %s FilePath\n\n",argv[0]);
	}

	system("pause");
}