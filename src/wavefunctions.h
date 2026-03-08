#include "platform_sdl_gl.h"

extern	IDirectSoundBuffer8 *MakeSoundBuffer(IDirectSound8 *ds, LPCWSTR lpSampleName);
extern	void *GetWAVRes(HMODULE hModule, LPCWSTR lpResName);
extern	BOOL WriteWAVData( IDirectSoundBuffer8 *pDSB, BYTE *pbWaveData, DWORD cbWaveSize );
extern	BOOL UnpackWAVChunk( void *pRIFFBytes, LPWAVEFORMATEX *lpwfmx, BYTE **ppbWaveData, DWORD *pcbWaveSize );


