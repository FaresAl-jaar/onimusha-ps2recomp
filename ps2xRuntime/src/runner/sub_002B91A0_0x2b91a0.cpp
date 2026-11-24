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

// Function: sub_002B91A0
// Address: 0x2b91a0 - 0x2b9464
void sub_002B91A0_0x2b91a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B91A0_0x2b91a0");
#endif

    switch (ctx->pc) {
        case 0x2b9258u: goto label_2b9258;
        case 0x2b9268u: goto label_2b9268;
        case 0x2b927cu: goto label_2b927c;
        case 0x2b9288u: goto label_2b9288;
        case 0x2b934cu: goto label_2b934c;
        case 0x2b93bcu: goto label_2b93bc;
        case 0x2b93d8u: goto label_2b93d8;
        case 0x2b93e0u: goto label_2b93e0;
        case 0x2b93e8u: goto label_2b93e8;
        case 0x2b93f8u: goto label_2b93f8;
        case 0x2b9408u: goto label_2b9408;
        case 0x2b9418u: goto label_2b9418;
        case 0x2b944cu: goto label_2b944c;
        default: break;
    }

    ctx->pc = 0x2b91a0u;

    // 0x2b91a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b91a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b91a4: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x2b91a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2b91a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b91a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2b91ac: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2b91acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b91b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b91b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b91b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b91b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b91b8: 0x8c8306cc  lw          $v1, 0x6CC($a0)
    ctx->pc = 0x2b91b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1740)));
    // 0x2b91bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b91bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b91c0: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2b91c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x2b91c4: 0x10c50096  beq         $a2, $a1, . + 4 + (0x96 << 2)
    ctx->pc = 0x2B91C4u;
    {
        const bool branch_taken_0x2b91c4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x2B91C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B91C4u;
        // 0x2b91c8: 0xac8306cc  sw          $v1, 0x6CC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1740), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b91c4) {
            ctx->pc = 0x2B9420u;
            goto label_2b9420;
        }
    }
    ctx->pc = 0x2B91CCu;
    // 0x2b91cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b91ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b91d0: 0x10c30013  beq         $a2, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2B91D0u;
    {
        const bool branch_taken_0x2b91d0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x2b91d0) {
            ctx->pc = 0x2B9220u;
            goto label_2b9220;
        }
    }
    ctx->pc = 0x2B91D8u;
    // 0x2b91d8: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B91D8u;
    {
        const bool branch_taken_0x2b91d8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b91d8) {
            ctx->pc = 0x2B91E8u;
            goto label_2b91e8;
        }
    }
    ctx->pc = 0x2B91E0u;
    // 0x2b91e0: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x2B91E0u;
    {
        const bool branch_taken_0x2b91e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b91e0) {
            ctx->pc = 0x2B9450u;
            goto label_2b9450;
        }
    }
    ctx->pc = 0x2B91E8u;
label_2b91e8:
    // 0x2b91e8: 0x92032ad8  lbu         $v1, 0x2AD8($s0)
    ctx->pc = 0x2b91e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10968)));
    // 0x2b91ec: 0x1065000a  beq         $v1, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x2B91ECu;
    {
        const bool branch_taken_0x2b91ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x2b91ec) {
            ctx->pc = 0x2B9218u;
            goto label_2b9218;
        }
    }
    ctx->pc = 0x2B91F4u;
    // 0x2b91f4: 0x9604078c  lhu         $a0, 0x78C($s0)
    ctx->pc = 0x2b91f4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1932)));
    // 0x2b91f8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2b91f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2b91fc: 0x34841000  ori         $a0, $a0, 0x1000
    ctx->pc = 0x2b91fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4096);
    // 0x2b9200: 0xa604078c  sh          $a0, 0x78C($s0)
    ctx->pc = 0x2b9200u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 4));
    // 0x2b9204: 0x9604078e  lhu         $a0, 0x78E($s0)
    ctx->pc = 0x2b9204u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1934)));
    // 0x2b9208: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x2b9208u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x2b920c: 0xa604078e  sh          $a0, 0x78E($s0)
    ctx->pc = 0x2b920cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1934), (uint16_t)GPR_U32(ctx, 4));
    // 0x2b9210: 0xa2030235  sb          $v1, 0x235($s0)
    ctx->pc = 0x2b9210u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 565), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b9214: 0x0  nop
    ctx->pc = 0x2b9214u;
    // NOP
