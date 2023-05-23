#define _CRT_SECURE_NO_WARNINGS

#include <sa2b/core.h>

#include <stdio.h>
#include <stdlib.h>

DataRef(char*, struc_36Instance, 0x01A557BC);

int
EditObjPak(float32 shadowOpacity)
{
	FILE* f = fopen("./resource/Shader/win32/obj.pak", "rb");

	if (!f)
		return 1;

	fseek(f, 0, SEEK_END);

	size_t size = ftell(f);

	if (size != 0x57BD)
	{
		puts("Enhanced Shadows: obj.pak is not original, aborting changes!");
		fclose(f);
		return 1;
	}

	fseek(f, 0, SEEK_SET);

	char* buffer = (char*)malloc(size);

	// I really shouldn't have to check this...
	if (!buffer)
	{
		fclose(f);
		return 1;
	}

	fread(buffer, size, 1, f);

	fclose(f);

	*(float*)&buffer[0x07D9] = 1.0f; // Fix some xbox gamma crap, why not while we're here
	*(float*)&buffer[0x0E21] = 1.0f;
	*(float*)&buffer[0x11ED] = 1.0f;
	*(float*)&buffer[0x15B5] = 1.0f;
	*(float*)&buffer[0x1961] = 1.0f;
	*(float*)&buffer[0x1E4D] = 1.0f;
	*(float*)&buffer[0x2399] = 1.0f;
	*(float*)&buffer[0x2A5D] = 1.0f;
	*(float*)&buffer[0x3145] = 1.0f;

	*(float*)&buffer[0x1949] = shadowOpacity;
	*(float*)&buffer[0x2385] = shadowOpacity;
	*(float*)&buffer[0x2A2D] = shadowOpacity;
	*(float*)&buffer[0x312D] = shadowOpacity;

	f = fopen("./resource/Shader/win32/obj.pak", "wb");

	if (!f)
	{
		free(buffer);
		return 1;
	}

	fwrite(buffer, size, 1, f);

	fclose(f);

	free(buffer);

	*(struc_36Instance + 0x644) = 1; // Reload shaders

	return 0;
}