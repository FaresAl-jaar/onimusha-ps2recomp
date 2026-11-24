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

// Function: sub_00369220
// Address: 0x369220 - 0x36955c
void sub_00369220_0x369220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00369220_0x369220");
#endif

    switch (ctx->pc) {
        case 0x3692a8u: goto label_3692a8;
        case 0x3692b8u: goto label_3692b8;
        case 0x3692f8u: goto label_3692f8;
        case 0x369308u: goto label_369308;
        case 0x369358u: goto label_369358;
        case 0x369390u: goto label_369390;
        case 0x3693b0u: goto label_3693b0;
        case 0x3693e8u: goto label_3693e8;
        case 0x3693f8u: goto label_3693f8;
        case 0x369408u: goto label_369408;
        case 0x369418u: goto label_369418;
        case 0x36942cu: goto label_36942c;
        case 0x36949cu: goto label_36949c;
        case 0x369548u: goto label_369548;
        default: break;
    }

    ctx->pc = 0x369220u;

    // 0x369220: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x369220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x369224: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x369224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x369228: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x369228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x36922c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x36922cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x369230: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x369230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x369234: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x369234u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369238: 0x90850521  lbu         $a1, 0x521($a0)
    ctx->pc = 0x369238u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1313)));
    // 0x36923c: 0x10a3003e  beq         $a1, $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x36923Cu;
    {
        const bool branch_taken_0x36923c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x369240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36923Cu;
        // 0x369240: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36923c) {
            ctx->pc = 0x369338u;
            goto label_369338;
        }
    }
    ctx->pc = 0x369244u;
    // 0x369244: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x369244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x369248: 0x10a30033  beq         $a1, $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x369248u;
    {
        const bool branch_taken_0x369248 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x369248) {
            ctx->pc = 0x369318u;
            goto label_369318;
        }
    }
    ctx->pc = 0x369250u;
    // 0x369250: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x369250u;
    {
        const bool branch_taken_0x369250 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x369250) {
            ctx->pc = 0x369260u;
            goto label_369260;
        }
    }
    ctx->pc = 0x369258u;
    // 0x369258: 0x100000bb  b           . + 4 + (0xBB << 2)
    ctx->pc = 0x369258u;
    {
        const bool branch_taken_0x369258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x369258) {
            ctx->pc = 0x369548u;
            goto label_369548;
        }
    }
    ctx->pc = 0x369260u;
label_369260:
    // 0x369260: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x369260u;
    {
        const bool branch_taken_0x369260 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x369260) {
            ctx->pc = 0x369300u;
            goto label_369300;
        }
    }
    ctx->pc = 0x369268u;
    // 0x369268: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x369268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x36926c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x36926cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x369270: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x369270u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x369274: 0x26240580  addiu       $a0, $s1, 0x580
    ctx->pc = 0x369274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
    // 0x369278: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x369278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x36927c: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x36927cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x369280: 0x7e220560  sq          $v0, 0x560($s1)
    ctx->pc = 0x369280u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1376), GPR_VEC(ctx, 2));
    // 0x369284: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x369284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x369288: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x369288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x36928c: 0x78420330  lq          $v0, 0x330($v0)
    ctx->pc = 0x36928cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 816)));
    // 0x369290: 0x7e220570  sq          $v0, 0x570($s1)
    ctx->pc = 0x369290u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1392), GPR_VEC(ctx, 2));
    // 0x369294: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x369294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x369298: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x369298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x36929c: 0x24450130  addiu       $a1, $v0, 0x130
    ctx->pc = 0x36929cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 304));
    // 0x3692a0: 0xc0767e8  jal         func_1D9FA0
    ctx->pc = 0x3692A0u;
    SET_GPR_U32(ctx, 31, 0x3692A8u);
    ctx->pc = 0x3692A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3692A0u;
    // 0x3692a4: 0x24460230  addiu       $a2, $v0, 0x230 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FA0u, 0x3692A0u, 0x3692A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3692A8u;
label_3692a8:
    // 0x3692a8: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x3692a8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
    // 0x3692ac: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x3692acu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x3692b0: 0xc0a99d8  jal         func_2A6760
    ctx->pc = 0x3692B0u;
    SET_GPR_U32(ctx, 31, 0x3692B8u);
    ctx->pc = 0x3692B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3692B0u;
    // 0x3692b4: 0x26260560  addiu       $a2, $s1, 0x560 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6760u, 0x3692B0u, 0x3692B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3692B8u;
