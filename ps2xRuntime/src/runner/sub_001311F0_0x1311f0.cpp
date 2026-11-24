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

// Function: sub_001311F0
// Address: 0x1311f0 - 0x131398
void sub_001311F0_0x1311f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001311F0_0x1311f0");
#endif

    switch (ctx->pc) {
        case 0x131248u: goto label_131248;
        case 0x131258u: goto label_131258;
        case 0x131364u: goto label_131364;
        default: break;
    }

    ctx->pc = 0x1311f0u;

    // 0x1311f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1311f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1311f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1311f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1311f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1311f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1311fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1311fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x131200: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x131200u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131204: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x131204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x131208: 0x2651004c  addiu       $s1, $s2, 0x4C
    ctx->pc = 0x131208u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 76));
    // 0x13120c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x13120cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x131210: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x131210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x131214: 0x1060005a  beqz        $v1, . + 4 + (0x5A << 2)
    ctx->pc = 0x131214u;
    {
        const bool branch_taken_0x131214 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x131218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131214u;
        // 0x131218: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131214) {
            ctx->pc = 0x131380u;
            goto label_131380;
        }
    }
    ctx->pc = 0x13121Cu;
    // 0x13121c: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x13121cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x131220: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x131220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x131224: 0x14600056  bnez        $v1, . + 4 + (0x56 << 2)
    ctx->pc = 0x131224u;
    {
        const bool branch_taken_0x131224 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x131228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131224u;
        // 0x131228: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131224) {
            ctx->pc = 0x131380u;
            goto label_131380;
        }
    }
    ctx->pc = 0x13122Cu;
    // 0x13122c: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x13122cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x131230: 0x8c25ceb8  lw          $a1, -0x3148($at)
    ctx->pc = 0x131230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954680)));
    // 0x131234: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x131234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x131238: 0x14600051  bnez        $v1, . + 4 + (0x51 << 2)
    ctx->pc = 0x131238u;
    {
        const bool branch_taken_0x131238 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13123Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131238u;
        // 0x13123c: 0x26250008  addiu       $a1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131238) {
            ctx->pc = 0x131380u;
            goto label_131380;
        }
    }
    ctx->pc = 0x131240u;
    // 0x131240: 0xc04c728  jal         func_131CA0
    ctx->pc = 0x131240u;
    SET_GPR_U32(ctx, 31, 0x131248u);
    ctx->pc = 0x131CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131CA0u, 0x131240u, 0x131248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131248u;
label_131248:
    // 0x131248: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x131248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13124c: 0x26250048  addiu       $a1, $s1, 0x48
    ctx->pc = 0x13124cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
    // 0x131250: 0xc04c728  jal         func_131CA0
    ctx->pc = 0x131250u;
    SET_GPR_U32(ctx, 31, 0x131258u);
    ctx->pc = 0x131254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131250u;
    // 0x131254: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x131CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131CA0u, 0x131250u, 0x131258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131258u;
label_131258:
    // 0x131258: 0x92230006  lbu         $v1, 0x6($s1)
    ctx->pc = 0x131258u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x13125c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13125Cu;
    {
        const bool branch_taken_0x13125c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x131260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13125Cu;
        // 0x131260: 0x304400ff  andi        $a0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13125c) {
            ctx->pc = 0x131270u;
            goto label_131270;
        }
    }
    ctx->pc = 0x131264u;
    // 0x131264: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x131264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x131268: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x131268u;
    {
        const bool branch_taken_0x131268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13126Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131268u;
        // 0x13126c: 0xa2230006  sb          $v1, 0x6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 6), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131268) {
            ctx->pc = 0x131380u;
            goto label_131380;
        }
    }
    ctx->pc = 0x131270u;
label_131270:
    // 0x131270: 0xa2200006  sb          $zero, 0x6($s1)
    ctx->pc = 0x131270u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x131274: 0x92230003  lbu         $v1, 0x3($s1)
    ctx->pc = 0x131274u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x131278: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x131278u;
    {
        const bool branch_taken_0x131278 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13127Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131278u;
        // 0x13127c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131278) {
            ctx->pc = 0x1312D8u;
            goto label_1312d8;
        }
    }
    ctx->pc = 0x131280u;
    // 0x131280: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x131280u;
    {
        const bool branch_taken_0x131280 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x131280) {
            ctx->pc = 0x131290u;
            goto label_131290;
        }
    }
    ctx->pc = 0x131288u;
    // 0x131288: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x131288u;
    {
        const bool branch_taken_0x131288 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x131288) {
            ctx->pc = 0x1312A0u;
            goto label_1312a0;
        }
    }
    ctx->pc = 0x131290u;
label_131290:
    // 0x131290: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x131290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131294: 0xa2230003  sb          $v1, 0x3($s1)
    ctx->pc = 0x131294u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x131298: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x131298u;
    {
        const bool branch_taken_0x131298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13129Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131298u;
        // 0x13129c: 0x64050001  daddiu      $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x131298) {
            ctx->pc = 0x131300u;
            goto label_131300;
        }
    }
    ctx->pc = 0x1312A0u;
