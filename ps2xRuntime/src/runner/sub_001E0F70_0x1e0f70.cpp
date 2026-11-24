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

// Function: sub_001E0F70
// Address: 0x1e0f70 - 0x1e1050
void sub_001E0F70_0x1e0f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0F70_0x1e0f70");
#endif

    switch (ctx->pc) {
        case 0x1e0f70u: goto label_1e0f70;
        case 0x1e0f74u: goto label_1e0f74;
        case 0x1e0f78u: goto label_1e0f78;
        case 0x1e0f7cu: goto label_1e0f7c;
        case 0x1e0f80u: goto label_1e0f80;
        case 0x1e0f84u: goto label_1e0f84;
        case 0x1e0f88u: goto label_1e0f88;
        case 0x1e0f8cu: goto label_1e0f8c;
        case 0x1e0f90u: goto label_1e0f90;
        case 0x1e0f94u: goto label_1e0f94;
        case 0x1e0f98u: goto label_1e0f98;
        case 0x1e0f9cu: goto label_1e0f9c;
        case 0x1e0fa0u: goto label_1e0fa0;
        case 0x1e0fa4u: goto label_1e0fa4;
        case 0x1e0fa8u: goto label_1e0fa8;
        case 0x1e0facu: goto label_1e0fac;
        case 0x1e0fb0u: goto label_1e0fb0;
        case 0x1e0fb4u: goto label_1e0fb4;
        case 0x1e0fb8u: goto label_1e0fb8;
        case 0x1e0fbcu: goto label_1e0fbc;
        case 0x1e0fc0u: goto label_1e0fc0;
        case 0x1e0fc4u: goto label_1e0fc4;
        case 0x1e0fc8u: goto label_1e0fc8;
        case 0x1e0fccu: goto label_1e0fcc;
        case 0x1e0fd0u: goto label_1e0fd0;
        case 0x1e0fd4u: goto label_1e0fd4;
        case 0x1e0fd8u: goto label_1e0fd8;
        case 0x1e0fdcu: goto label_1e0fdc;
        case 0x1e0fe0u: goto label_1e0fe0;
        case 0x1e0fe4u: goto label_1e0fe4;
        case 0x1e0fe8u: goto label_1e0fe8;
        case 0x1e0fecu: goto label_1e0fec;
        case 0x1e0ff0u: goto label_1e0ff0;
        case 0x1e0ff4u: goto label_1e0ff4;
        case 0x1e0ff8u: goto label_1e0ff8;
        case 0x1e0ffcu: goto label_1e0ffc;
        case 0x1e1000u: goto label_1e1000;
        case 0x1e1004u: goto label_1e1004;
        case 0x1e1008u: goto label_1e1008;
        case 0x1e100cu: goto label_1e100c;
        case 0x1e1010u: goto label_1e1010;
        case 0x1e1014u: goto label_1e1014;
        case 0x1e1018u: goto label_1e1018;
        case 0x1e101cu: goto label_1e101c;
        case 0x1e1020u: goto label_1e1020;
        case 0x1e1024u: goto label_1e1024;
        case 0x1e1028u: goto label_1e1028;
        case 0x1e102cu: goto label_1e102c;
        case 0x1e1030u: goto label_1e1030;
        case 0x1e1034u: goto label_1e1034;
        case 0x1e1038u: goto label_1e1038;
        case 0x1e103cu: goto label_1e103c;
        case 0x1e1040u: goto label_1e1040;
        case 0x1e1044u: goto label_1e1044;
        case 0x1e1048u: goto label_1e1048;
        case 0x1e104cu: goto label_1e104c;
        default: break;
    }

    ctx->pc = 0x1e0f70u;

label_1e0f70:
    // 0x1e0f70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e0f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e0f74:
    // 0x1e0f74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e0f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e0f78:
    // 0x1e0f78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e0f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e0f7c:
    // 0x1e0f7c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1e0f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1e0f80:
    // 0x1e0f80: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1e0f84:
    if (ctx->pc == 0x1E0F84u) {
        ctx->pc = 0x1E0F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0F80u;
        // 0x1e0f84: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0F88u;
        goto label_1e0f88;
    }
    ctx->pc = 0x1E0F80u;
    {
        const bool branch_taken_0x1e0f80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E0F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0F80u;
        // 0x1e0f84: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0f80) {
            ctx->pc = 0x1E0F90u;
            goto label_1e0f90;
        }
    }
    ctx->pc = 0x1E0F88u;
