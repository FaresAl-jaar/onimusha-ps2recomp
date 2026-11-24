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

// Function: sub_0023F510
// Address: 0x23f510 - 0x23f5f0
void sub_0023F510_0x23f510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023F510_0x23f510");
#endif

    switch (ctx->pc) {
        case 0x23f544u: goto label_23f544;
        case 0x23f568u: goto label_23f568;
        case 0x23f57cu: goto label_23f57c;
        case 0x23f5a0u: goto label_23f5a0;
        case 0x23f5b0u: goto label_23f5b0;
        case 0x23f5c8u: goto label_23f5c8;
        default: break;
    }

    ctx->pc = 0x23f510u;

    // 0x23f510: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23f510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23f514: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x23f514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23f518: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23f518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x23f51c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x23f51cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f520: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23f520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23f524: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23f524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23f528: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x23f528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x23f52c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x23f52cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x23f530: 0x8e4301ac  lw          $v1, 0x1AC($s2)
    ctx->pc = 0x23f530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 428)));
    // 0x23f534: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x23F534u;
    {
        const bool branch_taken_0x23f534 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F534u;
        // 0x23f538: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f534) {
            ctx->pc = 0x23F5D4u;
            goto label_23f5d4;
        }
    }
    ctx->pc = 0x23F53Cu;
    // 0x23f53c: 0xc08fb48  jal         func_23ED20
    ctx->pc = 0x23F53Cu;
    SET_GPR_U32(ctx, 31, 0x23F544u);
    ctx->pc = 0x23ED20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23ED20u, 0x23F53Cu, 0x23F544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F544u;
label_23f544:
    // 0x23f544: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x23f544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23f548: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23f548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f54c: 0x10830021  beq         $a0, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x23F54Cu;
    {
        const bool branch_taken_0x23f54c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x23F550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F54Cu;
        // 0x23f550: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f54c) {
            ctx->pc = 0x23F5D4u;
            goto label_23f5d4;
        }
    }
    ctx->pc = 0x23F554u;
    // 0x23f554: 0x1493001f  bne         $a0, $s3, . + 4 + (0x1F << 2)
    ctx->pc = 0x23F554u;
    {
        const bool branch_taken_0x23f554 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 19));
        ctx->pc = 0x23F558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F554u;
        // 0x23f558: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f554) {
            ctx->pc = 0x23F5D4u;
            goto label_23f5d4;
        }
    }
    ctx->pc = 0x23F55Cu;
    // 0x23f55c: 0x8e4401ac  lw          $a0, 0x1AC($s2)
    ctx->pc = 0x23f55cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 428)));
    // 0x23f560: 0xc08fac4  jal         func_23EB10
    ctx->pc = 0x23F560u;
    SET_GPR_U32(ctx, 31, 0x23F568u);
    ctx->pc = 0x23F564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F560u;
    // 0x23f564: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23EB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EB10u, 0x23F560u, 0x23F568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F568u;
label_23f568:
    // 0x23f568: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23F568u;
    {
        const bool branch_taken_0x23f568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F568u;
        // 0x23f56c: 0x265001b4  addiu       $s0, $s2, 0x1B4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 436));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f568) {
            ctx->pc = 0x23F584u;
            goto label_23f584;
        }
    }
    ctx->pc = 0x23F570u;
    // 0x23f570: 0x8e4401ac  lw          $a0, 0x1AC($s2)
    ctx->pc = 0x23f570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 428)));
    // 0x23f574: 0xc08fe40  jal         func_23F900
    ctx->pc = 0x23F574u;
    SET_GPR_U32(ctx, 31, 0x23F57Cu);
    ctx->pc = 0x23F578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F574u;
    // 0x23f578: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F900u, 0x23F574u, 0x23F57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F57Cu;
label_23f57c:
    // 0x23f57c: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23F57Cu;
    {
        const bool branch_taken_0x23f57c = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x23F580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F57Cu;
        // 0x23f580: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f57c) {
            ctx->pc = 0x23F590u;
            goto label_23f590;
        }
    }
    ctx->pc = 0x23F584u;
label_23f584:
    // 0x23f584: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x23F584u;
    {
        const bool branch_taken_0x23f584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F584u;
        // 0x23f588: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f584) {
            ctx->pc = 0x23F5D4u;
            goto label_23f5d4;
        }
    }
    ctx->pc = 0x23F58Cu;
    // 0x23f58c: 0x0  nop
    ctx->pc = 0x23f58cu;
    // NOP
label_23f590:
    // 0x23f590: 0x265001e4  addiu       $s0, $s2, 0x1E4
    ctx->pc = 0x23f590u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 484));
    // 0x23f594: 0x26510220  addiu       $s1, $s2, 0x220
    ctx->pc = 0x23f594u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 544));
    // 0x23f598: 0xc08fe8e  jal         func_23FA38
    ctx->pc = 0x23F598u;
    SET_GPR_U32(ctx, 31, 0x23F5A0u);
    ctx->pc = 0x23F59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F598u;
    // 0x23f59c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FA38u, 0x23F598u, 0x23F5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F5A0u;
label_23f5a0:
    // 0x23f5a0: 0x8e4401ac  lw          $a0, 0x1AC($s2)
    ctx->pc = 0x23f5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 428)));
    // 0x23f5a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23f5a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f5a8: 0xc08fec8  jal         func_23FB20
    ctx->pc = 0x23F5A8u;
    SET_GPR_U32(ctx, 31, 0x23F5B0u);
    ctx->pc = 0x23F5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F5A8u;
    // 0x23f5ac: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB20u, 0x23F5A8u, 0x23F5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F5B0u;
label_23f5b0:
    // 0x23f5b0: 0x8e4401ac  lw          $a0, 0x1AC($s2)
    ctx->pc = 0x23f5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 428)));
    // 0x23f5b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23f5b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f5b8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x23f5b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f5bc: 0x26470320  addiu       $a3, $s2, 0x320
    ctx->pc = 0x23f5bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 800));
    // 0x23f5c0: 0xc08ff2a  jal         func_23FCA8
    ctx->pc = 0x23F5C0u;
    SET_GPR_U32(ctx, 31, 0x23F5C8u);
    ctx->pc = 0x23F5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F5C0u;
    // 0x23f5c4: 0x26480420  addiu       $t0, $s2, 0x420 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 1056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FCA8u, 0x23F5C0u, 0x23F5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F5C8u;
label_23f5c8:
    // 0x23f5c8: 0xa25301a5  sb          $s3, 0x1A5($s2)
    ctx->pc = 0x23f5c8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 421), (uint8_t)GPR_U32(ctx, 19));
    // 0x23f5cc: 0xae4001a8  sw          $zero, 0x1A8($s2)
    ctx->pc = 0x23f5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 424), GPR_U32(ctx, 0));
    // 0x23f5d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23f5d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23f5d4:
    // 0x23f5d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23f5d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f5d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23f5d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23f5dc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23f5dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f5e0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x23f5e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23f5e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23f5e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23f5e8: 0x3e00008  jr          $ra
    ctx->pc = 0x23F5E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F5E8u;
        // 0x23f5ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F5E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F5F0u;
}
