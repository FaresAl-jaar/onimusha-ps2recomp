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

// Function: sub_00222628
// Address: 0x222628 - 0x222a90
void sub_00222628_0x222628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222628_0x222628");
#endif

    switch (ctx->pc) {
        case 0x22270cu: goto label_22270c;
        case 0x222724u: goto label_222724;
        case 0x222730u: goto label_222730;
        case 0x222750u: goto label_222750;
        case 0x2227a8u: goto label_2227a8;
        case 0x2227b4u: goto label_2227b4;
        case 0x222830u: goto label_222830;
        case 0x22283cu: goto label_22283c;
        case 0x222888u: goto label_222888;
        case 0x2228b0u: goto label_2228b0;
        case 0x2228c0u: goto label_2228c0;
        case 0x2228ccu: goto label_2228cc;
        case 0x2228fcu: goto label_2228fc;
        case 0x222920u: goto label_222920;
        case 0x222940u: goto label_222940;
        case 0x22296cu: goto label_22296c;
        case 0x222990u: goto label_222990;
        case 0x22299cu: goto label_22299c;
        default: break;
    }

    ctx->pc = 0x222628u;

    // 0x222628: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x222628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22262c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22262cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x222630: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x222630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x222634: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x222634u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222638: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x222638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x22263c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x22263cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222640: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x222640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x222644: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x222644u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222648: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x222648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x22264c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22264cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x222650: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x222650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x222654: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x222654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x222658: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x222658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x22265c: 0xdea20008  ld          $v0, 0x8($s5)
    ctx->pc = 0x22265cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x222660: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x222660u;
    {
        const bool branch_taken_0x222660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x222664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222660u;
        // 0x222664: 0xe0b02d  daddu       $s6, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222660) {
            ctx->pc = 0x222674u;
            goto label_222674;
        }
    }
    ctx->pc = 0x222668u;
    // 0x222668: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x222668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22266c: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x22266Cu;
    {
        const bool branch_taken_0x22266c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22266c) {
            ctx->pc = 0x222670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22266Cu;
            // 0x222670: 0xde650000  ld          $a1, 0x0($s3) (Delay Slot)
            SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2226B0u;
            goto label_2226b0;
        }
    }
    ctx->pc = 0x222674u;
label_222674:
    // 0x222674: 0xde620000  ld          $v0, 0x0($s3)
    ctx->pc = 0x222674u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x222678: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x222678u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22267c: 0xfec20000  sd          $v0, 0x0($s6)
    ctx->pc = 0x22267cu;
    WRITE64(ADD32(GPR_U32(ctx, 22), 0), GPR_U64(ctx, 2));
    // 0x222680: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x222680u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x222684: 0xde630008  ld          $v1, 0x8($s3)
    ctx->pc = 0x222684u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x222688: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x222688u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22268c: 0xfec30008  sd          $v1, 0x8($s6)
    ctx->pc = 0x22268cu;
    WRITE64(ADD32(GPR_U32(ctx, 22), 8), GPR_U64(ctx, 3));
    // 0x222690: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x222690u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x222694: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x222694u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x222698: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x222698u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22269c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x22269cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2226a0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2226a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2226a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2226A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2226A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2226A4u;
        // 0x2226a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2226A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2226ACu;
    // 0x2226ac: 0x0  nop
    ctx->pc = 0x2226acu;
    // NOP
label_2226b0:
    // 0x2226b0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2226b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2226b4: 0xde020188  ld          $v0, 0x188($s0)
    ctx->pc = 0x2226b4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 392)));
    // 0x2226b8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2226b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2226bc: 0xa2182a  slt         $v1, $a1, $v0
    ctx->pc = 0x2226bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2226c0: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x2226c0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x2226c4: 0x14870004  bne         $a0, $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2226C4u;
    {
        const bool branch_taken_0x2226c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 7));
        ctx->pc = 0x2226C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2226C4u;
        // 0x2226c8: 0xfe650000  sd          $a1, 0x0($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2226c4) {
            ctx->pc = 0x2226D8u;
            goto label_2226d8;
        }
    }
    ctx->pc = 0x2226CCu;
    // 0x2226cc: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2226ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x2226d0: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2226D0u;
    {
        const bool branch_taken_0x2226d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2226D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2226D0u;
        // 0x2226d4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2226d0) {
            ctx->pc = 0x222778u;
            goto label_222778;
        }
    }
    ctx->pc = 0x2226D8u;
