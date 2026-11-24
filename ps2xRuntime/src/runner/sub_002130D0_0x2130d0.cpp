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

// Function: sub_002130D0
// Address: 0x2130d0 - 0x213248
void sub_002130D0_0x2130d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002130D0_0x2130d0");
#endif

    switch (ctx->pc) {
        case 0x2130d0u: goto label_2130d0;
        case 0x2130d4u: goto label_2130d4;
        case 0x2130d8u: goto label_2130d8;
        case 0x2130dcu: goto label_2130dc;
        case 0x2130e0u: goto label_2130e0;
        case 0x2130e4u: goto label_2130e4;
        case 0x2130e8u: goto label_2130e8;
        case 0x2130ecu: goto label_2130ec;
        case 0x2130f0u: goto label_2130f0;
        case 0x2130f4u: goto label_2130f4;
        case 0x2130f8u: goto label_2130f8;
        case 0x2130fcu: goto label_2130fc;
        case 0x213100u: goto label_213100;
        case 0x213104u: goto label_213104;
        case 0x213108u: goto label_213108;
        case 0x21310cu: goto label_21310c;
        case 0x213110u: goto label_213110;
        case 0x213114u: goto label_213114;
        case 0x213118u: goto label_213118;
        case 0x21311cu: goto label_21311c;
        case 0x213120u: goto label_213120;
        case 0x213124u: goto label_213124;
        case 0x213128u: goto label_213128;
        case 0x21312cu: goto label_21312c;
        case 0x213130u: goto label_213130;
        case 0x213134u: goto label_213134;
        case 0x213138u: goto label_213138;
        case 0x21313cu: goto label_21313c;
        case 0x213140u: goto label_213140;
        case 0x213144u: goto label_213144;
        case 0x213148u: goto label_213148;
        case 0x21314cu: goto label_21314c;
        case 0x213150u: goto label_213150;
        case 0x213154u: goto label_213154;
        case 0x213158u: goto label_213158;
        case 0x21315cu: goto label_21315c;
        case 0x213160u: goto label_213160;
        case 0x213164u: goto label_213164;
        case 0x213168u: goto label_213168;
        case 0x21316cu: goto label_21316c;
        case 0x213170u: goto label_213170;
        case 0x213174u: goto label_213174;
        case 0x213178u: goto label_213178;
        case 0x21317cu: goto label_21317c;
        case 0x213180u: goto label_213180;
        case 0x213184u: goto label_213184;
        case 0x213188u: goto label_213188;
        case 0x21318cu: goto label_21318c;
        case 0x213190u: goto label_213190;
        case 0x213194u: goto label_213194;
        case 0x213198u: goto label_213198;
        case 0x21319cu: goto label_21319c;
        case 0x2131a0u: goto label_2131a0;
        case 0x2131a4u: goto label_2131a4;
        case 0x2131a8u: goto label_2131a8;
        case 0x2131acu: goto label_2131ac;
        case 0x2131b0u: goto label_2131b0;
        case 0x2131b4u: goto label_2131b4;
        case 0x2131b8u: goto label_2131b8;
        case 0x2131bcu: goto label_2131bc;
        case 0x2131c0u: goto label_2131c0;
        case 0x2131c4u: goto label_2131c4;
        case 0x2131c8u: goto label_2131c8;
        case 0x2131ccu: goto label_2131cc;
        case 0x2131d0u: goto label_2131d0;
        case 0x2131d4u: goto label_2131d4;
        case 0x2131d8u: goto label_2131d8;
        case 0x2131dcu: goto label_2131dc;
        case 0x2131e0u: goto label_2131e0;
        case 0x2131e4u: goto label_2131e4;
        case 0x2131e8u: goto label_2131e8;
        case 0x2131ecu: goto label_2131ec;
        case 0x2131f0u: goto label_2131f0;
        case 0x2131f4u: goto label_2131f4;
        case 0x2131f8u: goto label_2131f8;
        case 0x2131fcu: goto label_2131fc;
        case 0x213200u: goto label_213200;
        case 0x213204u: goto label_213204;
        case 0x213208u: goto label_213208;
        case 0x21320cu: goto label_21320c;
        case 0x213210u: goto label_213210;
        case 0x213214u: goto label_213214;
        case 0x213218u: goto label_213218;
        case 0x21321cu: goto label_21321c;
        case 0x213220u: goto label_213220;
        case 0x213224u: goto label_213224;
        case 0x213228u: goto label_213228;
        case 0x21322cu: goto label_21322c;
        case 0x213230u: goto label_213230;
        case 0x213234u: goto label_213234;
        case 0x213238u: goto label_213238;
        case 0x21323cu: goto label_21323c;
        case 0x213240u: goto label_213240;
        case 0x213244u: goto label_213244;
        default: break;
    }

    ctx->pc = 0x2130d0u;

