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

// Function: sub_002A5240
// Address: 0x2a5240 - 0x2a52d4
void sub_002A5240_0x2a5240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A5240_0x2a5240");
#endif

    switch (ctx->pc) {
        case 0x2a5290u: goto label_2a5290;
        case 0x2a52bcu: goto label_2a52bc;
        default: break;
    }

    ctx->pc = 0x2a5240u;

    // 0x2a5240: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a5240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2a5244: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x2a5244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x2a5248: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2a5248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2a524c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a524cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5250: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2a5250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2a5254: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2a5254u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5258: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2a5258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2a525c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2a525cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5260: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2a5260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2a5264: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2a5264u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5268: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2a5268u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a526c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2a526cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2a5270: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x2a5270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x2a5274: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a5274u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5278: 0x3445000d  ori         $a1, $v0, 0xD
    ctx->pc = 0x2a5278u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    // 0x2a527c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2a527cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5280: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a5280u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5284: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2a5284u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5288: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x2A5288u;
    SET_GPR_U32(ctx, 31, 0x2A5290u);
    ctx->pc = 0x2A528Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5288u;
    // 0x2a528c: 0xffb10000  sd          $s1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x2A5288u, 0x2A5290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5290u;
label_2a5290:
    // 0x2a5290: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2a5290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x2a5294: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a5294u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a5298: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2a5298u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a529c: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2a529cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a52a0: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x2a52a0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a52a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a52a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a52a8: 0xffa80008  sd          $t0, 0x8($sp)
    ctx->pc = 0x2a52a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 8));
    // 0x2a52ac: 0x24054dc0  addiu       $a1, $zero, 0x4DC0
    ctx->pc = 0x2a52acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19904));
    // 0x2a52b0: 0x240600d4  addiu       $a2, $zero, 0xD4
    ctx->pc = 0x2a52b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
    // 0x2a52b4: 0xc0f8304  jal         func_3E0C10
    ctx->pc = 0x2A52B4u;
    SET_GPR_U32(ctx, 31, 0x2A52BCu);
    ctx->pc = 0x2A52B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A52B4u;
    // 0x2a52b8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E0C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E0C10u, 0x2A52B4u, 0x2A52BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A52BCu;
label_2a52bc:
    // 0x2a52bc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2a52bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a52c0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2a52c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a52c4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2a52c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a52c8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2a52c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a52cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2A52CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A52D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A52CCu;
        // 0x2a52d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A52CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A52D4u;
}
