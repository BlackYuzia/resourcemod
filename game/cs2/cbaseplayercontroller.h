#pragma once

#include "ehandle.h"
#include "cbaseentity.h"
#include "ccsplayerpawn.h"

enum class PlayerConnectedState : uint32_t
{
    PlayerNeverConnected = 0xFFFFFFFF,
    PlayerConnected = 0x0,
    PlayerConnecting = 0x1,
    PlayerReconnecting = 0x2,
    PlayerDisconnecting = 0x3,
    PlayerDisconnected = 0x4,
    PlayerReserved = 0x5,
};
extern CEntitySystem* g_pEntitySystem;
class CBasePlayerController : public Z_CBaseEntity
{
public:
    DECLARE_SCHEMA_CLASS(CBasePlayerController);

    SCHEMA_FIELD(uint64, m_steamID)
    SCHEMA_FIELD(CHandle<CBasePlayerPawn>, m_hPawn)
    SCHEMA_FIELD_POINTER(char, m_iszPlayerName)
    SCHEMA_FIELD(PlayerConnectedState, m_iConnected)

    CBasePlayerPawn *GetPawn() { return m_hPawn.Get(); }
    const char *GetPlayerName() { return m_iszPlayerName(); }
    int GetPlayerSlot() { return entindex() - 1; }
    bool IsConnected() { return m_iConnected() == PlayerConnectedState::PlayerConnected; }
};