label_2226d8:
    // 0x2226d8: 0x8e120008  lw          $s2, 0x8($s0)
    ctx->pc = 0x2226d8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2226dc: 0x16400027  bnez        $s2, . + 4 + (0x27 << 2)
    ctx->pc = 0x2226DCu;
    {
        const bool branch_taken_0x2226dc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2226E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2226DCu;
        // 0x2226e0: 0xde060188  ld          $a2, 0x188($s0) (Delay Slot)
        SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 392)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2226dc) {
            ctx->pc = 0x22277Cu;
            goto label_22277c;
        }
    }
    ctx->pc = 0x2226E4u;
    // 0x2226e4: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x2226e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2226e8: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x2226E8u;
    {
        const bool branch_taken_0x2226e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2226e8) {
            ctx->pc = 0x2226ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2226E8u;
            // 0x2226ec: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x222760u;
            goto label_222760;
        }
    }
    ctx->pc = 0x2226F0u;
    // 0x2226f0: 0xde030178  ld          $v1, 0x178($s0)
    ctx->pc = 0x2226f0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 376)));
    // 0x2226f4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2226f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2226f8: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2226F8u;
    {
        const bool branch_taken_0x2226f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2226FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2226F8u;
        // 0x2226fc: 0xae070008  sw          $a3, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2226f8) {
            ctx->pc = 0x222718u;
            goto label_222718;
        }
    }
    ctx->pc = 0x222700u;
    // 0x222700: 0xde050158  ld          $a1, 0x158($s0)
    ctx->pc = 0x222700u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 344)));
    // 0x222704: 0xc04b098  jal         func_12C260
    ctx->pc = 0x222704u;
    SET_GPR_U32(ctx, 31, 0x22270Cu);
    ctx->pc = 0x222708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222704u;
    // 0x222708: 0xde640008  ld          $a0, 0x8($s3) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C260u, 0x222704u, 0x22270Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22270Cu;
label_22270c:
    // 0x22270c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x22270Cu;
    {
        const bool branch_taken_0x22270c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22270Cu;
        // 0x222710: 0xde050160  ld          $a1, 0x160($s0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22270c) {
            ctx->pc = 0x222728u;
            goto label_222728;
        }
    }
    ctx->pc = 0x222714u;
    // 0x222714: 0x0  nop
    ctx->pc = 0x222714u;
    // NOP
label_222718:
    // 0x222718: 0xde050168  ld          $a1, 0x168($s0)
    ctx->pc = 0x222718u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x22271c: 0xc04b098  jal         func_12C260
    ctx->pc = 0x22271Cu;
    SET_GPR_U32(ctx, 31, 0x222724u);
    ctx->pc = 0x222720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22271Cu;
    // 0x222720: 0xde640008  ld          $a0, 0x8($s3) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C260u, 0x22271Cu, 0x222724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222724u;
label_222724:
    // 0x222724: 0xde050170  ld          $a1, 0x170($s0)
    ctx->pc = 0x222724u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 368)));
label_222728:
    // 0x222728: 0xc04b1a2  jal         func_12C688
    ctx->pc = 0x222728u;
    SET_GPR_U32(ctx, 31, 0x222730u);
    ctx->pc = 0x22272Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222728u;
    // 0x22272c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C688u, 0x222728u, 0x222730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222730u;
label_222730:
    // 0x222730: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x222730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222734: 0xdea30000  ld          $v1, 0x0($s5)
    ctx->pc = 0x222734u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x222738: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x222738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22273c: 0xfe030178  sd          $v1, 0x178($s0)
    ctx->pc = 0x22273cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 376), GPR_U64(ctx, 3));
    // 0x222740: 0xde620000  ld          $v0, 0x0($s3)
    ctx->pc = 0x222740u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x222744: 0x45102d  daddu       $v0, $v0, $a1
    ctx->pc = 0x222744u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 5));
    // 0x222748: 0xc088942  jal         func_222508
    ctx->pc = 0x222748u;
    SET_GPR_U32(ctx, 31, 0x222750u);
    ctx->pc = 0x22274Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222748u;
    // 0x22274c: 0xfe020180  sd          $v0, 0x180($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 384), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222508u, 0x222748u, 0x222750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222750u;
