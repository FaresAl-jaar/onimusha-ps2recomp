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

// Function: sub_0035FB00
// Address: 0x35fb00 - 0x35fed0
void sub_0035FB00_0x35fb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035FB00_0x35fb00");
#endif

    switch (ctx->pc) {
        case 0x35fb6cu: goto label_35fb6c;
        case 0x35fb7cu: goto label_35fb7c;
        case 0x35fba8u: goto label_35fba8;
        case 0x35fbd0u: goto label_35fbd0;
        case 0x35fbdcu: goto label_35fbdc;
        case 0x35fbe8u: goto label_35fbe8;
        case 0x35fca8u: goto label_35fca8;
        case 0x35fcf4u: goto label_35fcf4;
        case 0x35fd04u: goto label_35fd04;
        case 0x35fd10u: goto label_35fd10;
        case 0x35fd18u: goto label_35fd18;
        case 0x35fe9cu: goto label_35fe9c;
        case 0x35fec0u: goto label_35fec0;
        default: break;
    }

    ctx->pc = 0x35fb00u;

    // 0x35fb00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35fb00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35fb04: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x35fb04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35fb08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35fb08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35fb0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35fb0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35fb10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35fb10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fb14: 0x90840001  lbu         $a0, 0x1($a0)
    ctx->pc = 0x35fb14u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x35fb18: 0x10830029  beq         $a0, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x35FB18u;
    {
        const bool branch_taken_0x35fb18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x35FB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FB18u;
        // 0x35fb1c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35fb18) {
            ctx->pc = 0x35FBC0u;
            goto label_35fbc0;
        }
    }
    ctx->pc = 0x35FB20u;
    // 0x35fb20: 0x10830023  beq         $a0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x35FB20u;
    {
        const bool branch_taken_0x35fb20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35fb20) {
            ctx->pc = 0x35FBB0u;
            goto label_35fbb0;
        }
    }
    ctx->pc = 0x35FB28u;
    // 0x35fb28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35fb28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35fb2c: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x35FB2Cu;
    {
        const bool branch_taken_0x35fb2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35fb2c) {
            ctx->pc = 0x35FB70u;
            goto label_35fb70;
        }
    }
    ctx->pc = 0x35FB34u;
    // 0x35fb34: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35FB34u;
    {
        const bool branch_taken_0x35fb34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x35fb34) {
            ctx->pc = 0x35FB48u;
            goto label_35fb48;
        }
    }
    ctx->pc = 0x35FB3Cu;
    // 0x35fb3c: 0x100000e0  b           . + 4 + (0xE0 << 2)
    ctx->pc = 0x35FB3Cu;
    {
        const bool branch_taken_0x35fb3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35fb3c) {
            ctx->pc = 0x35FEC0u;
            goto label_35fec0;
        }
    }
    ctx->pc = 0x35FB44u;
    // 0x35fb44: 0x0  nop
    ctx->pc = 0x35fb44u;
    // NOP
label_35fb48:
    // 0x35fb48: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x35fb48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x35fb4c: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x35fb4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x35fb50: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x35fb50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x35fb54: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x35fb54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x35fb58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35fb58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fb5c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x35fb5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fb60: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x35fb60u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fb64: 0xc063cd0  jal         func_18F340
    ctx->pc = 0x35FB64u;
    SET_GPR_U32(ctx, 31, 0x35FB6Cu);
    ctx->pc = 0x35FB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FB64u;
    // 0x35fb68: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F340u, 0x35FB64u, 0x35FB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FB6Cu;
label_35fb6c:
    // 0x35fb6c: 0x0  nop
    ctx->pc = 0x35fb6cu;
    // NOP
label_35fb70:
    // 0x35fb70: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x35fb70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x35fb74: 0xc063d48  jal         func_18F520
    ctx->pc = 0x35FB74u;
    SET_GPR_U32(ctx, 31, 0x35FB7Cu);
    ctx->pc = 0x35FB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FB74u;
    // 0x35fb78: 0x2484cbe0  addiu       $a0, $a0, -0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F520u, 0x35FB74u, 0x35FB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FB7Cu;
