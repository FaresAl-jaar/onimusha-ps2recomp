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

// Function: sub_002DACA0
// Address: 0x2daca0 - 0x2daf04
void sub_002DACA0_0x2daca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DACA0_0x2daca0");
#endif

    switch (ctx->pc) {
        case 0x2dacd0u: goto label_2dacd0;
        case 0x2dace0u: goto label_2dace0;
        case 0x2dad10u: goto label_2dad10;
        case 0x2dad24u: goto label_2dad24;
        case 0x2dad34u: goto label_2dad34;
        case 0x2dad50u: goto label_2dad50;
        case 0x2dad60u: goto label_2dad60;
        case 0x2dad74u: goto label_2dad74;
        case 0x2dad84u: goto label_2dad84;
        case 0x2dadccu: goto label_2dadcc;
        case 0x2daddcu: goto label_2daddc;
        case 0x2dae00u: goto label_2dae00;
        case 0x2dae10u: goto label_2dae10;
        case 0x2dae2cu: goto label_2dae2c;
        case 0x2dae3cu: goto label_2dae3c;
        case 0x2dae60u: goto label_2dae60;
        case 0x2dae70u: goto label_2dae70;
        case 0x2dae8cu: goto label_2dae8c;
        case 0x2dae9cu: goto label_2dae9c;
        case 0x2daebcu: goto label_2daebc;
        case 0x2daeccu: goto label_2daecc;
        case 0x2daee4u: goto label_2daee4;
        default: break;
    }

    ctx->pc = 0x2daca0u;

    // 0x2daca0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2daca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2daca4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2daca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2daca8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2daca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2dacac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2dacacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2dacb0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2dacb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dacb4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dacb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2dacb8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2dacb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dacbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2dacbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2dacc0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2dacc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dacc4: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2dacc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dacc8: 0xc09d4d4  jal         func_275350
    ctx->pc = 0x2DACC8u;
    SET_GPR_U32(ctx, 31, 0x2DACD0u);
    ctx->pc = 0x2DACCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DACC8u;
    // 0x2daccc: 0x27a400ac  addiu       $a0, $sp, 0xAC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275350u, 0x2DACC8u, 0x2DACD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DACD0u;
label_2dacd0:
    // 0x2dacd0: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DACD0u;
    {
        const bool branch_taken_0x2dacd0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DACD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DACD0u;
        // 0x2dacd4: 0x27a400ac  addiu       $a0, $sp, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dacd0) {
            ctx->pc = 0x2DACE8u;
            goto label_2dace8;
        }
    }
    ctx->pc = 0x2DACD8u;
    // 0x2dacd8: 0xc09d4d8  jal         func_275360
    ctx->pc = 0x2DACD8u;
    SET_GPR_U32(ctx, 31, 0x2DACE0u);
    ctx->pc = 0x2DACDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DACD8u;
    // 0x2dacdc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x2DACD8u, 0x2DACE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DACE0u;
label_2dace0:
    // 0x2dace0: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x2DACE0u;
    {
        const bool branch_taken_0x2dace0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DACE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DACE0u;
        // 0x2dace4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dace0) {
            ctx->pc = 0x2DAEE8u;
            goto label_2daee8;
        }
    }
    ctx->pc = 0x2DACE8u;
label_2dace8:
    // 0x2dace8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x2dace8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2dacec: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x2dacecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x2dacf0: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x2dacf0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2dacf4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2DACF4u;
    {
        const bool branch_taken_0x2dacf4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DACF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DACF4u;
        // 0x2dacf8: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dacf4) {
            ctx->pc = 0x2DAD00u;
            goto label_2dad00;
        }
    }
    ctx->pc = 0x2DACFCu;
    // 0x2dacfc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2dacfcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dad00:
    // 0x2dad00: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DAD00u;
    {
        const bool branch_taken_0x2dad00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DAD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAD00u;
        // 0x2dad04: 0x27a400ac  addiu       $a0, $sp, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dad00) {
            ctx->pc = 0x2DAD18u;
            goto label_2dad18;
        }
    }
    ctx->pc = 0x2DAD08u;
    // 0x2dad08: 0xc09d4d8  jal         func_275360
    ctx->pc = 0x2DAD08u;
    SET_GPR_U32(ctx, 31, 0x2DAD10u);
    ctx->pc = 0x2DAD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAD08u;
    // 0x2dad0c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x2DAD08u, 0x2DAD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAD10u;
label_2dad10:
    // 0x2dad10: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x2DAD10u;
    {
        const bool branch_taken_0x2dad10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAD10u;
        // 0x2dad14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dad10) {
            ctx->pc = 0x2DAEE8u;
            goto label_2daee8;
        }
    }
    ctx->pc = 0x2DAD18u;
