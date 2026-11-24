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

// Function: sub_002B4220
// Address: 0x2b4220 - 0x2b42a4
void sub_002B4220_0x2b4220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B4220_0x2b4220");
#endif

    switch (ctx->pc) {
        case 0x2b4244u: goto label_2b4244;
        case 0x2b425cu: goto label_2b425c;
        case 0x2b4274u: goto label_2b4274;
        default: break;
    }

    ctx->pc = 0x2b4220u;

    // 0x2b4220: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b4220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b4224: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2b4224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2b4228: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b4228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2b422c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b422cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b4230: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b4230u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4234: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b4234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b4238: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2b4238u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2b423c: 0xc0ad0bc  jal         func_2B42F0
    ctx->pc = 0x2B423Cu;
    SET_GPR_U32(ctx, 31, 0x2B4244u);
    ctx->pc = 0x2B4240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B423Cu;
    // 0x2b4240: 0x24845a80  addiu       $a0, $a0, 0x5A80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B42F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B42F0u, 0x2B423Cu, 0x2B4244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4244u;
label_2b4244:
    // 0x2b4244: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b4244u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4248: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x2B4248u;
    {
        const bool branch_taken_0x2b4248 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B424Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4248u;
        // 0x2b424c: 0x3c04008d  lui         $a0, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4248) {
            ctx->pc = 0x2B4288u;
            goto label_2b4288;
        }
    }
    ctx->pc = 0x2B4250u;
    // 0x2b4250: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b4250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4254: 0xc0ad02c  jal         func_2B40B0
    ctx->pc = 0x2B4254u;
    SET_GPR_U32(ctx, 31, 0x2B425Cu);
    ctx->pc = 0x2B4258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4254u;
    // 0x2b4258: 0x24845a80  addiu       $a0, $a0, 0x5A80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B40B0u, 0x2B4254u, 0x2B425Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B425Cu;
label_2b425c:
    // 0x2b425c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2b425cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2b4260: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B4260u;
    {
        const bool branch_taken_0x2b4260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B4264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4260u;
        // 0x2b4264: 0x3c04008d  lui         $a0, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4260) {
            ctx->pc = 0x2B4280u;
            goto label_2b4280;
        }
    }
    ctx->pc = 0x2B4268u;
    // 0x2b4268: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b4268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b426c: 0xc0ad0ec  jal         func_2B43B0
    ctx->pc = 0x2B426Cu;
    SET_GPR_U32(ctx, 31, 0x2B4274u);
    ctx->pc = 0x2B4270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B426Cu;
    // 0x2b4270: 0x24845a80  addiu       $a0, $a0, 0x5A80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B43B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B43B0u, 0x2B426Cu, 0x2B4274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4274u;
label_2b4274:
    // 0x2b4274: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2B4274u;
    {
        const bool branch_taken_0x2b4274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4274u;
        // 0x2b4278: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4274) {
            ctx->pc = 0x2B4290u;
            goto label_2b4290;
        }
    }
    ctx->pc = 0x2B427Cu;
    // 0x2b427c: 0x0  nop
    ctx->pc = 0x2b427cu;
    // NOP
label_2b4280:
    // 0x2b4280: 0xae110018  sw          $s1, 0x18($s0)
    ctx->pc = 0x2b4280u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 17));
    // 0x2b4284: 0x0  nop
    ctx->pc = 0x2b4284u;
    // NOP
label_2b4288:
    // 0x2b4288: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2b4288u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b428c: 0x0  nop
    ctx->pc = 0x2b428cu;
    // NOP
label_2b4290:
    // 0x2b4290: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b4290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b4294: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b4294u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b4298: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b4298u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b429c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B429Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B42A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B429Cu;
        // 0x2b42a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B429Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B42A4u;
}