label_35fb7c:
    // 0x35fb7c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x35FB7Cu;
    {
        const bool branch_taken_0x35fb7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35FB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FB7Cu;
        // 0x35fb80: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35fb7c) {
            ctx->pc = 0x35FBA0u;
            goto label_35fba0;
        }
    }
    ctx->pc = 0x35FB84u;
    // 0x35fb84: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x35fb84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x35fb88: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x35fb88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x35fb8c: 0x9023feea  lbu         $v1, -0x116($at)
    ctx->pc = 0x35fb8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x92FEEAu));
    // 0x35fb90: 0x306300fe  andi        $v1, $v1, 0xFE
    ctx->pc = 0x35fb90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)254);
    // 0x35fb94: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x35fb94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x35fb98: 0x100000c9  b           . + 4 + (0xC9 << 2)
    ctx->pc = 0x35FB98u;
    {
        const bool branch_taken_0x35fb98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35FB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FB98u;
        // 0x35fb9c: 0xa023feea  sb          $v1, -0x116($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294967018), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35fb98) {
            ctx->pc = 0x35FEC0u;
            goto label_35fec0;
        }
    }
    ctx->pc = 0x35FBA0u;
label_35fba0:
    // 0x35fba0: 0xc0d8028  jal         func_3600A0
    ctx->pc = 0x35FBA0u;
    SET_GPR_U32(ctx, 31, 0x35FBA8u);
    ctx->pc = 0x35FBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FBA0u;
    // 0x35fba4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3600A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3600A0u, 0x35FBA0u, 0x35FBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FBA8u;
label_35fba8:
    // 0x35fba8: 0x100000c5  b           . + 4 + (0xC5 << 2)
    ctx->pc = 0x35FBA8u;
    {
        const bool branch_taken_0x35fba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35fba8) {
            ctx->pc = 0x35FEC0u;
            goto label_35fec0;
        }
    }
    ctx->pc = 0x35FBB0u;
label_35fbb0:
    // 0x35fbb0: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x35fbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x35fbb4: 0x100000c2  b           . + 4 + (0xC2 << 2)
    ctx->pc = 0x35FBB4u;
    {
        const bool branch_taken_0x35fbb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35FBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FBB4u;
        // 0x35fbb8: 0xa2030001  sb          $v1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35fbb4) {
            ctx->pc = 0x35FEC0u;
            goto label_35fec0;
        }
    }
    ctx->pc = 0x35FBBCu;
    // 0x35fbbc: 0x0  nop
    ctx->pc = 0x35fbbcu;
    // NOP
label_35fbc0:
    // 0x35fbc0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x35fbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x35fbc4: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x35fbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x35fbc8: 0xc05ee50  jal         func_17B940
    ctx->pc = 0x35FBC8u;
    SET_GPR_U32(ctx, 31, 0x35FBD0u);
    ctx->pc = 0x35FBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FBC8u;
    // 0x35fbcc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B940u, 0x35FBC8u, 0x35FBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FBD0u;
label_35fbd0:
    // 0x35fbd0: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x35fbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x35fbd4: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x35FBD4u;
    SET_GPR_U32(ctx, 31, 0x35FBDCu);
    ctx->pc = 0x35FBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FBD4u;
    // 0x35fbd8: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x35FBD4u, 0x35FBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FBDCu;
label_35fbdc:
    // 0x35fbdc: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x35fbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x35fbe0: 0xc095128  jal         func_2544A0
    ctx->pc = 0x35FBE0u;
    SET_GPR_U32(ctx, 31, 0x35FBE8u);
    ctx->pc = 0x35FBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FBE0u;
    // 0x35fbe4: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2544A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2544A0u, 0x35FBE0u, 0x35FBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FBE8u;
