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

// Function: sub_002ED450
// Address: 0x2ed450 - 0x2ed490
void sub_002ED450_0x2ed450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED450_0x2ed450");
#endif

    ctx->pc = 0x2ed450u;

    // 0x2ed450: 0x90880001  lbu         $t0, 0x1($a0)
    ctx->pc = 0x2ed450u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x2ed454: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2ed454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ed458: 0x90870000  lbu         $a3, 0x0($a0)
    ctx->pc = 0x2ed458u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ed45c: 0x90890002  lbu         $t1, 0x2($a0)
    ctx->pc = 0x2ed45cu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2ed460: 0x250308ee  addiu       $v1, $t0, 0x8EE
    ctx->pc = 0x2ed460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 2286));
    // 0x2ed464: 0x75080  sll         $t2, $a3, 2
    ctx->pc = 0x2ed464u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2ed468: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2ed468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2ed46c: 0x94a408ea  lhu         $a0, 0x8EA($a1)
    ctx->pc = 0x2ed46cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2282)));
    // 0x2ed470: 0x10a3821  addu        $a3, $t0, $t2
    ctx->pc = 0x2ed470u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x2ed474: 0xe63004  sllv        $a2, $a2, $a3
    ctx->pc = 0x2ed474u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 7) & 0x1F));
    // 0x2ed478: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x2ed478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x2ed47c: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x2ed47cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x2ed480: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x2ed480u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x2ed484: 0xa4a408ea  sh          $a0, 0x8EA($a1)
    ctx->pc = 0x2ed484u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2282), (uint16_t)GPR_U32(ctx, 4));
    // 0x2ed488: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED488u;
        // 0x2ed48c: 0xa0690000  sb          $t1, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ED490u;
}