label_3692b8:
    // 0x3692b8: 0xae220550  sw          $v0, 0x550($s1)
    ctx->pc = 0x3692b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1360), GPR_U32(ctx, 2));
    // 0x3692bc: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3692bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3692c0: 0x9223052e  lbu         $v1, 0x52E($s1)
    ctx->pc = 0x3692c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x3692c4: 0x3c021500  lui         $v0, 0x1500
    ctx->pc = 0x3692c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5376 << 16));
    // 0x3692c8: 0x34458c02  ori         $a1, $v0, 0x8C02
    ctx->pc = 0x3692c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35842);
    // 0x3692cc: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3692ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3692d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3692d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3692d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3692d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3692d8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3692d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3692dc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3692dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3692e0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3692e0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3692e4: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x3692e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x3692e8: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x3692e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3692ec: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x3692ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x3692f0: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3692F0u;
    SET_GPR_U32(ctx, 31, 0x3692F8u);
    ctx->pc = 0x3692F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3692F0u;
    // 0x3692f4: 0x24470030  addiu       $a3, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3692F0u, 0x3692F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3692F8u;
label_3692f8:
    // 0x3692f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3692F8u;
    {
        const bool branch_taken_0x3692f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3692f8) {
            ctx->pc = 0x369308u;
            goto label_369308;
        }
    }
    ctx->pc = 0x369300u;
label_369300:
    // 0x369300: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x369300u;
    SET_GPR_U32(ctx, 31, 0x369308u);
    ctx->pc = 0x369304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369300u;
    // 0x369304: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x369300u, 0x369308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369308u;
label_369308:
    // 0x369308: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x369308u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x36930c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x36930cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x369310: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x369310u;
    {
        const bool branch_taken_0x369310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x369314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369310u;
        // 0x369314: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369310) {
            ctx->pc = 0x369548u;
            goto label_369548;
        }
    }
    ctx->pc = 0x369318u;
label_369318:
    // 0x369318: 0x86220526  lh          $v0, 0x526($s1)
    ctx->pc = 0x369318u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1318)));
    // 0x36931c: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x36931cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x369320: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x369320u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x369324: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x369324u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x369328: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x369328u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x36932c: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x36932cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x369330: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x369330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x369334: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x369334u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
label_369338:
    // 0x369338: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x369338u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x36933c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x36933cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x369340: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x369340u;
    {
        const bool branch_taken_0x369340 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x369340) {
            ctx->pc = 0x369390u;
            goto label_369390;
        }
    }
    ctx->pc = 0x369348u;
    // 0x369348: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x369348u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
    // 0x36934c: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x36934cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x369350: 0xc0a99d8  jal         func_2A6760
    ctx->pc = 0x369350u;
    SET_GPR_U32(ctx, 31, 0x369358u);
    ctx->pc = 0x369354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369350u;
    // 0x369354: 0x26260570  addiu       $a2, $s1, 0x570 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6760u, 0x369350u, 0x369358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369358u;
label_369358:
    // 0x369358: 0xae220554  sw          $v0, 0x554($s1)
    ctx->pc = 0x369358u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1364), GPR_U32(ctx, 2));
    // 0x36935c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x36935cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x369360: 0x9223052e  lbu         $v1, 0x52E($s1)
    ctx->pc = 0x369360u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x369364: 0x3c021500  lui         $v0, 0x1500
    ctx->pc = 0x369364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5376 << 16));
    // 0x369368: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x369368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x36936c: 0x34458c02  ori         $a1, $v0, 0x8C02
    ctx->pc = 0x36936cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35842);
    // 0x369370: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x369370u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369374: 0x26270570  addiu       $a3, $s1, 0x570
    ctx->pc = 0x369374u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 1392));
    // 0x369378: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x369378u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36937c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x36937cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369380: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x369380u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369384: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x369384u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369388: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x369388u;
    SET_GPR_U32(ctx, 31, 0x369390u);
    ctx->pc = 0x36938Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369388u;
    // 0x36938c: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x369388u, 0x369390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369390u;
label_369390:
    // 0x369390: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x369390u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x369394: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x369394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x369398: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x369398u;
    {
        const bool branch_taken_0x369398 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x369398) {
            ctx->pc = 0x3693E8u;
            goto label_3693e8;
        }
    }
    ctx->pc = 0x3693A0u;
    // 0x3693a0: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x3693a0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
    // 0x3693a4: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x3693a4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x3693a8: 0xc0a99d8  jal         func_2A6760
    ctx->pc = 0x3693A8u;
    SET_GPR_U32(ctx, 31, 0x3693B0u);
    ctx->pc = 0x3693ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3693A8u;
    // 0x3693ac: 0x26260580  addiu       $a2, $s1, 0x580 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6760u, 0x3693A8u, 0x3693B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3693B0u;