label_2dad18:
    // 0x2dad18: 0x8e250190  lw          $a1, 0x190($s1)
    ctx->pc = 0x2dad18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 400)));
    // 0x2dad1c: 0xc09d4fc  jal         func_2753F0
    ctx->pc = 0x2DAD1Cu;
    SET_GPR_U32(ctx, 31, 0x2DAD24u);
    ctx->pc = 0x2DAD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAD1Cu;
    // 0x2dad20: 0x27a400ac  addiu       $a0, $sp, 0xAC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2753F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2753F0u, 0x2DAD1Cu, 0x2DAD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAD24u;
label_2dad24:
    // 0x2dad24: 0x320600ff  andi        $a2, $s0, 0xFF
    ctx->pc = 0x2dad24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2dad28: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x2dad28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x2dad2c: 0xc09d524  jal         func_275490
    ctx->pc = 0x2DAD2Cu;
    SET_GPR_U32(ctx, 31, 0x2DAD34u);
    ctx->pc = 0x2DAD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAD2Cu;
    // 0x2dad30: 0x2405002a  addiu       $a1, $zero, 0x2A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275490u, 0x2DAD2Cu, 0x2DAD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAD34u;
label_2dad34:
    // 0x2dad34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dad34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dad38: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x2DAD38u;
    {
        const bool branch_taken_0x2dad38 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DAD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAD38u;
        // 0x2dad3c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dad38) {
            ctx->pc = 0x2DAD68u;
            goto label_2dad68;
        }
    }
    ctx->pc = 0x2DAD40u;
    // 0x2dad40: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2dad40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dad44: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2dad44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dad48: 0xc0a9198  jal         func_2A4660
    ctx->pc = 0x2DAD48u;
    SET_GPR_U32(ctx, 31, 0x2DAD50u);
    ctx->pc = 0x2DAD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAD48u;
    // 0x2dad4c: 0x26270020  addiu       $a3, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4660u, 0x2DAD48u, 0x2DAD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAD50u;
label_2dad50:
    // 0x2dad50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dad50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dad54: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x2dad54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x2dad58: 0xc09d4d8  jal         func_275360
    ctx->pc = 0x2DAD58u;
    SET_GPR_U32(ctx, 31, 0x2DAD60u);
    ctx->pc = 0x2DAD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAD58u;
    // 0x2dad5c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x2DAD58u, 0x2DAD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAD60u;
label_2dad60:
    // 0x2dad60: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x2DAD60u;
    {
        const bool branch_taken_0x2dad60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAD60u;
        // 0x2dad64: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dad60) {
            ctx->pc = 0x2DAEE8u;
            goto label_2daee8;
        }
    }
    ctx->pc = 0x2DAD68u;
label_2dad68:
    // 0x2dad68: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2dad68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2dad6c: 0xc096d04  jal         func_25B410
    ctx->pc = 0x2DAD6Cu;
    SET_GPR_U32(ctx, 31, 0x2DAD74u);
    ctx->pc = 0x2DAD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAD6Cu;
    // 0x2dad70: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B410u, 0x2DAD6Cu, 0x2DAD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAD74u;
label_2dad74:
    // 0x2dad74: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2dad74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2dad78: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2dad78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2dad7c: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x2DAD7Cu;
    SET_GPR_U32(ctx, 31, 0x2DAD84u);
    ctx->pc = 0x2DAD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAD7Cu;
    // 0x2dad80: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x2DAD7Cu, 0x2DAD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAD84u;
label_2dad84:
    // 0x2dad84: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x2dad84u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2dad88: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x2dad88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    // 0x2dad8c: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x2dad8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x2dad90: 0x2c410006  sltiu       $at, $v0, 0x6
    ctx->pc = 0x2dad90u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x2dad94: 0x10200050  beqz        $at, . + 4 + (0x50 << 2)
    ctx->pc = 0x2DAD94u;
    {
        const bool branch_taken_0x2dad94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAD94u;
        // 0x2dad98: 0x3c030067  lui         $v1, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dad94) {
            ctx->pc = 0x2DAED8u;
            goto label_2daed8;
        }
    }
    ctx->pc = 0x2DAD9Cu;
    // 0x2dad9c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2dad9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2dada0: 0x24637a70  addiu       $v1, $v1, 0x7A70
    ctx->pc = 0x2dada0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31344));
    // 0x2dada4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2dada4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2dada8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2dada8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dadac: 0x400008  jr          $v0
    ctx->pc = 0x2DADACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DADB8u: goto label_2dadb8;
            case 0x2DADE8u: goto label_2dade8;
            case 0x2DAE18u: goto label_2dae18;
            case 0x2DAE48u: goto label_2dae48;
            case 0x2DAE78u: goto label_2dae78;
            case 0x2DAEA8u: goto label_2daea8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DADACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2DADB4u;
    // 0x2dadb4: 0x0  nop
    ctx->pc = 0x2dadb4u;
    // NOP