label_222750:
    // 0x222750: 0xde060188  ld          $a2, 0x188($s0)
    ctx->pc = 0x222750u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 392)));
    // 0x222754: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x222754u;
    {
        const bool branch_taken_0x222754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222754u;
        // 0x222758: 0x8e120008  lw          $s2, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222754) {
            ctx->pc = 0x22277Cu;
            goto label_22277c;
        }
    }
    ctx->pc = 0x22275Cu;
    // 0x22275c: 0x0  nop
    ctx->pc = 0x22275cu;
    // NOP
label_222760:
    // 0x222760: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x222760u;
    {
        const bool branch_taken_0x222760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x222760) {
            ctx->pc = 0x222764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x222760u;
            // 0x222764: 0xde620000  ld          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x222780u;
            goto label_222780;
        }
    }
    ctx->pc = 0x222768u;
    // 0x222768: 0xae070008  sw          $a3, 0x8($s0)
    ctx->pc = 0x222768u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
    // 0x22276c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x22276Cu;
    {
        const bool branch_taken_0x22276c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22276Cu;
        // 0x222770: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22276c) {
            ctx->pc = 0x22277Cu;
            goto label_22277c;
        }
    }
    ctx->pc = 0x222774u;
    // 0x222774: 0x0  nop
    ctx->pc = 0x222774u;
    // NOP
label_222778:
    // 0x222778: 0xde060188  ld          $a2, 0x188($s0)
    ctx->pc = 0x222778u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 392)));
label_22277c:
    // 0x22277c: 0xde620000  ld          $v0, 0x0($s3)
    ctx->pc = 0x22277cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 0)));
label_222780:
    // 0x222780: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x222780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x222784: 0xde110178  ld          $s1, 0x178($s0)
    ctx->pc = 0x222784u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 16), 376)));
    // 0x222788: 0x46182a  slt         $v1, $v0, $a2
    ctx->pc = 0x222788u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x22278c: 0xc3100b  movn        $v0, $a2, $v1
    ctx->pc = 0x22278cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x222790: 0x1224000b  beq         $s1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x222790u;
    {
        const bool branch_taken_0x222790 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 4));
        ctx->pc = 0x222794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222790u;
        // 0x222794: 0xfe020188  sd          $v0, 0x188($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 392), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222790) {
            ctx->pc = 0x2227C0u;
            goto label_2227c0;
        }
    }
    ctx->pc = 0x222798u;
    // 0x222798: 0xdea50000  ld          $a1, 0x0($s5)
    ctx->pc = 0x222798u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x22279c: 0xde640008  ld          $a0, 0x8($s3)
    ctx->pc = 0x22279cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2227a0: 0xc04b098  jal         func_12C260
    ctx->pc = 0x2227A0u;
    SET_GPR_U32(ctx, 31, 0x2227A8u);
    ctx->pc = 0x2227A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2227A0u;
    // 0x2227a4: 0xb1282f  dsubu       $a1, $a1, $s1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) - GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C260u, 0x2227A0u, 0x2227A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2227A8u;
label_2227a8:
    // 0x2227a8: 0xdea50008  ld          $a1, 0x8($s5)
    ctx->pc = 0x2227a8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x2227ac: 0xc04b1a2  jal         func_12C688
    ctx->pc = 0x2227ACu;
    SET_GPR_U32(ctx, 31, 0x2227B4u);
    ctx->pc = 0x2227B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2227ACu;
    // 0x2227b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C688u, 0x2227ACu, 0x2227B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2227B4u;
label_2227b4:
    // 0x2227b4: 0xde030180  ld          $v1, 0x180($s0)
    ctx->pc = 0x2227b4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x2227b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2227B8u;
    {
        const bool branch_taken_0x2227b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2227BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2227B8u;
        // 0x2227bc: 0x62a02d  daddu       $s4, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2227b8) {
            ctx->pc = 0x2227C4u;
            goto label_2227c4;
        }
    }
    ctx->pc = 0x2227C0u;
