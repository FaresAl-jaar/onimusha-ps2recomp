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

// Function: sub_00131A50
// Address: 0x131a50 - 0x131b84
void sub_00131A50_0x131a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131A50_0x131a50");
#endif

    ctx->pc = 0x131a50u;

    // 0x131a50: 0x2403022c  addiu       $v1, $zero, 0x22C
    ctx->pc = 0x131a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 556));
    // 0x131a54: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x131a54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x131a58: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x131a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x131a5c: 0xa0600094  sb          $zero, 0x94($v1)
    ctx->pc = 0x131a5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 148), (uint8_t)GPR_U32(ctx, 0));
    // 0x131a60: 0x2464004c  addiu       $a0, $v1, 0x4C
    ctx->pc = 0x131a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 76));
    // 0x131a64: 0xa4600096  sh          $zero, 0x96($v1)
    ctx->pc = 0x131a64u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 150), (uint16_t)GPR_U32(ctx, 0));
    // 0x131a68: 0x24850048  addiu       $a1, $a0, 0x48
    ctx->pc = 0x131a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    // 0x131a6c: 0xa460009a  sh          $zero, 0x9A($v1)
    ctx->pc = 0x131a6cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 154), (uint16_t)GPR_U32(ctx, 0));
    // 0x131a70: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x131a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x131a74: 0xa4600098  sh          $zero, 0x98($v1)
    ctx->pc = 0x131a74u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 152), (uint16_t)GPR_U32(ctx, 0));
    // 0x131a78: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x131a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x131a7c: 0xa060009c  sb          $zero, 0x9C($v1)
    ctx->pc = 0x131a7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 156), (uint8_t)GPR_U32(ctx, 0));
    // 0x131a80: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x131a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x131a84: 0xa460009e  sh          $zero, 0x9E($v1)
    ctx->pc = 0x131a84u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 158), (uint16_t)GPR_U32(ctx, 0));
    // 0x131a88: 0xa46000a2  sh          $zero, 0xA2($v1)
    ctx->pc = 0x131a88u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 162), (uint16_t)GPR_U32(ctx, 0));
    // 0x131a8c: 0xa46000a0  sh          $zero, 0xA0($v1)
    ctx->pc = 0x131a8cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 160), (uint16_t)GPR_U32(ctx, 0));
    // 0x131a90: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x131a90u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x131a94: 0xa4a00002  sh          $zero, 0x2($a1)
    ctx->pc = 0x131a94u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x131a98: 0xa4a00006  sh          $zero, 0x6($a1)
    ctx->pc = 0x131a98u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x131a9c: 0xa4a00004  sh          $zero, 0x4($a1)
    ctx->pc = 0x131a9cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x131aa0: 0xa0a00008  sb          $zero, 0x8($a1)
    ctx->pc = 0x131aa0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x131aa4: 0xa4a0000a  sh          $zero, 0xA($a1)
    ctx->pc = 0x131aa4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x131aa8: 0xa4a0000e  sh          $zero, 0xE($a1)
    ctx->pc = 0x131aa8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x131aac: 0xa4a0000c  sh          $zero, 0xC($a1)
    ctx->pc = 0x131aacu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x131ab0: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x131ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x131ab4: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x131ab4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x131ab8: 0xa4a00002  sh          $zero, 0x2($a1)
    ctx->pc = 0x131ab8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x131abc: 0xa4a00006  sh          $zero, 0x6($a1)
    ctx->pc = 0x131abcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x131ac0: 0xa4a00004  sh          $zero, 0x4($a1)
    ctx->pc = 0x131ac0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x131ac4: 0xa0a00008  sb          $zero, 0x8($a1)
    ctx->pc = 0x131ac4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x131ac8: 0xa4a0000a  sh          $zero, 0xA($a1)
    ctx->pc = 0x131ac8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x131acc: 0xa4a0000e  sh          $zero, 0xE($a1)
    ctx->pc = 0x131accu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x131ad0: 0xa4a0000c  sh          $zero, 0xC($a1)
    ctx->pc = 0x131ad0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x131ad4: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x131ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x131ad8: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x131ad8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x131adc: 0xa4a00002  sh          $zero, 0x2($a1)
    ctx->pc = 0x131adcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x131ae0: 0xa4a00006  sh          $zero, 0x6($a1)
    ctx->pc = 0x131ae0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x131ae4: 0xa4a00004  sh          $zero, 0x4($a1)
    ctx->pc = 0x131ae4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x131ae8: 0xa0a00008  sb          $zero, 0x8($a1)
    ctx->pc = 0x131ae8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x131aec: 0xa4a0000a  sh          $zero, 0xA($a1)
    ctx->pc = 0x131aecu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x131af0: 0xa4a0000e  sh          $zero, 0xE($a1)
    ctx->pc = 0x131af0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x131af4: 0xa4a0000c  sh          $zero, 0xC($a1)
    ctx->pc = 0x131af4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x131af8: 0xa0600054  sb          $zero, 0x54($v1)
    ctx->pc = 0x131af8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 84), (uint8_t)GPR_U32(ctx, 0));
    // 0x131afc: 0xa4600056  sh          $zero, 0x56($v1)
    ctx->pc = 0x131afcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 86), (uint16_t)GPR_U32(ctx, 0));
    // 0x131b00: 0xa460005a  sh          $zero, 0x5A($v1)
    ctx->pc = 0x131b00u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 90), (uint16_t)GPR_U32(ctx, 0));
    // 0x131b04: 0xa4600058  sh          $zero, 0x58($v1)
    ctx->pc = 0x131b04u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 88), (uint16_t)GPR_U32(ctx, 0));
    // 0x131b08: 0xa060005c  sb          $zero, 0x5C($v1)
    ctx->pc = 0x131b08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 92), (uint8_t)GPR_U32(ctx, 0));
    // 0x131b0c: 0xa460005e  sh          $zero, 0x5E($v1)
    ctx->pc = 0x131b0cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 94), (uint16_t)GPR_U32(ctx, 0));
    // 0x131b10: 0xa4600062  sh          $zero, 0x62($v1)
    ctx->pc = 0x131b10u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 98), (uint16_t)GPR_U32(ctx, 0));
    // 0x131b14: 0xa4600060  sh          $zero, 0x60($v1)
    ctx->pc = 0x131b14u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 96), (uint16_t)GPR_U32(ctx, 0));
    // 0x131b18: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x131b18u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x131b1c: 0xa4800002  sh          $zero, 0x2($a0)
    ctx->pc = 0x131b1cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x131b20: 0xa4800006  sh          $zero, 0x6($a0)
    ctx->pc = 0x131b20u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x131b24: 0xa4800004  sh          $zero, 0x4($a0)
    ctx->pc = 0x131b24u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x131b28: 0xa0800008  sb          $zero, 0x8($a0)
    ctx->pc = 0x131b28u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x131b2c: 0xa480000a  sh          $zero, 0xA($a0)
    ctx->pc = 0x131b2cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x131b30: 0xa480000e  sh          $zero, 0xE($a0)
    ctx->pc = 0x131b30u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x131b34: 0xa480000c  sh          $zero, 0xC($a0)
    ctx->pc = 0x131b34u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x131b38: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x131b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x131b3c: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x131b3cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x131b40: 0xa4800002  sh          $zero, 0x2($a0)
    ctx->pc = 0x131b40u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x131b44: 0xa4800006  sh          $zero, 0x6($a0)
    ctx->pc = 0x131b44u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x131b48: 0xa4800004  sh          $zero, 0x4($a0)
    ctx->pc = 0x131b48u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x131b4c: 0xa0800008  sb          $zero, 0x8($a0)
    ctx->pc = 0x131b4cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x131b50: 0xa480000a  sh          $zero, 0xA($a0)
    ctx->pc = 0x131b50u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x131b54: 0xa480000e  sh          $zero, 0xE($a0)
    ctx->pc = 0x131b54u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x131b58: 0xa480000c  sh          $zero, 0xC($a0)
    ctx->pc = 0x131b58u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x131b5c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x131b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x131b60: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x131b60u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x131b64: 0xa4800002  sh          $zero, 0x2($a0)
    ctx->pc = 0x131b64u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x131b68: 0xa4800006  sh          $zero, 0x6($a0)
    ctx->pc = 0x131b68u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x131b6c: 0xa4800004  sh          $zero, 0x4($a0)
    ctx->pc = 0x131b6cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x131b70: 0xa0800008  sb          $zero, 0x8($a0)
    ctx->pc = 0x131b70u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x131b74: 0xa480000a  sh          $zero, 0xA($a0)
    ctx->pc = 0x131b74u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x131b78: 0xa480000e  sh          $zero, 0xE($a0)
    ctx->pc = 0x131b78u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x131b7c: 0x3e00008  jr          $ra
    ctx->pc = 0x131B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131B7Cu;
        // 0x131b80: 0xa480000c  sh          $zero, 0xC($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131B7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131B84u;
}
