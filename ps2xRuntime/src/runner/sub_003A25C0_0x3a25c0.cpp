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

// Function: sub_003A25C0
// Address: 0x3a25c0 - 0x3a2730
void sub_003A25C0_0x3a25c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A25C0_0x3a25c0");
#endif

    switch (ctx->pc) {
        case 0x3a2628u: goto label_3a2628;
        case 0x3a2650u: goto label_3a2650;
        case 0x3a26bcu: goto label_3a26bc;
        case 0x3a26e0u: goto label_3a26e0;
        default: break;
    }

    ctx->pc = 0x3a25c0u;

    // 0x3a25c0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3a25c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x3a25c4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3a25c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x3a25c8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x3a25c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x3a25cc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3a25ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x3a25d0: 0x160f02d  daddu       $fp, $t3, $zero
    ctx->pc = 0x3a25d0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a25d4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3a25d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x3a25d8: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x3a25d8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a25dc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3a25dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3a25e0: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x3a25e0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a25e4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3a25e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3a25e8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3a25e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a25ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3a25ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3a25f0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3a25f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a25f4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3a25f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3a25f8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3a25f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a25fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3a25fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3a2600: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x3a2600u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2604: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x3a2604u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2608: 0x240400ae  addiu       $a0, $zero, 0xAE
    ctx->pc = 0x3a2608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 174));
    // 0x3a260c: 0x3c08003a  lui         $t0, 0x3A
    ctx->pc = 0x3a260cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)58 << 16));
    // 0x3a2610: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a2610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2614: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3a2614u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a2618: 0x24070570  addiu       $a3, $zero, 0x570
    ctx->pc = 0x3a2618u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1392));
    // 0x3a261c: 0x25082550  addiu       $t0, $t0, 0x2550
    ctx->pc = 0x3a261cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 9552));
    // 0x3a2620: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x3A2620u;
    SET_GPR_U32(ctx, 31, 0x3A2628u);
    ctx->pc = 0x3A2624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2620u;
    // 0x3a2624: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x3A2620u, 0x3A2628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2628u;
label_3a2628:
    // 0x3a2628: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3a2628u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a262c: 0x12000030  beqz        $s0, . + 4 + (0x30 << 2)
    ctx->pc = 0x3A262Cu;
    {
        const bool branch_taken_0x3a262c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A262Cu;
        // 0x3a2630: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a262c) {
            ctx->pc = 0x3A26F0u;
            goto label_3a26f0;
        }
    }
    ctx->pc = 0x3A2634u;
    // 0x3a2634: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x3a2634u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2638: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x3a2638u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a263c: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x3a263cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2640: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a2640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2644: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x3a2644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3a2648: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x3A2648u;
    SET_GPR_U32(ctx, 31, 0x3A2650u);
    ctx->pc = 0x3A264Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2648u;
    // 0x3a264c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x3A2648u, 0x3A2650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2650u;
