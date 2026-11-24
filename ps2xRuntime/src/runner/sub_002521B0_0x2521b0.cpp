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

// Function: sub_002521B0
// Address: 0x2521b0 - 0x252244
void sub_002521B0_0x2521b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002521B0_0x2521b0");
#endif

    ctx->pc = 0x2521b0u;

    // 0x2521b0: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x2521b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x2521b4: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x2521b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x2521b8: 0x2463f9b8  addiu       $v1, $v1, -0x648
    ctx->pc = 0x2521b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965688));
    // 0x2521bc: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x2521bcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x2521c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2521c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2521c4: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x2521c4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2521c8: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x2521c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x2521cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2521ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2521d0: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x2521d0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x2521d4: 0xa0a60006  sb          $a2, 0x6($a1)
    ctx->pc = 0x2521d4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 6));
    // 0x2521d8: 0x3086000f  andi        $a2, $a0, 0xF
    ctx->pc = 0x2521d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x2521dc: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x2521dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2521e0: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x2521e0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x2521e4: 0x90470000  lbu         $a3, 0x0($v0)
    ctx->pc = 0x2521e4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2521e8: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x2521e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x2521ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2521ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2521f0: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x2521f0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x2521f4: 0xa0a70005  sb          $a3, 0x5($a1)
    ctx->pc = 0x2521f4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 7));
    // 0x2521f8: 0x3088000f  andi        $t0, $a0, 0xF
    ctx->pc = 0x2521f8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x2521fc: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x2521fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x252200: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x252200u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x252204: 0x90c90000  lbu         $t1, 0x0($a2)
    ctx->pc = 0x252204u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x252208: 0x3087000f  andi        $a3, $a0, 0xF
    ctx->pc = 0x252208u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x25220c: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x25220cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x252210: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x252210u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x252214: 0xa0a90004  sb          $t1, 0x4($a1)
    ctx->pc = 0x252214u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4), (uint8_t)GPR_U32(ctx, 9));
    // 0x252218: 0x3084000f  andi        $a0, $a0, 0xF
    ctx->pc = 0x252218u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x25221c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x25221cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x252220: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x252220u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x252224: 0xa0a60003  sb          $a2, 0x3($a1)
    ctx->pc = 0x252224u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 6));
    // 0x252228: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x252228u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x25222c: 0xa0a20002  sb          $v0, 0x2($a1)
    ctx->pc = 0x25222cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x252230: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x252230u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x252234: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x252234u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x252238: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x252238u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25223c: 0x3e00008  jr          $ra
    ctx->pc = 0x25223Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25223Cu;
        // 0x252240: 0xa0a20000  sb          $v0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25223Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x252244u;
}