label_35fbe8:
    // 0x35fbe8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35fbe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35fbec: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x35fbecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x35fbf0: 0x8c2bceb8  lw          $t3, -0x3148($at)
    ctx->pc = 0x35fbf0u;
    SET_GPR_S32(ctx, 11, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x35fbf4: 0x3446ffff  ori         $a2, $v0, 0xFFFF
    ctx->pc = 0x35fbf4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x35fbf8: 0x3c02f00f  lui         $v0, 0xF00F
    ctx->pc = 0x35fbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61455 << 16));
    // 0x35fbfc: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x35fbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x35fc00: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x35fc00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x35fc04: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x35fc04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x35fc08: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35fc08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35fc0c: 0x1665824  and         $t3, $t3, $a2
    ctx->pc = 0x35fc0cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 6));
    // 0x35fc10: 0x8c25cec4  lw          $a1, -0x313C($at)
    ctx->pc = 0x35fc10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954692)));
    // 0x35fc14: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35fc14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35fc18: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x35fc18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x35fc1c: 0x8c2acec8  lw          $t2, -0x3138($at)
    ctx->pc = 0x35fc1cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954696)));
    // 0x35fc20: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35fc20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35fc24: 0x8c29cecc  lw          $t1, -0x3134($at)
    ctx->pc = 0x35fc24u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x81CECCu));
    // 0x35fc28: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35fc28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35fc2c: 0x8c28ced0  lw          $t0, -0x3130($at)
    ctx->pc = 0x35fc2cu;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x81CED0u));
    // 0x35fc30: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35fc30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35fc34: 0x8c27ced8  lw          $a3, -0x3128($at)
    ctx->pc = 0x35fc34u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x81CED8u));
    // 0x35fc38: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35fc38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35fc3c: 0x8c26cedc  lw          $a2, -0x3124($at)
    ctx->pc = 0x35fc3cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81CEDCu));
    // 0x35fc40: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35fc40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35fc44: 0xac2bceb8  sw          $t3, -0x3148($at)
    ctx->pc = 0x35fc44u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x81CEB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEB8u, _value); } while (0);
    // 0x35fc48: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35fc48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35fc4c: 0xac24cec4  sw          $a0, -0x313C($at)
    ctx->pc = 0x35fc4cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x81CEC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC4u, _value); } while (0);
    // 0x35fc50: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35fc50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35fc54: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x35fc54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x35fc58: 0x8c2bcec4  lw          $t3, -0x313C($at)
    ctx->pc = 0x35fc58u;
    SET_GPR_S32(ctx, 11, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x35fc5c: 0x24846ac0  addiu       $a0, $a0, 0x6AC0
    ctx->pc = 0x35fc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27328));
    // 0x35fc60: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35fc60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35fc64: 0x16a5025  or          $t2, $t3, $t2
    ctx->pc = 0x35fc64u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) | GPR_U64(ctx, 10));
    // 0x35fc68: 0x8c25cebc  lw          $a1, -0x3144($at)
    ctx->pc = 0x35fc68u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x35fc6c: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x35fc6cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x35fc70: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x35fc70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x35fc74: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35fc74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35fc78: 0xac23cebc  sw          $v1, -0x3144($at)
    ctx->pc = 0x35fc78u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x35fc7c: 0x1092825  or          $a1, $t0, $t1
    ctx->pc = 0x35fc7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x35fc80: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35fc80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35fc84: 0xe52825  or          $a1, $a3, $a1
    ctx->pc = 0x35fc84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
    // 0x35fc88: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x35fc88u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x35fc8c: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x35fc8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x35fc90: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35fc90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35fc94: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x35fc94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x35fc98: 0xac25cec0  sw          $a1, -0x3140($at)
    ctx->pc = 0x35fc98u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954688), GPR_U32(ctx, 5));
    // 0x35fc9c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35fc9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35fca0: 0xc054568  jal         func_1515A0
    ctx->pc = 0x35FCA0u;
    SET_GPR_U32(ctx, 31, 0x35FCA8u);
    ctx->pc = 0x35FCA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FCA0u;
    // 0x35fca4: 0xac22cebc  sw          $v0, -0x3144($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1515A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1515A0u, 0x35FCA0u, 0x35FCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FCA8u;
label_35fca8:
    // 0x35fca8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x35FCA8u;
    {
        const bool branch_taken_0x35fca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35FCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FCA8u;
        // 0x35fcac: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35fca8) {
            ctx->pc = 0x35FCC8u;
            goto label_35fcc8;
        }
    }
    ctx->pc = 0x35FCB0u;
    // 0x35fcb0: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x35fcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x35fcb4: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x35fcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
    // 0x35fcb8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x35fcb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x35fcbc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x35fcbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x35fcc0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35fcc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35fcc4: 0xac22cebc  sw          $v0, -0x3144($at)
    ctx->pc = 0x35fcc4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