label_2227c0:
    // 0x2227c0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2227c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2227c4:
    // 0x2227c4: 0x56400014  bnel        $s2, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x2227C4u;
    {
        const bool branch_taken_0x2227c4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2227c4) {
            ctx->pc = 0x2227C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2227C4u;
            // 0x2227c8: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x222818u;
            goto label_222818;
        }
    }
    ctx->pc = 0x2227CCu;
    // 0x2227cc: 0xde030188  ld          $v1, 0x188($s0)
    ctx->pc = 0x2227ccu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 392)));
    // 0x2227d0: 0x74102a  slt         $v0, $v1, $s4
    ctx->pc = 0x2227d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x2227d4: 0x10400068  beqz        $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x2227D4u;
    {
        const bool branch_taken_0x2227d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2227D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2227D4u;
        // 0x2227d8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2227d4) {
            ctx->pc = 0x222978u;
            goto label_222978;
        }
    }
    ctx->pc = 0x2227DCu;
    // 0x2227dc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2227dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2227e0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2227E0u;
    {
        const bool branch_taken_0x2227e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2227E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2227E0u;
        // 0x2227e4: 0xdea20000  ld          $v0, 0x0($s5) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2227e0) {
            ctx->pc = 0x2227F8u;
            goto label_2227f8;
        }
    }
    ctx->pc = 0x2227E8u;
    // 0x2227e8: 0xfe030180  sd          $v1, 0x180($s0)
    ctx->pc = 0x2227e8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 384), GPR_U64(ctx, 3));
    // 0x2227ec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2227ECu;
    {
        const bool branch_taken_0x2227ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2227F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2227ECu;
        // 0x2227f0: 0xfe020178  sd          $v0, 0x178($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 376), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2227ec) {
            ctx->pc = 0x222804u;
            goto label_222804;
        }
    }
    ctx->pc = 0x2227F4u;
    // 0x2227f4: 0x0  nop
    ctx->pc = 0x2227f4u;
    // NOP
label_2227f8:
    // 0x2227f8: 0xde030128  ld          $v1, 0x128($s0)
    ctx->pc = 0x2227f8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x2227fc: 0xfe020178  sd          $v0, 0x178($s0)
    ctx->pc = 0x2227fcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 376), GPR_U64(ctx, 2));
    // 0x222800: 0xfe030180  sd          $v1, 0x180($s0)
    ctx->pc = 0x222800u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 384), GPR_U64(ctx, 3));
label_222804:
    // 0x222804: 0x8e020190  lw          $v0, 0x190($s0)
    ctx->pc = 0x222804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
    // 0x222808: 0xde110178  ld          $s1, 0x178($s0)
    ctx->pc = 0x222808u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 16), 376)));
    // 0x22280c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22280cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x222810: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x222810u;
    {
        const bool branch_taken_0x222810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222810u;
        // 0x222814: 0xae020190  sw          $v0, 0x190($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222810) {
            ctx->pc = 0x222974u;
            goto label_222974;
        }
    }
    ctx->pc = 0x222818u;
label_222818:
    // 0x222818: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x222818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22281c: 0x14620056  bne         $v1, $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x22281Cu;
    {
        const bool branch_taken_0x22281c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x222820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22281Cu;
        // 0x222820: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22281c) {
            ctx->pc = 0x222978u;
            goto label_222978;
        }
    }
    ctx->pc = 0x222824u;
    // 0x222824: 0xde050148  ld          $a1, 0x148($s0)
    ctx->pc = 0x222824u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x222828: 0xc04b098  jal         func_12C260
    ctx->pc = 0x222828u;
    SET_GPR_U32(ctx, 31, 0x222830u);
    ctx->pc = 0x22282Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222828u;
    // 0x22282c: 0xde640008  ld          $a0, 0x8($s3) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C260u, 0x222828u, 0x222830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222830u;
label_222830:
    // 0x222830: 0xde050150  ld          $a1, 0x150($s0)
    ctx->pc = 0x222830u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x222834: 0xc04b1a2  jal         func_12C688
    ctx->pc = 0x222834u;
    SET_GPR_U32(ctx, 31, 0x22283Cu);
    ctx->pc = 0x222838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222834u;
    // 0x222838: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C688u, 0x222834u, 0x22283Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22283Cu;
label_22283c:
    // 0x22283c: 0xde650000  ld          $a1, 0x0($s3)
    ctx->pc = 0x22283cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x222840: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x222840u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222844: 0xb4102f  dsubu       $v0, $a1, $s4
    ctx->pc = 0x222844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) - GPR_U64(ctx, 20));
    // 0x222848: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x222848u;
    {
        const bool branch_taken_0x222848 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x22284Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222848u;
        // 0x22284c: 0x62102a  slt         $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x222848) {
            ctx->pc = 0x222860u;
            goto label_222860;
        }
    }
    ctx->pc = 0x222850u;
    // 0x222850: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x222850u;
    {
        const bool branch_taken_0x222850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x222850) {
            ctx->pc = 0x222854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x222850u;
            // 0x222854: 0xdea20000  ld          $v0, 0x0($s5) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x222874u;
            goto label_222874;
        }
    }
    ctx->pc = 0x222858u;
    // 0x222858: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x222858u;
    {
        const bool branch_taken_0x222858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22285Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222858u;
        // 0x22285c: 0xb4282f  dsubu       $a1, $a1, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) - GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222858) {
            ctx->pc = 0x2228A0u;
            goto label_2228a0;
        }
    }
    ctx->pc = 0x222860u;
