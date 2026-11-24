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

// Function: sub_001E0110
// Address: 0x1e0110 - 0x1e0364
void sub_001E0110_0x1e0110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0110_0x1e0110");
#endif

    switch (ctx->pc) {
        case 0x1e0110u: goto label_1e0110;
        case 0x1e0114u: goto label_1e0114;
        case 0x1e0118u: goto label_1e0118;
        case 0x1e011cu: goto label_1e011c;
        case 0x1e0120u: goto label_1e0120;
        case 0x1e0124u: goto label_1e0124;
        case 0x1e0128u: goto label_1e0128;
        case 0x1e012cu: goto label_1e012c;
        case 0x1e0130u: goto label_1e0130;
        case 0x1e0134u: goto label_1e0134;
        case 0x1e0138u: goto label_1e0138;
        case 0x1e013cu: goto label_1e013c;
        case 0x1e0140u: goto label_1e0140;
        case 0x1e0144u: goto label_1e0144;
        case 0x1e0148u: goto label_1e0148;
        case 0x1e014cu: goto label_1e014c;
        case 0x1e0150u: goto label_1e0150;
        case 0x1e0154u: goto label_1e0154;
        case 0x1e0158u: goto label_1e0158;
        case 0x1e015cu: goto label_1e015c;
        case 0x1e0160u: goto label_1e0160;
        case 0x1e0164u: goto label_1e0164;
        case 0x1e0168u: goto label_1e0168;
        case 0x1e016cu: goto label_1e016c;
        case 0x1e0170u: goto label_1e0170;
        case 0x1e0174u: goto label_1e0174;
        case 0x1e0178u: goto label_1e0178;
        case 0x1e017cu: goto label_1e017c;
        case 0x1e0180u: goto label_1e0180;
        case 0x1e0184u: goto label_1e0184;
        case 0x1e0188u: goto label_1e0188;
        case 0x1e018cu: goto label_1e018c;
        case 0x1e0190u: goto label_1e0190;
        case 0x1e0194u: goto label_1e0194;
        case 0x1e0198u: goto label_1e0198;
        case 0x1e019cu: goto label_1e019c;
        case 0x1e01a0u: goto label_1e01a0;
        case 0x1e01a4u: goto label_1e01a4;
        case 0x1e01a8u: goto label_1e01a8;
        case 0x1e01acu: goto label_1e01ac;
        case 0x1e01b0u: goto label_1e01b0;
        case 0x1e01b4u: goto label_1e01b4;
        case 0x1e01b8u: goto label_1e01b8;
        case 0x1e01bcu: goto label_1e01bc;
        case 0x1e01c0u: goto label_1e01c0;
        case 0x1e01c4u: goto label_1e01c4;
        case 0x1e01c8u: goto label_1e01c8;
        case 0x1e01ccu: goto label_1e01cc;
        case 0x1e01d0u: goto label_1e01d0;
        case 0x1e01d4u: goto label_1e01d4;
        case 0x1e01d8u: goto label_1e01d8;
        case 0x1e01dcu: goto label_1e01dc;
        case 0x1e01e0u: goto label_1e01e0;
        case 0x1e01e4u: goto label_1e01e4;
        case 0x1e01e8u: goto label_1e01e8;
        case 0x1e01ecu: goto label_1e01ec;
        case 0x1e01f0u: goto label_1e01f0;
        case 0x1e01f4u: goto label_1e01f4;
        case 0x1e01f8u: goto label_1e01f8;
        case 0x1e01fcu: goto label_1e01fc;
        case 0x1e0200u: goto label_1e0200;
        case 0x1e0204u: goto label_1e0204;
        case 0x1e0208u: goto label_1e0208;
        case 0x1e020cu: goto label_1e020c;
        case 0x1e0210u: goto label_1e0210;
        case 0x1e0214u: goto label_1e0214;
        case 0x1e0218u: goto label_1e0218;
        case 0x1e021cu: goto label_1e021c;
        case 0x1e0220u: goto label_1e0220;
        case 0x1e0224u: goto label_1e0224;
        case 0x1e0228u: goto label_1e0228;
        case 0x1e022cu: goto label_1e022c;
        case 0x1e0230u: goto label_1e0230;
        case 0x1e0234u: goto label_1e0234;
        case 0x1e0238u: goto label_1e0238;
        case 0x1e023cu: goto label_1e023c;
        case 0x1e0240u: goto label_1e0240;
        case 0x1e0244u: goto label_1e0244;
        case 0x1e0248u: goto label_1e0248;
        case 0x1e024cu: goto label_1e024c;
        case 0x1e0250u: goto label_1e0250;
        case 0x1e0254u: goto label_1e0254;
        case 0x1e0258u: goto label_1e0258;
        case 0x1e025cu: goto label_1e025c;
        case 0x1e0260u: goto label_1e0260;
        case 0x1e0264u: goto label_1e0264;
        case 0x1e0268u: goto label_1e0268;
        case 0x1e026cu: goto label_1e026c;
        case 0x1e0270u: goto label_1e0270;
        case 0x1e0274u: goto label_1e0274;
        case 0x1e0278u: goto label_1e0278;
        case 0x1e027cu: goto label_1e027c;
        case 0x1e0280u: goto label_1e0280;
        case 0x1e0284u: goto label_1e0284;
        case 0x1e0288u: goto label_1e0288;
        case 0x1e028cu: goto label_1e028c;
        case 0x1e0290u: goto label_1e0290;
        case 0x1e0294u: goto label_1e0294;
        case 0x1e0298u: goto label_1e0298;
        case 0x1e029cu: goto label_1e029c;
        case 0x1e02a0u: goto label_1e02a0;
        case 0x1e02a4u: goto label_1e02a4;
        case 0x1e02a8u: goto label_1e02a8;
        case 0x1e02acu: goto label_1e02ac;
        case 0x1e02b0u: goto label_1e02b0;
        case 0x1e02b4u: goto label_1e02b4;
        case 0x1e02b8u: goto label_1e02b8;
        case 0x1e02bcu: goto label_1e02bc;
        case 0x1e02c0u: goto label_1e02c0;
        case 0x1e02c4u: goto label_1e02c4;
        case 0x1e02c8u: goto label_1e02c8;
        case 0x1e02ccu: goto label_1e02cc;
        case 0x1e02d0u: goto label_1e02d0;
        case 0x1e02d4u: goto label_1e02d4;
        case 0x1e02d8u: goto label_1e02d8;
        case 0x1e02dcu: goto label_1e02dc;
        case 0x1e02e0u: goto label_1e02e0;
        case 0x1e02e4u: goto label_1e02e4;
        case 0x1e02e8u: goto label_1e02e8;
        case 0x1e02ecu: goto label_1e02ec;
        case 0x1e02f0u: goto label_1e02f0;
        case 0x1e02f4u: goto label_1e02f4;
        case 0x1e02f8u: goto label_1e02f8;
        case 0x1e02fcu: goto label_1e02fc;
        case 0x1e0300u: goto label_1e0300;
        case 0x1e0304u: goto label_1e0304;
        case 0x1e0308u: goto label_1e0308;
        case 0x1e030cu: goto label_1e030c;
        case 0x1e0310u: goto label_1e0310;
        case 0x1e0314u: goto label_1e0314;
        case 0x1e0318u: goto label_1e0318;
        case 0x1e031cu: goto label_1e031c;
        case 0x1e0320u: goto label_1e0320;
        case 0x1e0324u: goto label_1e0324;
        case 0x1e0328u: goto label_1e0328;
        case 0x1e032cu: goto label_1e032c;
        case 0x1e0330u: goto label_1e0330;
        case 0x1e0334u: goto label_1e0334;
        case 0x1e0338u: goto label_1e0338;
        case 0x1e033cu: goto label_1e033c;
        case 0x1e0340u: goto label_1e0340;
        case 0x1e0344u: goto label_1e0344;
        case 0x1e0348u: goto label_1e0348;
        case 0x1e034cu: goto label_1e034c;
        case 0x1e0350u: goto label_1e0350;
        case 0x1e0354u: goto label_1e0354;
        case 0x1e0358u: goto label_1e0358;
        case 0x1e035cu: goto label_1e035c;
        case 0x1e0360u: goto label_1e0360;
        default: break;
    }

    ctx->pc = 0x1e0110u;