label_2130d0:
    // 0x2130d0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2130d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_2130d4:
    // 0x2130d4: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x2130d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
label_2130d8:
    // 0x2130d8: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x2130d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2130dc:
    // 0x2130dc: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2130dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_2130e0:
    // 0x2130e0: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2130e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2130e4:
    // 0x2130e4: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2130e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_2130e8:
    // 0x2130e8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2130e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2130ec:
    // 0x2130ec: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x2130ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
label_2130f0:
    // 0x2130f0: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2130f0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2130f4:
    // 0x2130f4: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2130f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_2130f8:
    // 0x2130f8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2130f8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2130fc:
    // 0x2130fc: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x2130fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
label_213100:
    // 0x213100: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x213100u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_213104:
    // 0x213104: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x213104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_213108:
    // 0x213108: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x213108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_21310c:
    // 0x21310c: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x21310cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_213110:
    // 0x213110: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x213110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_213114:
    // 0x213114: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x213114u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_213118:
    // 0x213118: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x213118u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_21311c:
    // 0x21311c: 0x8e511f7c  lw          $s1, 0x1F7C($s2)
    ctx->pc = 0x21311cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8060)));
label_213120:
    // 0x213120: 0xc07f4ce  jal         func_1FD338
label_213124:
    if (ctx->pc == 0x213124u) {
        ctx->pc = 0x213124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213120u;
        // 0x213124: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213128u;
        goto label_213128;
    }
    ctx->pc = 0x213120u;
    SET_GPR_U32(ctx, 31, 0x213128u);
    ctx->pc = 0x213124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213120u;
    // 0x213124: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x213120u, 0x213128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213128u;
label_213128:
    // 0x213128: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_21312c:
    if (ctx->pc == 0x21312Cu) {
        ctx->pc = 0x21312Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213128u;
        // 0x21312c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213130u;
        goto label_213130;
    }
    ctx->pc = 0x213128u;
    {
        const bool branch_taken_0x213128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21312Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213128u;
        // 0x21312c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213128) {
            ctx->pc = 0x213140u;
            goto label_213140;
        }
    }
    ctx->pc = 0x213130u;
label_213130:
    // 0x213130: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x213130u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
label_213134:
    // 0x213134: 0xc0848e0  jal         func_212380
label_213138:
    if (ctx->pc == 0x213138u) {
        ctx->pc = 0x213138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213134u;
        // 0x213138: 0x34a50d06  ori         $a1, $a1, 0xD06 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3334);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21313Cu;
        goto label_21313c;
    }
    ctx->pc = 0x213134u;
    SET_GPR_U32(ctx, 31, 0x21313Cu);
    ctx->pc = 0x213138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213134u;
    // 0x213138: 0x34a50d06  ori         $a1, $a1, 0xD06 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3334);
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212380u, 0x213134u, 0x21313Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21313Cu;
label_21313c:
    // 0x21313c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x21313cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_213140:
    // 0x213140: 0x8fb00024  lw          $s0, 0x24($sp)
    ctx->pc = 0x213140u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_213144:
    // 0x213144: 0x8fa70010  lw          $a3, 0x10($sp)
    ctx->pc = 0x213144u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_213148:
    // 0x213148: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x213148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_21314c:
    // 0x21314c: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x21314cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_213150:
    // 0x213150: 0x6010007  bgez        $s0, . + 4 + (0x7 << 2)
label_213154:
    if (ctx->pc == 0x213154u) {
        ctx->pc = 0x213154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213150u;
        // 0x213154: 0xdfa80000  ld          $t0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213158u;
        goto label_213158;
    }
    ctx->pc = 0x213150u;
    {
        const bool branch_taken_0x213150 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x213154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213150u;
        // 0x213154: 0xdfa80000  ld          $t0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213150) {
            ctx->pc = 0x213170u;
            goto label_213170;
        }
    }
    ctx->pc = 0x213158u;
label_213158:
    // 0x213158: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x213158u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
label_21315c:
    // 0x21315c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21315cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_213160:
    // 0x213160: 0xc0848e0  jal         func_212380
label_213164:
    if (ctx->pc == 0x213164u) {
        ctx->pc = 0x213164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213160u;
        // 0x213164: 0x34a50d0e  ori         $a1, $a1, 0xD0E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3342);
        ctx->in_delay_slot = false;
        ctx->pc = 0x213168u;
        goto label_213168;
    }
    ctx->pc = 0x213160u;
    SET_GPR_U32(ctx, 31, 0x213168u);
    ctx->pc = 0x213164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213160u;
    // 0x213164: 0x34a50d0e  ori         $a1, $a1, 0xD0E (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3342);
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212380u, 0x213160u, 0x213168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213168u;
label_213168:
    // 0x213168: 0x1000002d  b           . + 4 + (0x2D << 2)
