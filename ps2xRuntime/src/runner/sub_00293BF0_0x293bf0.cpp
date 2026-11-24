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

// Function: sub_00293BF0
// Address: 0x293bf0 - 0x293dfc
void sub_00293BF0_0x293bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00293BF0_0x293bf0");
#endif

    switch (ctx->pc) {
        case 0x293c08u: goto label_293c08;
        case 0x293c48u: goto label_293c48;
        case 0x293c88u: goto label_293c88;
        case 0x293d10u: goto label_293d10;
        case 0x293d50u: goto label_293d50;
        case 0x293d90u: goto label_293d90;
        case 0x293decu: goto label_293dec;
        default: break;
    }

    ctx->pc = 0x293bf0u;

    // 0x293bf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x293bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x293bf4: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x293bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x293bf8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x293bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x293bfc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x293bfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293c00: 0x248424d0  addiu       $a0, $a0, 0x24D0
    ctx->pc = 0x293c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9424));
    // 0x293c04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x293c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_293c08:
    // 0x293c08: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x293c08u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x293c0c: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x293c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x293c10: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x293c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x293c14: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x293c14u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x293c18: 0x28a20010  slti        $v0, $a1, 0x10
    ctx->pc = 0x293c18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x293c1c: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x293c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x293c20: 0xa0830004  sb          $v1, 0x4($a0)
    ctx->pc = 0x293c20u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x293c24: 0xa0830005  sb          $v1, 0x5($a0)
    ctx->pc = 0x293c24u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x293c28: 0xa0830006  sb          $v1, 0x6($a0)
    ctx->pc = 0x293c28u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x293c2c: 0xa0830007  sb          $v1, 0x7($a0)
    ctx->pc = 0x293c2cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x293c30: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x293C30u;
    {
        const bool branch_taken_0x293c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x293C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293C30u;
        // 0x293c34: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293c30) {
            ctx->pc = 0x293C08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_293c08;
        }
    }
    ctx->pc = 0x293C38u;
    // 0x293c38: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x293c38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x293c3c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x293c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x293c40: 0x248424e0  addiu       $a0, $a0, 0x24E0
    ctx->pc = 0x293c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9440));
    // 0x293c44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x293c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_293c48:
    // 0x293c48: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x293c48u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x293c4c: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x293c4cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x293c50: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x293c50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x293c54: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x293c54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x293c58: 0x28a20080  slti        $v0, $a1, 0x80
    ctx->pc = 0x293c58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x293c5c: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x293c5cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x293c60: 0xa0830004  sb          $v1, 0x4($a0)
    ctx->pc = 0x293c60u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x293c64: 0xa0830005  sb          $v1, 0x5($a0)
    ctx->pc = 0x293c64u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x293c68: 0xa0830006  sb          $v1, 0x6($a0)
    ctx->pc = 0x293c68u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x293c6c: 0xa0830007  sb          $v1, 0x7($a0)
    ctx->pc = 0x293c6cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x293c70: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x293C70u;
    {
        const bool branch_taken_0x293c70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x293C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293C70u;
        // 0x293c74: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293c70) {
            ctx->pc = 0x293C48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_293c48;
        }
    }
    ctx->pc = 0x293C78u;
    // 0x293c78: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x293c78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x293c7c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x293c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x293c80: 0x24842550  addiu       $a0, $a0, 0x2550
    ctx->pc = 0x293c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9552));
    // 0x293c84: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x293c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_293c88:
    // 0x293c88: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x293c88u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x293c8c: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x293c8cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x293c90: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x293c90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x293c94: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x293c94u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x293c98: 0x28a200a8  slti        $v0, $a1, 0xA8
    ctx->pc = 0x293c98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)168) ? 1 : 0);
    // 0x293c9c: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x293c9cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x293ca0: 0xa0830004  sb          $v1, 0x4($a0)
    ctx->pc = 0x293ca0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x293ca4: 0xa0830005  sb          $v1, 0x5($a0)
    ctx->pc = 0x293ca4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x293ca8: 0xa0830006  sb          $v1, 0x6($a0)
    ctx->pc = 0x293ca8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x293cac: 0xa0830007  sb          $v1, 0x7($a0)
    ctx->pc = 0x293cacu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x293cb0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x293CB0u;
    {
        const bool branch_taken_0x293cb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x293CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293CB0u;
        // 0x293cb4: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293cb0) {
            ctx->pc = 0x293C88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_293c88;
        }
    }
    ctx->pc = 0x293CB8u;
    // 0x293cb8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x293cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x293cbc: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x293cbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x293cc0: 0xa0222578  sb          $v0, 0x2578($at)
    ctx->pc = 0x293cc0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8D2578u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8D2578u, _value); } while (0);
    // 0x293cc4: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x293cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x293cc8: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x293cc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x293ccc: 0x240500b0  addiu       $a1, $zero, 0xB0
    ctx->pc = 0x293cccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x293cd0: 0xa0222579  sb          $v0, 0x2579($at)
    ctx->pc = 0x293cd0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8D2579u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8D2579u, _value); } while (0);
    // 0x293cd4: 0x24842580  addiu       $a0, $a0, 0x2580
    ctx->pc = 0x293cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9600));
    // 0x293cd8: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x293cd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x293cdc: 0xa022257a  sb          $v0, 0x257A($at)
    ctx->pc = 0x293cdcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8D257Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8D257Au, _value); } while (0);
    // 0x293ce0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x293ce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x293ce4: 0xa022257b  sb          $v0, 0x257B($at)
    ctx->pc = 0x293ce4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8D257Bu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8D257Bu, _value); } while (0);
    // 0x293ce8: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x293ce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x293cec: 0xa022257c  sb          $v0, 0x257C($at)
    ctx->pc = 0x293cecu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8D257Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8D257Cu, _value); } while (0);
    // 0x293cf0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x293cf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x293cf4: 0xa022257d  sb          $v0, 0x257D($at)
    ctx->pc = 0x293cf4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8D257Du, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8D257Du, _value); } while (0);
    // 0x293cf8: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x293cf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x293cfc: 0xa022257e  sb          $v0, 0x257E($at)
    ctx->pc = 0x293cfcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8D257Eu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8D257Eu, _value); } while (0);
    // 0x293d00: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x293d00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x293d04: 0xa022257f  sb          $v0, 0x257F($at)
    ctx->pc = 0x293d04u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8D257Fu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8D257Fu, _value); } while (0);
    // 0x293d08: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x293d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x293d0c: 0x0  nop
    ctx->pc = 0x293d0cu;
    // NOP