label_1e0110:
    // 0x1e0110: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e0110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1e0114:
    // 0x1e0114: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e0114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1e0118:
    // 0x1e0118: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e0118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e011c:
    // 0x1e011c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e011cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e0120:
    // 0x1e0120: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1e0120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1e0124:
    // 0x1e0124: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1e0128:
    if (ctx->pc == 0x1E0128u) {
        ctx->pc = 0x1E0128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0124u;
        // 0x1e0128: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E012Cu;
        goto label_1e012c;
    }
    ctx->pc = 0x1E0124u;
    {
        const bool branch_taken_0x1e0124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E0128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0124u;
        // 0x1e0128: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0124) {
            ctx->pc = 0x1E0138u;
            goto label_1e0138;
        }
    }
    ctx->pc = 0x1E012Cu;
label_1e012c:
    // 0x1e012c: 0x10000088  b           . + 4 + (0x88 << 2)
label_1e0130:
    if (ctx->pc == 0x1E0130u) {
        ctx->pc = 0x1E0130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E012Cu;
        // 0x1e0130: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0134u;
        goto label_1e0134;
    }
    ctx->pc = 0x1E012Cu;
    {
        const bool branch_taken_0x1e012c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E012Cu;
        // 0x1e0130: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e012c) {
            ctx->pc = 0x1E0350u;
            goto label_1e0350;
        }
    }
    ctx->pc = 0x1E0134u;