label_21316c:
    if (ctx->pc == 0x21316Cu) {
        ctx->pc = 0x21316Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213168u;
        // 0x21316c: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213170u;
        goto label_213170;
    }
    ctx->pc = 0x213168u;
    {
        const bool branch_taken_0x213168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21316Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213168u;
        // 0x21316c: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213168) {
            ctx->pc = 0x213220u;
            goto label_213220;
        }
    }
    ctx->pc = 0x213170u;
label_213170:
    // 0x213170: 0x56000007  bnel        $s0, $zero, . + 4 + (0x7 << 2)
label_213174:
    if (ctx->pc == 0x213174u) {
        ctx->pc = 0x213174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213170u;
        // 0x213174: 0x2b0102a  slt         $v0, $s5, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x213178u;
        goto label_213178;
    }
    ctx->pc = 0x213170u;
    {
        const bool branch_taken_0x213170 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x213170) {
            ctx->pc = 0x213174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213170u;
            // 0x213174: 0x2b0102a  slt         $v0, $s5, $s0 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x213190u;
            goto label_213190;
        }
    }
    ctx->pc = 0x213178u;
label_213178:
    // 0x213178: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x213178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21317c:
    // 0x21317c: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x21317cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_213180:
    // 0x213180: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x213180u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_213184:
    // 0x213184: 0x10000025  b           . + 4 + (0x25 << 2)
label_213188:
    if (ctx->pc == 0x213188u) {
        ctx->pc = 0x213188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213184u;
        // 0x213188: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21318Cu;
        goto label_21318c;
    }
    ctx->pc = 0x213184u;
    {
        const bool branch_taken_0x213184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213184u;
        // 0x213188: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213184) {
            ctx->pc = 0x21321Cu;
            goto label_21321c;
        }
    }
    ctx->pc = 0x21318Cu;
label_21318c:
    // 0x21318c: 0x0  nop
    ctx->pc = 0x21318cu;
    // NOP
label_213190:
    // 0x213190: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_213194:
    if (ctx->pc == 0x213194u) {
        ctx->pc = 0x213194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213190u;
        // 0x213194: 0x71080  sll         $v0, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213198u;
        goto label_213198;
    }
    ctx->pc = 0x213190u;
    {
        const bool branch_taken_0x213190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x213190) {
            ctx->pc = 0x213194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213190u;
            // 0x213194: 0x71080  sll         $v0, $a3, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2131B0u;
            goto label_2131b0;
        }
    }
    ctx->pc = 0x213198u;
label_213198:
    // 0x213198: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x213198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21319c:
    // 0x21319c: 0xc084f5e  jal         func_213D78
label_2131a0:
    if (ctx->pc == 0x2131A0u) {
        ctx->pc = 0x2131A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21319Cu;
        // 0x2131a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2131A4u;
        goto label_2131a4;
    }
    ctx->pc = 0x21319Cu;
    SET_GPR_U32(ctx, 31, 0x2131A4u);
    ctx->pc = 0x2131A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21319Cu;
    // 0x2131a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213D78u, 0x21319Cu, 0x2131A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2131A4u;
label_2131a4:
    // 0x2131a4: 0x1000001d  b           . + 4 + (0x1D << 2)
label_2131a8:
    if (ctx->pc == 0x2131A8u) {
        ctx->pc = 0x2131A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2131A4u;
        // 0x2131a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2131ACu;
        goto label_2131ac;
    }
    ctx->pc = 0x2131A4u;
    {
        const bool branch_taken_0x2131a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2131A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2131A4u;
        // 0x2131a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2131a4) {
            ctx->pc = 0x21321Cu;
            goto label_21321c;
        }
    }
    ctx->pc = 0x2131ACu;
label_2131ac:
    // 0x2131ac: 0x0  nop
    ctx->pc = 0x2131acu;
    // NOP
label_2131b0:
    // 0x2131b0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2131b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2131b4:
    // 0x2131b4: 0x8c44fd50  lw          $a0, -0x2B0($v0)
    ctx->pc = 0x2131b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294966608)));
label_2131b8:
    // 0x2131b8: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
label_2131bc:
    if (ctx->pc == 0x2131BCu) {
        ctx->pc = 0x2131BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2131B8u;
        // 0x2131bc: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2131C0u;
        goto label_2131c0;
    }
    ctx->pc = 0x2131B8u;
    {
        const bool branch_taken_0x2131b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2131b8) {
            ctx->pc = 0x2131BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2131B8u;
            // 0x2131bc: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2131E0u;
            goto label_2131e0;
        }
    }
    ctx->pc = 0x2131C0u;