label_1e0f88:
    // 0x1e0f88: 0x1000002d  b           . + 4 + (0x2D << 2)
label_1e0f8c:
    if (ctx->pc == 0x1E0F8Cu) {
        ctx->pc = 0x1E0F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0F88u;
        // 0x1e0f8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0F90u;
        goto label_1e0f90;
    }
    ctx->pc = 0x1E0F88u;
    {
        const bool branch_taken_0x1e0f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0F88u;
        // 0x1e0f8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0f88) {
            ctx->pc = 0x1E1040u;
            goto label_1e1040;
        }
    }
    ctx->pc = 0x1E0F90u;
label_1e0f90:
    // 0x1e0f90: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1e0f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1e0f94:
    // 0x1e0f94: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1e0f94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1e0f98:
    // 0x1e0f98: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x1e0f98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_1e0f9c:
    // 0x1e0f9c: 0x320f809  jalr        $t9
label_1e0fa0:
    if (ctx->pc == 0x1E0FA0u) {
        ctx->pc = 0x1E0FA4u;
        goto label_1e0fa4;
    }
    ctx->pc = 0x1E0F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E0FA4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0F9Cu, 0x1E0FA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E0FA4u;
label_1e0fa4:
    // 0x1e0fa4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1e0fa8:
    if (ctx->pc == 0x1E0FA8u) {
        ctx->pc = 0x1E0FACu;
        goto label_1e0fac;
    }
    ctx->pc = 0x1E0FA4u;
    {
        const bool branch_taken_0x1e0fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0fa4) {
            ctx->pc = 0x1E0FC8u;
            goto label_1e0fc8;
        }
    }
    ctx->pc = 0x1E0FACu;
label_1e0fac:
    // 0x1e0fac: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1e0facu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e0fb0:
    // 0x1e0fb0: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1e0fb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1e0fb4:
    // 0x1e0fb4: 0x320f809  jalr        $t9
label_1e0fb8:
    if (ctx->pc == 0x1E0FB8u) {
        ctx->pc = 0x1E0FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0FB4u;
        // 0x1e0fb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0FBCu;
        goto label_1e0fbc;
    }
    ctx->pc = 0x1E0FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E0FBCu);
        ctx->pc = 0x1E0FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0FB4u;
        // 0x1e0fb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0FB4u, 0x1E0FBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E0FBCu;
label_1e0fbc:
    // 0x1e0fbc: 0x10000020  b           . + 4 + (0x20 << 2)
label_1e0fc0:
    if (ctx->pc == 0x1E0FC0u) {
        ctx->pc = 0x1E0FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0FBCu;
        // 0x1e0fc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0FC4u;
        goto label_1e0fc4;
    }
    ctx->pc = 0x1E0FBCu;
    {
        const bool branch_taken_0x1e0fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0FBCu;
        // 0x1e0fc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0fbc) {
            ctx->pc = 0x1E1040u;
            goto label_1e1040;
        }
    }
    ctx->pc = 0x1E0FC4u;
label_1e0fc4:
    // 0x1e0fc4: 0x0  nop
    ctx->pc = 0x1e0fc4u;
    // NOP
label_1e0fc8:
    // 0x1e0fc8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1e0fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1e0fcc:
    // 0x1e0fcc: 0x8e080004  lw          $t0, 0x4($s0)
    ctx->pc = 0x1e0fccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1e0fd0:
    // 0x1e0fd0: 0x84460000  lh          $a2, 0x0($v0)
    ctx->pc = 0x1e0fd0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1e0fd4:
    // 0x1e0fd4: 0x8507000e  lh          $a3, 0xE($t0)
    ctx->pc = 0x1e0fd4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 14)));
label_1e0fd8:
    // 0x1e0fd8: 0x8503000c  lh          $v1, 0xC($t0)
    ctx->pc = 0x1e0fd8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 12)));