label_1e0134:
    // 0x1e0134: 0x0  nop
    ctx->pc = 0x1e0134u;
    // NOP
label_1e0138:
    // 0x1e0138: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x1e0138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1e013c:
    // 0x1e013c: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1e013cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1e0140:
    // 0x1e0140: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x1e0140u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_1e0144:
    // 0x1e0144: 0x320f809  jalr        $t9
label_1e0148:
    if (ctx->pc == 0x1E0148u) {
        ctx->pc = 0x1E014Cu;
        goto label_1e014c;
    }
    ctx->pc = 0x1E0144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E014Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0144u, 0x1E014Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E014Cu;
label_1e014c:
    // 0x1e014c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1e0150:
    if (ctx->pc == 0x1E0150u) {
        ctx->pc = 0x1E0154u;
        goto label_1e0154;
    }
    ctx->pc = 0x1E014Cu;
    {
        const bool branch_taken_0x1e014c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e014c) {
            ctx->pc = 0x1E0170u;
            goto label_1e0170;
        }
    }
    ctx->pc = 0x1E0154u;
label_1e0154:
    // 0x1e0154: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1e0154u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e0158:
    // 0x1e0158: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1e0158u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1e015c:
    // 0x1e015c: 0x320f809  jalr        $t9
label_1e0160:
    if (ctx->pc == 0x1E0160u) {
        ctx->pc = 0x1E0160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E015Cu;
        // 0x1e0160: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0164u;
        goto label_1e0164;
    }
    ctx->pc = 0x1E015Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E0164u);
        ctx->pc = 0x1E0160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E015Cu;
        // 0x1e0160: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E015Cu, 0x1E0164u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E0164u;
label_1e0164:
    // 0x1e0164: 0x1000007a  b           . + 4 + (0x7A << 2)
label_1e0168:
    if (ctx->pc == 0x1E0168u) {
        ctx->pc = 0x1E0168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0164u;
        // 0x1e0168: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E016Cu;
        goto label_1e016c;
    }
    ctx->pc = 0x1E0164u;
    {
        const bool branch_taken_0x1e0164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0164u;
        // 0x1e0168: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0164) {
            ctx->pc = 0x1E0350u;
            goto label_1e0350;
        }
    }
    ctx->pc = 0x1E016Cu;
label_1e016c:
    // 0x1e016c: 0x0  nop
    ctx->pc = 0x1e016cu;
    // NOP
label_1e0170:
    // 0x1e0170: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1e0170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1e0174:
    // 0x1e0174: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1e0174u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
label_1e0178:
    // 0x1e0178: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1e017c:
    if (ctx->pc == 0x1E017Cu) {
        ctx->pc = 0x1E0180u;
        goto label_1e0180;
    }
    ctx->pc = 0x1E0178u;
    {
        const bool branch_taken_0x1e0178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0178) {
            ctx->pc = 0x1E0188u;
            goto label_1e0188;
        }
    }
    ctx->pc = 0x1E0180u;