label_3693b0:
    // 0x3693b0: 0xae220558  sw          $v0, 0x558($s1)
    ctx->pc = 0x3693b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1368), GPR_U32(ctx, 2));
    // 0x3693b4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3693b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3693b8: 0x9223052e  lbu         $v1, 0x52E($s1)
    ctx->pc = 0x3693b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x3693bc: 0x3c021500  lui         $v0, 0x1500
    ctx->pc = 0x3693bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5376 << 16));
    // 0x3693c0: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3693c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3693c4: 0x34458c02  ori         $a1, $v0, 0x8C02
    ctx->pc = 0x3693c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35842);
    // 0x3693c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3693c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3693cc: 0x26270580  addiu       $a3, $s1, 0x580
    ctx->pc = 0x3693ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
    // 0x3693d0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3693d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3693d4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3693d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3693d8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3693d8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3693dc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3693dcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3693e0: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3693E0u;
    SET_GPR_U32(ctx, 31, 0x3693E8u);
    ctx->pc = 0x3693E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3693E0u;
    // 0x3693e4: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3693E0u, 0x3693E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3693E8u;
label_3693e8:
    // 0x3693e8: 0x8e250550  lw          $a1, 0x550($s1)
    ctx->pc = 0x3693e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
    // 0x3693ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3693ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3693f0: 0xc0c08ac  jal         func_3022B0
    ctx->pc = 0x3693F0u;
    SET_GPR_U32(ctx, 31, 0x3693F8u);
    ctx->pc = 0x3693F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3693F0u;
    // 0x3693f4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022B0u, 0x3693F0u, 0x3693F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3693F8u;
label_3693f8:
    // 0x3693f8: 0x8e250554  lw          $a1, 0x554($s1)
    ctx->pc = 0x3693f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1364)));
    // 0x3693fc: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3693fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x369400: 0xc0c08ac  jal         func_3022B0
    ctx->pc = 0x369400u;
    SET_GPR_U32(ctx, 31, 0x369408u);
    ctx->pc = 0x369404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369400u;
    // 0x369404: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022B0u, 0x369400u, 0x369408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369408u;
label_369408:
    // 0x369408: 0x8e250558  lw          $a1, 0x558($s1)
    ctx->pc = 0x369408u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1368)));
    // 0x36940c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x36940cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x369410: 0xc0c08ac  jal         func_3022B0
    ctx->pc = 0x369410u;
    SET_GPR_U32(ctx, 31, 0x369418u);
    ctx->pc = 0x369414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369410u;
    // 0x369414: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022B0u, 0x369410u, 0x369418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369418u;
label_369418:
    // 0x369418: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x369418u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x36941c: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36941Cu;
    {
        const bool branch_taken_0x36941c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x369420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36941Cu;
        // 0x369420: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36941c) {
            ctx->pc = 0x369430u;
            goto label_369430;
        }
    }
    ctx->pc = 0x369424u;
    // 0x369424: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x369424u;
    SET_GPR_U32(ctx, 31, 0x36942Cu);
    ctx->pc = 0x369428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369424u;
    // 0x369428: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x369424u, 0x36942Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36942Cu;
label_36942c:
    // 0x36942c: 0x0  nop
    ctx->pc = 0x36942cu;
    // NOP
label_369430:
    // 0x369430: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x369430u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x369434: 0x460001a  bltz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x369434u;
    {
        const bool branch_taken_0x369434 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x369438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369434u;
        // 0x369438: 0x2861003d  slti        $at, $v1, 0x3D (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)61) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x369434) {
            ctx->pc = 0x3694A0u;
            goto label_3694a0;
        }
    }
    ctx->pc = 0x36943Cu;
    // 0x36943c: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x36943Cu;
    {
        const bool branch_taken_0x36943c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x36943c) {
            ctx->pc = 0x3694A0u;
            goto label_3694a0;
        }
    }
    ctx->pc = 0x369444u;
    // 0x369444: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x369444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x369448: 0x27aa0070  addiu       $t2, $sp, 0x70
    ctx->pc = 0x369448u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x36944c: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x36944cu;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x369450: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x369450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369454: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x369454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x369458: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x369458u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36945c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x36945cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x369460: 0x7fa90040  sq          $t1, 0x40($sp)
    ctx->pc = 0x369460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 9));
    // 0x369464: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x369464u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C30u));
    // 0x369468: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x369468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x36946c: 0x7fa60050  sq          $a2, 0x50($sp)
    ctx->pc = 0x36946cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 6));
    // 0x369470: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x369470u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x369474: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x369474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x369478: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x369478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
    // 0x36947c: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x36947cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x369480: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x369480u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x369484: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x369484u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x369488: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x369488u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x36948c: 0x92260594  lbu         $a2, 0x594($s1)
    ctx->pc = 0x36948cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1428)));
    // 0x369490: 0xc62c0590  lwc1        $f12, 0x590($s1)
    ctx->pc = 0x369490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x369494: 0xc0c0900  jal         func_302400
    ctx->pc = 0x369494u;
    SET_GPR_U32(ctx, 31, 0x36949Cu);
    ctx->pc = 0x369498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369494u;
    // 0x369498: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x369494u, 0x36949Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36949Cu;