label_2dadb8:
    // 0x2dadb8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2dadb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dadbc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2dadbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dadc0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2dadc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dadc4: 0xc0a9168  jal         func_2A45A0
    ctx->pc = 0x2DADC4u;
    SET_GPR_U32(ctx, 31, 0x2DADCCu);
    ctx->pc = 0x2DADC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DADC4u;
    // 0x2dadc8: 0x27a70050  addiu       $a3, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A45A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A45A0u, 0x2DADC4u, 0x2DADCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DADCCu;
label_2dadcc:
    // 0x2dadcc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dadccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dadd0: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x2dadd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x2dadd4: 0xc09d4d8  jal         func_275360
    ctx->pc = 0x2DADD4u;
    SET_GPR_U32(ctx, 31, 0x2DADDCu);
    ctx->pc = 0x2DADD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DADD4u;
    // 0x2dadd8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x2DADD4u, 0x2DADDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DADDCu;
label_2daddc:
    // 0x2daddc: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x2DADDCu;
    {
        const bool branch_taken_0x2daddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DADE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DADDCu;
        // 0x2dade0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2daddc) {
            ctx->pc = 0x2DAEE8u;
            goto label_2daee8;
        }
    }
    ctx->pc = 0x2DADE4u;
    // 0x2dade4: 0x0  nop
    ctx->pc = 0x2dade4u;
    // NOP
label_2dade8:
    // 0x2dade8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2dade8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dadec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2dadecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dadf0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2dadf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dadf4: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x2dadf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2dadf8: 0xc0a9134  jal         func_2A44D0
    ctx->pc = 0x2DADF8u;
    SET_GPR_U32(ctx, 31, 0x2DAE00u);
    ctx->pc = 0x2DADFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DADF8u;
    // 0x2dadfc: 0x27a80080  addiu       $t0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A44D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A44D0u, 0x2DADF8u, 0x2DAE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAE00u;
label_2dae00:
    // 0x2dae00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dae00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dae04: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x2dae04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x2dae08: 0xc09d4d8  jal         func_275360
    ctx->pc = 0x2DAE08u;
    SET_GPR_U32(ctx, 31, 0x2DAE10u);
    ctx->pc = 0x2DAE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAE08u;
    // 0x2dae0c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x2DAE08u, 0x2DAE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAE10u;
label_2dae10:
    // 0x2dae10: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x2DAE10u;
    {
        const bool branch_taken_0x2dae10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAE10u;
        // 0x2dae14: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dae10) {
            ctx->pc = 0x2DAEE8u;
            goto label_2daee8;
        }
    }
    ctx->pc = 0x2DAE18u;
label_2dae18:
    // 0x2dae18: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2dae18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dae1c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2dae1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dae20: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2dae20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dae24: 0xc0a9198  jal         func_2A4660
    ctx->pc = 0x2DAE24u;
    SET_GPR_U32(ctx, 31, 0x2DAE2Cu);
    ctx->pc = 0x2DAE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAE24u;
    // 0x2dae28: 0x27a70050  addiu       $a3, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4660u, 0x2DAE24u, 0x2DAE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAE2Cu;
label_2dae2c:
    // 0x2dae2c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dae2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dae30: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x2dae30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x2dae34: 0xc09d4d8  jal         func_275360
    ctx->pc = 0x2DAE34u;
    SET_GPR_U32(ctx, 31, 0x2DAE3Cu);
    ctx->pc = 0x2DAE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAE34u;
    // 0x2dae38: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x2DAE34u, 0x2DAE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAE3Cu;
label_2dae3c:
    // 0x2dae3c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2DAE3Cu;
    {
        const bool branch_taken_0x2dae3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAE3Cu;
        // 0x2dae40: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dae3c) {
            ctx->pc = 0x2DAEE8u;
            goto label_2daee8;
        }
    }
    ctx->pc = 0x2DAE44u;
    // 0x2dae44: 0x0  nop
    ctx->pc = 0x2dae44u;
    // NOP