label_1e0180:
    // 0x1e0180: 0x10000073  b           . + 4 + (0x73 << 2)
label_1e0184:
    if (ctx->pc == 0x1E0184u) {
        ctx->pc = 0x1E0184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0180u;
        // 0x1e0184: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0188u;
        goto label_1e0188;
    }
    ctx->pc = 0x1E0180u;
    {
        const bool branch_taken_0x1e0180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0180u;
        // 0x1e0184: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0180) {
            ctx->pc = 0x1E0350u;
            goto label_1e0350;
        }
    }
    ctx->pc = 0x1E0188u;
label_1e0188:
    // 0x1e0188: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1e0188u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1e018c:
    // 0x1e018c: 0x84680000  lh          $t0, 0x0($v1)
    ctx->pc = 0x1e018cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1e0190:
    // 0x1e0190: 0x402026  xor         $a0, $v0, $zero
    ctx->pc = 0x1e0190u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_1e0194:
    // 0x1e0194: 0x28420001  slti        $v0, $v0, 0x1
    ctx->pc = 0x1e0194u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1) ? 1 : 0);
label_1e0198:
    // 0x1e0198: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x1e0198u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1e019c:
    // 0x1e019c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1e019cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1e01a0:
    // 0x1e01a0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e01a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1e01a4:
    // 0x1e01a4: 0x84a70008  lh          $a3, 0x8($a1)
    ctx->pc = 0x1e01a4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
label_1e01a8:
    // 0x1e01a8: 0x84a3000a  lh          $v1, 0xA($a1)
    ctx->pc = 0x1e01a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
label_1e01ac:
    // 0x1e01ac: 0x107302a  slt         $a2, $t0, $a3
    ctx->pc = 0x1e01acu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_1e01b0:
    // 0x1e01b0: 0x68282a  slt         $a1, $v1, $t0
    ctx->pc = 0x1e01b0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_1e01b4:
    // 0x1e01b4: 0x38637ffd  xori        $v1, $v1, 0x7FFD
    ctx->pc = 0x1e01b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)32765);
label_1e01b8:
    // 0x1e01b8: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x1e01b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_1e01bc:
    // 0x1e01bc: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1e01bcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1e01c0:
    // 0x1e01c0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1e01c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1e01c4:
    // 0x1e01c4: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x1e01c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_1e01c8:
    // 0x1e01c8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1e01c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1e01cc:
    // 0x1e01cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1e01d0:
    if (ctx->pc == 0x1E01D0u) {
        ctx->pc = 0x1E01D4u;
        goto label_1e01d4;
    }
    ctx->pc = 0x1E01CCu;
    {
        const bool branch_taken_0x1e01cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e01cc) {
            ctx->pc = 0x1E01E0u;
            goto label_1e01e0;
        }
    }
    ctx->pc = 0x1E01D4u;
label_1e01d4:
    // 0x1e01d4: 0x1000005e  b           . + 4 + (0x5E << 2)
label_1e01d8:
    if (ctx->pc == 0x1E01D8u) {
        ctx->pc = 0x1E01D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E01D4u;
        // 0x1e01d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E01DCu;
        goto label_1e01dc;
    }
    ctx->pc = 0x1E01D4u;
    {
        const bool branch_taken_0x1e01d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E01D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E01D4u;
        // 0x1e01d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e01d4) {
            ctx->pc = 0x1E0350u;
            goto label_1e0350;
        }
    }
    ctx->pc = 0x1E01DCu;
label_1e01dc:
    // 0x1e01dc: 0x0  nop
    ctx->pc = 0x1e01dcu;
    // NOP
label_1e01e0:
    // 0x1e01e0: 0xe81026  xor         $v0, $a3, $t0
    ctx->pc = 0x1e01e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 8));
label_1e01e4:
    // 0x1e01e4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1e01e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1e01e8:
    // 0x1e01e8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1e01e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_1e01ec:
    // 0x1e01ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1e01f0:
    if (ctx->pc == 0x1E01F0u) {
        ctx->pc = 0x1E01F4u;
        goto label_1e01f4;
    }
    ctx->pc = 0x1E01ECu;
    {
        const bool branch_taken_0x1e01ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e01ec) {
            ctx->pc = 0x1E0200u;
            goto label_1e0200;
        }
    }
    ctx->pc = 0x1E01F4u;
