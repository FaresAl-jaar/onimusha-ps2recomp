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

// Function: sub_00230738
// Address: 0x230738 - 0x2307ec
void sub_00230738_0x230738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230738_0x230738");
#endif

    switch (ctx->pc) {
        case 0x230764u: goto label_230764;
        case 0x230780u: goto label_230780;
        case 0x230798u: goto label_230798;
        case 0x2307a0u: goto label_2307a0;
        case 0x2307b0u: goto label_2307b0;
        default: break;
    }

    ctx->pc = 0x230738u;

    // 0x230738: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x230738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23073c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23073cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230740: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x230740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x230744: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x230744u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230748: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x230748u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23074c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x23074cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x230750: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x230750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x230754: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x230754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x230758: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x230758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23075c: 0xc08bbbc  jal         func_22EEF0
    ctx->pc = 0x23075Cu;
    SET_GPR_U32(ctx, 31, 0x230764u);
    ctx->pc = 0x230760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23075Cu;
    // 0x230760: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EEF0u, 0x23075Cu, 0x230764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230764u;
label_230764:
    // 0x230764: 0x1220001c  beqz        $s1, . + 4 + (0x1C << 2)
    ctx->pc = 0x230764u;
    {
        const bool branch_taken_0x230764 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x230768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230764u;
        // 0x230768: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230764) {
            ctx->pc = 0x2307D8u;
            goto label_2307d8;
        }
    }
    ctx->pc = 0x23076Cu;
    // 0x23076c: 0x82220001  lb          $v0, 0x1($s1)
    ctx->pc = 0x23076cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x230770: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x230770u;
    {
        const bool branch_taken_0x230770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x230770) {
            ctx->pc = 0x230774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230770u;
            // 0x230774: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230784u;
            goto label_230784;
        }
    }
    ctx->pc = 0x230778u;
    // 0x230778: 0xc08c362  jal         func_230D88
    ctx->pc = 0x230778u;
    SET_GPR_U32(ctx, 31, 0x230780u);
    ctx->pc = 0x23077Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230778u;
    // 0x23077c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230D88u, 0x230778u, 0x230780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230780u;
label_230780:
    // 0x230780: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x230780u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_230784:
    // 0x230784: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x230784u;
    {
        const bool branch_taken_0x230784 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x230788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230784u;
        // 0x230788: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230784) {
            ctx->pc = 0x2307A0u;
            goto label_2307a0;
        }
    }
    ctx->pc = 0x23078Cu;
    // 0x23078c: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x23078cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x230790: 0xc08dd62  jal         func_237588
    ctx->pc = 0x230790u;
    SET_GPR_U32(ctx, 31, 0x230798u);
    ctx->pc = 0x230794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230790u;
    // 0x230794: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237588u, 0x230790u, 0x230798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230798u;
label_230798:
    // 0x230798: 0xc08dcc0  jal         func_237300
    ctx->pc = 0x230798u;
    SET_GPR_U32(ctx, 31, 0x2307A0u);
    ctx->pc = 0x23079Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230798u;
    // 0x23079c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237300u, 0x230798u, 0x2307A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2307A0u;
label_2307a0:
    // 0x2307a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2307a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2307a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2307a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2307a8: 0xc049590  jal         func_125640
    ctx->pc = 0x2307A8u;
    SET_GPR_U32(ctx, 31, 0x2307B0u);
    ctx->pc = 0x2307ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2307A8u;
    // 0x2307ac: 0x24060044  addiu       $a2, $zero, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x2307A8u, 0x2307B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2307B0u;
label_2307b0:
    // 0x2307b0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2307b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2307b4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2307b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2307b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2307b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2307bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2307bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2307c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2307c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2307c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2307c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2307c8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2307c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2307cc: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2307ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2307d0: 0x808bbbc  j           func_22EEF0
    ctx->pc = 0x2307D0u;
    ctx->pc = 0x2307D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2307D0u;
    // 0x2307d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EEF0u;
    sub_0022EEF0_0x22eef0(rdram, ctx, runtime); return;
    ctx->pc = 0x2307D8u;
label_2307d8:
    // 0x2307d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2307d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2307dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2307dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2307e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2307e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2307e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2307E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2307E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2307E4u;
        // 0x2307e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2307E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2307ECu;
}