label_35fcc8:
    // 0x35fcc8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35fcc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35fccc: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x35fcccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x35fcd0: 0x3c02ffbf  lui         $v0, 0xFFBF
    ctx->pc = 0x35fcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65471 << 16));
    // 0x35fcd4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x35fcd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x35fcd8: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x35fcd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x35fcdc: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x35fcdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x35fce0: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x35fce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x35fce4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x35fce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x35fce8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35fce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35fcec: 0xc04ca38  jal         func_1328E0
    ctx->pc = 0x35FCECu;
    SET_GPR_U32(ctx, 31, 0x35FCF4u);
    ctx->pc = 0x35FCF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FCECu;
    // 0x35fcf0: 0xac22ceb8  sw          $v0, -0x3148($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954680), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x35FCECu, 0x35FCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FCF4u;
label_35fcf4:
    // 0x35fcf4: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x35fcf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x35fcf8: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x35fcf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x35fcfc: 0xc04ca38  jal         func_1328E0
    ctx->pc = 0x35FCFCu;
    SET_GPR_U32(ctx, 31, 0x35FD04u);
    ctx->pc = 0x35FD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FCFCu;
    // 0x35fd00: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x35FCFCu, 0x35FD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FD04u;
label_35fd04:
    // 0x35fd04: 0x278485b0  addiu       $a0, $gp, -0x7A50
    ctx->pc = 0x35fd04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    // 0x35fd08: 0xc054ddc  jal         func_153770
    ctx->pc = 0x35FD08u;
    SET_GPR_U32(ctx, 31, 0x35FD10u);
    ctx->pc = 0x35FD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FD08u;
    // 0x35fd0c: 0x3c0501b2  lui         $a1, 0x1B2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)434 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153770u, 0x35FD08u, 0x35FD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FD10u;
label_35fd10:
    // 0x35fd10: 0xc0550b4  jal         func_1542D0
    ctx->pc = 0x35FD10u;
    SET_GPR_U32(ctx, 31, 0x35FD18u);
    ctx->pc = 0x35FD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FD10u;
    // 0x35fd14: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1542D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1542D0u, 0x35FD10u, 0x35FD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FD18u;
