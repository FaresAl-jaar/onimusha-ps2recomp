#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F1CB0
// Address: 0x1f1cb0 - 0x1f1f38
void sub_001F1CB0_0x1f1cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F1CB0_0x1f1cb0");
#endif

    switch (ctx->pc) {
        case 0x1f1d10u: goto label_1f1d10;
        case 0x1f1e20u: goto label_1f1e20;
        default: break;
    }

    ctx->pc = 0x1f1cb0u;

    // 0x1f1cb0: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x1f1cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1f1cb4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f1cb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f1cb8: 0x24a20008  addiu       $v0, $a1, 0x8
    ctx->pc = 0x1f1cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1f1cbc: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1f1cbcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f1cc0: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x1f1cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x1f1cc4: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x1f1cc4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x1f1cc8: 0xac860048  sw          $a2, 0x48($a0)
    ctx->pc = 0x1f1cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 6));
    // 0x1f1ccc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f1cccu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1cd0: 0xac27a3c8  sw          $a3, -0x5C38($at)
    ctx->pc = 0x1f1cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943688), GPR_U32(ctx, 7));
    // 0x1f1cd4: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x1f1cd4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1cd8: 0xa0800036  sb          $zero, 0x36($a0)
    ctx->pc = 0x1f1cd8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 54), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f1cdc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f1cdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f1ce0: 0xa0800047  sb          $zero, 0x47($a0)
    ctx->pc = 0x1f1ce0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 71), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f1ce4: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x1f1ce4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x1f1ce8: 0xa0800035  sb          $zero, 0x35($a0)
    ctx->pc = 0x1f1ce8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 53), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f1cec: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x1f1cecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1cf0: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x1f1cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x1f1cf4: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x1f1cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x1f1cf8: 0xa4800044  sh          $zero, 0x44($a0)
    ctx->pc = 0x1f1cf8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 68), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f1cfc: 0xa0800037  sb          $zero, 0x37($a0)
    ctx->pc = 0x1f1cfcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 55), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f1d00: 0xa428a3d6  sh          $t0, -0x5C2A($at)
    ctx->pc = 0x1f1d00u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294943702), (uint16_t)GPR_U32(ctx, 8));
    // 0x1f1d04: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x1f1d04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1f1d08: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x1f1d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1f1d0c: 0x0  nop
    ctx->pc = 0x1f1d0cu;
    // NOP