label_222860:
    // 0x222860: 0x285102f  dsubu       $v0, $s4, $a1
    ctx->pc = 0x222860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) - GPR_U64(ctx, 5));
    // 0x222864: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x222864u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x222868: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x222868u;
    {
        const bool branch_taken_0x222868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22286Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222868u;
        // 0x22286c: 0xb4282f  dsubu       $a1, $a1, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) - GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222868) {
            ctx->pc = 0x2228A0u;
            goto label_2228a0;
        }
    }
    ctx->pc = 0x222870u;
    // 0x222870: 0xdea20000  ld          $v0, 0x0($s5)
    ctx->pc = 0x222870u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 0)));
label_222874:
    // 0x222874: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x222874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222878: 0xfe020178  sd          $v0, 0x178($s0)
    ctx->pc = 0x222878u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 376), GPR_U64(ctx, 2));
    // 0x22287c: 0xde630000  ld          $v1, 0x0($s3)
    ctx->pc = 0x22287cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x222880: 0xc088942  jal         func_222508
    ctx->pc = 0x222880u;
    SET_GPR_U32(ctx, 31, 0x222888u);
    ctx->pc = 0x222884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222880u;
    // 0x222884: 0xfe030180  sd          $v1, 0x180($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 384), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222508u, 0x222880u, 0x222888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222888u;
label_222888:
    // 0x222888: 0x8e0201a0  lw          $v0, 0x1A0($s0)
    ctx->pc = 0x222888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
    // 0x22288c: 0x8e120008  lw          $s2, 0x8($s0)
    ctx->pc = 0x22288cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x222890: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x222890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x222894: 0xde110178  ld          $s1, 0x178($s0)
    ctx->pc = 0x222894u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 16), 376)));
    // 0x222898: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x222898u;
    {
        const bool branch_taken_0x222898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22289Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222898u;
        // 0x22289c: 0xae0201a0  sw          $v0, 0x1A0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 416), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222898) {
            ctx->pc = 0x222974u;
            goto label_222974;
        }
    }
    ctx->pc = 0x2228A0u;
label_2228a0:
    // 0x2228a0: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x2228a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2228a4: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x2228a4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x2228a8: 0xc088aa4  jal         func_222A90
    ctx->pc = 0x2228A8u;
    SET_GPR_U32(ctx, 31, 0x2228B0u);
    ctx->pc = 0x2228ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2228A8u;
    // 0x2228ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222A90u, 0x2228A8u, 0x2228B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2228B0u;
label_2228b0:
    // 0x2228b0: 0xde640008  ld          $a0, 0x8($s3)
    ctx->pc = 0x2228b0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2228b4: 0xde050138  ld          $a1, 0x138($s0)
    ctx->pc = 0x2228b4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x2228b8: 0xc04b098  jal         func_12C260
    ctx->pc = 0x2228B8u;
    SET_GPR_U32(ctx, 31, 0x2228C0u);
    ctx->pc = 0x2228BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2228B8u;
    // 0x2228bc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C260u, 0x2228B8u, 0x2228C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2228C0u;
label_2228c0:
    // 0x2228c0: 0xde050140  ld          $a1, 0x140($s0)
    ctx->pc = 0x2228c0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2228c4: 0xc04b1a2  jal         func_12C688
    ctx->pc = 0x2228C4u;
    SET_GPR_U32(ctx, 31, 0x2228CCu);
    ctx->pc = 0x2228C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2228C4u;
    // 0x2228c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C688u, 0x2228C4u, 0x2228CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2228CCu;
label_2228cc:
    // 0x2228cc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2228ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2228d0: 0x6210002  bgez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2228D0u;
    {
        const bool branch_taken_0x2228d0 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x2228D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2228D0u;
        // 0x2228d4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2228d0) {
            ctx->pc = 0x2228DCu;
            goto label_2228dc;
        }
    }
    ctx->pc = 0x2228D8u;
    // 0x2228d8: 0x2102f  dsubu       $v0, $zero, $v0
    ctx->pc = 0x2228d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