label_3a2650:
    // 0x3a2650: 0x8f8880e0  lw          $t0, -0x7F20($gp)
    ctx->pc = 0x3a2650u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3a2654: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3a2654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3a2658: 0x34460dcd  ori         $a2, $v0, 0xDCD
    ctx->pc = 0x3a2658u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x3a265c: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x3a265cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x3a2660: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x3a2660u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a2664: 0x24a527e8  addiu       $a1, $a1, 0x27E8
    ctx->pc = 0x3a2664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10216));
    // 0x3a2668: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x3a2668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x3a266c: 0x24027ffd  addiu       $v0, $zero, 0x7FFD
    ctx->pc = 0x3a266cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3a2670: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a2670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2674: 0x1063018  mult        $a2, $t0, $a2
    ctx->pc = 0x3a2674u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3a2678: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3a2678u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3a267c: 0xaf8680e0  sw          $a2, -0x7F20($gp)
    ctx->pc = 0x3a267cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 6));
    // 0x3a2680: 0x8f8680e0  lw          $a2, -0x7F20($gp)
    ctx->pc = 0x3a2680u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3a2684: 0x63302  srl         $a2, $a2, 12
    ctx->pc = 0x3a2684u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 12));
    // 0x3a2688: 0xc7001b  divu        $zero, $a2, $a3
    ctx->pc = 0x3a2688u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
    // 0x3a268c: 0x0  nop
    ctx->pc = 0x3a268cu;
    // NOP
    // 0x3a2690: 0x0  nop
    ctx->pc = 0x3a2690u;
    // NOP
    // 0x3a2694: 0x3010  mfhi        $a2
    ctx->pc = 0x3a2694u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x3a2698: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x3a2698u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x3a269c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3a269cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3a26a0: 0x84a50000  lh          $a1, 0x0($a1)
    ctx->pc = 0x3a26a0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a26a4: 0xa6050526  sh          $a1, 0x526($s0)
    ctx->pc = 0x3a26a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 5));
    // 0x3a26a8: 0xa6030528  sh          $v1, 0x528($s0)
    ctx->pc = 0x3a26a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 3));
    // 0x3a26ac: 0xa602052a  sh          $v0, 0x52A($s0)
    ctx->pc = 0x3a26acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 2));
    // 0x3a26b0: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x3a26b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a26b4: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x3A26B4u;
    SET_GPR_U32(ctx, 31, 0x3A26BCu);
    ctx->pc = 0x3A26B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A26B4u;
    // 0x3a26b8: 0xa2070520  sb          $a3, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x3A26B4u, 0x3A26BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A26BCu;
label_3a26bc:
    // 0x3a26bc: 0xae000550  sw          $zero, 0x550($s0)
    ctx->pc = 0x3a26bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 0));
    // 0x3a26c0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3a26c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3a26c4: 0xae020554  sw          $v0, 0x554($s0)
    ctx->pc = 0x3a26c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1364), GPR_U32(ctx, 2));
    // 0x3a26c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a26c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a26cc: 0xa2160558  sb          $s6, 0x558($s0)
    ctx->pc = 0x3a26ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1368), (uint8_t)GPR_U32(ctx, 22));
    // 0x3a26d0: 0xae02055c  sw          $v0, 0x55C($s0)
    ctx->pc = 0x3a26d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1372), GPR_U32(ctx, 2));
    // 0x3a26d4: 0xa2170560  sb          $s7, 0x560($s0)
    ctx->pc = 0x3a26d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1376), (uint8_t)GPR_U32(ctx, 23));
    // 0x3a26d8: 0xc096e44  jal         func_25B910
    ctx->pc = 0x3A26D8u;
    SET_GPR_U32(ctx, 31, 0x3A26E0u);
    ctx->pc = 0x3A26DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A26D8u;
    // 0x3a26dc: 0xa21e0561  sb          $fp, 0x561($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1377), (uint8_t)GPR_U32(ctx, 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B910u, 0x3A26D8u, 0x3A26E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A26E0u;
label_3a26e0:
    // 0x3a26e0: 0xa60200c2  sh          $v0, 0xC2($s0)
    ctx->pc = 0x3a26e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
    // 0x3a26e4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3A26E4u;
    {
        const bool branch_taken_0x3a26e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A26E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A26E4u;
        // 0x3a26e8: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a26e4) {
            ctx->pc = 0x3A2700u;
            goto label_3a2700;
        }
    }
    ctx->pc = 0x3A26ECu;
    // 0x3a26ec: 0x0  nop
    ctx->pc = 0x3a26ecu;
    // NOP
label_3a26f0:
    // 0x3a26f0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3a26f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a26f4: 0xa662056e  sh          $v0, 0x56E($s3)
    ctx->pc = 0x3a26f4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1390), (uint16_t)GPR_U32(ctx, 2));
    // 0x3a26f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3a26f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a26fc: 0x0  nop
    ctx->pc = 0x3a26fcu;
    // NOP
label_3a2700:
    // 0x3a2700: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3a2700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3a2704: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x3a2704u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3a2708: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3a2708u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3a270c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3a270cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3a2710: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3a2710u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3a2714: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3a2714u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3a2718: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3a2718u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a271c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3a271cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a2720: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3a2720u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a2724: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3a2724u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a2728: 0x3e00008  jr          $ra
    ctx->pc = 0x3A2728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A272Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2728u;
        // 0x3a272c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A2728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A2730u;
}
