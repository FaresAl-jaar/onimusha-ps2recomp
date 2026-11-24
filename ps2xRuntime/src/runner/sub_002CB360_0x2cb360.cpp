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

// Function: sub_002CB360
// Address: 0x2cb360 - 0x2cb48c
void sub_002CB360_0x2cb360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB360_0x2cb360");
#endif

    switch (ctx->pc) {
        case 0x2cb390u: goto label_2cb390;
        case 0x2cb410u: goto label_2cb410;
        default: break;
    }

    ctx->pc = 0x2cb360u;

    // 0x2cb360: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2cb360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2cb364: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2cb364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2cb368: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2cb368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2cb36c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2cb36cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2cb370: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cb370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2cb374: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2cb374u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb378: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cb378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cb37c: 0x8c246a9c  lw          $a0, 0x6A9C($at)
    ctx->pc = 0x2cb37cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8D6A9Cu));
    // 0x2cb380: 0xa3808a28  sb          $zero, -0x75D8($gp)
    ctx->pc = 0x2cb380u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937128), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cb384: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2cb384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2cb388: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x2CB388u;
    {
        const bool branch_taken_0x2cb388 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB388u;
        // 0x2cb38c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb388) {
            ctx->pc = 0x2CB420u;
            goto label_2cb420;
        }
    }
    ctx->pc = 0x2CB390u;
label_2cb390:
    // 0x2cb390: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x2cb390u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2cb394: 0x9485000a  lhu         $a1, 0xA($a0)
    ctx->pc = 0x2cb394u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x2cb398: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2cb398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cb39c: 0x8c90000c  lw          $s0, 0xC($a0)
    ctx->pc = 0x2cb39cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2cb3a0: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CB3A0u;
    {
        const bool branch_taken_0x2cb3a0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x2CB3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB3A0u;
        // 0x2cb3a4: 0x2268825  or          $s1, $s1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb3a0) {
            ctx->pc = 0x2CB3B0u;
            goto label_2cb3b0;
        }
    }
    ctx->pc = 0x2CB3A8u;
    // 0x2cb3a8: 0xa3838a28  sb          $v1, -0x75D8($gp)
    ctx->pc = 0x2cb3a8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937128), (uint8_t)GPR_U32(ctx, 3));
    // 0x2cb3ac: 0x0  nop
    ctx->pc = 0x2cb3acu;
    // NOP
label_2cb3b0:
    // 0x2cb3b0: 0x12400017  beqz        $s2, . + 4 + (0x17 << 2)
    ctx->pc = 0x2CB3B0u;
    {
        const bool branch_taken_0x2cb3b0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb3b0) {
            ctx->pc = 0x2CB410u;
            goto label_2cb410;
        }
    }
    ctx->pc = 0x2CB3B8u;
    // 0x2cb3b8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2cb3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2cb3bc: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2CB3BCu;
    {
        const bool branch_taken_0x2cb3bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb3bc) {
            ctx->pc = 0x2CB410u;
            goto label_2cb410;
        }
    }
    ctx->pc = 0x2CB3C4u;
    // 0x2cb3c4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2cb3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2cb3c8: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2CB3C8u;
    {
        const bool branch_taken_0x2cb3c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CB3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB3C8u;
        // 0x2cb3cc: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb3c8) {
            ctx->pc = 0x2CB410u;
            goto label_2cb410;
        }
    }
    ctx->pc = 0x2CB3D0u;
    // 0x2cb3d0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2cb3d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2cb3d4: 0x9025657f  lbu         $a1, 0x657F($at)
    ctx->pc = 0x2cb3d4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x8D657Fu));
    // 0x2cb3d8: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2cb3d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2cb3dc: 0x90226580  lbu         $v0, 0x6580($at)
    ctx->pc = 0x2cb3dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x8D6580u));
    // 0x2cb3e0: 0xa2082a  slt         $at, $a1, $v0
    ctx->pc = 0x2cb3e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2cb3e4: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CB3E4u;
    {
        const bool branch_taken_0x2cb3e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB3E4u;
        // 0x2cb3e8: 0x94860008  lhu         $a2, 0x8($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb3e4) {
            ctx->pc = 0x2CB408u;
            goto label_2cb408;
        }
    }
    ctx->pc = 0x2CB3ECu;
    // 0x2cb3ec: 0x3c02008d  lui         $v0, 0x8D
    ctx->pc = 0x2cb3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)141 << 16));
    // 0x2cb3f0: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x2cb3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2cb3f4: 0x24426480  addiu       $v0, $v0, 0x6480
    ctx->pc = 0x2cb3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25728));
    // 0x2cb3f8: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2cb3f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2cb3fc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2cb3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2cb400: 0xa023657f  sb          $v1, 0x657F($at)
    ctx->pc = 0x2cb400u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8D657Fu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8D657Fu, _value); } while (0);
    // 0x2cb404: 0xa0460000  sb          $a2, 0x0($v0)
    ctx->pc = 0x2cb404u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 6));
label_2cb408:
    // 0x2cb408: 0xc0b2cb0  jal         func_2CB2C0
    ctx->pc = 0x2CB408u;
    SET_GPR_U32(ctx, 31, 0x2CB410u);
    ctx->pc = 0x2CB2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB2C0u, 0x2CB408u, 0x2CB410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB410u;
label_2cb410:
    // 0x2cb410: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2cb410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2cb414: 0x1460ffde  bnez        $v1, . + 4 + (-0x22 << 2)
    ctx->pc = 0x2CB414u;
    {
        const bool branch_taken_0x2cb414 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CB418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB414u;
        // 0x2cb418: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb414) {
            ctx->pc = 0x2CB390u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cb390;
        }
    }
    ctx->pc = 0x2CB41Cu;
    // 0x2cb41c: 0x0  nop
    ctx->pc = 0x2cb41cu;
    // NOP
label_2cb420:
    // 0x2cb420: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2cb420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2cb424: 0xac31ced0  sw          $s1, -0x3130($at)
    ctx->pc = 0x2cb424u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x81CED0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CED0u, _value); } while (0);
    // 0x2cb428: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2cb428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2cb42c: 0x8c28cec4  lw          $t0, -0x313C($at)
    ctx->pc = 0x2cb42cu;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x2cb430: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2cb430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2cb434: 0x8c27cec8  lw          $a3, -0x3138($at)
    ctx->pc = 0x2cb434u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x81CEC8u));
    // 0x2cb438: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2cb438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2cb43c: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x2cb43cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x2cb440: 0x8c26cecc  lw          $a2, -0x3134($at)
    ctx->pc = 0x2cb440u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81CECCu));
    // 0x2cb444: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2cb444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2cb448: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x2cb448u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x2cb44c: 0x8c25ced0  lw          $a1, -0x3130($at)
    ctx->pc = 0x2cb44cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81CED0u));
    // 0x2cb450: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2cb450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2cb454: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x2cb454u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x2cb458: 0x8c24ced8  lw          $a0, -0x3128($at)
    ctx->pc = 0x2cb458u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CED8u));
    // 0x2cb45c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2cb45cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2cb460: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x2cb460u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x2cb464: 0x8c23cedc  lw          $v1, -0x3124($at)
    ctx->pc = 0x2cb464u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEDCu));
    // 0x2cb468: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2cb468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2cb46c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2cb46cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2cb470: 0xac23cec0  sw          $v1, -0x3140($at)
    ctx->pc = 0x2cb470u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC0u, _value); } while (0);
    // 0x2cb474: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2cb474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cb478: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2cb478u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cb47c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cb47cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cb480: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cb480u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cb484: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB484u;
        // 0x2cb488: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB48Cu;
}