label_2131c0:
    // 0x2131c0: 0x8e260154  lw          $a2, 0x154($s1)
    ctx->pc = 0x2131c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
label_2131c4:
    // 0x2131c4: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x2131c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2131c8:
    // 0x2131c8: 0x8e250150  lw          $a1, 0x150($s1)
    ctx->pc = 0x2131c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
label_2131cc:
    // 0x2131cc: 0xc084c92  jal         func_213248
label_2131d0:
    if (ctx->pc == 0x2131D0u) {
        ctx->pc = 0x2131D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2131CCu;
        // 0x2131d0: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2131D4u;
        goto label_2131d4;
    }
    ctx->pc = 0x2131CCu;
    SET_GPR_U32(ctx, 31, 0x2131D4u);
    ctx->pc = 0x2131D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2131CCu;
    // 0x2131d0: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213248u, 0x2131CCu, 0x2131D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2131D4u;
label_2131d4:
    // 0x2131d4: 0x1000000a  b           . + 4 + (0xA << 2)
label_2131d8:
    if (ctx->pc == 0x2131D8u) {
        ctx->pc = 0x2131D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2131D4u;
        // 0x2131d8: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2131DCu;
        goto label_2131dc;
    }
    ctx->pc = 0x2131D4u;
    {
        const bool branch_taken_0x2131d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2131D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2131D4u;
        // 0x2131d8: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2131d4) {
            ctx->pc = 0x213200u;
            goto label_213200;
        }
    }
    ctx->pc = 0x2131DCu;
label_2131dc:
    // 0x2131dc: 0x0  nop
    ctx->pc = 0x2131dcu;
    // NOP
label_2131e0:
    // 0x2131e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2131e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2131e4:
    // 0x2131e4: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2131e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_2131e8:
    // 0x2131e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2131e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2131ec:
    // 0x2131ec: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x2131ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_2131f0:
    // 0x2131f0: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2131f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2131f4:
    // 0x2131f4: 0x40f809  jalr        $v0
label_2131f8:
    if (ctx->pc == 0x2131F8u) {
        ctx->pc = 0x2131F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2131F4u;
        // 0x2131f8: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2131FCu;
        goto label_2131fc;
    }
    ctx->pc = 0x2131F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2131FCu);
        ctx->pc = 0x2131F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2131F4u;
        // 0x2131f8: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2131F4u, 0x2131FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2131FCu;
label_2131fc:
    // 0x2131fc: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2131fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_213200:
    // 0x213200: 0x8e680000  lw          $t0, 0x0($s3)
    ctx->pc = 0x213200u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_213204:
    // 0x213204: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
label_213208:
    if (ctx->pc == 0x213208u) {
        ctx->pc = 0x213208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213204u;
        // 0x213208: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21320Cu;
        goto label_21320c;
    }
    ctx->pc = 0x213204u;
    {
        const bool branch_taken_0x213204 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x213208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213204u;
        // 0x213208: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213204) {
            ctx->pc = 0x213218u;
            goto label_213218;
        }
    }
    ctx->pc = 0x21320Cu;
label_21320c:
    // 0x21320c: 0x55020002  bnel        $t0, $v0, . + 4 + (0x2 << 2)
label_213210:
    if (ctx->pc == 0x213210u) {
        ctx->pc = 0x213210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21320Cu;
        // 0x213210: 0x100b02d  daddu       $s6, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213214u;
        goto label_213214;
    }
    ctx->pc = 0x21320Cu;
    {
        const bool branch_taken_0x21320c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x21320c) {
            ctx->pc = 0x213210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21320Cu;
            // 0x213210: 0x100b02d  daddu       $s6, $t0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x213218u;
            goto label_213218;
        }
    }
    ctx->pc = 0x213214u;
label_213214:
    // 0x213214: 0xae900000  sw          $s0, 0x0($s4)
    ctx->pc = 0x213214u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
label_213218:
    // 0x213218: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x213218u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_21321c:
    // 0x21321c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x21321cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_213220:
    // 0x213220: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x213220u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_213224:
    // 0x213224: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x213224u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_213228:
    // 0x213228: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x213228u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_21322c:
    // 0x21322c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x21322cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_213230:
    // 0x213230: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x213230u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_213234:
    // 0x213234: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x213234u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_213238:
    // 0x213238: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x213238u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_21323c:
    // 0x21323c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x21323cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_213240:
    // 0x213240: 0x3e00008  jr          $ra
label_213244:
    if (ctx->pc == 0x213244u) {
        ctx->pc = 0x213244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213240u;
        // 0x213244: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213248u;
        goto label_fallthrough_0x213240;
    }
    ctx->pc = 0x213240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213240u;
        // 0x213244: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x213240:
    ctx->pc = 0x213248u;
}