label_2dae48:
    // 0x2dae48: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2dae48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dae4c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2dae4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dae50: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2dae50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dae54: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x2dae54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2dae58: 0xc0a9220  jal         func_2A4880
    ctx->pc = 0x2DAE58u;
    SET_GPR_U32(ctx, 31, 0x2DAE60u);
    ctx->pc = 0x2DAE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAE58u;
    // 0x2dae5c: 0x27a80080  addiu       $t0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4880u, 0x2DAE58u, 0x2DAE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAE60u;
label_2dae60:
    // 0x2dae60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dae60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dae64: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x2dae64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x2dae68: 0xc09d4d8  jal         func_275360
    ctx->pc = 0x2DAE68u;
    SET_GPR_U32(ctx, 31, 0x2DAE70u);
    ctx->pc = 0x2DAE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAE68u;
    // 0x2dae6c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x2DAE68u, 0x2DAE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAE70u;
label_2dae70:
    // 0x2dae70: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2DAE70u;
    {
        const bool branch_taken_0x2dae70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAE70u;
        // 0x2dae74: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dae70) {
            ctx->pc = 0x2DAEE8u;
            goto label_2daee8;
        }
    }
    ctx->pc = 0x2DAE78u;
label_2dae78:
    // 0x2dae78: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2dae78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dae7c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2dae7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dae80: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2dae80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2dae84: 0xc0a9254  jal         func_2A4950
    ctx->pc = 0x2DAE84u;
    SET_GPR_U32(ctx, 31, 0x2DAE8Cu);
    ctx->pc = 0x2DAE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAE84u;
    // 0x2dae88: 0x27a70080  addiu       $a3, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4950u, 0x2DAE84u, 0x2DAE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAE8Cu;
label_2dae8c:
    // 0x2dae8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dae8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dae90: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x2dae90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x2dae94: 0xc09d4d8  jal         func_275360
    ctx->pc = 0x2DAE94u;
    SET_GPR_U32(ctx, 31, 0x2DAE9Cu);
    ctx->pc = 0x2DAE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAE94u;
    // 0x2dae98: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x2DAE94u, 0x2DAE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAE9Cu;
label_2dae9c:
    // 0x2dae9c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2DAE9Cu;
    {
        const bool branch_taken_0x2dae9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAE9Cu;
        // 0x2daea0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dae9c) {
            ctx->pc = 0x2DAEE8u;
            goto label_2daee8;
        }
    }
    ctx->pc = 0x2DAEA4u;
    // 0x2daea4: 0x0  nop
    ctx->pc = 0x2daea4u;
    // NOP
label_2daea8:
    // 0x2daea8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2daea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2daeac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2daeacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2daeb0: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2daeb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2daeb4: 0xc0a9254  jal         func_2A4950
    ctx->pc = 0x2DAEB4u;
    SET_GPR_U32(ctx, 31, 0x2DAEBCu);
    ctx->pc = 0x2DAEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAEB4u;
    // 0x2daeb8: 0x27a70080  addiu       $a3, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4950u, 0x2DAEB4u, 0x2DAEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAEBCu;
label_2daebc:
    // 0x2daebc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2daebcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2daec0: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x2daec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x2daec4: 0xc09d4d8  jal         func_275360
    ctx->pc = 0x2DAEC4u;
    SET_GPR_U32(ctx, 31, 0x2DAECCu);
    ctx->pc = 0x2DAEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAEC4u;
    // 0x2daec8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x2DAEC4u, 0x2DAECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAECCu;
label_2daecc:
    // 0x2daecc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2DAECCu;
    {
        const bool branch_taken_0x2daecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAECCu;
        // 0x2daed0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2daecc) {
            ctx->pc = 0x2DAEE8u;
            goto label_2daee8;
        }
    }
    ctx->pc = 0x2DAED4u;
    // 0x2daed4: 0x0  nop
    ctx->pc = 0x2daed4u;
    // NOP
label_2daed8:
    // 0x2daed8: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x2daed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x2daedc: 0xc09d4d8  jal         func_275360
    ctx->pc = 0x2DAEDCu;
    SET_GPR_U32(ctx, 31, 0x2DAEE4u);
    ctx->pc = 0x2DAEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAEDCu;
    // 0x2daee0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x2DAEDCu, 0x2DAEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAEE4u;
label_2daee4:
    // 0x2daee4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2daee4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2daee8:
    // 0x2daee8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2daee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2daeec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2daeecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2daef0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2daef0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2daef4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2daef4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2daef8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2daef8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2daefc: 0x3e00008  jr          $ra
    ctx->pc = 0x2DAEFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DAF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAEFCu;
        // 0x2daf00: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DAEFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DAF04u;
}
