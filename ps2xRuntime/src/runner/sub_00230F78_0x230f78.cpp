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

// Function: sub_00230F78
// Address: 0x230f78 - 0x231040
void sub_00230F78_0x230f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230F78_0x230f78");
#endif

    switch (ctx->pc) {
        case 0x230fa8u: goto label_230fa8;
        case 0x230fb4u: goto label_230fb4;
        case 0x230fe0u: goto label_230fe0;
        case 0x230ff8u: goto label_230ff8;
        case 0x23100cu: goto label_23100c;
        case 0x231020u: goto label_231020;
        default: break;
    }

    ctx->pc = 0x230f78u;

    // 0x230f78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x230f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x230f7c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x230f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x230f80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x230f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x230f84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x230f84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230f88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x230f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x230f8c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x230f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x230f90: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x230f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x230f94: 0x82020001  lb          $v0, 0x1($s0)
    ctx->pc = 0x230f94u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x230f98: 0x54430012  bnel        $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x230F98u;
    {
        const bool branch_taken_0x230f98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x230f98) {
            ctx->pc = 0x230F9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230F98u;
            // 0x230f9c: 0x82110003  lb          $s1, 0x3($s0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230FE4u;
            goto label_230fe4;
        }
    }
    ctx->pc = 0x230FA0u;
    // 0x230fa0: 0xc08dd84  jal         func_237610
    ctx->pc = 0x230FA0u;
    SET_GPR_U32(ctx, 31, 0x230FA8u);
    ctx->pc = 0x230FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230FA0u;
    // 0x230fa4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237610u, 0x230FA0u, 0x230FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230FA8u;
label_230fa8:
    // 0x230fa8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x230fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x230fac: 0xc08ddae  jal         func_2376B8
    ctx->pc = 0x230FACu;
    SET_GPR_U32(ctx, 31, 0x230FB4u);
    ctx->pc = 0x230FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230FACu;
    // 0x230fb0: 0xa2020001  sb          $v0, 0x1($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2376B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2376B8u, 0x230FACu, 0x230FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230FB4u;
label_230fb4:
    // 0x230fb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x230fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230fb8: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x230fb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x230fbc: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x230fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x230fc0: 0x2463fffd  addiu       $v1, $v1, -0x3
    ctx->pc = 0x230fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
    // 0x230fc4: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x230fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x230fc8: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x230fc8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x230fcc: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x230fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x230fd0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x230FD0u;
    {
        const bool branch_taken_0x230fd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x230FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230FD0u;
        // 0x230fd4: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230fd0) {
            ctx->pc = 0x230FE0u;
            goto label_230fe0;
        }
    }
    ctx->pc = 0x230FD8u;
    // 0x230fd8: 0xc08c1a6  jal         func_230698
    ctx->pc = 0x230FD8u;
    SET_GPR_U32(ctx, 31, 0x230FE0u);
    ctx->pc = 0x230FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230FD8u;
    // 0x230fdc: 0xae050014  sw          $a1, 0x14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230698u, 0x230FD8u, 0x230FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230FE0u;
label_230fe0:
    // 0x230fe0: 0x82110003  lb          $s1, 0x3($s0)
    ctx->pc = 0x230fe0u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_230fe4:
    // 0x230fe4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x230fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x230fe8: 0x56220010  bnel        $s1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x230FE8u;
    {
        const bool branch_taken_0x230fe8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x230fe8) {
            ctx->pc = 0x230FECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230FE8u;
            // 0x230fec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23102Cu;
            goto label_23102c;
        }
    }
    ctx->pc = 0x230FF0u;
    // 0x230ff0: 0xc08dd84  jal         func_237610
    ctx->pc = 0x230FF0u;
    SET_GPR_U32(ctx, 31, 0x230FF8u);
    ctx->pc = 0x230FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230FF0u;
    // 0x230ff4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237610u, 0x230FF0u, 0x230FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230FF8u;
label_230ff8:
    // 0x230ff8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x230ff8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230ffc: 0x5651000b  bnel        $s2, $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x230FFCu;
    {
        const bool branch_taken_0x230ffc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 17));
        if (branch_taken_0x230ffc) {
            ctx->pc = 0x231000u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230FFCu;
            // 0x231000: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23102Cu;
            goto label_23102c;
        }
    }
    ctx->pc = 0x231004u;
    // 0x231004: 0xc08ddae  jal         func_2376B8
    ctx->pc = 0x231004u;
    SET_GPR_U32(ctx, 31, 0x23100Cu);
    ctx->pc = 0x231008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231004u;
    // 0x231008: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2376B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2376B8u, 0x231004u, 0x23100Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23100Cu;
label_23100c:
    // 0x23100c: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x23100cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x231010: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x231010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231014: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x231014u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x231018: 0xc08c1a6  jal         func_230698
    ctx->pc = 0x231018u;
    SET_GPR_U32(ctx, 31, 0x231020u);
    ctx->pc = 0x23101Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231018u;
    // 0x23101c: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230698u, 0x231018u, 0x231020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231020u;
label_231020:
    // 0x231020: 0xa2120001  sb          $s2, 0x1($s0)
    ctx->pc = 0x231020u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 18));
    // 0x231024: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x231024u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x231028: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x231028u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23102c:
    // 0x23102c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23102cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x231030: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x231030u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x231034: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x231034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x231038: 0x3e00008  jr          $ra
    ctx->pc = 0x231038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23103Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231038u;
        // 0x23103c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231040u;
}
