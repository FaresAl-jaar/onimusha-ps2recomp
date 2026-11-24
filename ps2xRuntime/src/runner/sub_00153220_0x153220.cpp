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

// Function: sub_00153220
// Address: 0x153220 - 0x153348
void sub_00153220_0x153220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153220_0x153220");
#endif

    switch (ctx->pc) {
        case 0x15323cu: goto label_15323c;
        case 0x153248u: goto label_153248;
        case 0x15327cu: goto label_15327c;
        case 0x153294u: goto label_153294;
        case 0x1532a4u: goto label_1532a4;
        case 0x1532bcu: goto label_1532bc;
        case 0x1532e8u: goto label_1532e8;
        case 0x15330cu: goto label_15330c;
        default: break;
    }

    ctx->pc = 0x153220u;

    // 0x153220: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x153220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x153224: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x153224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x153228: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x153228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15322c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15322cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x153230: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x153230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x153234: 0xc054c24  jal         func_153090
    ctx->pc = 0x153234u;
    SET_GPR_U32(ctx, 31, 0x15323Cu);
    ctx->pc = 0x153238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153234u;
    // 0x153238: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153090u, 0x153234u, 0x15323Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15323Cu;
label_15323c:
    // 0x15323c: 0x3c100080  lui         $s0, 0x80
    ctx->pc = 0x15323cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)128 << 16));
    // 0x153240: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x153240u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153244: 0x2610e610  addiu       $s0, $s0, -0x19F0
    ctx->pc = 0x153244u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294960656));
label_153248:
    // 0x153248: 0x8e110004  lw          $s1, 0x4($s0)
    ctx->pc = 0x153248u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15324c: 0x1220001c  beqz        $s1, . + 4 + (0x1C << 2)
    ctx->pc = 0x15324Cu;
    {
        const bool branch_taken_0x15324c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x15324c) {
            ctx->pc = 0x1532C0u;
            goto label_1532c0;
        }
    }
    ctx->pc = 0x153254u;
    // 0x153254: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x153254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x153258: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x153258u;
    {
        const bool branch_taken_0x153258 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x153258) {
            ctx->pc = 0x1532C0u;
            goto label_1532c0;
        }
    }
    ctx->pc = 0x153260u;
    // 0x153260: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x153260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x153264: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x153264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153268: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x153268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15326c: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x15326cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x153270: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x153270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x153274: 0xc049590  jal         func_125640
    ctx->pc = 0x153274u;
    SET_GPR_U32(ctx, 31, 0x15327Cu);
    ctx->pc = 0x153278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153274u;
    // 0x153278: 0x2453ffc0  addiu       $s3, $v0, -0x40 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x153274u, 0x15327Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15327Cu;
label_15327c:
    // 0x15327c: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x15327cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x153280: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x153280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x153284: 0xae330004  sw          $s3, 0x4($s1)
    ctx->pc = 0x153284u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 19));
    // 0x153288: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x153288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15328c: 0xc054c10  jal         func_153040
    ctx->pc = 0x15328Cu;
    SET_GPR_U32(ctx, 31, 0x153294u);
    ctx->pc = 0x153290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15328Cu;
    // 0x153290: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153040u, 0x15328Cu, 0x153294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153294u;
label_153294:
    // 0x153294: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x153294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153298: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x153298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15329c: 0xc049590  jal         func_125640
    ctx->pc = 0x15329Cu;
    SET_GPR_U32(ctx, 31, 0x1532A4u);
    ctx->pc = 0x1532A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15329Cu;
    // 0x1532a0: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x15329Cu, 0x1532A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1532A4u;
label_1532a4:
    // 0x1532a4: 0xae310008  sw          $s1, 0x8($s1)
    ctx->pc = 0x1532a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 17));
    // 0x1532a8: 0x2402fc19  addiu       $v0, $zero, -0x3E7
    ctx->pc = 0x1532a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966297));
    // 0x1532ac: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x1532acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x1532b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1532b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1532b4: 0xc054c10  jal         func_153040
    ctx->pc = 0x1532B4u;
    SET_GPR_U32(ctx, 31, 0x1532BCu);
    ctx->pc = 0x1532B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1532B4u;
    // 0x1532b8: 0xae62000c  sw          $v0, 0xC($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153040u, 0x1532B4u, 0x1532BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1532BCu;
label_1532bc:
    // 0x1532bc: 0x0  nop
    ctx->pc = 0x1532bcu;
    // NOP
label_1532c0:
    // 0x1532c0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1532c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1532c4: 0x2a430020  slti        $v1, $s2, 0x20
    ctx->pc = 0x1532c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1532c8: 0x1460ffdf  bnez        $v1, . + 4 + (-0x21 << 2)
    ctx->pc = 0x1532C8u;
    {
        const bool branch_taken_0x1532c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1532CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1532C8u;
        // 0x1532cc: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1532c8) {
            ctx->pc = 0x153248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_153248;
        }
    }
    ctx->pc = 0x1532D0u;
    // 0x1532d0: 0x8f8385c0  lw          $v1, -0x7A40($gp)
    ctx->pc = 0x1532d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936000)));
    // 0x1532d4: 0x3082b  sltu        $at, $zero, $v1
    ctx->pc = 0x1532d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1532d8: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x1532D8u;
    {
        const bool branch_taken_0x1532d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1532DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1532D8u;
        // 0x1532dc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1532d8) {
            ctx->pc = 0x153328u;
            goto label_153328;
        }
    }
    ctx->pc = 0x1532E0u;
    // 0x1532e0: 0x3c110080  lui         $s1, 0x80
    ctx->pc = 0x1532e0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)128 << 16));
    // 0x1532e4: 0x2631eeb0  addiu       $s1, $s1, -0x1150
    ctx->pc = 0x1532e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962864));
label_1532e8:
    // 0x1532e8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1532e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1532ec: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1532ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1532f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1532f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1532f4: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x1532f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x1532f8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1532f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1532fc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1532FCu;
    {
        const bool branch_taken_0x1532fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1532fc) {
            ctx->pc = 0x153310u;
            goto label_153310;
        }
    }
    ctx->pc = 0x153304u;
    // 0x153304: 0xc054bf4  jal         func_152FD0
    ctx->pc = 0x153304u;
    SET_GPR_U32(ctx, 31, 0x15330Cu);
    ctx->pc = 0x152FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152FD0u, 0x153304u, 0x15330Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15330Cu;
label_15330c:
    // 0x15330c: 0x0  nop
    ctx->pc = 0x15330cu;
    // NOP
label_153310:
    // 0x153310: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x153310u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x153314: 0x8f8385c0  lw          $v1, -0x7A40($gp)
    ctx->pc = 0x153314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936000)));
    // 0x153318: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x153318u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x15331c: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x15331cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x153320: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x153320u;
    {
        const bool branch_taken_0x153320 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x153324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153320u;
        // 0x153324: 0x26310018  addiu       $s1, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153320) {
            ctx->pc = 0x1532E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1532e8;
        }
    }
    ctx->pc = 0x153328u;
label_153328:
    // 0x153328: 0xaf8085c0  sw          $zero, -0x7A40($gp)
    ctx->pc = 0x153328u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936000), GPR_U32(ctx, 0));
    // 0x15332c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x15332cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x153330: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x153330u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x153334: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x153334u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x153338: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x153338u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15333c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15333cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x153340: 0x3e00008  jr          $ra
    ctx->pc = 0x153340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153340u;
        // 0x153344: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x153348u;
}
