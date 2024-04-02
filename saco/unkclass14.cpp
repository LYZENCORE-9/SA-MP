
#include "main.h"

CUnkClass14::CUnkClass14(IDirect3DDevice9 *pD3DDevice)
{
	m_pD3DDevice = pD3DDevice;
	m_pD3DSprite1 = NULL;
	m_pD3DSprite2 = NULL;

	RestoreDeviceObjects();
}

void CUnkClass14::RestoreDeviceObjects()
{
	D3DXCreateSprite(m_pD3DDevice, &m_pD3DSprite1);
	D3DXCreateSprite(m_pD3DDevice, &m_pD3DSprite2);
}