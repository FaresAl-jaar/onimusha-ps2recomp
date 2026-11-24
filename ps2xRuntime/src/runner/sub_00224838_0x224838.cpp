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

// Function: sub_00224838
// Address: 0x224838 - 0x2248ac
void sub_00224838_0x224838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224838_0x224838");
#endif

    switch (ctx->pc) {
        case 0x224860u: goto label_224860;
        case 0x224874u: goto label_224874;
        default: break;
    }

    ctx->pc = 0x224838u;

    // 0x224838: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x224838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22483c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x22483cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x224840: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x224840u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224844: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x224844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x224848: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x224848u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x22484c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x22484cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x224850: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x224850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x224854: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x224854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x224858: 0xc089168  jal         func_2245A0
    ctx->pc = 0x224858u;
    SET_GPR_U32(ctx, 31, 0x224860u);
    ctx->pc = 0x22485Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224858u;
    // 0x22485c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2245A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2245A0u, 0x224858u, 0x224860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224860u;
label_224860:
    // 0x224860: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x224860u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224864: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x224864u;
    {
        const bool branch_taken_0x224864 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x224868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224864u;
        // 0x224868: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224864) {
            ctx->pc = 0x224894u;
            goto label_224894;
        }
    }
    ctx->pc = 0x22486Cu;
    // 0x22486c: 0xc0893a6  jal         func_224E98
    ctx->pc = 0x22486Cu;
    SET_GPR_U32(ctx, 31, 0x224874u);
    ctx->pc = 0x224E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224E98u, 0x22486Cu, 0x224874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224874u;
label_224874:
    // 0x224874: 0x240300e0  addiu       $v1, $zero, 0xE0
    ctx->pc = 0x224874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x224878: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x224878u;
    {
        const bool branch_taken_0x224878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x22487Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224878u;
        // 0x22487c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224878) {
            ctx->pc = 0x224894u;
            goto label_224894;
        }
    }
    ctx->pc = 0x224880u;
    // 0x224880: 0x9623001a  lhu         $v1, 0x1A($s1)
    ctx->pc = 0x224880u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 26)));
    // 0x224884: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x224884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x224888: 0x3864ffff  xori        $a0, $v1, 0xFFFF
    ctx->pc = 0x224888u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)65535);
    // 0x22488c: 0x4180a  movz        $v1, $zero, $a0
    ctx->pc = 0x22488cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x224890: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x224890u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_224894:
    // 0x224894: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x224894u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224898: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x224898u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22489c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22489cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2248a0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2248a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2248a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2248A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2248A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2248A4u;
        // 0x2248a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2248A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2248ACu;
}
