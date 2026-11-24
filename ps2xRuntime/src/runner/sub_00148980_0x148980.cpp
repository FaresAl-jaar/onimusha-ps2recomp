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

// Function: sub_00148980
// Address: 0x148980 - 0x148a5c
void sub_00148980_0x148980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00148980_0x148980");
#endif

    switch (ctx->pc) {
        case 0x148998u: goto label_148998;
        default: break;
    }

    ctx->pc = 0x148980u;

    // 0x148980: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x148980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x148984: 0x2402ffbf  addiu       $v0, $zero, -0x41
    ctx->pc = 0x148984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x148988: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x148988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14898c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14898cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x148990: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x148990u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x148994: 0xa08000d2  sb          $zero, 0xD2($a0)
    ctx->pc = 0x148994u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 210), (uint8_t)GPR_U32(ctx, 0));
label_148998:
    // 0x148998: 0xa4800032  sh          $zero, 0x32($a0)
    ctx->pc = 0x148998u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 50), (uint16_t)GPR_U32(ctx, 0));
    // 0x14899c: 0xa4800034  sh          $zero, 0x34($a0)
    ctx->pc = 0x14899cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 52), (uint16_t)GPR_U32(ctx, 0));
    // 0x1489a0: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1489a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1489a4: 0xa4800036  sh          $zero, 0x36($a0)
    ctx->pc = 0x1489a4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 54), (uint16_t)GPR_U32(ctx, 0));
    // 0x1489a8: 0x28a20010  slti        $v0, $a1, 0x10
    ctx->pc = 0x1489a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1489ac: 0xa4800038  sh          $zero, 0x38($a0)
    ctx->pc = 0x1489acu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 56), (uint16_t)GPR_U32(ctx, 0));
    // 0x1489b0: 0xa480003a  sh          $zero, 0x3A($a0)
    ctx->pc = 0x1489b0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 58), (uint16_t)GPR_U32(ctx, 0));
    // 0x1489b4: 0xa480003c  sh          $zero, 0x3C($a0)
    ctx->pc = 0x1489b4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 60), (uint16_t)GPR_U32(ctx, 0));
    // 0x1489b8: 0xa480003e  sh          $zero, 0x3E($a0)
    ctx->pc = 0x1489b8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 62), (uint16_t)GPR_U32(ctx, 0));
    // 0x1489bc: 0xa4800040  sh          $zero, 0x40($a0)
    ctx->pc = 0x1489bcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 64), (uint16_t)GPR_U32(ctx, 0));
    // 0x1489c0: 0xa4800042  sh          $zero, 0x42($a0)
    ctx->pc = 0x1489c0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 66), (uint16_t)GPR_U32(ctx, 0));
    // 0x1489c4: 0xa4800044  sh          $zero, 0x44($a0)
    ctx->pc = 0x1489c4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 68), (uint16_t)GPR_U32(ctx, 0));
    // 0x1489c8: 0xa4800046  sh          $zero, 0x46($a0)
    ctx->pc = 0x1489c8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 70), (uint16_t)GPR_U32(ctx, 0));
    // 0x1489cc: 0xa4800048  sh          $zero, 0x48($a0)
    ctx->pc = 0x1489ccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 72), (uint16_t)GPR_U32(ctx, 0));
    // 0x1489d0: 0xa480004a  sh          $zero, 0x4A($a0)
    ctx->pc = 0x1489d0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 74), (uint16_t)GPR_U32(ctx, 0));
    // 0x1489d4: 0xa480004c  sh          $zero, 0x4C($a0)
    ctx->pc = 0x1489d4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 76), (uint16_t)GPR_U32(ctx, 0));
    // 0x1489d8: 0xa480004e  sh          $zero, 0x4E($a0)
    ctx->pc = 0x1489d8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 78), (uint16_t)GPR_U32(ctx, 0));
    // 0x1489dc: 0xa4800050  sh          $zero, 0x50($a0)
    ctx->pc = 0x1489dcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 80), (uint16_t)GPR_U32(ctx, 0));
    // 0x1489e0: 0xa4800052  sh          $zero, 0x52($a0)
    ctx->pc = 0x1489e0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 82), (uint16_t)GPR_U32(ctx, 0));
    // 0x1489e4: 0xa4800054  sh          $zero, 0x54($a0)
    ctx->pc = 0x1489e4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 84), (uint16_t)GPR_U32(ctx, 0));
    // 0x1489e8: 0xa4800056  sh          $zero, 0x56($a0)
    ctx->pc = 0x1489e8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 86), (uint16_t)GPR_U32(ctx, 0));
    // 0x1489ec: 0xa4800058  sh          $zero, 0x58($a0)
    ctx->pc = 0x1489ecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 88), (uint16_t)GPR_U32(ctx, 0));
    // 0x1489f0: 0xa480005a  sh          $zero, 0x5A($a0)
    ctx->pc = 0x1489f0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 90), (uint16_t)GPR_U32(ctx, 0));
    // 0x1489f4: 0xa480005c  sh          $zero, 0x5C($a0)
    ctx->pc = 0x1489f4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 92), (uint16_t)GPR_U32(ctx, 0));
    // 0x1489f8: 0xa480005e  sh          $zero, 0x5E($a0)
    ctx->pc = 0x1489f8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 94), (uint16_t)GPR_U32(ctx, 0));
    // 0x1489fc: 0xa4800060  sh          $zero, 0x60($a0)
    ctx->pc = 0x1489fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 96), (uint16_t)GPR_U32(ctx, 0));
    // 0x148a00: 0xa4800062  sh          $zero, 0x62($a0)
    ctx->pc = 0x148a00u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 98), (uint16_t)GPR_U32(ctx, 0));
    // 0x148a04: 0xa4800064  sh          $zero, 0x64($a0)
    ctx->pc = 0x148a04u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 0));
    // 0x148a08: 0xa4800066  sh          $zero, 0x66($a0)
    ctx->pc = 0x148a08u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 102), (uint16_t)GPR_U32(ctx, 0));
    // 0x148a0c: 0xa4800068  sh          $zero, 0x68($a0)
    ctx->pc = 0x148a0cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 104), (uint16_t)GPR_U32(ctx, 0));
    // 0x148a10: 0xa480006a  sh          $zero, 0x6A($a0)
    ctx->pc = 0x148a10u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 106), (uint16_t)GPR_U32(ctx, 0));
    // 0x148a14: 0xa480006c  sh          $zero, 0x6C($a0)
    ctx->pc = 0x148a14u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 108), (uint16_t)GPR_U32(ctx, 0));
    // 0x148a18: 0xa480006e  sh          $zero, 0x6E($a0)
    ctx->pc = 0x148a18u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 110), (uint16_t)GPR_U32(ctx, 0));
    // 0x148a1c: 0xa4800070  sh          $zero, 0x70($a0)
    ctx->pc = 0x148a1cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 112), (uint16_t)GPR_U32(ctx, 0));
    // 0x148a20: 0xa4800072  sh          $zero, 0x72($a0)
    ctx->pc = 0x148a20u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 114), (uint16_t)GPR_U32(ctx, 0));
    // 0x148a24: 0xa4800074  sh          $zero, 0x74($a0)
    ctx->pc = 0x148a24u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 116), (uint16_t)GPR_U32(ctx, 0));
    // 0x148a28: 0xa4800076  sh          $zero, 0x76($a0)
    ctx->pc = 0x148a28u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 118), (uint16_t)GPR_U32(ctx, 0));
    // 0x148a2c: 0xa4800078  sh          $zero, 0x78($a0)
    ctx->pc = 0x148a2cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 120), (uint16_t)GPR_U32(ctx, 0));
    // 0x148a30: 0xa480007a  sh          $zero, 0x7A($a0)
    ctx->pc = 0x148a30u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 122), (uint16_t)GPR_U32(ctx, 0));
    // 0x148a34: 0xa480007c  sh          $zero, 0x7C($a0)
    ctx->pc = 0x148a34u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 124), (uint16_t)GPR_U32(ctx, 0));
    // 0x148a38: 0xa480007e  sh          $zero, 0x7E($a0)
    ctx->pc = 0x148a38u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 126), (uint16_t)GPR_U32(ctx, 0));
    // 0x148a3c: 0xa4800080  sh          $zero, 0x80($a0)
    ctx->pc = 0x148a3cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 128), (uint16_t)GPR_U32(ctx, 0));
    // 0x148a40: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x148A40u;
    {
        const bool branch_taken_0x148a40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x148A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148A40u;
        // 0x148a44: 0x24840050  addiu       $a0, $a0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148a40) {
            ctx->pc = 0x148998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_148998;
        }
    }
    ctx->pc = 0x148A48u;
    // 0x148a48: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x148a48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x148a4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x148a4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148a50: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x148a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x148a54: 0x805e46c  j           func_1791B0
    ctx->pc = 0x148A54u;
    ctx->pc = 0x148A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148A54u;
    // 0x148a58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1791B0u;
    sub_001791B0_0x1791b0(rdram, ctx, runtime); return;
    ctx->pc = 0x148A5Cu;
}