label_1e01f4:
    // 0x1e01f4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1e01f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1e01f8:
    // 0x1e01f8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e01f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e01fc:
    // 0x1e01fc: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x1e01fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_1e0200:
    // 0x1e0200: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1e0200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1e0204:
    // 0x1e0204: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1e0204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1e0208:
    // 0x1e0208: 0x84500000  lh          $s0, 0x0($v0)
    ctx->pc = 0x1e0208u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1e020c:
    // 0x1e020c: 0x84860000  lh          $a2, 0x0($a0)
    ctx->pc = 0x1e020cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_1e0210:
    // 0x1e0210: 0xd0082a  slt         $at, $a2, $s0
    ctx->pc = 0x1e0210u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1e0214:
    // 0x1e0214: 0x1420001e  bnez        $at, . + 4 + (0x1E << 2)
label_1e0218:
    if (ctx->pc == 0x1E0218u) {
        ctx->pc = 0x1E021Cu;
        goto label_1e021c;
    }
    ctx->pc = 0x1E0214u;
    {
        const bool branch_taken_0x1e0214 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e0214) {
            ctx->pc = 0x1E0290u;
            goto label_1e0290;
        }
    }
    ctx->pc = 0x1E021Cu;
label_1e021c:
    // 0x1e021c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1e021cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1e0220:
    // 0x1e0220: 0x84450008  lh          $a1, 0x8($v0)
    ctx->pc = 0x1e0220u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1e0224:
    // 0x1e0224: 0x14a60005  bne         $a1, $a2, . + 4 + (0x5 << 2)
label_1e0228:
    if (ctx->pc == 0x1E0228u) {
        ctx->pc = 0x1E0228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0224u;
        // 0x1e0228: 0x10243c  dsll32      $a0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E022Cu;
        goto label_1e022c;
    }
    ctx->pc = 0x1E0224u;
    {
        const bool branch_taken_0x1e0224 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x1E0228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0224u;
        // 0x1e0228: 0x10243c  dsll32      $a0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0224) {
            ctx->pc = 0x1E023Cu;
            goto label_1e023c;
        }
    }
    ctx->pc = 0x1E022Cu;
label_1e022c:
    // 0x1e022c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e022cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1e0230:
    // 0x1e0230: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e0230u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e0234:
    // 0x1e0234: 0x10000004  b           . + 4 + (0x4 << 2)
label_1e0238:
    if (ctx->pc == 0x1E0238u) {
        ctx->pc = 0x1E0238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0234u;
        // 0x1e0238: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E023Cu;
        goto label_1e023c;
    }
    ctx->pc = 0x1E0234u;
    {
        const bool branch_taken_0x1e0234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0234u;
        // 0x1e0238: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0234) {
            ctx->pc = 0x1E0248u;
            goto label_1e0248;
        }
    }
    ctx->pc = 0x1E023Cu;
label_1e023c:
    // 0x1e023c: 0xc0767d4  jal         func_1D9F50
label_1e0240:
    if (ctx->pc == 0x1E0240u) {
        ctx->pc = 0x1E0240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E023Cu;
        // 0x1e0240: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0244u;
        goto label_1e0244;
    }
    ctx->pc = 0x1E023Cu;
    SET_GPR_U32(ctx, 31, 0x1E0244u);
    ctx->pc = 0x1E0240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E023Cu;
    // 0x1e0240: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9F50u, 0x1E023Cu, 0x1E0244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0244u;
label_1e0244:
    // 0x1e0244: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1e0244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1e0248:
    // 0x1e0248: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x1e0248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1e024c:
    // 0x1e024c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1e024cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1e0250:
    // 0x1e0250: 0xc0767e0  jal         func_1D9F80
label_1e0254:
    if (ctx->pc == 0x1E0254u) {
        ctx->pc = 0x1E0254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0250u;
        // 0x1e0254: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0258u;
        goto label_1e0258;
    }
    ctx->pc = 0x1E0250u;
    SET_GPR_U32(ctx, 31, 0x1E0258u);
    ctx->pc = 0x1E0254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0250u;
    // 0x1e0254: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9F80u, 0x1E0250u, 0x1E0258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0258u;
