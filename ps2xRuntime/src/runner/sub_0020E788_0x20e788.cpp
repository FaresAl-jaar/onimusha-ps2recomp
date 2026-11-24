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

// Function: sub_0020E788
// Address: 0x20e788 - 0x20e804
void sub_0020E788_0x20e788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020E788_0x20e788");
#endif

    switch (ctx->pc) {
        case 0x20e788u: goto label_20e788;
        case 0x20e78cu: goto label_20e78c;
        case 0x20e790u: goto label_20e790;
        case 0x20e794u: goto label_20e794;
        case 0x20e798u: goto label_20e798;
        case 0x20e79cu: goto label_20e79c;
        case 0x20e7a0u: goto label_20e7a0;
        case 0x20e7a4u: goto label_20e7a4;
        case 0x20e7a8u: goto label_20e7a8;
        case 0x20e7acu: goto label_20e7ac;
        case 0x20e7b0u: goto label_20e7b0;
        case 0x20e7b4u: goto label_20e7b4;
        case 0x20e7b8u: goto label_20e7b8;
        case 0x20e7bcu: goto label_20e7bc;
        case 0x20e7c0u: goto label_20e7c0;
        case 0x20e7c4u: goto label_20e7c4;
        case 0x20e7c8u: goto label_20e7c8;
        case 0x20e7ccu: goto label_20e7cc;
        case 0x20e7d0u: goto label_20e7d0;
        case 0x20e7d4u: goto label_20e7d4;
        case 0x20e7d8u: goto label_20e7d8;
        case 0x20e7dcu: goto label_20e7dc;
        case 0x20e7e0u: goto label_20e7e0;
        case 0x20e7e4u: goto label_20e7e4;
        case 0x20e7e8u: goto label_20e7e8;
        case 0x20e7ecu: goto label_20e7ec;
        case 0x20e7f0u: goto label_20e7f0;
        case 0x20e7f4u: goto label_20e7f4;
        case 0x20e7f8u: goto label_20e7f8;
        case 0x20e7fcu: goto label_20e7fc;
        case 0x20e800u: goto label_20e800;
        default: break;
    }

    ctx->pc = 0x20e788u;

label_20e788:
    // 0x20e788: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20e788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_20e78c:
    // 0x20e78c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20e78cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_20e790:
    // 0x20e790: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20e790u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20e794:
    // 0x20e794: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20e794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_20e798:
    // 0x20e798: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20e798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_20e79c:
    // 0x20e79c: 0xc084968  jal         func_2125A0
label_20e7a0:
    if (ctx->pc == 0x20E7A0u) {
        ctx->pc = 0x20E7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E79Cu;
        // 0x20e7a0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E7A4u;
        goto label_20e7a4;
    }
    ctx->pc = 0x20E79Cu;
    SET_GPR_U32(ctx, 31, 0x20E7A4u);
    ctx->pc = 0x20E7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E79Cu;
    // 0x20e7a0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2125A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125A0u, 0x20E79Cu, 0x20E7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E7A4u;
label_20e7a4:
    // 0x20e7a4: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x20e7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
label_20e7a8:
    // 0x20e7a8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_20e7ac:
    if (ctx->pc == 0x20E7ACu) {
        ctx->pc = 0x20E7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E7A8u;
        // 0x20e7ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E7B0u;
        goto label_20e7b0;
    }
    ctx->pc = 0x20E7A8u;
    {
        const bool branch_taken_0x20e7a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E7A8u;
        // 0x20e7ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e7a8) {
            ctx->pc = 0x20E7C8u;
            goto label_20e7c8;
        }
    }
    ctx->pc = 0x20E7B0u;
label_20e7b0:
    // 0x20e7b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20e7b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20e7b4:
    // 0x20e7b4: 0x34a501a3  ori         $a1, $a1, 0x1A3
    ctx->pc = 0x20e7b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)419);
label_20e7b8:
    // 0x20e7b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20e7b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_20e7bc:
    // 0x20e7bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20e7bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20e7c0:
    // 0x20e7c0: 0x80848e0  j           func_212380
label_20e7c4:
    if (ctx->pc == 0x20E7C4u) {
        ctx->pc = 0x20E7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E7C0u;
        // 0x20e7c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E7C8u;
        goto label_20e7c8;
    }
    ctx->pc = 0x20E7C0u;
    ctx->pc = 0x20E7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E7C0u;
    // 0x20e7c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x20E7C8u;
label_20e7c8:
    // 0x20e7c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20e7c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20e7cc:
    // 0x20e7cc: 0xc087ed0  jal         func_21FB40
label_20e7d0:
    if (ctx->pc == 0x20E7D0u) {
        ctx->pc = 0x20E7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E7CCu;
        // 0x20e7d0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E7D4u;
        goto label_20e7d4;
    }
    ctx->pc = 0x20E7CCu;
    SET_GPR_U32(ctx, 31, 0x20E7D4u);
    ctx->pc = 0x20E7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E7CCu;
    // 0x20e7d0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x20E7CCu, 0x20E7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E7D4u;
label_20e7d4:
    // 0x20e7d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20e7d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20e7d8:
    // 0x20e7d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_20e7dc:
    if (ctx->pc == 0x20E7DCu) {
        ctx->pc = 0x20E7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E7D8u;
        // 0x20e7dc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E7E0u;
        goto label_20e7e0;
    }
    ctx->pc = 0x20E7D8u;
    {
        const bool branch_taken_0x20e7d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E7D8u;
        // 0x20e7dc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e7d8) {
            ctx->pc = 0x20E7F0u;
            goto label_20e7f0;
        }
    }
    ctx->pc = 0x20E7E0u;
label_20e7e0:
    // 0x20e7e0: 0x8e022114  lw          $v0, 0x2114($s0)
    ctx->pc = 0x20e7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8468)));
label_20e7e4:
    // 0x20e7e4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x20e7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_20e7e8:
    // 0x20e7e8: 0x60f809  jalr        $v1
label_20e7ec:
    if (ctx->pc == 0x20E7ECu) {
        ctx->pc = 0x20E7F0u;
        goto label_20e7f0;
    }
    ctx->pc = 0x20E7E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20E7F0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E7E8u, 0x20E7F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20E7F0u;
label_20e7f0:
    // 0x20e7f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20e7f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20e7f4:
    // 0x20e7f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20e7f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_20e7f8:
    // 0x20e7f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20e7f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20e7fc:
    // 0x20e7fc: 0x3e00008  jr          $ra
label_20e800:
    if (ctx->pc == 0x20E800u) {
        ctx->pc = 0x20E800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E7FCu;
        // 0x20e800: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E804u;
        goto label_fallthrough_0x20e7fc;
    }
    ctx->pc = 0x20E7FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E7FCu;
        // 0x20e800: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E7FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20e7fc:
    ctx->pc = 0x20E804u;
}
