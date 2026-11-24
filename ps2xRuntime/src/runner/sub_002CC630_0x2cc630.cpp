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

// Function: sub_002CC630
// Address: 0x2cc630 - 0x2cc6e0
void sub_002CC630_0x2cc630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CC630_0x2cc630");
#endif

    ctx->pc = 0x2cc630u;

    // 0x2cc630: 0x308800ff  andi        $t0, $a0, 0xFF
    ctx->pc = 0x2cc630u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2cc634: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x2cc634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2cc638: 0x82080  sll         $a0, $t0, 2
    ctx->pc = 0x2cc638u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x2cc63c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cc63cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cc640: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x2cc640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2cc644: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2cc644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cc648: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x2cc648u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cc64c: 0x278285f8  addiu       $v0, $gp, -0x7A08
    ctx->pc = 0x2cc64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936056));
    // 0x2cc650: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x2cc650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2cc654: 0x27828a50  addiu       $v0, $gp, -0x75B0
    ctx->pc = 0x2cc654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937168));
    // 0x2cc658: 0x483821  addu        $a3, $v0, $t0
    ctx->pc = 0x2cc658u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2cc65c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cc65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cc660: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x2cc660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x2cc664: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2cc664u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2cc668: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2cc668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2cc66c: 0x246377c0  addiu       $v1, $v1, 0x77C0
    ctx->pc = 0x2cc66cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30656));
    // 0x2cc670: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2cc670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2cc674: 0xafa4000c  sw          $a0, 0xC($sp)
    ctx->pc = 0x2cc674u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
    // 0x2cc678: 0x90e40000  lbu         $a0, 0x0($a3)
    ctx->pc = 0x2cc678u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2cc67c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2cc67cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2cc680: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x2cc680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x2cc684: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x2cc684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2cc688: 0xa0850640  sb          $a1, 0x640($a0)
    ctx->pc = 0x2cc688u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1600), (uint8_t)GPR_U32(ctx, 5));
    // 0x2cc68c: 0x90e40000  lbu         $a0, 0x0($a3)
    ctx->pc = 0x2cc68cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2cc690: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2cc690u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2cc694: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x2cc694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x2cc698: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x2cc698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2cc69c: 0xa0800641  sb          $zero, 0x641($a0)
    ctx->pc = 0x2cc69cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1601), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cc6a0: 0x90e40000  lbu         $a0, 0x0($a3)
    ctx->pc = 0x2cc6a0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2cc6a4: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x2cc6a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x2cc6a8: 0xa0e40000  sb          $a0, 0x0($a3)
    ctx->pc = 0x2cc6a8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2cc6ac: 0x90e40000  lbu         $a0, 0x0($a3)
    ctx->pc = 0x2cc6acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2cc6b0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2cc6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2cc6b4: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x2cc6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x2cc6b8: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x2cc6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2cc6bc: 0xa0820640  sb          $v0, 0x640($a0)
    ctx->pc = 0x2cc6bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1600), (uint8_t)GPR_U32(ctx, 2));
    // 0x2cc6c0: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x2cc6c0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cc6c4: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x2cc6c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2cc6c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2cc6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2cc6cc: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x2cc6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x2cc6d0: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x2cc6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2cc6d4: 0xa0640641  sb          $a0, 0x641($v1)
    ctx->pc = 0x2cc6d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1601), (uint8_t)GPR_U32(ctx, 4));
    // 0x2cc6d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC6D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC6D8u;
        // 0x2cc6dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC6D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CC6E0u;
}