label_1e0fdc:
    // 0x1e0fdc: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x1e0fdcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_1e0fe0:
    // 0x1e0fe0: 0xe6282a  slt         $a1, $a3, $a2
    ctx->pc = 0x1e0fe0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1e0fe4:
    // 0x1e0fe4: 0xc3302a  slt         $a2, $a2, $v1
    ctx->pc = 0x1e0fe4u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1e0fe8:
    // 0x1e0fe8: 0x38e37ffd  xori        $v1, $a3, 0x7FFD
    ctx->pc = 0x1e0fe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)32765);
label_1e0fec:
    // 0x1e0fec: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x1e0fecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_1e0ff0:
    // 0x1e0ff0: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1e0ff0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1e0ff4:
    // 0x1e0ff4: 0x402026  xor         $a0, $v0, $zero
    ctx->pc = 0x1e0ff4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_1e0ff8:
    // 0x1e0ff8: 0x28420001  slti        $v0, $v0, 0x1
    ctx->pc = 0x1e0ff8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1) ? 1 : 0);
label_1e0ffc:
    // 0x1e0ffc: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x1e0ffcu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1e1000:
    // 0x1e1000: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1e1000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1e1004:
    // 0x1e1004: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x1e1004u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_1e1008:
    // 0x1e1008: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e1008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1e100c:
    // 0x1e100c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1e100cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1e1010:
    // 0x1e1010: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1e1010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_1e1014:
    // 0x1e1014: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1e1018:
    if (ctx->pc == 0x1E1018u) {
        ctx->pc = 0x1E1018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1014u;
        // 0x1e1018: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E101Cu;
        goto label_1e101c;
    }
    ctx->pc = 0x1E1014u;
    {
        const bool branch_taken_0x1e1014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1014u;
        // 0x1e1018: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1014) {
            ctx->pc = 0x1E1028u;
            goto label_1e1028;
        }
    }
    ctx->pc = 0x1E101Cu;
label_1e101c:
    // 0x1e101c: 0x10000008  b           . + 4 + (0x8 << 2)
label_1e1020:
    if (ctx->pc == 0x1E1020u) {
        ctx->pc = 0x1E1024u;
        goto label_1e1024;
    }
    ctx->pc = 0x1E101Cu;
    {
        const bool branch_taken_0x1e101c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e101c) {
            ctx->pc = 0x1E1040u;
            goto label_1e1040;
        }
    }
    ctx->pc = 0x1E1024u;
label_1e1024:
    // 0x1e1024: 0x0  nop
    ctx->pc = 0x1e1024u;
    // NOP
label_1e1028:
    // 0x1e1028: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1e1028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e102c:
    // 0x1e102c: 0x25060010  addiu       $a2, $t0, 0x10
    ctx->pc = 0x1e102cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
label_1e1030:
    // 0x1e1030: 0xc0766a8  jal         func_1D9AA0
label_1e1034:
    if (ctx->pc == 0x1E1034u) {
        ctx->pc = 0x1E1034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1030u;
        // 0x1e1034: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1038u;
        goto label_1e1038;
    }
    ctx->pc = 0x1E1030u;
    SET_GPR_U32(ctx, 31, 0x1E1038u);
    ctx->pc = 0x1E1034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1030u;
    // 0x1e1034: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x1E1030u, 0x1E1038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1038u;
label_1e1038:
    // 0x1e1038: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e1038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e103c:
    // 0x1e103c: 0x0  nop
    ctx->pc = 0x1e103cu;
    // NOP
label_1e1040:
    // 0x1e1040: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e1040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e1044:
    // 0x1e1044: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e1044u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e1048:
    // 0x1e1048: 0x3e00008  jr          $ra
label_1e104c:
    if (ctx->pc == 0x1E104Cu) {
        ctx->pc = 0x1E104Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1048u;
        // 0x1e104c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1050u;
        goto label_fallthrough_0x1e1048;
    }
    ctx->pc = 0x1E1048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E104Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1048u;
        // 0x1e104c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e1048:
    ctx->pc = 0x1E1050u;
}