label_1f1d10:
    // 0x1f1d10: 0xad400080  sw          $zero, 0x80($t2)
    ctx->pc = 0x1f1d10u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 128), GPR_U32(ctx, 0));
    // 0x1f1d14: 0xa5200380  sh          $zero, 0x380($t1)
    ctx->pc = 0x1f1d14u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 896), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f1d18: 0x8b2821  addu        $a1, $a0, $t3
    ctx->pc = 0x1f1d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x1f1d1c: 0xa5260480  sh          $a2, 0x480($t1)
    ctx->pc = 0x1f1d1cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 1152), (uint16_t)GPR_U32(ctx, 6));
    // 0x1f1d20: 0x256b0008  addiu       $t3, $t3, 0x8
    ctx->pc = 0x1f1d20u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
    // 0x1f1d24: 0xa5200580  sh          $zero, 0x580($t1)
    ctx->pc = 0x1f1d24u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 1408), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f1d28: 0x29620080  slti        $v0, $t3, 0x80
    ctx->pc = 0x1f1d28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x1f1d2c: 0xa0a30680  sb          $v1, 0x680($a1)
    ctx->pc = 0x1f1d2cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1664), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f1d30: 0xad400084  sw          $zero, 0x84($t2)
    ctx->pc = 0x1f1d30u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 132), GPR_U32(ctx, 0));
    // 0x1f1d34: 0xa5200382  sh          $zero, 0x382($t1)
    ctx->pc = 0x1f1d34u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 898), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f1d38: 0xa5260482  sh          $a2, 0x482($t1)
    ctx->pc = 0x1f1d38u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 1154), (uint16_t)GPR_U32(ctx, 6));
    // 0x1f1d3c: 0xa5200582  sh          $zero, 0x582($t1)
    ctx->pc = 0x1f1d3cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 1410), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f1d40: 0xa0a30681  sb          $v1, 0x681($a1)
    ctx->pc = 0x1f1d40u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1665), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f1d44: 0xad400088  sw          $zero, 0x88($t2)
    ctx->pc = 0x1f1d44u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 136), GPR_U32(ctx, 0));
    // 0x1f1d48: 0xa5200384  sh          $zero, 0x384($t1)
    ctx->pc = 0x1f1d48u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 900), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f1d4c: 0xa5260484  sh          $a2, 0x484($t1)
    ctx->pc = 0x1f1d4cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 1156), (uint16_t)GPR_U32(ctx, 6));
    // 0x1f1d50: 0xa5200584  sh          $zero, 0x584($t1)
    ctx->pc = 0x1f1d50u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 1412), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f1d54: 0xa0a30682  sb          $v1, 0x682($a1)
    ctx->pc = 0x1f1d54u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1666), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f1d58: 0xad40008c  sw          $zero, 0x8C($t2)
    ctx->pc = 0x1f1d58u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 140), GPR_U32(ctx, 0));
    // 0x1f1d5c: 0xa5200386  sh          $zero, 0x386($t1)
    ctx->pc = 0x1f1d5cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 902), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f1d60: 0xa5260486  sh          $a2, 0x486($t1)
    ctx->pc = 0x1f1d60u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 1158), (uint16_t)GPR_U32(ctx, 6));
    // 0x1f1d64: 0xa5200586  sh          $zero, 0x586($t1)
    ctx->pc = 0x1f1d64u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 1414), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f1d68: 0xa0a30683  sb          $v1, 0x683($a1)
    ctx->pc = 0x1f1d68u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1667), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f1d6c: 0xad400090  sw          $zero, 0x90($t2)
    ctx->pc = 0x1f1d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 144), GPR_U32(ctx, 0));
    // 0x1f1d70: 0xa5200388  sh          $zero, 0x388($t1)
    ctx->pc = 0x1f1d70u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 904), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f1d74: 0xa5260488  sh          $a2, 0x488($t1)
    ctx->pc = 0x1f1d74u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 1160), (uint16_t)GPR_U32(ctx, 6));
    // 0x1f1d78: 0xa5200588  sh          $zero, 0x588($t1)
    ctx->pc = 0x1f1d78u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 1416), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f1d7c: 0xa0a30684  sb          $v1, 0x684($a1)
    ctx->pc = 0x1f1d7cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1668), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f1d80: 0xad400094  sw          $zero, 0x94($t2)
    ctx->pc = 0x1f1d80u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 148), GPR_U32(ctx, 0));
    // 0x1f1d84: 0xa520038a  sh          $zero, 0x38A($t1)
    ctx->pc = 0x1f1d84u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 906), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f1d88: 0xa526048a  sh          $a2, 0x48A($t1)
    ctx->pc = 0x1f1d88u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 1162), (uint16_t)GPR_U32(ctx, 6));
    // 0x1f1d8c: 0xa520058a  sh          $zero, 0x58A($t1)
    ctx->pc = 0x1f1d8cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 1418), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f1d90: 0xa0a30685  sb          $v1, 0x685($a1)
    ctx->pc = 0x1f1d90u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1669), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f1d94: 0xad400098  sw          $zero, 0x98($t2)
    ctx->pc = 0x1f1d94u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 152), GPR_U32(ctx, 0));
    // 0x1f1d98: 0xa520038c  sh          $zero, 0x38C($t1)
    ctx->pc = 0x1f1d98u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 908), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f1d9c: 0xa526048c  sh          $a2, 0x48C($t1)
    ctx->pc = 0x1f1d9cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 1164), (uint16_t)GPR_U32(ctx, 6));
    // 0x1f1da0: 0xa520058c  sh          $zero, 0x58C($t1)
    ctx->pc = 0x1f1da0u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 1420), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f1da4: 0xa0a30686  sb          $v1, 0x686($a1)
    ctx->pc = 0x1f1da4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1670), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f1da8: 0xad40009c  sw          $zero, 0x9C($t2)
    ctx->pc = 0x1f1da8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 156), GPR_U32(ctx, 0));
    // 0x1f1dac: 0xa520038e  sh          $zero, 0x38E($t1)
    ctx->pc = 0x1f1dacu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 910), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f1db0: 0x254a0020  addiu       $t2, $t2, 0x20
    ctx->pc = 0x1f1db0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 32));
    // 0x1f1db4: 0xa526048e  sh          $a2, 0x48E($t1)
    ctx->pc = 0x1f1db4u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 1166), (uint16_t)GPR_U32(ctx, 6));
    // 0x1f1db8: 0xa520058e  sh          $zero, 0x58E($t1)
    ctx->pc = 0x1f1db8u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 1422), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f1dbc: 0xa0a30687  sb          $v1, 0x687($a1)
    ctx->pc = 0x1f1dbcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1671), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f1dc0: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x1F1DC0u;
    {
        const bool branch_taken_0x1f1dc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1DC0u;
        // 0x1f1dc4: 0x25290010  addiu       $t1, $t1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1dc0) {
            ctx->pc = 0x1F1D10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f1d10;
        }
    }
    ctx->pc = 0x1F1DC8u;
    // 0x1f1dc8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f1dc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f1dcc: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1f1dccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1f1dd0: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x1f1dd0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x1f1dd4: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x1f1dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x1f1dd8: 0xac20a3cc  sw          $zero, -0x5C34($at)
    ctx->pc = 0x1f1dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943692), GPR_U32(ctx, 0));
    // 0x1f1ddc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f1ddcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1de0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f1de0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f1de4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1f1de4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1de8: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x1f1de8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x1f1dec: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1f1decu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1df0: 0xac20a3d0  sw          $zero, -0x5C30($at)
    ctx->pc = 0x1f1df0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943696), GPR_U32(ctx, 0));
    // 0x1f1df4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f1df4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f1df8: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x1f1df8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x1f1dfc: 0xa423a3d4  sh          $v1, -0x5C2C($at)
    ctx->pc = 0x1f1dfcu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294943700), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f1e00: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x1f1e00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x1f1e04: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x1f1e04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x1f1e08: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f1e08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f1e0c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f1e0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f1e10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f1e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f1e14: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x1f1e14u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x1f1e18: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1f1e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f1e1c: 0xac22a3c0  sw          $v0, -0x5C40($at)
    ctx->pc = 0x1f1e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943680), GPR_U32(ctx, 2));