label_2228dc:
    // 0x2228dc: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2228dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2228e0: 0x50400023  beql        $v0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x2228E0u;
    {
        const bool branch_taken_0x2228e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2228e0) {
            ctx->pc = 0x2228E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2228E0u;
            // 0x2228e4: 0x8e120008  lw          $s2, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x222970u;
            goto label_222970;
        }
    }
    ctx->pc = 0x2228E8u;
    // 0x2228e8: 0x251102a  slt         $v0, $s2, $s1
    ctx->pc = 0x2228e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2228ec: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2228ECu;
    {
        const bool branch_taken_0x2228ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2228F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2228ECu;
        // 0x2228f0: 0x112078  dsll        $a0, $s1, 1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2228ec) {
            ctx->pc = 0x222918u;
            goto label_222918;
        }
    }
    ctx->pc = 0x2228F4u;
    // 0x2228f4: 0xc04b1a2  jal         func_12C688
    ctx->pc = 0x2228F4u;
    SET_GPR_U32(ctx, 31, 0x2228FCu);
    ctx->pc = 0x2228F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2228F4u;
    // 0x2228f8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C688u, 0x2228F4u, 0x2228FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2228FCu;
label_2228fc:
    // 0x2228fc: 0x8e030194  lw          $v1, 0x194($s0)
    ctx->pc = 0x2228fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 404)));
    // 0x222900: 0x6444ffff  daddiu      $a0, $v0, -0x1
    ctx->pc = 0x222900u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294967295);
    // 0x222904: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x222904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x222908: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x222908u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x22290c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22290cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x222910: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x222910u;
    {
        const bool branch_taken_0x222910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222910u;
        // 0x222914: 0xae030194  sw          $v1, 0x194($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 404), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222910) {
            ctx->pc = 0x222938u;
            goto label_222938;
        }
    }
    ctx->pc = 0x222918u;
label_222918:
    // 0x222918: 0xc04b1a2  jal         func_12C688
    ctx->pc = 0x222918u;
    SET_GPR_U32(ctx, 31, 0x222920u);
    ctx->pc = 0x22291Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222918u;
    // 0x22291c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C688u, 0x222918u, 0x222920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222920u;
label_222920:
    // 0x222920: 0x8e030198  lw          $v1, 0x198($s0)
    ctx->pc = 0x222920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 408)));
    // 0x222924: 0x64440001  daddiu      $a0, $v0, 0x1
    ctx->pc = 0x222924u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x222928: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x222928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x22292c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x22292cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x222930: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x222930u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x222934: 0xae030198  sw          $v1, 0x198($s0)
    ctx->pc = 0x222934u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 408), GPR_U32(ctx, 3));
label_222938:
    // 0x222938: 0xc04b098  jal         func_12C260
    ctx->pc = 0x222938u;
    SET_GPR_U32(ctx, 31, 0x222940u);
    ctx->pc = 0x22293Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222938u;
    // 0x22293c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C260u, 0x222938u, 0x222940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222940u;
label_222940:
    // 0x222940: 0xdea30000  ld          $v1, 0x0($s5)
    ctx->pc = 0x222940u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x222944: 0x22ffe  dsrl32      $a1, $v0, 31
    ctx->pc = 0x222944u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x222948: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x222948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22294c: 0xa2282d  daddu       $a1, $a1, $v0
    ctx->pc = 0x22294cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 2));
    // 0x222950: 0xfe030178  sd          $v1, 0x178($s0)
    ctx->pc = 0x222950u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 376), GPR_U64(ctx, 3));
    // 0x222954: 0x5287b  dsra        $a1, $a1, 1
    ctx->pc = 0x222954u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> 1);
    // 0x222958: 0x285102d  daddu       $v0, $s4, $a1
    ctx->pc = 0x222958u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 5));
    // 0x22295c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x22295cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x222960: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x222960u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x222964: 0xc088abc  jal         func_222AF0
    ctx->pc = 0x222964u;
    SET_GPR_U32(ctx, 31, 0x22296Cu);
    ctx->pc = 0x222968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222964u;
    // 0x222968: 0xfe020180  sd          $v0, 0x180($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 384), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222AF0u, 0x222964u, 0x22296Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22296Cu;
