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

// Function: sub_0020C418
// Address: 0x20c418 - 0x20c4d4
void sub_0020C418_0x20c418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020C418_0x20c418");
#endif

    switch (ctx->pc) {
        case 0x20c43cu: goto label_20c43c;
        case 0x20c458u: goto label_20c458;
        case 0x20c46cu: goto label_20c46c;
        case 0x20c474u: goto label_20c474;
        case 0x20c480u: goto label_20c480;
        case 0x20c4a0u: goto label_20c4a0;
        case 0x20c4acu: goto label_20c4ac;
        case 0x20c4b4u: goto label_20c4b4;
        default: break;
    }

    ctx->pc = 0x20c418u;

    // 0x20c418: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20c418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20c41c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20c41cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c420: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20c420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20c424: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20c424u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c428: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20c428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20c42c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x20c42cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x20c430: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x20c430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x20c434: 0xc083156  jal         func_20C558
    ctx->pc = 0x20C434u;
    SET_GPR_U32(ctx, 31, 0x20C43Cu);
    ctx->pc = 0x20C438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C434u;
    // 0x20c438: 0x8e12003c  lw          $s2, 0x3C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C558u, 0x20C434u, 0x20C43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C43Cu;
label_20c43c:
    // 0x20c43c: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x20c43cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20c440: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20c440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c444: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20c444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c448: 0x12220005  beq         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20C448u;
    {
        const bool branch_taken_0x20c448 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x20C44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C448u;
        // 0x20c44c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c448) {
            ctx->pc = 0x20C460u;
            goto label_20c460;
        }
    }
    ctx->pc = 0x20C450u;
    // 0x20c450: 0xc083156  jal         func_20C558
    ctx->pc = 0x20C450u;
    SET_GPR_U32(ctx, 31, 0x20C458u);
    ctx->pc = 0x20C454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C450u;
    // 0x20c454: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C558u, 0x20C450u, 0x20C458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C458u;
label_20c458:
    // 0x20c458: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x20C458u;
    {
        const bool branch_taken_0x20c458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C458u;
        // 0x20c45c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c458) {
            ctx->pc = 0x20C4BCu;
            goto label_20c4bc;
        }
    }
    ctx->pc = 0x20C460u;
label_20c460:
    // 0x20c460: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x20c460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x20c464: 0xc08315a  jal         func_20C568
    ctx->pc = 0x20C464u;
    SET_GPR_U32(ctx, 31, 0x20C46Cu);
    ctx->pc = 0x20C468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C464u;
    // 0x20c468: 0xac509fa0  sw          $s0, -0x6060($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294942624), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C568u, 0x20C464u, 0x20C46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C46Cu;
label_20c46c:
    // 0x20c46c: 0xc0870a4  jal         func_21C290
    ctx->pc = 0x20C46Cu;
    SET_GPR_U32(ctx, 31, 0x20C474u);
    ctx->pc = 0x20C470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C46Cu;
    // 0x20c470: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C290u, 0x20C46Cu, 0x20C474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C474u;
label_20c474:
    // 0x20c474: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20c474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c478: 0xc08315a  jal         func_20C568
    ctx->pc = 0x20C478u;
    SET_GPR_U32(ctx, 31, 0x20C480u);
    ctx->pc = 0x20C47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C478u;
    // 0x20c47c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C568u, 0x20C478u, 0x20C480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C480u;
label_20c480:
    // 0x20c480: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x20c480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x20c484: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20C484u;
    {
        const bool branch_taken_0x20c484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C484u;
        // 0x20c488: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c484) {
            ctx->pc = 0x20C498u;
            goto label_20c498;
        }
    }
    ctx->pc = 0x20C48Cu;
    // 0x20c48c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x20C48Cu;
    {
        const bool branch_taken_0x20c48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C48Cu;
        // 0x20c490: 0xae000068  sw          $zero, 0x68($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c48c) {
            ctx->pc = 0x20C4A4u;
            goto label_20c4a4;
        }
    }
    ctx->pc = 0x20C494u;
    // 0x20c494: 0x0  nop
    ctx->pc = 0x20c494u;
    // NOP
label_20c498:
    // 0x20c498: 0xc082fa8  jal         func_20BEA0
    ctx->pc = 0x20C498u;
    SET_GPR_U32(ctx, 31, 0x20C4A0u);
    ctx->pc = 0x20C49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C498u;
    // 0x20c49c: 0xae110068  sw          $s1, 0x68($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20BEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20BEA0u, 0x20C498u, 0x20C4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C4A0u;
label_20c4a0:
    // 0x20c4a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20c4a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20c4a4:
    // 0x20c4a4: 0xc083156  jal         func_20C558
    ctx->pc = 0x20C4A4u;
    SET_GPR_U32(ctx, 31, 0x20C4ACu);
    ctx->pc = 0x20C4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C4A4u;
    // 0x20c4a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C558u, 0x20C4A4u, 0x20C4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C4ACu;
label_20c4ac:
    // 0x20c4ac: 0xc08707c  jal         func_21C1F0
    ctx->pc = 0x20C4ACu;
    SET_GPR_U32(ctx, 31, 0x20C4B4u);
    ctx->pc = 0x20C4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C4ACu;
    // 0x20c4b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C1F0u, 0x20C4ACu, 0x20C4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C4B4u;
label_20c4b4:
    // 0x20c4b4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x20c4b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x20c4b8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x20c4b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_20c4bc:
    // 0x20c4bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20c4bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20c4c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20c4c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20c4c4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20c4c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20c4c8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x20c4c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20c4cc: 0x3e00008  jr          $ra
    ctx->pc = 0x20C4CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C4CCu;
        // 0x20c4d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C4CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20C4D4u;
}