label_1f1e20:
    // 0x1f1e20: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f1e20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f1e24: 0xa0c00700  sb          $zero, 0x700($a2)
    ctx->pc = 0x1f1e24u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1792), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f1e28: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x1f1e28u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
    // 0x1f1e2c: 0xac20a300  sw          $zero, -0x5D00($at)
    ctx->pc = 0x1f1e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943488), GPR_U32(ctx, 0));
    // 0x1f1e30: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x1f1e30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x1f1e34: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f1e34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f1e38: 0xa0c00be0  sb          $zero, 0xBE0($a2)
    ctx->pc = 0x1f1e38u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3040), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f1e3c: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x1f1e3cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
    // 0x1f1e40: 0x28e20020  slti        $v0, $a3, 0x20
    ctx->pc = 0x1f1e40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1f1e44: 0xac20a304  sw          $zero, -0x5CFC($at)
    ctx->pc = 0x1f1e44u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943492), GPR_U32(ctx, 0));
    // 0x1f1e48: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f1e48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f1e4c: 0xa0c010c0  sb          $zero, 0x10C0($a2)
    ctx->pc = 0x1f1e4cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4288), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f1e50: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x1f1e50u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
    // 0x1f1e54: 0xac20a308  sw          $zero, -0x5CF8($at)
    ctx->pc = 0x1f1e54u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943496), GPR_U32(ctx, 0));
    // 0x1f1e58: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f1e58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f1e5c: 0xa0c015a0  sb          $zero, 0x15A0($a2)
    ctx->pc = 0x1f1e5cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 5536), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f1e60: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x1f1e60u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
    // 0x1f1e64: 0xac20a30c  sw          $zero, -0x5CF4($at)
    ctx->pc = 0x1f1e64u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943500), GPR_U32(ctx, 0));
    // 0x1f1e68: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f1e68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f1e6c: 0xa0c01a80  sb          $zero, 0x1A80($a2)
    ctx->pc = 0x1f1e6cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 6784), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f1e70: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x1f1e70u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
    // 0x1f1e74: 0xac20a310  sw          $zero, -0x5CF0($at)
    ctx->pc = 0x1f1e74u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943504), GPR_U32(ctx, 0));
    // 0x1f1e78: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f1e78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f1e7c: 0xa0c01f60  sb          $zero, 0x1F60($a2)
    ctx->pc = 0x1f1e7cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 8032), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f1e80: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x1f1e80u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
    // 0x1f1e84: 0xac20a314  sw          $zero, -0x5CEC($at)
    ctx->pc = 0x1f1e84u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943508), GPR_U32(ctx, 0));
    // 0x1f1e88: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f1e88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f1e8c: 0xa0c02440  sb          $zero, 0x2440($a2)
    ctx->pc = 0x1f1e8cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 9280), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f1e90: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x1f1e90u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
    // 0x1f1e94: 0xac20a318  sw          $zero, -0x5CE8($at)
    ctx->pc = 0x1f1e94u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943512), GPR_U32(ctx, 0));
    // 0x1f1e98: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f1e98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f1e9c: 0xa0c02920  sb          $zero, 0x2920($a2)
    ctx->pc = 0x1f1e9cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 10528), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f1ea0: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x1f1ea0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
    // 0x1f1ea4: 0x24c62700  addiu       $a2, $a2, 0x2700
    ctx->pc = 0x1f1ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9984));
    // 0x1f1ea8: 0xac20a31c  sw          $zero, -0x5CE4($at)
    ctx->pc = 0x1f1ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943516), GPR_U32(ctx, 0));
    // 0x1f1eac: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1F1EACu;
    {
        const bool branch_taken_0x1f1eac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1EACu;
        // 0x1f1eb0: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1eac) {
            ctx->pc = 0x1F1E20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f1e20;
        }
    }
    ctx->pc = 0x1F1EB4u;
    // 0x1f1eb4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f1eb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f1eb8: 0x3103ffff  andi        $v1, $t0, 0xFFFF
    ctx->pc = 0x1f1eb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x1f1ebc: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x1f1ebcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x1f1ec0: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1f1ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1f1ec4: 0xa420a3c4  sh          $zero, -0x5C3C($at)
    ctx->pc = 0x1f1ec4u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294943684), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f1ec8: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x1f1ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
    // 0x1f1ecc: 0xac800054  sw          $zero, 0x54($a0)
    ctx->pc = 0x1f1eccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
    // 0x1f1ed0: 0xac800058  sw          $zero, 0x58($a0)
    ctx->pc = 0x1f1ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 0));
    // 0x1f1ed4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F1ED4u;
    {
        const bool branch_taken_0x1f1ed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1ED4u;
        // 0x1f1ed8: 0xac80005c  sw          $zero, 0x5C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1ed4) {
            ctx->pc = 0x1F1EE8u;
            goto label_1f1ee8;
        }
    }
    ctx->pc = 0x1F1EDCu;
    // 0x1f1edc: 0x97828824  lhu         $v0, -0x77DC($gp)
    ctx->pc = 0x1f1edcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936612)));
    // 0x1f1ee0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f1ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f1ee4: 0xa7828824  sh          $v0, -0x77DC($gp)
    ctx->pc = 0x1f1ee4u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936612), (uint16_t)GPR_U32(ctx, 2));