label_293d10:
    // 0x293d10: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x293d10u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x293d14: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x293d14u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x293d18: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x293d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x293d1c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x293d1cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x293d20: 0x28a200e0  slti        $v0, $a1, 0xE0
    ctx->pc = 0x293d20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)224) ? 1 : 0);
    // 0x293d24: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x293d24u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x293d28: 0xa0830004  sb          $v1, 0x4($a0)
    ctx->pc = 0x293d28u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x293d2c: 0xa0830005  sb          $v1, 0x5($a0)
    ctx->pc = 0x293d2cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x293d30: 0xa0830006  sb          $v1, 0x6($a0)
    ctx->pc = 0x293d30u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x293d34: 0xa0830007  sb          $v1, 0x7($a0)
    ctx->pc = 0x293d34u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x293d38: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x293D38u;
    {
        const bool branch_taken_0x293d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x293D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293D38u;
        // 0x293d3c: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293d38) {
            ctx->pc = 0x293D10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_293d10;
        }
    }
    ctx->pc = 0x293D40u;
    // 0x293d40: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x293d40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x293d44: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x293d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x293d48: 0x248425b0  addiu       $a0, $a0, 0x25B0
    ctx->pc = 0x293d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9648));
    // 0x293d4c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x293d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_293d50:
    // 0x293d50: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x293d50u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x293d54: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x293d54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x293d58: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x293d58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x293d5c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x293d5cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x293d60: 0x28a200f0  slti        $v0, $a1, 0xF0
    ctx->pc = 0x293d60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)240) ? 1 : 0);
    // 0x293d64: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x293d64u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x293d68: 0xa0830004  sb          $v1, 0x4($a0)
    ctx->pc = 0x293d68u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x293d6c: 0xa0830005  sb          $v1, 0x5($a0)
    ctx->pc = 0x293d6cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x293d70: 0xa0830006  sb          $v1, 0x6($a0)
    ctx->pc = 0x293d70u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x293d74: 0xa0830007  sb          $v1, 0x7($a0)
    ctx->pc = 0x293d74u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x293d78: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x293D78u;
    {
        const bool branch_taken_0x293d78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x293D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293D78u;
        // 0x293d7c: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293d78) {
            ctx->pc = 0x293D50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_293d50;
        }
    }
    ctx->pc = 0x293D80u;
    // 0x293d80: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x293d80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x293d84: 0x240500f0  addiu       $a1, $zero, 0xF0
    ctx->pc = 0x293d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x293d88: 0x248425c0  addiu       $a0, $a0, 0x25C0
    ctx->pc = 0x293d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9664));
    // 0x293d8c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x293d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_293d90:
    // 0x293d90: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x293d90u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x293d94: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x293d94u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x293d98: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x293d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x293d9c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x293d9cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x293da0: 0x28a20100  slti        $v0, $a1, 0x100
    ctx->pc = 0x293da0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x293da4: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x293da4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x293da8: 0xa0830004  sb          $v1, 0x4($a0)
    ctx->pc = 0x293da8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x293dac: 0xa0830005  sb          $v1, 0x5($a0)
    ctx->pc = 0x293dacu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x293db0: 0xa0830006  sb          $v1, 0x6($a0)
    ctx->pc = 0x293db0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x293db4: 0xa0830007  sb          $v1, 0x7($a0)
    ctx->pc = 0x293db4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x293db8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x293DB8u;
    {
        const bool branch_taken_0x293db8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x293DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293DB8u;
        // 0x293dbc: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293db8) {
            ctx->pc = 0x293D90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_293d90;
        }
    }
    ctx->pc = 0x293DC0u;
    // 0x293dc0: 0x3002ffff  andi        $v0, $zero, 0xFFFF
    ctx->pc = 0x293dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)65535);
    // 0x293dc4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x293dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x293dc8: 0xa3828958  sb          $v0, -0x76A8($gp)
    ctx->pc = 0x293dc8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936920), (uint8_t)GPR_U32(ctx, 2));
    // 0x293dcc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x293dccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293dd0: 0xa3828954  sb          $v0, -0x76AC($gp)
    ctx->pc = 0x293dd0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936916), (uint8_t)GPR_U32(ctx, 2));
    // 0x293dd4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x293dd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293dd8: 0xaf808960  sw          $zero, -0x76A0($gp)
    ctx->pc = 0x293dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936928), GPR_U32(ctx, 0));
    // 0x293ddc: 0xa780895c  sh          $zero, -0x76A4($gp)
    ctx->pc = 0x293ddcu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936924), (uint16_t)GPR_U32(ctx, 0));
    // 0x293de0: 0xa380894c  sb          $zero, -0x76B4($gp)
    ctx->pc = 0x293de0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936908), (uint8_t)GPR_U32(ctx, 0));
    // 0x293de4: 0xc09ae5c  jal         func_26B970
    ctx->pc = 0x293DE4u;
    SET_GPR_U32(ctx, 31, 0x293DECu);
    ctx->pc = 0x293DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293DE4u;
    // 0x293de8: 0xa3808950  sb          $zero, -0x76B0($gp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936912), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B970u, 0x293DE4u, 0x293DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293DECu;
label_293dec:
    // 0x293dec: 0xaf828964  sw          $v0, -0x769C($gp)
    ctx->pc = 0x293decu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936932), GPR_U32(ctx, 2));
    // 0x293df0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x293df0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x293df4: 0x3e00008  jr          $ra
    ctx->pc = 0x293DF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x293DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293DF4u;
        // 0x293df8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293DF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x293DFCu;
}
