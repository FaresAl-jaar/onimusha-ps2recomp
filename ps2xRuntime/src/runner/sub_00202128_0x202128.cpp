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

// Function: sub_00202128
// Address: 0x202128 - 0x202174
void sub_00202128_0x202128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202128_0x202128");
#endif

    ctx->pc = 0x202128u;

    // 0x202128: 0x8c8a0008  lw          $t2, 0x8($a0)
    ctx->pc = 0x202128u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x20212c: 0x8c8b000c  lw          $t3, 0xC($a0)
    ctx->pc = 0x20212cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x202130: 0xa1fc2  srl         $v1, $t2, 31
    ctx->pc = 0x202130u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
    // 0x202134: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x202134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x202138: 0xb27c2  srl         $a0, $t3, 31
    ctx->pc = 0x202138u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 11), 31));
    // 0x20213c: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x20213cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x202140: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x202140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x202144: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x202144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x202148: 0x2463003e  addiu       $v1, $v1, 0x3E
    ctx->pc = 0x202148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 62));
    // 0x20214c: 0x28490000  slti        $t1, $v0, 0x0
    ctx->pc = 0x20214cu;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x202150: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x202150u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x202154: 0x69100b  movn        $v0, $v1, $t1
    ctx->pc = 0x202154u;
    if (GPR_U64(ctx, 9) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x202158: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x202158u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x20215c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x20215cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x202160: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x202160u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x202164: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x202164u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x202168: 0xacaa0000  sw          $t2, 0x0($a1)
    ctx->pc = 0x202168u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 10));
    // 0x20216c: 0x3e00008  jr          $ra
    ctx->pc = 0x20216Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20216Cu;
        // 0x202170: 0xaccb0000  sw          $t3, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20216Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202174u;
}
