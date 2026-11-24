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

// Function: sub_00230290
// Address: 0x230290 - 0x230330
void sub_00230290_0x230290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230290_0x230290");
#endif

    switch (ctx->pc) {
        case 0x2302c4u: goto label_2302c4;
        case 0x2302ccu: goto label_2302cc;
        case 0x2302e8u: goto label_2302e8;
        case 0x2302fcu: goto label_2302fc;
        case 0x230314u: goto label_230314;
        default: break;
    }

    ctx->pc = 0x230290u;

    // 0x230290: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x230290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x230294: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x230294u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x230298: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x230298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23029c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x23029cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2302a0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2302a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2302a4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2302a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2302a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2302a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2302ac: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2302acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2302b0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2302b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2302b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2302b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2302b8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2302b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2302bc: 0xc08bbbc  jal         func_22EEF0
    ctx->pc = 0x2302BCu;
    SET_GPR_U32(ctx, 31, 0x2302C4u);
    ctx->pc = 0x2302C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2302BCu;
    // 0x2302c0: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EEF0u, 0x2302BCu, 0x2302C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2302C4u;
label_2302c4:
    // 0x2302c4: 0xc08c040  jal         func_230100
    ctx->pc = 0x2302C4u;
    SET_GPR_U32(ctx, 31, 0x2302CCu);
    ctx->pc = 0x230100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230100u, 0x2302C4u, 0x2302CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2302CCu;
label_2302cc:
    // 0x2302cc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2302ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2302d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2302d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2302d4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2302d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2302d8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2302D8u;
    {
        const bool branch_taken_0x2302d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2302DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2302D8u;
        // 0x2302dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2302d8) {
            ctx->pc = 0x2302FCu;
            goto label_2302fc;
        }
    }
    ctx->pc = 0x2302E0u;
    // 0x2302e0: 0xc08c066  jal         func_230198
    ctx->pc = 0x2302E0u;
    SET_GPR_U32(ctx, 31, 0x2302E8u);
    ctx->pc = 0x230198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230198u, 0x2302E0u, 0x2302E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2302E8u;
label_2302e8:
    // 0x2302e8: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2302E8u;
    {
        const bool branch_taken_0x2302e8 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x2302ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2302E8u;
        // 0x2302ec: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2302e8) {
            ctx->pc = 0x230300u;
            goto label_230300;
        }
    }
    ctx->pc = 0x2302F0u;
    // 0x2302f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2302f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2302f4: 0xc08c1ce  jal         func_230738
    ctx->pc = 0x2302F4u;
    SET_GPR_U32(ctx, 31, 0x2302FCu);
    ctx->pc = 0x2302F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2302F4u;
    // 0x2302f8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230738u, 0x2302F4u, 0x2302FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2302FCu;
label_2302fc:
    // 0x2302fc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2302fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_230300:
    // 0x230300: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x230300u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230304: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x230304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x230308: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x230308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23030c: 0xc08bbbc  jal         func_22EEF0
    ctx->pc = 0x23030Cu;
    SET_GPR_U32(ctx, 31, 0x230314u);
    ctx->pc = 0x230310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23030Cu;
    // 0x230310: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EEF0u, 0x23030Cu, 0x230314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230314u;
label_230314:
    // 0x230314: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x230314u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230318: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x230318u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23031c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23031cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x230320: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x230320u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x230324: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x230324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230328: 0x3e00008  jr          $ra
    ctx->pc = 0x230328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23032Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230328u;
        // 0x23032c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230330u;
}