label_2b9218:
    // 0x2b9218: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x2B9218u;
    {
        const bool branch_taken_0x2b9218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B921Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9218u;
        // 0x2b921c: 0xae0007b8  sw          $zero, 0x7B8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1976), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9218) {
            ctx->pc = 0x2B9450u;
            goto label_2b9450;
        }
    }
    ctx->pc = 0x2B9220u;
label_2b9220:
    // 0x2b9220: 0x8e0206cc  lw          $v0, 0x6CC($s0)
    ctx->pc = 0x2b9220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1740)));
    // 0x2b9224: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2b9224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2b9228: 0xae0206cc  sw          $v0, 0x6CC($s0)
    ctx->pc = 0x2b9228u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1740), GPR_U32(ctx, 2));
    // 0x2b922c: 0x92022ad8  lbu         $v0, 0x2AD8($s0)
    ctx->pc = 0x2b922cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10968)));
    // 0x2b9230: 0x1045000b  beq         $v0, $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x2B9230u;
    {
        const bool branch_taken_0x2b9230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x2b9230) {
            ctx->pc = 0x2B9260u;
            goto label_2b9260;
        }
    }
    ctx->pc = 0x2B9238u;
    // 0x2b9238: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B9238u;
    {
        const bool branch_taken_0x2b9238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2b9238) {
            ctx->pc = 0x2B9260u;
            goto label_2b9260;
        }
    }
    ctx->pc = 0x2B9240u;
    // 0x2b9240: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B9240u;
    {
        const bool branch_taken_0x2b9240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9240) {
            ctx->pc = 0x2B9250u;
            goto label_2b9250;
        }
    }
    ctx->pc = 0x2B9248u;
    // 0x2b9248: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2B9248u;
    {
        const bool branch_taken_0x2b9248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9248) {
            ctx->pc = 0x2B9290u;
            goto label_2b9290;
        }
    }
    ctx->pc = 0x2B9250u;
label_2b9250:
    // 0x2b9250: 0xc0bfae0  jal         func_2FEB80
    ctx->pc = 0x2B9250u;
    SET_GPR_U32(ctx, 31, 0x2B9258u);
    ctx->pc = 0x2B9254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9250u;
    // 0x2b9254: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEB80u, 0x2B9250u, 0x2B9258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9258u;
label_2b9258:
    // 0x2b9258: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2B9258u;
    {
        const bool branch_taken_0x2b9258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9258) {
            ctx->pc = 0x2B9290u;
            goto label_2b9290;
        }
    }
    ctx->pc = 0x2B9260u;
label_2b9260:
    // 0x2b9260: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x2B9260u;
    SET_GPR_U32(ctx, 31, 0x2B9268u);
    ctx->pc = 0x2B9264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9260u;
    // 0x2b9264: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x2B9260u, 0x2B9268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9268u;
label_2b9268:
    // 0x2b9268: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b9268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b926c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2b926cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b9270: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2b9270u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b9274: 0xc0a9968  jal         func_2A65A0
    ctx->pc = 0x2B9274u;
    SET_GPR_U32(ctx, 31, 0x2B927Cu);
    ctx->pc = 0x2B9278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9274u;
    // 0x2b9278: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A65A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A65A0u, 0x2B9274u, 0x2B927Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B927Cu;