label_36949c:
    // 0x36949c: 0x0  nop
    ctx->pc = 0x36949cu;
    // NOP
label_3694a0:
    // 0x3694a0: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x3694a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
    // 0x3694a4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3694A4u;
    {
        const bool branch_taken_0x3694a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3694A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3694A4u;
        // 0x3694a8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3694a4) {
            ctx->pc = 0x3694B8u;
            goto label_3694b8;
        }
    }
    ctx->pc = 0x3694ACu;
    // 0x3694ac: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3694ACu;
    {
        const bool branch_taken_0x3694ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3694ac) {
            ctx->pc = 0x369538u;
            goto label_369538;
        }
    }
    ctx->pc = 0x3694B4u;
    // 0x3694b4: 0x0  nop
    ctx->pc = 0x3694b4u;
    // NOP
label_3694b8:
    // 0x3694b8: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x3694b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3694bc: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3694bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3694c0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3694c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3694c4: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3694c4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3694c8: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x3694c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
    // 0x3694cc: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3694CCu;
    {
        const bool branch_taken_0x3694cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3694cc) {
            ctx->pc = 0x369508u;
            goto label_369508;
        }
    }
    ctx->pc = 0x3694D4u;
    // 0x3694d4: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x3694d4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3694d8: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3694d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x3694dc: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3694DCu;
    {
        const bool branch_taken_0x3694dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3694E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3694DCu;
        // 0x3694e0: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3694dc) {
            ctx->pc = 0x369530u;
            goto label_369530;
        }
    }
    ctx->pc = 0x3694E4u;
    // 0x3694e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3694e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3694e8: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3694e8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3694ec: 0x0  nop
    ctx->pc = 0x3694ecu;
    // NOP
    // 0x3694f0: 0x0  nop
    ctx->pc = 0x3694f0u;
    // NOP
    // 0x3694f4: 0x2010  mfhi        $a0
    ctx->pc = 0x3694f4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3694f8: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3694f8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3694fc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3694FCu;
    {
        const bool branch_taken_0x3694fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x369500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3694FCu;
        // 0x369500: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3694fc) {
            ctx->pc = 0x369530u;
            goto label_369530;
        }
    }
    ctx->pc = 0x369504u;
    // 0x369504: 0x0  nop
    ctx->pc = 0x369504u;
    // NOP
label_369508:
    // 0x369508: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x369508u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x36950c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x36950cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x369510: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x369510u;
    {
        const bool branch_taken_0x369510 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x369510) {
            ctx->pc = 0x369530u;
            goto label_369530;
        }
    }
    ctx->pc = 0x369518u;
    // 0x369518: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x369518u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x36951c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36951cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x369520: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x369520u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x369524: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x369524u;
    {
        const bool branch_taken_0x369524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x369528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369524u;
        // 0x369528: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369524) {
            ctx->pc = 0x369538u;
            goto label_369538;
        }
    }
    ctx->pc = 0x36952Cu;
    // 0x36952c: 0x0  nop
    ctx->pc = 0x36952cu;
    // NOP
label_369530:
    // 0x369530: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x369530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x369534: 0x0  nop
    ctx->pc = 0x369534u;
    // NOP
label_369538:
    // 0x369538: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x369538u;
    {
        const bool branch_taken_0x369538 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36953Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369538u;
        // 0x36953c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369538) {
            ctx->pc = 0x369548u;
            goto label_369548;
        }
    }
    ctx->pc = 0x369540u;
    // 0x369540: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x369540u;
    SET_GPR_U32(ctx, 31, 0x369548u);
    ctx->pc = 0x369544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369540u;
    // 0x369544: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x369540u, 0x369548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369548u;
label_369548:
    // 0x369548: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x369548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36954c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x36954cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x369550: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x369550u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x369554: 0x3e00008  jr          $ra
    ctx->pc = 0x369554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x369558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369554u;
        // 0x369558: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x369554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36955Cu;
}
