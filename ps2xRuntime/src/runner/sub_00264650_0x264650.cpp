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

// Function: sub_00264650
// Address: 0x264650 - 0x264734
void sub_00264650_0x264650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00264650_0x264650");
#endif

    ctx->pc = 0x264650u;

    // 0x264650: 0x3c01008c  lui         $at, 0x8C
    ctx->pc = 0x264650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)140 << 16));
    // 0x264654: 0xa7808858  sh          $zero, -0x77A8($gp)
    ctx->pc = 0x264654u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936664), (uint16_t)GPR_U32(ctx, 0));
    // 0x264658: 0xac20f740  sw          $zero, -0x8C0($at)
    ctx->pc = 0x264658u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8BF740u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8BF740u, _value); } while (0);
    // 0x26465c: 0x3c01008c  lui         $at, 0x8C
    ctx->pc = 0x26465cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)140 << 16));
    // 0x264660: 0xaf808860  sw          $zero, -0x77A0($gp)
    ctx->pc = 0x264660u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936672), GPR_U32(ctx, 0));
    // 0x264664: 0xac20f744  sw          $zero, -0x8BC($at)
    ctx->pc = 0x264664u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8BF744u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8BF744u, _value); } while (0);
    // 0x264668: 0x3c01008c  lui         $at, 0x8C
    ctx->pc = 0x264668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)140 << 16));
    // 0x26466c: 0xa3808864  sb          $zero, -0x779C($gp)
    ctx->pc = 0x26466cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936676), (uint8_t)GPR_U32(ctx, 0));
    // 0x264670: 0xa420f748  sh          $zero, -0x8B8($at)
    ctx->pc = 0x264670u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8BF748u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x8BF748u, _value); } while (0);
    // 0x264674: 0x3c01008c  lui         $at, 0x8C
    ctx->pc = 0x264674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)140 << 16));
    // 0x264678: 0xa020f74b  sb          $zero, -0x8B5($at)
    ctx->pc = 0x264678u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8BF74Bu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8BF74Bu, _value); } while (0);
    // 0x26467c: 0x3c01008c  lui         $at, 0x8C
    ctx->pc = 0x26467cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)140 << 16));
    // 0x264680: 0xa020f74a  sb          $zero, -0x8B6($at)
    ctx->pc = 0x264680u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8BF74Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8BF74Au, _value); } while (0);
    // 0x264684: 0x3c01008c  lui         $at, 0x8C
    ctx->pc = 0x264684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)140 << 16));
    // 0x264688: 0xa020f763  sb          $zero, -0x89D($at)
    ctx->pc = 0x264688u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8BF763u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8BF763u, _value); } while (0);
    // 0x26468c: 0x3c01008c  lui         $at, 0x8C
    ctx->pc = 0x26468cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)140 << 16));
    // 0x264690: 0xa020f762  sb          $zero, -0x89E($at)
    ctx->pc = 0x264690u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8BF762u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8BF762u, _value); } while (0);
    // 0x264694: 0x3c01008c  lui         $at, 0x8C
    ctx->pc = 0x264694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)140 << 16));
    // 0x264698: 0xfc20f750  sd          $zero, -0x8B0($at)
    ctx->pc = 0x264698u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8BF750u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x8BF750u, _value); } while (0);
    // 0x26469c: 0x3c01008c  lui         $at, 0x8C
    ctx->pc = 0x26469cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)140 << 16));
    // 0x2646a0: 0xac20f768  sw          $zero, -0x898($at)
    ctx->pc = 0x2646a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8BF768u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8BF768u, _value); } while (0);
    // 0x2646a4: 0x3c01008c  lui         $at, 0x8C
    ctx->pc = 0x2646a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)140 << 16));
    // 0x2646a8: 0xac20f76c  sw          $zero, -0x894($at)
    ctx->pc = 0x2646a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8BF76Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8BF76Cu, _value); } while (0);
    // 0x2646ac: 0x3c01008c  lui         $at, 0x8C
    ctx->pc = 0x2646acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)140 << 16));
    // 0x2646b0: 0xa420f770  sh          $zero, -0x890($at)
    ctx->pc = 0x2646b0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8BF770u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x8BF770u, _value); } while (0);
    // 0x2646b4: 0x3c01008c  lui         $at, 0x8C
    ctx->pc = 0x2646b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)140 << 16));
    // 0x2646b8: 0xa020f773  sb          $zero, -0x88D($at)
    ctx->pc = 0x2646b8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8BF773u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8BF773u, _value); } while (0);
    // 0x2646bc: 0x3c01008c  lui         $at, 0x8C
    ctx->pc = 0x2646bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)140 << 16));
    // 0x2646c0: 0xa020f772  sb          $zero, -0x88E($at)
    ctx->pc = 0x2646c0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8BF772u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8BF772u, _value); } while (0);
    // 0x2646c4: 0x3c01008c  lui         $at, 0x8C
    ctx->pc = 0x2646c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)140 << 16));
    // 0x2646c8: 0xa020f78b  sb          $zero, -0x875($at)
    ctx->pc = 0x2646c8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8BF78Bu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8BF78Bu, _value); } while (0);
    // 0x2646cc: 0x3c01008c  lui         $at, 0x8C
    ctx->pc = 0x2646ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)140 << 16));
    // 0x2646d0: 0xa020f78a  sb          $zero, -0x876($at)
    ctx->pc = 0x2646d0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8BF78Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8BF78Au, _value); } while (0);
    // 0x2646d4: 0x3c01008c  lui         $at, 0x8C
    ctx->pc = 0x2646d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)140 << 16));
    // 0x2646d8: 0xfc20f778  sd          $zero, -0x888($at)
    ctx->pc = 0x2646d8u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8BF778u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x8BF778u, _value); } while (0);
    // 0x2646dc: 0x3c01008c  lui         $at, 0x8C
    ctx->pc = 0x2646dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)140 << 16));
    // 0x2646e0: 0xac20f790  sw          $zero, -0x870($at)
    ctx->pc = 0x2646e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8BF790u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8BF790u, _value); } while (0);
    // 0x2646e4: 0x3c01008c  lui         $at, 0x8C
    ctx->pc = 0x2646e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)140 << 16));
    // 0x2646e8: 0xac20f794  sw          $zero, -0x86C($at)
    ctx->pc = 0x2646e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8BF794u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8BF794u, _value); } while (0);
    // 0x2646ec: 0x3c01008c  lui         $at, 0x8C
    ctx->pc = 0x2646ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)140 << 16));
    // 0x2646f0: 0xa420f798  sh          $zero, -0x868($at)
    ctx->pc = 0x2646f0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8BF798u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x8BF798u, _value); } while (0);
    // 0x2646f4: 0x3c01008c  lui         $at, 0x8C
    ctx->pc = 0x2646f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)140 << 16));
    // 0x2646f8: 0xa020f79b  sb          $zero, -0x865($at)
    ctx->pc = 0x2646f8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8BF79Bu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8BF79Bu, _value); } while (0);
    // 0x2646fc: 0x3c01008c  lui         $at, 0x8C
    ctx->pc = 0x2646fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)140 << 16));
    // 0x264700: 0xa020f79a  sb          $zero, -0x866($at)
    ctx->pc = 0x264700u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8BF79Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8BF79Au, _value); } while (0);
    // 0x264704: 0x3c01008c  lui         $at, 0x8C
    ctx->pc = 0x264704u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)140 << 16));
    // 0x264708: 0xa020f7b3  sb          $zero, -0x84D($at)
    ctx->pc = 0x264708u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8BF7B3u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8BF7B3u, _value); } while (0);
    // 0x26470c: 0x3c01008c  lui         $at, 0x8C
    ctx->pc = 0x26470cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)140 << 16));
    // 0x264710: 0xa020f7b2  sb          $zero, -0x84E($at)
    ctx->pc = 0x264710u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8BF7B2u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8BF7B2u, _value); } while (0);
    // 0x264714: 0x3c01008c  lui         $at, 0x8C
    ctx->pc = 0x264714u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)140 << 16));
    // 0x264718: 0xfc20f7a0  sd          $zero, -0x860($at)
    ctx->pc = 0x264718u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8BF7A0u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x8BF7A0u, _value); } while (0);
    // 0x26471c: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x26471cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x264720: 0x84236cc2  lh          $v1, 0x6CC2($at)
    ctx->pc = 0x264720u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x696CC2u));
    // 0x264724: 0x24631800  addiu       $v1, $v1, 0x1800
    ctx->pc = 0x264724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6144));
    // 0x264728: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x264728u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x26472c: 0x3e00008  jr          $ra
    ctx->pc = 0x26472Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26472Cu;
        // 0x264730: 0xa783885c  sh          $v1, -0x77A4($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294936668), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26472Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264734u;
}