label_2b927c:
    // 0x2b927c: 0x8e042960  lw          $a0, 0x2960($s0)
    ctx->pc = 0x2b927cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10592)));
    // 0x2b9280: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x2B9280u;
    SET_GPR_U32(ctx, 31, 0x2B9288u);
    ctx->pc = 0x2B9284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9280u;
    // 0x2b9284: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x2B9280u, 0x2B9288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9288u;
label_2b9288:
    // 0x2b9288: 0xae112960  sw          $s1, 0x2960($s0)
    ctx->pc = 0x2b9288u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10592), GPR_U32(ctx, 17));
    // 0x2b928c: 0x0  nop
    ctx->pc = 0x2b928cu;
    // NOP
label_2b9290:
    // 0x2b9290: 0x960229de  lhu         $v0, 0x29DE($s0)
    ctx->pc = 0x2b9290u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10718)));
    // 0x2b9294: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b9294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9298: 0x3042fffd  andi        $v0, $v0, 0xFFFD
    ctx->pc = 0x2b9298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65533);
    // 0x2b929c: 0xa60229de  sh          $v0, 0x29DE($s0)
    ctx->pc = 0x2b929cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10718), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b92a0: 0x960229de  lhu         $v0, 0x29DE($s0)
    ctx->pc = 0x2b92a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10718)));
    // 0x2b92a4: 0x3042fffb  andi        $v0, $v0, 0xFFFB
    ctx->pc = 0x2b92a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65531);
    // 0x2b92a8: 0xa60229de  sh          $v0, 0x29DE($s0)
    ctx->pc = 0x2b92a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10718), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b92ac: 0x960229de  lhu         $v0, 0x29DE($s0)
    ctx->pc = 0x2b92acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10718)));
    // 0x2b92b0: 0x3042fff7  andi        $v0, $v0, 0xFFF7
    ctx->pc = 0x2b92b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65527);
    // 0x2b92b4: 0xa60229de  sh          $v0, 0x29DE($s0)
    ctx->pc = 0x2b92b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10718), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b92b8: 0x960229de  lhu         $v0, 0x29DE($s0)
    ctx->pc = 0x2b92b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10718)));
    // 0x2b92bc: 0x3042ffef  andi        $v0, $v0, 0xFFEF
    ctx->pc = 0x2b92bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65519);
    // 0x2b92c0: 0xa60229de  sh          $v0, 0x29DE($s0)
    ctx->pc = 0x2b92c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10718), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b92c4: 0x960229de  lhu         $v0, 0x29DE($s0)
    ctx->pc = 0x2b92c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10718)));
    // 0x2b92c8: 0x3042ffdf  andi        $v0, $v0, 0xFFDF
    ctx->pc = 0x2b92c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65503);
    // 0x2b92cc: 0xa60229de  sh          $v0, 0x29DE($s0)
    ctx->pc = 0x2b92ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10718), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b92d0: 0x960229de  lhu         $v0, 0x29DE($s0)
    ctx->pc = 0x2b92d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10718)));
    // 0x2b92d4: 0x3042ff7f  andi        $v0, $v0, 0xFF7F
    ctx->pc = 0x2b92d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65407);
    // 0x2b92d8: 0xa60229de  sh          $v0, 0x29DE($s0)
    ctx->pc = 0x2b92d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10718), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b92dc: 0x960229de  lhu         $v0, 0x29DE($s0)
    ctx->pc = 0x2b92dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10718)));
    // 0x2b92e0: 0x3042ffbf  andi        $v0, $v0, 0xFFBF
    ctx->pc = 0x2b92e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65471);
    // 0x2b92e4: 0xa60229de  sh          $v0, 0x29DE($s0)
    ctx->pc = 0x2b92e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10718), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b92e8: 0x960229de  lhu         $v0, 0x29DE($s0)
    ctx->pc = 0x2b92e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10718)));
    // 0x2b92ec: 0x3042feff  andi        $v0, $v0, 0xFEFF
    ctx->pc = 0x2b92ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65279);
    // 0x2b92f0: 0xa60229de  sh          $v0, 0x29DE($s0)
    ctx->pc = 0x2b92f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10718), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b92f4: 0x960229de  lhu         $v0, 0x29DE($s0)
    ctx->pc = 0x2b92f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10718)));
    // 0x2b92f8: 0x3042fdff  andi        $v0, $v0, 0xFDFF
    ctx->pc = 0x2b92f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65023);
    // 0x2b92fc: 0xa60229de  sh          $v0, 0x29DE($s0)
    ctx->pc = 0x2b92fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10718), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b9300: 0x960229de  lhu         $v0, 0x29DE($s0)
    ctx->pc = 0x2b9300u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10718)));
    // 0x2b9304: 0x3042fbff  andi        $v0, $v0, 0xFBFF
    ctx->pc = 0x2b9304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64511);
    // 0x2b9308: 0xa60229de  sh          $v0, 0x29DE($s0)
    ctx->pc = 0x2b9308u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10718), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b930c: 0x960229de  lhu         $v0, 0x29DE($s0)
    ctx->pc = 0x2b930cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10718)));
    // 0x2b9310: 0x3042f7ff  andi        $v0, $v0, 0xF7FF
    ctx->pc = 0x2b9310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63487);
    // 0x2b9314: 0xa60229de  sh          $v0, 0x29DE($s0)
    ctx->pc = 0x2b9314u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10718), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b9318: 0x960229de  lhu         $v0, 0x29DE($s0)
    ctx->pc = 0x2b9318u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10718)));
    // 0x2b931c: 0x3042efff  andi        $v0, $v0, 0xEFFF
    ctx->pc = 0x2b931cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61439);
    // 0x2b9320: 0xa60229de  sh          $v0, 0x29DE($s0)
    ctx->pc = 0x2b9320u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10718), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b9324: 0x960229de  lhu         $v0, 0x29DE($s0)
    ctx->pc = 0x2b9324u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10718)));
    // 0x2b9328: 0x3042dfff  andi        $v0, $v0, 0xDFFF
    ctx->pc = 0x2b9328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57343);
    // 0x2b932c: 0xa60229de  sh          $v0, 0x29DE($s0)
    ctx->pc = 0x2b932cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10718), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b9330: 0x960229de  lhu         $v0, 0x29DE($s0)
    ctx->pc = 0x2b9330u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10718)));
    // 0x2b9334: 0x3042bfff  andi        $v0, $v0, 0xBFFF
    ctx->pc = 0x2b9334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)49151);
    // 0x2b9338: 0xa60229de  sh          $v0, 0x29DE($s0)
    ctx->pc = 0x2b9338u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10718), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b933c: 0x960229de  lhu         $v0, 0x29DE($s0)
    ctx->pc = 0x2b933cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10718)));
    // 0x2b9340: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x2b9340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x2b9344: 0xc0ae448  jal         func_2B9120
    ctx->pc = 0x2B9344u;
    SET_GPR_U32(ctx, 31, 0x2B934Cu);
    ctx->pc = 0x2B9348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9344u;
    // 0x2b9348: 0xa60229de  sh          $v0, 0x29DE($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 10718), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9120u, 0x2B9344u, 0x2B934Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B934Cu;
