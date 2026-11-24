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

// Function: sub_0020E878
// Address: 0x20e878 - 0x20e8cc
void sub_0020E878_0x20e878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020E878_0x20e878");
#endif

    switch (ctx->pc) {
        case 0x20e878u: goto label_20e878;
        case 0x20e87cu: goto label_20e87c;
        case 0x20e880u: goto label_20e880;
        case 0x20e884u: goto label_20e884;
        case 0x20e888u: goto label_20e888;
        case 0x20e88cu: goto label_20e88c;
        case 0x20e890u: goto label_20e890;
        case 0x20e894u: goto label_20e894;
        case 0x20e898u: goto label_20e898;
        case 0x20e89cu: goto label_20e89c;
        case 0x20e8a0u: goto label_20e8a0;
        case 0x20e8a4u: goto label_20e8a4;
        case 0x20e8a8u: goto label_20e8a8;
        case 0x20e8acu: goto label_20e8ac;
        case 0x20e8b0u: goto label_20e8b0;
        case 0x20e8b4u: goto label_20e8b4;
        case 0x20e8b8u: goto label_20e8b8;
        case 0x20e8bcu: goto label_20e8bc;
        case 0x20e8c0u: goto label_20e8c0;
        case 0x20e8c4u: goto label_20e8c4;
        case 0x20e8c8u: goto label_20e8c8;
        default: break;
    }

    ctx->pc = 0x20e878u;

label_20e878:
    // 0x20e878: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20e878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_20e87c:
    // 0x20e87c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20e87cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_20e880:
    // 0x20e880: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x20e880u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20e884:
    // 0x20e884: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x20e884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_20e888:
    // 0x20e888: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20e888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_20e88c:
    // 0x20e88c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20e88cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_20e890:
    // 0x20e890: 0xc087ed0  jal         func_21FB40
label_20e894:
    if (ctx->pc == 0x20E894u) {
        ctx->pc = 0x20E894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E890u;
        // 0x20e894: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E898u;
        goto label_20e898;
    }
    ctx->pc = 0x20E890u;
    SET_GPR_U32(ctx, 31, 0x20E898u);
    ctx->pc = 0x20E894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E890u;
    // 0x20e894: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x20E890u, 0x20E898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E898u;
label_20e898:
    // 0x20e898: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_20e89c:
    if (ctx->pc == 0x20E89Cu) {
        ctx->pc = 0x20E89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E898u;
        // 0x20e89c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E8A0u;
        goto label_20e8a0;
    }
    ctx->pc = 0x20E898u;
    {
        const bool branch_taken_0x20e898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e898) {
            ctx->pc = 0x20E89Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E898u;
            // 0x20e89c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E8BCu;
            goto label_20e8bc;
        }
    }
    ctx->pc = 0x20E8A0u;
label_20e8a0:
    // 0x20e8a0: 0x8e022114  lw          $v0, 0x2114($s0)
    ctx->pc = 0x20e8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8468)));
label_20e8a4:
    // 0x20e8a4: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x20e8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_20e8a8:
    // 0x20e8a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_20e8ac:
    if (ctx->pc == 0x20E8ACu) {
        ctx->pc = 0x20E8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E8A8u;
        // 0x20e8ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E8B0u;
        goto label_20e8b0;
    }
    ctx->pc = 0x20E8A8u;
    {
        const bool branch_taken_0x20e8a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E8A8u;
        // 0x20e8ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e8a8) {
            ctx->pc = 0x20E8B8u;
            goto label_20e8b8;
        }
    }
    ctx->pc = 0x20E8B0u;
label_20e8b0:
    // 0x20e8b0: 0x40f809  jalr        $v0
label_20e8b4:
    if (ctx->pc == 0x20E8B4u) {
        ctx->pc = 0x20E8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E8B0u;
        // 0x20e8b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E8B8u;
        goto label_20e8b8;
    }
    ctx->pc = 0x20E8B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20E8B8u);
        ctx->pc = 0x20E8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E8B0u;
        // 0x20e8b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E8B0u, 0x20E8B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20E8B8u;
label_20e8b8:
    // 0x20e8b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20e8b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20e8bc:
    // 0x20e8bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20e8bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_20e8c0:
    // 0x20e8c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20e8c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20e8c4:
    // 0x20e8c4: 0x3e00008  jr          $ra
label_20e8c8:
    if (ctx->pc == 0x20E8C8u) {
        ctx->pc = 0x20E8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E8C4u;
        // 0x20e8c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E8CCu;
        goto label_fallthrough_0x20e8c4;
    }
    ctx->pc = 0x20E8C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E8C4u;
        // 0x20e8c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E8C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20e8c4:
    ctx->pc = 0x20E8CCu;
}