label_22296c:
    // 0x22296c: 0x8e120008  lw          $s2, 0x8($s0)
    ctx->pc = 0x22296cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_222970:
    // 0x222970: 0xde110178  ld          $s1, 0x178($s0)
    ctx->pc = 0x222970u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 16), 376)));
label_222974:
    // 0x222974: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x222974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_222978:
    // 0x222978: 0x5222000a  beql        $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x222978u;
    {
        const bool branch_taken_0x222978 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x222978) {
            ctx->pc = 0x22297Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x222978u;
            // 0x22297c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2229A4u;
            goto label_2229a4;
        }
    }
    ctx->pc = 0x222980u;
    // 0x222980: 0xdea50000  ld          $a1, 0x0($s5)
    ctx->pc = 0x222980u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x222984: 0xde640008  ld          $a0, 0x8($s3)
    ctx->pc = 0x222984u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x222988: 0xc04b098  jal         func_12C260
    ctx->pc = 0x222988u;
    SET_GPR_U32(ctx, 31, 0x222990u);
    ctx->pc = 0x22298Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222988u;
    // 0x22298c: 0xb1282f  dsubu       $a1, $a1, $s1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) - GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C260u, 0x222988u, 0x222990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222990u;
label_222990:
    // 0x222990: 0xdea50008  ld          $a1, 0x8($s5)
    ctx->pc = 0x222990u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x222994: 0xc04b1a2  jal         func_12C688
    ctx->pc = 0x222994u;
    SET_GPR_U32(ctx, 31, 0x22299Cu);
    ctx->pc = 0x222998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222994u;
    // 0x222998: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C688u, 0x222994u, 0x22299Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22299Cu;
label_22299c:
    // 0x22299c: 0xde030180  ld          $v1, 0x180($s0)
    ctx->pc = 0x22299cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x2229a0: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x2229a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
label_2229a4:
    // 0x2229a4: 0xfec30000  sd          $v1, 0x0($s6)
    ctx->pc = 0x2229a4u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 0), GPR_U64(ctx, 3));
    // 0x2229a8: 0xde620008  ld          $v0, 0x8($s3)
    ctx->pc = 0x2229a8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2229ac: 0xfec20008  sd          $v0, 0x8($s6)
    ctx->pc = 0x2229acu;
    WRITE64(ADD32(GPR_U32(ctx, 22), 8), GPR_U64(ctx, 2));
    // 0x2229b0: 0xde040128  ld          $a0, 0x128($s0)
    ctx->pc = 0x2229b0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x2229b4: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x2229b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2229b8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2229B8u;
    {
        const bool branch_taken_0x2229b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2229b8) {
            ctx->pc = 0x2229BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2229B8u;
            // 0x2229bc: 0xde620000  ld          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2229D0u;
            goto label_2229d0;
        }
    }
    ctx->pc = 0x2229C0u;
    // 0x2229c0: 0xfec40000  sd          $a0, 0x0($s6)
    ctx->pc = 0x2229c0u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 0), GPR_U64(ctx, 4));
    // 0x2229c4: 0xde020130  ld          $v0, 0x130($s0)
    ctx->pc = 0x2229c4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x2229c8: 0xfec20008  sd          $v0, 0x8($s6)
    ctx->pc = 0x2229c8u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 8), GPR_U64(ctx, 2));
    // 0x2229cc: 0xde620000  ld          $v0, 0x0($s3)
    ctx->pc = 0x2229ccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 0)));