label_2b934c:
    // 0x2b934c: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x2b934cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x2b9350: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x2b9350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2b9354: 0x24844ff8  addiu       $a0, $a0, 0x4FF8
    ctx->pc = 0x2b9354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20472));
    // 0x2b9358: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x2b9358u;
    { uint32_t bits = FAST_READ32(0x4E4FF8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b935c: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x2b935cu;
    { uint32_t bits = FAST_READ32(0x4E4FFCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b9360: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2b9360u;
    { uint32_t bits = FAST_READ32(0x4E5000u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b9364: 0xe6020164  swc1        $f2, 0x164($s0)
    ctx->pc = 0x2b9364u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 356), bits); }
    // 0x2b9368: 0xe6010168  swc1        $f1, 0x168($s0)
    ctx->pc = 0x2b9368u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 360), bits); }
    // 0x2b936c: 0xe600016c  swc1        $f0, 0x16C($s0)
    ctx->pc = 0x2b936cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 364), bits); }
    // 0x2b9370: 0x92040002  lbu         $a0, 0x2($s0)
    ctx->pc = 0x2b9370u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2b9374: 0x10830036  beq         $a0, $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x2B9374u;
    {
        const bool branch_taken_0x2b9374 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B9378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9374u;
        // 0x2b9378: 0x24030023  addiu       $v1, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9374) {
            ctx->pc = 0x2B9450u;
            goto label_2b9450;
        }
    }
    ctx->pc = 0x2B937Cu;
    // 0x2b937c: 0x10830024  beq         $a0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x2B937Cu;
    {
        const bool branch_taken_0x2b937c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2b937c) {
            ctx->pc = 0x2B9410u;
            goto label_2b9410;
        }
    }
    ctx->pc = 0x2B9384u;
    // 0x2b9384: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x2b9384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2b9388: 0x10830019  beq         $a0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x2B9388u;
    {
        const bool branch_taken_0x2b9388 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B938Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9388u;
        // 0x2b938c: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9388) {
            ctx->pc = 0x2B93F0u;
            goto label_2b93f0;
        }
    }
    ctx->pc = 0x2B9390u;
    // 0x2b9390: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B9390u;
    {
        const bool branch_taken_0x2b9390 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2b9390) {
            ctx->pc = 0x2B93A0u;
            goto label_2b93a0;
        }
    }
    ctx->pc = 0x2B9398u;
    // 0x2b9398: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x2B9398u;
    {
        const bool branch_taken_0x2b9398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9398) {
            ctx->pc = 0x2B9450u;
            goto label_2b9450;
        }
    }
    ctx->pc = 0x2B93A0u;