label_1e0258:
    // 0x1e0258: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1e0258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1e025c:
    // 0x1e025c: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x1e025cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
label_1e0260:
    // 0x1e0260: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1e0260u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_1e0264:
    // 0x1e0264: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1e0264u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1e0268:
    // 0x1e0268: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1e0268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1e026c:
    // 0x1e026c: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x1e026cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1e0270:
    // 0x1e0270: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1e0270u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e0274:
    // 0x1e0274: 0x14400034  bnez        $v0, . + 4 + (0x34 << 2)
label_1e0278:
    if (ctx->pc == 0x1E0278u) {
        ctx->pc = 0x1E027Cu;
        goto label_1e027c;
    }
    ctx->pc = 0x1E0274u;
    {
        const bool branch_taken_0x1e0274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e0274) {
            ctx->pc = 0x1E0348u;
            goto label_1e0348;
        }
    }
    ctx->pc = 0x1E027Cu;
label_1e027c:
    // 0x1e027c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1e027cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1e0280:
    // 0x1e0280: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e0280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e0284:
    // 0x1e0284: 0x10000030  b           . + 4 + (0x30 << 2)
label_1e0288:
    if (ctx->pc == 0x1E0288u) {
        ctx->pc = 0x1E0288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0284u;
        // 0x1e0288: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E028Cu;
        goto label_1e028c;
    }
    ctx->pc = 0x1E0284u;
    {
        const bool branch_taken_0x1e0284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0284u;
        // 0x1e0288: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0284) {
            ctx->pc = 0x1E0348u;
            goto label_1e0348;
        }
    }
    ctx->pc = 0x1E028Cu;
label_1e028c:
    // 0x1e028c: 0x0  nop
    ctx->pc = 0x1e028cu;
    // NOP
label_1e0290:
    // 0x1e0290: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1e0290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1e0294:
    // 0x1e0294: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x1e0294u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1e0298:
    // 0x1e0298: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1e0298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1e029c:
    // 0x1e029c: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x1e029cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1e02a0:
    // 0x1e02a0: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1e02a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e02a4:
    // 0x1e02a4: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
label_1e02a8:
    if (ctx->pc == 0x1E02A8u) {
        ctx->pc = 0x1E02A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E02A4u;
        // 0x1e02a8: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E02ACu;
        goto label_1e02ac;
    }
    ctx->pc = 0x1E02A4u;
    {
        const bool branch_taken_0x1e02a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E02A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E02A4u;
        // 0x1e02a8: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e02a4) {
            ctx->pc = 0x1E0348u;
            goto label_1e0348;
        }
    }
    ctx->pc = 0x1E02ACu;
label_1e02ac:
    // 0x1e02ac: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1e02acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1e02b0:
    // 0x1e02b0: 0x84460010  lh          $a2, 0x10($v0)
    ctx->pc = 0x1e02b0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_1e02b4:
    // 0x1e02b4: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x1e02b4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1e02b8:
    // 0x1e02b8: 0x14a60005  bne         $a1, $a2, . + 4 + (0x5 << 2)
label_1e02bc:
    if (ctx->pc == 0x1E02BCu) {
        ctx->pc = 0x1E02C0u;
        goto label_1e02c0;
    }
    ctx->pc = 0x1E02B8u;
    {
        const bool branch_taken_0x1e02b8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        if (branch_taken_0x1e02b8) {
            ctx->pc = 0x1E02D0u;
            goto label_1e02d0;
        }
    }
    ctx->pc = 0x1E02C0u;
label_1e02c0:
    // 0x1e02c0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e02c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1e02c4:
    // 0x1e02c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e02c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e02c8:
    // 0x1e02c8: 0x10000005  b           . + 4 + (0x5 << 2)
label_1e02cc:
    if (ctx->pc == 0x1E02CCu) {
        ctx->pc = 0x1E02CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E02C8u;
        // 0x1e02cc: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E02D0u;
        goto label_1e02d0;
    }
    ctx->pc = 0x1E02C8u;
    {
        const bool branch_taken_0x1e02c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E02CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E02C8u;
        // 0x1e02cc: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e02c8) {
            ctx->pc = 0x1E02E0u;
            goto label_1e02e0;
        }
    }
    ctx->pc = 0x1E02D0u;