label_1312a0:
    // 0x1312a0: 0xa2200003  sb          $zero, 0x3($s1)
    ctx->pc = 0x1312a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1312a4: 0x92230004  lbu         $v1, 0x4($s1)
    ctx->pc = 0x1312a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1312a8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1312a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1312ac: 0xa2230004  sb          $v1, 0x4($s1)
    ctx->pc = 0x1312acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x1312b0: 0x92230004  lbu         $v1, 0x4($s1)
    ctx->pc = 0x1312b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1312b4: 0x28610079  slti        $at, $v1, 0x79
    ctx->pc = 0x1312b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)121) ? 1 : 0);
    // 0x1312b8: 0x14200011  bnez        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x1312B8u;
    {
        const bool branch_taken_0x1312b8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1312b8) {
            ctx->pc = 0x131300u;
            goto label_131300;
        }
    }
    ctx->pc = 0x1312C0u;
    // 0x1312c0: 0xa2200004  sb          $zero, 0x4($s1)
    ctx->pc = 0x1312c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x1312c4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1312c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1312c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1312c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1312cc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1312CCu;
    {
        const bool branch_taken_0x1312cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1312D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1312CCu;
        // 0x1312d0: 0x64050001  daddiu      $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1312cc) {
            ctx->pc = 0x131300u;
            goto label_131300;
        }
    }
    ctx->pc = 0x1312D4u;
    // 0x1312d4: 0x0  nop
    ctx->pc = 0x1312d4u;
    // NOP
label_1312d8:
    // 0x1312d8: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1312D8u;
    {
        const bool branch_taken_0x1312d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1312d8) {
            ctx->pc = 0x1312F0u;
            goto label_1312f0;
        }
    }
    ctx->pc = 0x1312E0u;
    // 0x1312e0: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1312E0u;
    {
        const bool branch_taken_0x1312e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1312e0) {
            ctx->pc = 0x1312F0u;
            goto label_1312f0;
        }
    }
    ctx->pc = 0x1312E8u;
    // 0x1312e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1312E8u;
    {
        const bool branch_taken_0x1312e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1312ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1312E8u;
        // 0x1312ec: 0xa2200003  sb          $zero, 0x3($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1312e8) {
            ctx->pc = 0x1312F8u;
            goto label_1312f8;
        }
    }
    ctx->pc = 0x1312F0u;
label_1312f0:
    // 0x1312f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1312f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1312f4: 0xa2230003  sb          $v1, 0x3($s1)
    ctx->pc = 0x1312f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 3));
label_1312f8:
    // 0x1312f8: 0x64050001  daddiu      $a1, $zero, 0x1
    ctx->pc = 0x1312f8u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x1312fc: 0x0  nop
    ctx->pc = 0x1312fcu;
    // NOP
label_131300:
    // 0x131300: 0x92230005  lbu         $v1, 0x5($s1)
    ctx->pc = 0x131300u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
    // 0x131304: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x131304u;
    {
        const bool branch_taken_0x131304 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x131304) {
            ctx->pc = 0x131318u;
            goto label_131318;
        }
    }
    ctx->pc = 0x13130Cu;
    // 0x13130c: 0xa2200005  sb          $zero, 0x5($s1)
    ctx->pc = 0x13130cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x131310: 0x64050001  daddiu      $a1, $zero, 0x1
    ctx->pc = 0x131310u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x131314: 0x0  nop
    ctx->pc = 0x131314u;
    // NOP
label_131318:
    // 0x131318: 0x10a00019  beqz        $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x131318u;
    {
        const bool branch_taken_0x131318 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x131318) {
            ctx->pc = 0x131380u;
            goto label_131380;
        }
    }
    ctx->pc = 0x131320u;
    // 0x131320: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x131320u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x131324: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x131324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x131328: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x131328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13132c: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x13132cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x131330: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x131330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x131334: 0xa2240000  sb          $a0, 0x0($s1)
    ctx->pc = 0x131334u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x131338: 0xa2220001  sb          $v0, 0x1($s1)
    ctx->pc = 0x131338u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x13133c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x13133cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131340: 0x511c3  sra         $v0, $a1, 7
    ctx->pc = 0x131340u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 7));
    // 0x131344: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x131344u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x131348: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x131348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13134c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13134cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131350: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x131350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x131354: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x131354u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x131358: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x131358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x13135c: 0xc04d95c  jal         func_136570
    ctx->pc = 0x13135Cu;
    SET_GPR_U32(ctx, 31, 0x131364u);
    ctx->pc = 0x131360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13135Cu;
    // 0x131360: 0x26280001  addiu       $t0, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136570u, 0x13135Cu, 0x131364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131364u;
label_131364:
    // 0x131364: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x131364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131368: 0x10440003  beq         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x131368u;
    {
        const bool branch_taken_0x131368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x13136Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131368u;
        // 0x13136c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131368) {
            ctx->pc = 0x131378u;
            goto label_131378;
        }
    }
    ctx->pc = 0x131370u;
    // 0x131370: 0xa2230006  sb          $v1, 0x6($s1)
    ctx->pc = 0x131370u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x131374: 0xa2240005  sb          $a0, 0x5($s1)
    ctx->pc = 0x131374u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5), (uint8_t)GPR_U32(ctx, 4));
label_131378:
    // 0x131378: 0xa2200004  sb          $zero, 0x4($s1)
    ctx->pc = 0x131378u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x13137c: 0x0  nop
    ctx->pc = 0x13137cu;
    // NOP
label_131380:
    // 0x131380: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x131380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x131384: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x131384u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x131388: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x131388u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13138c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13138cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x131390: 0x3e00008  jr          $ra
    ctx->pc = 0x131390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131390u;
        // 0x131394: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131398u;
}