label_2b93a0:
    // 0x2b93a0: 0x92022ad8  lbu         $v0, 0x2AD8($s0)
    ctx->pc = 0x2b93a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10968)));
    // 0x2b93a4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B93A4u;
    {
        const bool branch_taken_0x2b93a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b93a4) {
            ctx->pc = 0x2B93C8u;
            goto label_2b93c8;
        }
    }
    ctx->pc = 0x2B93ACu;
    // 0x2b93ac: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2b93acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2b93b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b93b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b93b4: 0xc069000  jal         func_1A4000
    ctx->pc = 0x2B93B4u;
    SET_GPR_U32(ctx, 31, 0x2B93BCu);
    ctx->pc = 0x2B93B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B93B4u;
    // 0x2b93b8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4000u, 0x2B93B4u, 0x2B93BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B93BCu;
label_2b93bc:
    // 0x2b93bc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2B93BCu;
    {
        const bool branch_taken_0x2b93bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b93bc) {
            ctx->pc = 0x2B93D8u;
            goto label_2b93d8;
        }
    }
    ctx->pc = 0x2B93C4u;
    // 0x2b93c4: 0x0  nop
    ctx->pc = 0x2b93c4u;
    // NOP
label_2b93c8:
    // 0x2b93c8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2b93c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2b93cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b93ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b93d0: 0xc069000  jal         func_1A4000
    ctx->pc = 0x2B93D0u;
    SET_GPR_U32(ctx, 31, 0x2B93D8u);
    ctx->pc = 0x2B93D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B93D0u;
    // 0x2b93d4: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4000u, 0x2B93D0u, 0x2B93D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B93D8u;
label_2b93d8:
    // 0x2b93d8: 0xc068fe0  jal         func_1A3F80
    ctx->pc = 0x2B93D8u;
    SET_GPR_U32(ctx, 31, 0x2B93E0u);
    ctx->pc = 0x1A3F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3F80u, 0x2B93D8u, 0x2B93E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B93E0u;