label_35fd18:
    // 0x35fd18: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35fd18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35fd1c: 0x2402f7ff  addiu       $v0, $zero, -0x801
    ctx->pc = 0x35fd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
    // 0x35fd20: 0x8c28cebc  lw          $t0, -0x3144($at)
    ctx->pc = 0x35fd20u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x35fd24: 0x2407fbff  addiu       $a3, $zero, -0x401
    ctx->pc = 0x35fd24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966271));
    // 0x35fd28: 0x2406fdff  addiu       $a2, $zero, -0x201
    ctx->pc = 0x35fd28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
    // 0x35fd2c: 0x2405ff7f  addiu       $a1, $zero, -0x81
    ctx->pc = 0x35fd2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x35fd30: 0x2404ffbf  addiu       $a0, $zero, -0x41
    ctx->pc = 0x35fd30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x35fd34: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x35fd34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x35fd38: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35fd38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35fd3c: 0x8707c  dsll32      $t6, $t0, 1
    ctx->pc = 0x35fd3cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 8) << (32 + 1));
    // 0x35fd40: 0x8c2dcec4  lw          $t5, -0x313C($at)
    ctx->pc = 0x35fd40u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954692)));
    // 0x35fd44: 0xe707e  dsrl32      $t6, $t6, 1
    ctx->pc = 0x35fd44u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> (32 + 1));
    // 0x35fd48: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35fd48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35fd4c: 0x1a21024  and         $v0, $t5, $v0
    ctx->pc = 0x35fd4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) & GPR_U64(ctx, 2));
    // 0x35fd50: 0x8c2ccec8  lw          $t4, -0x3138($at)
    ctx->pc = 0x35fd50u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954696)));
    // 0x35fd54: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35fd54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35fd58: 0x8c2bcecc  lw          $t3, -0x3134($at)
    ctx->pc = 0x35fd58u;
    SET_GPR_S32(ctx, 11, (int32_t)FAST_READ32(0x81CECCu));
    // 0x35fd5c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35fd5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35fd60: 0x8c2aced0  lw          $t2, -0x3130($at)
    ctx->pc = 0x35fd60u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x81CED0u));
    // 0x35fd64: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35fd64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35fd68: 0x8c29ced8  lw          $t1, -0x3128($at)
    ctx->pc = 0x35fd68u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x81CED8u));
    // 0x35fd6c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35fd6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35fd70: 0x8c28cedc  lw          $t0, -0x3124($at)
    ctx->pc = 0x35fd70u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x81CEDCu));
    // 0x35fd74: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35fd74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35fd78: 0xac2ecebc  sw          $t6, -0x3144($at)
    ctx->pc = 0x35fd78u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x35fd7c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35fd7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35fd80: 0xac22cec4  sw          $v0, -0x313C($at)
    ctx->pc = 0x35fd80u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC4u, _value); } while (0);
    // 0x35fd84: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35fd84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35fd88: 0x2402ffef  addiu       $v0, $zero, -0x11
    ctx->pc = 0x35fd88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x35fd8c: 0x8c2dcec4  lw          $t5, -0x313C($at)
    ctx->pc = 0x35fd8cu;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x35fd90: 0x1a73824  and         $a3, $t5, $a3
    ctx->pc = 0x35fd90u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 13) & GPR_U64(ctx, 7));
    // 0x35fd94: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35fd94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35fd98: 0xac27cec4  sw          $a3, -0x313C($at)
    ctx->pc = 0x35fd98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x81CEC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC4u, _value); } while (0);
    // 0x35fd9c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35fd9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35fda0: 0x8c27cec4  lw          $a3, -0x313C($at)
    ctx->pc = 0x35fda0u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x35fda4: 0xe63024  and         $a2, $a3, $a2
    ctx->pc = 0x35fda4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
    // 0x35fda8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35fda8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35fdac: 0xac26cec4  sw          $a2, -0x313C($at)
    ctx->pc = 0x35fdacu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x81CEC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC4u, _value); } while (0);
    // 0x35fdb0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35fdb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35fdb4: 0x8c26cec4  lw          $a2, -0x313C($at)
    ctx->pc = 0x35fdb4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x35fdb8: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x35fdb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x35fdbc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35fdbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35fdc0: 0xac25cec4  sw          $a1, -0x313C($at)
    ctx->pc = 0x35fdc0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x81CEC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC4u, _value); } while (0);
    // 0x35fdc4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35fdc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35fdc8: 0x8c25cec4  lw          $a1, -0x313C($at)
    ctx->pc = 0x35fdc8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x35fdcc: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x35fdccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x35fdd0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35fdd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35fdd4: 0xac24cec4  sw          $a0, -0x313C($at)
    ctx->pc = 0x35fdd4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x81CEC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC4u, _value); } while (0);
    // 0x35fdd8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35fdd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35fddc: 0x8c24cec4  lw          $a0, -0x313C($at)
    ctx->pc = 0x35fddcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x35fde0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x35fde0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x35fde4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35fde4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35fde8: 0xac23cec4  sw          $v1, -0x313C($at)
    ctx->pc = 0x35fde8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC4u, _value); } while (0);
    // 0x35fdec: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35fdecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35fdf0: 0x8c23cec4  lw          $v1, -0x313C($at)
    ctx->pc = 0x35fdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x35fdf4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x35fdf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x35fdf8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35fdf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35fdfc: 0xac22cec4  sw          $v0, -0x313C($at)
    ctx->pc = 0x35fdfcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC4u, _value); } while (0);
    // 0x35fe00: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35fe00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35fe04: 0x8c22cec4  lw          $v0, -0x313C($at)
    ctx->pc = 0x35fe04u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x35fe08: 0x4c1025  or          $v0, $v0, $t4
    ctx->pc = 0x35fe08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 12));
    // 0x35fe0c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35fe0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35fe10: 0x1621025  or          $v0, $t3, $v0
    ctx->pc = 0x35fe10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
    // 0x35fe14: 0x1421025  or          $v0, $t2, $v0
    ctx->pc = 0x35fe14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x35fe18: 0x1221025  or          $v0, $t1, $v0
    ctx->pc = 0x35fe18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x35fe1c: 0x1021025  or          $v0, $t0, $v0
    ctx->pc = 0x35fe1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x35fe20: 0xac22cec0  sw          $v0, -0x3140($at)
    ctx->pc = 0x35fe20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC0u, _value); } while (0);
    // 0x35fe24: 0x82020007  lb          $v0, 0x7($s0)
    ctx->pc = 0x35fe24u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x35fe28: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x35FE28u;
    {
        const bool branch_taken_0x35fe28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35fe28) {
            ctx->pc = 0x35FEA8u;
            goto label_35fea8;
        }
    }
    ctx->pc = 0x35FE30u;
    // 0x35fe30: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x35fe30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x35fe34: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x35fe34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x35fe38: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x35fe38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x35fe3c: 0x304200e7  andi        $v0, $v0, 0xE7
    ctx->pc = 0x35fe3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)231);
    // 0x35fe40: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x35fe40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x35fe44: 0x82020006  lb          $v0, 0x6($s0)
    ctx->pc = 0x35fe44u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x35fe48: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x35FE48u;
    {
        const bool branch_taken_0x35fe48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35fe48) {
            ctx->pc = 0x35FE60u;
            goto label_35fe60;
        }
    }
    ctx->pc = 0x35FE50u;
    // 0x35fe50: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x35fe50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x35fe54: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x35fe54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x35fe58: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x35fe58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x35fe5c: 0x0  nop
    ctx->pc = 0x35fe5cu;
    // NOP
