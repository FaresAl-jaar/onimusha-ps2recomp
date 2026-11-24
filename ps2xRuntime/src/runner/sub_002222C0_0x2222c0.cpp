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

// Function: sub_002222C0
// Address: 0x2222c0 - 0x222358
void sub_002222C0_0x2222c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002222C0_0x2222c0");
#endif

    switch (ctx->pc) {
        case 0x2222c0u: goto label_2222c0;
        case 0x2222c4u: goto label_2222c4;
        case 0x2222c8u: goto label_2222c8;
        case 0x2222ccu: goto label_2222cc;
        case 0x2222d0u: goto label_2222d0;
        case 0x2222d4u: goto label_2222d4;
        case 0x2222d8u: goto label_2222d8;
        case 0x2222dcu: goto label_2222dc;
        case 0x2222e0u: goto label_2222e0;
        case 0x2222e4u: goto label_2222e4;
        case 0x2222e8u: goto label_2222e8;
        case 0x2222ecu: goto label_2222ec;
        case 0x2222f0u: goto label_2222f0;
        case 0x2222f4u: goto label_2222f4;
        case 0x2222f8u: goto label_2222f8;
        case 0x2222fcu: goto label_2222fc;
        case 0x222300u: goto label_222300;
        case 0x222304u: goto label_222304;
        case 0x222308u: goto label_222308;
        case 0x22230cu: goto label_22230c;
        case 0x222310u: goto label_222310;
        case 0x222314u: goto label_222314;
        case 0x222318u: goto label_222318;
        case 0x22231cu: goto label_22231c;
        case 0x222320u: goto label_222320;
        case 0x222324u: goto label_222324;
        case 0x222328u: goto label_222328;
        case 0x22232cu: goto label_22232c;
        case 0x222330u: goto label_222330;
        case 0x222334u: goto label_222334;
        case 0x222338u: goto label_222338;
        case 0x22233cu: goto label_22233c;
        case 0x222340u: goto label_222340;
        case 0x222344u: goto label_222344;
        case 0x222348u: goto label_222348;
        case 0x22234cu: goto label_22234c;
        case 0x222350u: goto label_222350;
        case 0x222354u: goto label_222354;
        default: break;
    }

    ctx->pc = 0x2222c0u;

label_2222c0:
    // 0x2222c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2222c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2222c4:
    // 0x2222c4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2222c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2222c8:
    // 0x2222c8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2222c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2222cc:
    // 0x2222cc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2222ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2222d0:
    // 0x2222d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2222d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2222d4:
    // 0x2222d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2222d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2222d8:
    // 0x2222d8: 0x26501f30  addiu       $s0, $s2, 0x1F30
    ctx->pc = 0x2222d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 7984));
label_2222dc:
    // 0x2222dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2222dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2222e0:
    // 0x2222e0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2222e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2222e4:
    // 0x2222e4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2222e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2222e8:
    // 0x2222e8: 0x59880  sll         $s3, $a1, 2
    ctx->pc = 0x2222e8u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2222ec:
    // 0x2222ec: 0x0  nop
    ctx->pc = 0x2222ecu;
    // NOP
label_2222f0:
    // 0x2222f0: 0x2a220009  slti        $v0, $s1, 0x9
    ctx->pc = 0x2222f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)9) ? 1 : 0);
label_2222f4:
    // 0x2222f4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_2222f8:
    if (ctx->pc == 0x2222F8u) {
        ctx->pc = 0x2222F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2222F4u;
        // 0x2222f8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2222FCu;
        goto label_2222fc;
    }
    ctx->pc = 0x2222F4u;
    {
        const bool branch_taken_0x2222f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2222F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2222F4u;
        // 0x2222f8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2222f4) {
            ctx->pc = 0x222338u;
            goto label_222338;
        }
    }
    ctx->pc = 0x2222FCu;
label_2222fc:
    // 0x2222fc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2222fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_222300:
    // 0x222300: 0x26100044  addiu       $s0, $s0, 0x44
    ctx->pc = 0x222300u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
label_222304:
    // 0x222304: 0x0  nop
    ctx->pc = 0x222304u;
    // NOP
label_222308:
    // 0x222308: 0x0  nop
    ctx->pc = 0x222308u;
    // NOP
label_22230c:
    // 0x22230c: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
label_222310:
    if (ctx->pc == 0x222310u) {
        ctx->pc = 0x222310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22230Cu;
        // 0x222310: 0x2621821  addu        $v1, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222314u;
        goto label_222314;
    }
    ctx->pc = 0x22230Cu;
    {
        const bool branch_taken_0x22230c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22230Cu;
        // 0x222310: 0x2621821  addu        $v1, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22230c) {
            ctx->pc = 0x2222F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2222f0;
        }
    }
    ctx->pc = 0x222314u;
label_222314:
    // 0x222314: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x222314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_222318:
    // 0x222318: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x222318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22231c:
    // 0x22231c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22231cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_222320:
    // 0x222320: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x222320u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_222324:
    // 0x222324: 0x40f809  jalr        $v0
label_222328:
    if (ctx->pc == 0x222328u) {
        ctx->pc = 0x222328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222324u;
        // 0x222328: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22232Cu;
        goto label_22232c;
    }
    ctx->pc = 0x222324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22232Cu);
        ctx->pc = 0x222328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222324u;
        // 0x222328: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222324u, 0x22232Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22232Cu;
label_22232c:
    // 0x22232c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x22232cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_222330:
    // 0x222330: 0x1080fff0  beqz        $a0, . + 4 + (-0x10 << 2)
label_222334:
    if (ctx->pc == 0x222334u) {
        ctx->pc = 0x222334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222330u;
        // 0x222334: 0x2a220009  slti        $v0, $s1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x222338u;
        goto label_222338;
    }
    ctx->pc = 0x222330u;
    {
        const bool branch_taken_0x222330 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x222334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222330u;
        // 0x222334: 0x2a220009  slti        $v0, $s1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x222330) {
            ctx->pc = 0x2222F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2222f4;
        }
    }
    ctx->pc = 0x222338u;
label_222338:
    // 0x222338: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x222338u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22233c:
    // 0x22233c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x22233cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_222340:
    // 0x222340: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x222340u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_222344:
    // 0x222344: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x222344u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_222348:
    // 0x222348: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x222348u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_22234c:
    // 0x22234c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22234cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_222350:
    // 0x222350: 0x3e00008  jr          $ra
label_222354:
    if (ctx->pc == 0x222354u) {
        ctx->pc = 0x222354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222350u;
        // 0x222354: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222358u;
        goto label_fallthrough_0x222350;
    }
    ctx->pc = 0x222350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222350u;
        // 0x222354: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x222350:
    ctx->pc = 0x222358u;
}
