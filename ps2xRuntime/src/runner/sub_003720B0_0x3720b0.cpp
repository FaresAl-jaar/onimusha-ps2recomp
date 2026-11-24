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

// Function: sub_003720B0
// Address: 0x3720b0 - 0x372188
void sub_003720B0_0x3720b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003720B0_0x3720b0");
#endif

    switch (ctx->pc) {
        case 0x37212cu: goto label_37212c;
        case 0x372140u: goto label_372140;
        case 0x372160u: goto label_372160;
        default: break;
    }

    ctx->pc = 0x3720b0u;

    // 0x3720b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3720b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3720b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3720b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3720b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3720b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3720bc: 0x9483008c  lhu         $v1, 0x8C($a0)
    ctx->pc = 0x3720bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x3720c0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3720C0u;
    {
        const bool branch_taken_0x3720c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3720C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3720C0u;
        // 0x3720c4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3720c0) {
            ctx->pc = 0x3720F8u;
            goto label_3720f8;
        }
    }
    ctx->pc = 0x3720C8u;
    // 0x3720c8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3720c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3720cc: 0xa603008c  sh          $v1, 0x8C($s0)
    ctx->pc = 0x3720ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 140), (uint16_t)GPR_U32(ctx, 3));
    // 0x3720d0: 0x9603008c  lhu         $v1, 0x8C($s0)
    ctx->pc = 0x3720d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x3720d4: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3720D4u;
    {
        const bool branch_taken_0x3720d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3720d4) {
            ctx->pc = 0x3720F8u;
            goto label_3720f8;
        }
    }
    ctx->pc = 0x3720DCu;
    // 0x3720dc: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x3720dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x3720e0: 0xae030068  sw          $v1, 0x68($s0)
    ctx->pc = 0x3720e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
    // 0x3720e4: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x3720e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x3720e8: 0xae03006c  sw          $v1, 0x6C($s0)
    ctx->pc = 0x3720e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 3));
    // 0x3720ec: 0x92030088  lbu         $v1, 0x88($s0)
    ctx->pc = 0x3720ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x3720f0: 0xa2030070  sb          $v1, 0x70($s0)
    ctx->pc = 0x3720f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 112), (uint8_t)GPR_U32(ctx, 3));
    // 0x3720f4: 0x0  nop
    ctx->pc = 0x3720f4u;
    // NOP
label_3720f8:
    // 0x3720f8: 0x8e050068  lw          $a1, 0x68($s0)
    ctx->pc = 0x3720f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x3720fc: 0x8e030074  lw          $v1, 0x74($s0)
    ctx->pc = 0x3720fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x372100: 0x14a30005  bne         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x372100u;
    {
        const bool branch_taken_0x372100 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x372100) {
            ctx->pc = 0x372118u;
            goto label_372118;
        }
    }
    ctx->pc = 0x372108u;
    // 0x372108: 0x8e04006c  lw          $a0, 0x6C($s0)
    ctx->pc = 0x372108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x37210c: 0x8e030078  lw          $v1, 0x78($s0)
    ctx->pc = 0x37210cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x372110: 0x10830019  beq         $a0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x372110u;
    {
        const bool branch_taken_0x372110 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x372110) {
            ctx->pc = 0x372178u;
            goto label_372178;
        }
    }
    ctx->pc = 0x372118u;
label_372118:
    // 0x372118: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x372118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x37211c: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x37211Cu;
    {
        const bool branch_taken_0x37211c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x372120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37211Cu;
        // 0x372120: 0x3c040089  lui         $a0, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37211c) {
            ctx->pc = 0x372138u;
            goto label_372138;
        }
    }
    ctx->pc = 0x372124u;
    // 0x372124: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x372124u;
    SET_GPR_U32(ctx, 31, 0x37212Cu);
    ctx->pc = 0x372128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372124u;
    // 0x372128: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x372124u, 0x37212Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37212Cu;
label_37212c:
    // 0x37212c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x37212Cu;
    {
        const bool branch_taken_0x37212c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37212c) {
            ctx->pc = 0x372160u;
            goto label_372160;
        }
    }
    ctx->pc = 0x372134u;
    // 0x372134: 0x0  nop
    ctx->pc = 0x372134u;
    // NOP
label_372138:
    // 0x372138: 0xc0ed6ac  jal         func_3B5AB0
    ctx->pc = 0x372138u;
    SET_GPR_U32(ctx, 31, 0x372140u);
    ctx->pc = 0x37213Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372138u;
    // 0x37213c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5AB0u, 0x372138u, 0x372140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372140u;
label_372140:
    // 0x372140: 0x82080070  lb          $t0, 0x70($s0)
    ctx->pc = 0x372140u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x372144: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x372144u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x372148: 0x8e050068  lw          $a1, 0x68($s0)
    ctx->pc = 0x372148u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x37214c: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x37214cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x372150: 0x8e06006c  lw          $a2, 0x6C($s0)
    ctx->pc = 0x372150u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x372154: 0x24070500  addiu       $a3, $zero, 0x500
    ctx->pc = 0x372154u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x372158: 0xc09565c  jal         func_255970
    ctx->pc = 0x372158u;
    SET_GPR_U32(ctx, 31, 0x372160u);
    ctx->pc = 0x37215Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372158u;
    // 0x37215c: 0x27a90020  addiu       $t1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255970u, 0x372158u, 0x372160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372160u;
label_372160:
    // 0x372160: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x372160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x372164: 0xae030074  sw          $v1, 0x74($s0)
    ctx->pc = 0x372164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 3));
    // 0x372168: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x372168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x37216c: 0xae030078  sw          $v1, 0x78($s0)
    ctx->pc = 0x37216cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 3));
    // 0x372170: 0x92030070  lbu         $v1, 0x70($s0)
    ctx->pc = 0x372170u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x372174: 0xa203007c  sb          $v1, 0x7C($s0)
    ctx->pc = 0x372174u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 124), (uint8_t)GPR_U32(ctx, 3));
label_372178:
    // 0x372178: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x372178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37217c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37217cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x372180: 0x3e00008  jr          $ra
    ctx->pc = 0x372180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372180u;
        // 0x372184: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x372188u;
}