label_2b93e0:
    // 0x2b93e0: 0xc069078  jal         func_1A41E0
    ctx->pc = 0x2B93E0u;
    SET_GPR_U32(ctx, 31, 0x2B93E8u);
    ctx->pc = 0x1A41E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A41E0u, 0x2B93E0u, 0x2B93E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B93E8u;
label_2b93e8:
    // 0x2b93e8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2B93E8u;
    {
        const bool branch_taken_0x2b93e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b93e8) {
            ctx->pc = 0x2B9450u;
            goto label_2b9450;
        }
    }
    ctx->pc = 0x2B93F0u;
label_2b93f0:
    // 0x2b93f0: 0xc0acefc  jal         func_2B3BF0
    ctx->pc = 0x2B93F0u;
    SET_GPR_U32(ctx, 31, 0x2B93F8u);
    ctx->pc = 0x2B3BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3BF0u, 0x2B93F0u, 0x2B93F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B93F8u;
label_2b93f8:
    // 0x2b93f8: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x2b93f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x2b93fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b93fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9400: 0xc0ceabc  jal         func_33AAF0
    ctx->pc = 0x2B9400u;
    SET_GPR_U32(ctx, 31, 0x2B9408u);
    ctx->pc = 0x2B9404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9400u;
    // 0x2b9404: 0x24844060  addiu       $a0, $a0, 0x4060 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33AAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AAF0u, 0x2B9400u, 0x2B9408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9408u;
label_2b9408:
    // 0x2b9408: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2B9408u;
    {
        const bool branch_taken_0x2b9408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9408) {
            ctx->pc = 0x2B9450u;
            goto label_2b9450;
        }
    }
    ctx->pc = 0x2B9410u;
label_2b9410:
    // 0x2b9410: 0xc0d7a80  jal         func_35EA00
    ctx->pc = 0x2B9410u;
    SET_GPR_U32(ctx, 31, 0x2B9418u);
    ctx->pc = 0x2B9414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9410u;
    // 0x2b9414: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35EA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35EA00u, 0x2B9410u, 0x2B9418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9418u;
label_2b9418:
    // 0x2b9418: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2B9418u;
    {
        const bool branch_taken_0x2b9418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9418) {
            ctx->pc = 0x2B9450u;
            goto label_2b9450;
        }
    }
    ctx->pc = 0x2B9420u;
label_2b9420:
    // 0x2b9420: 0x92040002  lbu         $a0, 0x2($s0)
    ctx->pc = 0x2b9420u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2b9424: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2b9424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2b9428: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B9428u;
    {
        const bool branch_taken_0x2b9428 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2b9428) {
            ctx->pc = 0x2B9438u;
            goto label_2b9438;
        }
    }
    ctx->pc = 0x2B9430u;
    // 0x2b9430: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B9430u;
    {
        const bool branch_taken_0x2b9430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9430) {
            ctx->pc = 0x2B9450u;
            goto label_2b9450;
        }
    }
    ctx->pc = 0x2B9438u;
label_2b9438:
    // 0x2b9438: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x2b9438u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x2b943c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b943cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9440: 0x24844060  addiu       $a0, $a0, 0x4060
    ctx->pc = 0x2b9440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
    // 0x2b9444: 0xc0cea70  jal         func_33A9C0
    ctx->pc = 0x2B9444u;
    SET_GPR_U32(ctx, 31, 0x2B944Cu);
    ctx->pc = 0x2B9448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9444u;
    // 0x2b9448: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33A9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A9C0u, 0x2B9444u, 0x2B944Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B944Cu;
label_2b944c:
    // 0x2b944c: 0x0  nop
    ctx->pc = 0x2b944cu;
    // NOP
label_2b9450:
    // 0x2b9450: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b9450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b9454: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b9454u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b9458: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b9458u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b945c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B945Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B9460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B945Cu;
        // 0x2b9460: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B945Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B9464u;
}
