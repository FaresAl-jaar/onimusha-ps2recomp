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

// Function: sub_001191F8
// Address: 0x1191f8 - 0x119244
void sub_001191F8_0x1191f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001191F8_0x1191f8");
#endif

    ctx->pc = 0x1191f8u;

    // 0x1191f8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1191f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1191fc: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x1191fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x119200: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x119200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x119204: 0x9c620000  lwu         $v0, 0x0($v1)
    ctx->pc = 0x119204u;
    SET_GPR_ZE32(ctx, 2, runtime->Load32(rdram, ctx, 0x10001000u));
    // 0x119208: 0x8c680010  lw          $t0, 0x10($v1)
    ctx->pc = 0x119208u;
    SET_GPR_S32(ctx, 8, (int32_t)runtime->Load32(rdram, ctx, 0x10001010u)); // MMIO: 0x10001010
    // 0x11920c: 0xdc8a4148  ld          $t2, 0x4148($a0)
    ctx->pc = 0x11920cu;
    SET_GPR_U64(ctx, 10, FAST_READ64(0x404148u));
    // 0x119210: 0x31090800  andi        $t1, $t0, 0x800
    ctx->pc = 0x119210u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2048);
    // 0x119214: 0x11200003  beqz        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x119214u;
    {
        const bool branch_taken_0x119214 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x119218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119214u;
        // 0x119218: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119214) {
            ctx->pc = 0x119224u;
            goto label_119224;
        }
    }
    ctx->pc = 0x11921Cu;
    // 0x11921c: 0x9c620000  lwu         $v0, 0x0($v1)
    ctx->pc = 0x11921cu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x119220: 0x654a0001  daddiu      $t2, $t2, 0x1
    ctx->pc = 0x119220u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
label_119224:
    // 0x119224: 0x31080003  andi        $t0, $t0, 0x3
    ctx->pc = 0x119224u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
    // 0x119228: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x119228u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x11922c: 0x8480a  movz        $t1, $zero, $t0
    ctx->pc = 0x11922cu;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
    // 0x119230: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x119230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x119234: 0x1094814  dsllv       $t1, $t1, $t0
    ctx->pc = 0x119234u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (GPR_U32(ctx, 8) & 0x3F));
    // 0x119238: 0x1221014  dsllv       $v0, $v0, $t1
    ctx->pc = 0x119238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 9) & 0x3F));
    // 0x11923c: 0x3e00008  jr          $ra
    ctx->pc = 0x11923Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11923Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119244u;
}
