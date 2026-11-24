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

// Function: sub_00332380
// Address: 0x332380 - 0x33249c
void sub_00332380_0x332380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00332380_0x332380");
#endif

    switch (ctx->pc) {
        case 0x332418u: goto label_332418;
        case 0x332448u: goto label_332448;
        case 0x332468u: goto label_332468;
        default: break;
    }

    ctx->pc = 0x332380u;

    // 0x332380: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x332380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x332384: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x332384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x332388: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x332388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x33238c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33238cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x332390: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x332390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x332394: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x332394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x332398: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x332398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33239c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x33239cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3323a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3323a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3323a4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3323a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3323a8: 0x9023fc8c  lbu         $v1, -0x374($at)
    ctx->pc = 0x3323a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x81FC8Cu));
    // 0x3323ac: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3323ACu;
    {
        const bool branch_taken_0x3323ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3323B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3323ACu;
        // 0x3323b0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3323ac) {
            ctx->pc = 0x3323C0u;
            goto label_3323c0;
        }
    }
    ctx->pc = 0x3323B4u;
    // 0x3323b4: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x3323B4u;
    {
        const bool branch_taken_0x3323b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3323B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3323B4u;
        // 0x3323b8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3323b4) {
            ctx->pc = 0x332480u;
            goto label_332480;
        }
    }
    ctx->pc = 0x3323BCu;
    // 0x3323bc: 0x0  nop
    ctx->pc = 0x3323bcu;
    // NOP
label_3323c0:
    // 0x3323c0: 0x3224ffff  andi        $a0, $s1, 0xFFFF
    ctx->pc = 0x3323c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x3323c4: 0x30830f00  andi        $v1, $a0, 0xF00
    ctx->pc = 0x3323c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3840);
    // 0x3323c8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3323c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3323cc: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x3323ccu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x3323d0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3323D0u;
    {
        const bool branch_taken_0x3323d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3323D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3323D0u;
        // 0x3323d4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3323d0) {
            ctx->pc = 0x3323E0u;
            goto label_3323e0;
        }
    }
    ctx->pc = 0x3323D8u;
    // 0x3323d8: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x3323D8u;
    {
        const bool branch_taken_0x3323d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3323d8) {
            ctx->pc = 0x332480u;
            goto label_332480;
        }
    }
    ctx->pc = 0x3323E0u;
label_3323e0:
    // 0x3323e0: 0x2482fb00  addiu       $v0, $a0, -0x500
    ctx->pc = 0x3323e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966016));
    // 0x3323e4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3323e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3323e8: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x3323e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x3323ec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3323ECu;
    {
        const bool branch_taken_0x3323ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3323F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3323ECu;
        // 0x3323f0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3323ec) {
            ctx->pc = 0x332400u;
            goto label_332400;
        }
    }
    ctx->pc = 0x3323F4u;
    // 0x3323f4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3323F4u;
    {
        const bool branch_taken_0x3323f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3323f4) {
            ctx->pc = 0x332480u;
            goto label_332480;
        }
    }
    ctx->pc = 0x3323FCu;
    // 0x3323fc: 0x0  nop
    ctx->pc = 0x3323fcu;
    // NOP
label_332400:
    // 0x332400: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x332400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x332404: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x332404u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x332408: 0x2442a1e0  addiu       $v0, $v0, -0x5E20
    ctx->pc = 0x332408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943200));
    // 0x33240c: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x33240cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x332410: 0xc0f8cb8  jal         func_3E32E0
    ctx->pc = 0x332410u;
    SET_GPR_U32(ctx, 31, 0x332418u);
    ctx->pc = 0x332414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332410u;
    // 0x332414: 0x82640000  lb          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E32E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E32E0u, 0x332410u, 0x332418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332418u;
label_332418:
    // 0x332418: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x332418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33241c: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x33241Cu;
    {
        const bool branch_taken_0x33241c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x33241c) {
            ctx->pc = 0x332450u;
            goto label_332450;
        }
    }
    ctx->pc = 0x332424u;
    // 0x332424: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x332424u;
    {
        const bool branch_taken_0x332424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x332424) {
            ctx->pc = 0x332438u;
            goto label_332438;
        }
    }
    ctx->pc = 0x33242Cu;
    // 0x33242c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x33242Cu;
    {
        const bool branch_taken_0x33242c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33242c) {
            ctx->pc = 0x332478u;
            goto label_332478;
        }
    }
    ctx->pc = 0x332434u;
    // 0x332434: 0x0  nop
    ctx->pc = 0x332434u;
    // NOP
label_332438:
    // 0x332438: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x332438u;
    {
        const bool branch_taken_0x332438 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x332438) {
            ctx->pc = 0x332478u;
            goto label_332478;
        }
    }
    ctx->pc = 0x332440u;
    // 0x332440: 0xc0f8c8c  jal         func_3E3230
    ctx->pc = 0x332440u;
    SET_GPR_U32(ctx, 31, 0x332448u);
    ctx->pc = 0x332444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332440u;
    // 0x332444: 0x82640000  lb          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3230u, 0x332440u, 0x332448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332448u;
label_332448:
    // 0x332448: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x332448u;
    {
        const bool branch_taken_0x332448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x332448) {
            ctx->pc = 0x332478u;
            goto label_332478;
        }
    }
    ctx->pc = 0x332450u;
label_332450:
    // 0x332450: 0x96650002  lhu         $a1, 0x2($s3)
    ctx->pc = 0x332450u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x332454: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x332454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x332458: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x332458u;
    {
        const bool branch_taken_0x332458 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x33245Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332458u;
        // 0x33245c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332458) {
            ctx->pc = 0x332478u;
            goto label_332478;
        }
    }
    ctx->pc = 0x332460u;
    // 0x332460: 0xc0bd294  jal         func_2F4A50
    ctx->pc = 0x332460u;
    SET_GPR_U32(ctx, 31, 0x332468u);
    ctx->pc = 0x2F4A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4A50u, 0x332460u, 0x332468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332468u;
label_332468:
    // 0x332468: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x332468u;
    {
        const bool branch_taken_0x332468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x332468) {
            ctx->pc = 0x332478u;
            goto label_332478;
        }
    }
    ctx->pc = 0x332470u;
    // 0x332470: 0x96710002  lhu         $s1, 0x2($s3)
    ctx->pc = 0x332470u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x332474: 0x0  nop
    ctx->pc = 0x332474u;
    // NOP
label_332478:
    // 0x332478: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x332478u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33247c: 0x0  nop
    ctx->pc = 0x33247cu;
    // NOP
label_332480:
    // 0x332480: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x332480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x332484: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x332484u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x332488: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x332488u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33248c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33248cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x332490: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x332490u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x332494: 0x3e00008  jr          $ra
    ctx->pc = 0x332494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x332498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332494u;
        // 0x332498: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x332494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33249Cu;
}
