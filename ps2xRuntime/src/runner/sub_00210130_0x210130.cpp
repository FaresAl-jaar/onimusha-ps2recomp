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

// Function: sub_00210130
// Address: 0x210130 - 0x2101a0
void sub_00210130_0x210130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210130_0x210130");
#endif

    switch (ctx->pc) {
        case 0x210180u: goto label_210180;
        default: break;
    }

    ctx->pc = 0x210130u;

    // 0x210130: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x210130u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x210134: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x210134u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x210138: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x210138u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x21013c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21013cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x210140: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x210140u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x210144: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x210144u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210148: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x210148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x21014c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21014cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210150: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x210150u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x210154: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x210154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x210158: 0x26091310  addiu       $t1, $s0, 0x1310
    ctx->pc = 0x210158u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4880));
    // 0x21015c: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x21015cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210160: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x210160u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x210164: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x210164u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210168: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x210168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x21016c: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x21016cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x210170: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x210170u;
    {
        const bool branch_taken_0x210170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x210174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210170u;
        // 0x210174: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210170) {
            ctx->pc = 0x210184u;
            goto label_210184;
        }
    }
    ctx->pc = 0x210178u;
    // 0x210178: 0xc0888d6  jal         func_222358
    ctx->pc = 0x210178u;
    SET_GPR_U32(ctx, 31, 0x210180u);
    ctx->pc = 0x21017Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210178u;
    // 0x21017c: 0x8d25004c  lw          $a1, 0x4C($t1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222358u, 0x210178u, 0x210180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210180u;
label_210180:
    // 0x210180: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x210180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210184:
    // 0x210184: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x210184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x210188: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x210188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21018c: 0xae030044  sw          $v1, 0x44($s0)
    ctx->pc = 0x21018cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
    // 0x210190: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x210190u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210194: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x210194u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x210198: 0x3e00008  jr          $ra
    ctx->pc = 0x210198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21019Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210198u;
        // 0x21019c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2101A0u;
}
