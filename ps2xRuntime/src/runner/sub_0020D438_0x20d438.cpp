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

// Function: sub_0020D438
// Address: 0x20d438 - 0x20d4f8
void sub_0020D438_0x20d438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020D438_0x20d438");
#endif

    switch (ctx->pc) {
        case 0x20d488u: goto label_20d488;
        case 0x20d498u: goto label_20d498;
        case 0x20d4b8u: goto label_20d4b8;
        default: break;
    }

    ctx->pc = 0x20d438u;

    // 0x20d438: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x20d438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x20d43c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x20d43cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x20d440: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x20d440u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d444: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x20d444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x20d448: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x20d448u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d44c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x20d44cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x20d450: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x20d450u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d454: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x20d454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x20d458: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x20d458u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d45c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x20d45cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x20d460: 0x2a020120  slti        $v0, $s0, 0x120
    ctx->pc = 0x20d460u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)288) ? 1 : 0);
    // 0x20d464: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x20d464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x20d468: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x20d468u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d46c: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x20d46cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x20d470: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20d470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d474: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20d474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d478: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x20D478u;
    {
        const bool branch_taken_0x20d478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D478u;
        // 0x20d47c: 0x8e542004  lw          $s4, 0x2004($s2) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d478) {
            ctx->pc = 0x20D4D8u;
            goto label_20d4d8;
        }
    }
    ctx->pc = 0x20D480u;
    // 0x20d480: 0xc08f04a  jal         func_23C128
    ctx->pc = 0x20D480u;
    SET_GPR_U32(ctx, 31, 0x20D488u);
    ctx->pc = 0x23C128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C128u, 0x20D480u, 0x20D488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D488u;
label_20d488:
    // 0x20d488: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x20D488u;
    {
        const bool branch_taken_0x20d488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D488u;
        // 0x20d48c: 0x8fa70000  lw          $a3, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d488) {
            ctx->pc = 0x20D4BCu;
            goto label_20d4bc;
        }
    }
    ctx->pc = 0x20D490u;
    // 0x20d490: 0xc08483c  jal         func_2120F0
    ctx->pc = 0x20D490u;
    SET_GPR_U32(ctx, 31, 0x20D498u);
    ctx->pc = 0x20D494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D490u;
    // 0x20d494: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2120F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2120F0u, 0x20D490u, 0x20D498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D498u;
label_20d498:
    // 0x20d498: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20d498u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d49c: 0x2842006c  slti        $v0, $v0, 0x6C
    ctx->pc = 0x20d49cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)108) ? 1 : 0);
    // 0x20d4a0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x20d4a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d4a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20d4a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d4a8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20D4A8u;
    {
        const bool branch_taken_0x20d4a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D4A8u;
        // 0x20d4ac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d4a8) {
            ctx->pc = 0x20D4BCu;
            goto label_20d4bc;
        }
    }
    ctx->pc = 0x20D4B0u;
    // 0x20d4b0: 0xc08353e  jal         func_20D4F8
    ctx->pc = 0x20D4B0u;
    SET_GPR_U32(ctx, 31, 0x20D4B8u);
    ctx->pc = 0x20D4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D4F8u, 0x20D4B0u, 0x20D4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D4B8u;
label_20d4b8:
    // 0x20d4b8: 0x513823  subu        $a3, $v0, $s1
    ctx->pc = 0x20d4b8u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_20d4bc:
    // 0x20d4bc: 0xde4309c8  ld          $v1, 0x9C8($s2)
    ctx->pc = 0x20d4bcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 2504)));
    // 0x20d4c0: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x20d4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x20d4c4: 0x2442d128  addiu       $v0, $v0, -0x2ED8
    ctx->pc = 0x20d4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955304));
    // 0x20d4c8: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x20d4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
    // 0x20d4cc: 0xe3182d  daddu       $v1, $a3, $v1
    ctx->pc = 0x20d4ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 3));
    // 0x20d4d0: 0xae82003c  sw          $v0, 0x3C($s4)
    ctx->pc = 0x20d4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 60), GPR_U32(ctx, 2));
    // 0x20d4d4: 0xfe4309c8  sd          $v1, 0x9C8($s2)
    ctx->pc = 0x20d4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 2504), GPR_U64(ctx, 3));
label_20d4d8:
    // 0x20d4d8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x20d4d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20d4dc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x20d4dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20d4e0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x20d4e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20d4e4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x20d4e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x20d4e8: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x20d4e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20d4ec: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x20d4ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d4f0: 0x3e00008  jr          $ra
    ctx->pc = 0x20D4F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D4F0u;
        // 0x20d4f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D4F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20D4F8u;
}