label_2229d0:
    // 0x2229d0: 0xfe020108  sd          $v0, 0x108($s0)
    ctx->pc = 0x2229d0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 264), GPR_U64(ctx, 2));
    // 0x2229d4: 0xde630008  ld          $v1, 0x8($s3)
    ctx->pc = 0x2229d4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2229d8: 0xfe030110  sd          $v1, 0x110($s0)
    ctx->pc = 0x2229d8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 272), GPR_U64(ctx, 3));
    // 0x2229dc: 0xdea20000  ld          $v0, 0x0($s5)
    ctx->pc = 0x2229dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2229e0: 0xfe020118  sd          $v0, 0x118($s0)
    ctx->pc = 0x2229e0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 280), GPR_U64(ctx, 2));
    // 0x2229e4: 0xdea30008  ld          $v1, 0x8($s5)
    ctx->pc = 0x2229e4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x2229e8: 0xfe030120  sd          $v1, 0x120($s0)
    ctx->pc = 0x2229e8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 288), GPR_U64(ctx, 3));
    // 0x2229ec: 0xdec20000  ld          $v0, 0x0($s6)
    ctx->pc = 0x2229ecu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2229f0: 0xfe020128  sd          $v0, 0x128($s0)
    ctx->pc = 0x2229f0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 296), GPR_U64(ctx, 2));
    // 0x2229f4: 0xdec30008  ld          $v1, 0x8($s6)
    ctx->pc = 0x2229f4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x2229f8: 0xfe030130  sd          $v1, 0x130($s0)
    ctx->pc = 0x2229f8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 304), GPR_U64(ctx, 3));
    // 0x2229fc: 0xde620000  ld          $v0, 0x0($s3)
    ctx->pc = 0x2229fcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x222a00: 0xdec30000  ld          $v1, 0x0($s6)
    ctx->pc = 0x222a00u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x222a04: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x222a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x222a08: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x222a08u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x222a0c: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x222a0cu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x222a10: 0x5640000b  bnel        $s2, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x222A10u;
    {
        const bool branch_taken_0x222a10 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x222a10) {
            ctx->pc = 0x222A14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x222A10u;
            // 0x222a14: 0x8e0201b4  lw          $v0, 0x1B4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x222A40u;
            goto label_222a40;
        }
    }
    ctx->pc = 0x222A18u;
    // 0x222a18: 0x8e0201ac  lw          $v0, 0x1AC($s0)
    ctx->pc = 0x222a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 428)));
    // 0x222a1c: 0x8e0301b0  lw          $v1, 0x1B0($s0)
    ctx->pc = 0x222a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x222a20: 0xe2202a  slt         $a0, $a3, $v0
    ctx->pc = 0x222a20u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x222a24: 0x67282a  slt         $a1, $v1, $a3
    ctx->pc = 0x222a24u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x222a28: 0xe4100a  movz        $v0, $a3, $a0
    ctx->pc = 0x222a28u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
    // 0x222a2c: 0xe5180a  movz        $v1, $a3, $a1
    ctx->pc = 0x222a2cu;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
    // 0x222a30: 0xae0201ac  sw          $v0, 0x1AC($s0)
    ctx->pc = 0x222a30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 428), GPR_U32(ctx, 2));
    // 0x222a34: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x222A34u;
    {
        const bool branch_taken_0x222a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222A34u;
        // 0x222a38: 0xae0301b0  sw          $v1, 0x1B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222a34) {
            ctx->pc = 0x222A5Cu;
            goto label_222a5c;
        }
    }
    ctx->pc = 0x222A3Cu;
    // 0x222a3c: 0x0  nop
    ctx->pc = 0x222a3cu;
    // NOP
label_222a40:
    // 0x222a40: 0x8e0301b8  lw          $v1, 0x1B8($s0)
    ctx->pc = 0x222a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
    // 0x222a44: 0xe2202a  slt         $a0, $a3, $v0
    ctx->pc = 0x222a44u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x222a48: 0x67282a  slt         $a1, $v1, $a3
    ctx->pc = 0x222a48u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x222a4c: 0xe4100a  movz        $v0, $a3, $a0
    ctx->pc = 0x222a4cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
    // 0x222a50: 0xe5180a  movz        $v1, $a3, $a1
    ctx->pc = 0x222a50u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
    // 0x222a54: 0xae0201b4  sw          $v0, 0x1B4($s0)
    ctx->pc = 0x222a54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 436), GPR_U32(ctx, 2));
    // 0x222a58: 0xae0301b8  sw          $v1, 0x1B8($s0)
    ctx->pc = 0x222a58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 440), GPR_U32(ctx, 3));
label_222a5c:
    // 0x222a5c: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x222a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x222a60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x222a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222a64: 0xac50a238  sw          $s0, -0x5DC8($v0)
    ctx->pc = 0x222a64u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x4BA238u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BA238u, _value); } while (0);
    // 0x222a68: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x222a68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x222a6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x222a6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x222a70: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x222a70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x222a74: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x222a74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x222a78: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x222a78u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x222a7c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x222a7cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x222a80: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x222a80u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x222a84: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x222a84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x222a88: 0x8088b46  j           func_222D18
    ctx->pc = 0x222A88u;
    ctx->pc = 0x222A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222A88u;
    // 0x222a8c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222D18u;
    sub_00222D18_0x222d18(rdram, ctx, runtime); return;
    ctx->pc = 0x222A90u;
}
