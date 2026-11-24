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

// Function: sub_00265F70
// Address: 0x265f70 - 0x266000
void sub_00265F70_0x265f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00265F70_0x265f70");
#endif

    switch (ctx->pc) {
        case 0x265fd0u: goto label_265fd0;
        case 0x265fe0u: goto label_265fe0;
        default: break;
    }

    ctx->pc = 0x265f70u;

    // 0x265f70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x265f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x265f74: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x265f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x265f78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x265f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x265f7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x265f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x265f80: 0x8f838870  lw          $v1, -0x7790($gp)
    ctx->pc = 0x265f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936688)));
    // 0x265f84: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x265F84u;
    {
        const bool branch_taken_0x265f84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x265F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265F84u;
        // 0x265f88: 0x3c02008c  lui         $v0, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)140 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265f84) {
            ctx->pc = 0x265FA0u;
            goto label_265fa0;
        }
    }
    ctx->pc = 0x265F8Cu;
    // 0x265f8c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x265f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x265f90: 0x244203ec  addiu       $v0, $v0, 0x3EC
    ctx->pc = 0x265f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1004));
    // 0x265f94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x265f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x265f98: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x265f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x265f9c: 0xaf828878  sw          $v0, -0x7788($gp)
    ctx->pc = 0x265f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936696), GPR_U32(ctx, 2));
label_265fa0:
    // 0x265fa0: 0x8f838870  lw          $v1, -0x7790($gp)
    ctx->pc = 0x265fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936688)));
    // 0x265fa4: 0x3c02008c  lui         $v0, 0x8C
    ctx->pc = 0x265fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)140 << 16));
    // 0x265fa8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x265fa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265fac: 0x244203f0  addiu       $v0, $v0, 0x3F0
    ctx->pc = 0x265facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1008));
    // 0x265fb0: 0x240600b0  addiu       $a2, $zero, 0xB0
    ctx->pc = 0x265fb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x265fb4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x265fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x265fb8: 0xaf838870  sw          $v1, -0x7790($gp)
    ctx->pc = 0x265fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936688), GPR_U32(ctx, 3));
    // 0x265fbc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x265fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x265fc0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x265fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x265fc4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x265fc4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x265fc8: 0xc049590  jal         func_125640
    ctx->pc = 0x265FC8u;
    SET_GPR_U32(ctx, 31, 0x265FD0u);
    ctx->pc = 0x265FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265FC8u;
    // 0x265fcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x265FC8u, 0x265FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265FD0u;
label_265fd0:
    // 0x265fd0: 0x3c04008c  lui         $a0, 0x8C
    ctx->pc = 0x265fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)140 << 16));
    // 0x265fd4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x265fd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265fd8: 0xc07cc04  jal         func_1F3010
    ctx->pc = 0x265FD8u;
    SET_GPR_U32(ctx, 31, 0x265FE0u);
    ctx->pc = 0x265FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265FD8u;
    // 0x265fdc: 0x2484f820  addiu       $a0, $a0, -0x7E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3010u, 0x265FD8u, 0x265FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265FE0u;
label_265fe0:
    // 0x265fe0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x265fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x265fe4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x265fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x265fe8: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x265fe8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x265fec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x265fecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265ff0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x265ff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265ff4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x265ff4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x265ff8: 0x3e00008  jr          $ra
    ctx->pc = 0x265FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x265FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265FF8u;
        // 0x265ffc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265FF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266000u;
}