label_1f1ee8:
    // 0x1f1ee8: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1f1ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1f1eec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F1EECu;
    {
        const bool branch_taken_0x1f1eec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1eec) {
            ctx->pc = 0x1F1F00u;
            goto label_1f1f00;
        }
    }
    ctx->pc = 0x1F1EF4u;
    // 0x1f1ef4: 0x97828820  lhu         $v0, -0x77E0($gp)
    ctx->pc = 0x1f1ef4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936608)));
    // 0x1f1ef8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f1ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f1efc: 0xa7828820  sh          $v0, -0x77E0($gp)
    ctx->pc = 0x1f1efcu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936608), (uint16_t)GPR_U32(ctx, 2));
label_1f1f00:
    // 0x1f1f00: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x1f1f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x1f1f04: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F1F04u;
    {
        const bool branch_taken_0x1f1f04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1f04) {
            ctx->pc = 0x1F1F28u;
            goto label_1f1f28;
        }
    }
    ctx->pc = 0x1F1F0Cu;
    // 0x1f1f0c: 0x9082004f  lbu         $v0, 0x4F($a0)
    ctx->pc = 0x1f1f0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 79)));
    // 0x1f1f10: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1f1f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1f1f14: 0xa082004f  sb          $v0, 0x4F($a0)
    ctx->pc = 0x1f1f14u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 79), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f1f18: 0x9082004f  lbu         $v0, 0x4F($a0)
    ctx->pc = 0x1f1f18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 79)));
    // 0x1f1f1c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1f1f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1f1f20: 0xa082004f  sb          $v0, 0x4F($a0)
    ctx->pc = 0x1f1f20u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 79), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f1f24: 0x0  nop
    ctx->pc = 0x1f1f24u;
    // NOP
label_1f1f28:
    // 0x1f1f28: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1f1f28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1f2c: 0x3c040087  lui         $a0, 0x87
    ctx->pc = 0x1f1f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)135 << 16));
    // 0x1f1f30: 0x80a7394  j           func_29CE50
    ctx->pc = 0x1F1F30u;
    ctx->pc = 0x1F1F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1F30u;
    // 0x1f1f34: 0x24841390  addiu       $a0, $a0, 0x1390 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CE50u;
    sub_0029CE50_0x29ce50(rdram, ctx, runtime); return;
    ctx->pc = 0x1F1F38u;
}