label_1e02d0:
    // 0x1e02d0: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x1e02d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
label_1e02d4:
    // 0x1e02d4: 0xc0767d4  jal         func_1D9F50
label_1e02d8:
    if (ctx->pc == 0x1E02D8u) {
        ctx->pc = 0x1E02D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E02D4u;
        // 0x1e02d8: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E02DCu;
        goto label_1e02dc;
    }
    ctx->pc = 0x1E02D4u;
    SET_GPR_U32(ctx, 31, 0x1E02DCu);
    ctx->pc = 0x1E02D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E02D4u;
    // 0x1e02d8: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9F50u, 0x1E02D4u, 0x1E02DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E02DCu;
label_1e02dc:
    // 0x1e02dc: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x1e02dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1e02e0:
    // 0x1e02e0: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1e02e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1e02e4:
    // 0x1e02e4: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x1e02e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1e02e8:
    // 0x1e02e8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1e02e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1e02ec:
    // 0x1e02ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e02ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e02f0:
    // 0x1e02f0: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x1e02f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_1e02f4:
    // 0x1e02f4: 0xc0767e0  jal         func_1D9F80
label_1e02f8:
    if (ctx->pc == 0x1E02F8u) {
        ctx->pc = 0x1E02F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E02F4u;
        // 0x1e02f8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E02FCu;
        goto label_1e02fc;
    }
    ctx->pc = 0x1E02F4u;
    SET_GPR_U32(ctx, 31, 0x1E02FCu);
    ctx->pc = 0x1E02F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E02F4u;
    // 0x1e02f8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9F80u, 0x1E02F4u, 0x1E02FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E02FCu;
label_1e02fc:
    // 0x1e02fc: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1e02fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1e0300:
    // 0x1e0300: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x1e0300u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
label_1e0304:
    // 0x1e0304: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1e0304u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_1e0308:
    // 0x1e0308: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1e0308u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1e030c:
    // 0x1e030c: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x1e030cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1e0310:
    // 0x1e0310: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1e0310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1e0314:
    // 0x1e0314: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1e0314u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1e0318:
    // 0x1e0318: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e0318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e031c:
    // 0x1e031c: 0x84420010  lh          $v0, 0x10($v0)
    ctx->pc = 0x1e031cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_1e0320:
    // 0x1e0320: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1e0320u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e0324:
    // 0x1e0324: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1e0328:
    if (ctx->pc == 0x1E0328u) {
        ctx->pc = 0x1E032Cu;
        goto label_1e032c;
    }
    ctx->pc = 0x1E0324u;
    {
        const bool branch_taken_0x1e0324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e0324) {
            ctx->pc = 0x1E0348u;
            goto label_1e0348;
        }
    }
    ctx->pc = 0x1E032Cu;
label_1e032c:
    // 0x1e032c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1e032cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1e0330:
    // 0x1e0330: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e0330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e0334:
    // 0x1e0334: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x1e0334u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_1e0338:
    // 0x1e0338: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x1e0338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1e033c:
    // 0x1e033c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e033cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1e0340:
    // 0x1e0340: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x1e0340u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
label_1e0344:
    // 0x1e0344: 0x0  nop
    ctx->pc = 0x1e0344u;
    // NOP
label_1e0348:
    // 0x1e0348: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e0348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e034c:
    // 0x1e034c: 0x0  nop
    ctx->pc = 0x1e034cu;
    // NOP
label_1e0350:
    // 0x1e0350: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e0350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e0354:
    // 0x1e0354: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e0354u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e0358:
    // 0x1e0358: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e0358u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e035c:
    // 0x1e035c: 0x3e00008  jr          $ra
label_1e0360:
    if (ctx->pc == 0x1E0360u) {
        ctx->pc = 0x1E0360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E035Cu;
        // 0x1e0360: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0364u;
        goto label_fallthrough_0x1e035c;
    }
    ctx->pc = 0x1E035Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E035Cu;
        // 0x1e0360: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E035Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e035c:
    ctx->pc = 0x1E0364u;
}