label_35fe60:
    // 0x35fe60: 0x82020006  lb          $v0, 0x6($s0)
    ctx->pc = 0x35fe60u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x35fe64: 0x28410006  slti        $at, $v0, 0x6
    ctx->pc = 0x35fe64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x35fe68: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x35FE68u;
    {
        const bool branch_taken_0x35fe68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x35fe68) {
            ctx->pc = 0x35FE90u;
            goto label_35fe90;
        }
    }
    ctx->pc = 0x35FE70u;
    // 0x35fe70: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x35fe70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x35fe74: 0x80421f91  lb          $v0, 0x1F91($v0)
    ctx->pc = 0x35fe74u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 8081)));
    // 0x35fe78: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x35FE78u;
    {
        const bool branch_taken_0x35fe78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35fe78) {
            ctx->pc = 0x35FE90u;
            goto label_35fe90;
        }
    }
    ctx->pc = 0x35FE80u;
    // 0x35fe80: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x35fe80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x35fe84: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x35fe84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x35fe88: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x35fe88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x35fe8c: 0x0  nop
    ctx->pc = 0x35fe8cu;
    // NOP
label_35fe90:
    // 0x35fe90: 0x82050007  lb          $a1, 0x7($s0)
    ctx->pc = 0x35fe90u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x35fe94: 0xc0d7c14  jal         func_35F050
    ctx->pc = 0x35FE94u;
    SET_GPR_U32(ctx, 31, 0x35FE9Cu);
    ctx->pc = 0x35FE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FE94u;
    // 0x35fe98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35F050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35F050u, 0x35FE94u, 0x35FE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FE9Cu;
label_35fe9c:
    // 0x35fe9c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x35FE9Cu;
    {
        const bool branch_taken_0x35fe9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35FEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FE9Cu;
        // 0x35fea0: 0xa2000007  sb          $zero, 0x7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35fe9c) {
            ctx->pc = 0x35FEC0u;
            goto label_35fec0;
        }
    }
    ctx->pc = 0x35FEA4u;
    // 0x35fea4: 0x0  nop
    ctx->pc = 0x35fea4u;
    // NOP
label_35fea8:
    // 0x35fea8: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x35fea8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x35feac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35feacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35feb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35feb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35feb4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x35feb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x35feb8: 0xc0d7c14  jal         func_35F050
    ctx->pc = 0x35FEB8u;
    SET_GPR_U32(ctx, 31, 0x35FEC0u);
    ctx->pc = 0x35FEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FEB8u;
    // 0x35febc: 0xa2020002  sb          $v0, 0x2($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35F050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35F050u, 0x35FEB8u, 0x35FEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FEC0u;
label_35fec0:
    // 0x35fec0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35fec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35fec4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35fec4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35fec8: 0x3e00008  jr          $ra
    ctx->pc = 0x35FEC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35FECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FEC8u;
        // 0x35fecc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35FEC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35FED0u;
}
