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

// Function: sub_00355410
// Address: 0x355410 - 0x355784
void sub_00355410_0x355410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00355410_0x355410");
#endif

    switch (ctx->pc) {
        case 0x3554acu: goto label_3554ac;
        case 0x3554ecu: goto label_3554ec;
        case 0x355500u: goto label_355500;
        case 0x355554u: goto label_355554;
        case 0x35556cu: goto label_35556c;
        case 0x355588u: goto label_355588;
        case 0x355598u: goto label_355598;
        case 0x3555c8u: goto label_3555c8;
        case 0x3555e0u: goto label_3555e0;
        case 0x3555ecu: goto label_3555ec;
        case 0x3555f8u: goto label_3555f8;
        case 0x35560cu: goto label_35560c;
        case 0x35566cu: goto label_35566c;
        case 0x3556acu: goto label_3556ac;
        case 0x3556bcu: goto label_3556bc;
        case 0x355770u: goto label_355770;
        default: break;
    }

    ctx->pc = 0x355410u;

    // 0x355410: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x355410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x355414: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x355414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x355418: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x355418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x35541c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x35541cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x355420: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x355420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x355424: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x355424u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355428: 0x90850521  lbu         $a1, 0x521($a0)
    ctx->pc = 0x355428u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1313)));
    // 0x35542c: 0x10a30040  beq         $a1, $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x35542Cu;
    {
        const bool branch_taken_0x35542c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x355430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35542Cu;
        // 0x355430: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35542c) {
            ctx->pc = 0x355530u;
            goto label_355530;
        }
    }
    ctx->pc = 0x355434u;
    // 0x355434: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x355434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x355438: 0x10a30035  beq         $a1, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x355438u;
    {
        const bool branch_taken_0x355438 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x355438) {
            ctx->pc = 0x355510u;
            goto label_355510;
        }
    }
    ctx->pc = 0x355440u;
    // 0x355440: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x355440u;
    {
        const bool branch_taken_0x355440 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x355440) {
            ctx->pc = 0x355450u;
            goto label_355450;
        }
    }
    ctx->pc = 0x355448u;
    // 0x355448: 0x100000c9  b           . + 4 + (0xC9 << 2)
    ctx->pc = 0x355448u;
    {
        const bool branch_taken_0x355448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x355448) {
            ctx->pc = 0x355770u;
            goto label_355770;
        }
    }
    ctx->pc = 0x355450u;
label_355450:
    // 0x355450: 0x12000029  beqz        $s0, . + 4 + (0x29 << 2)
    ctx->pc = 0x355450u;
    {
        const bool branch_taken_0x355450 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x355450) {
            ctx->pc = 0x3554F8u;
            goto label_3554f8;
        }
    }
    ctx->pc = 0x355458u;
    // 0x355458: 0x92040002  lbu         $a0, 0x2($s0)
    ctx->pc = 0x355458u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x35545c: 0x24030097  addiu       $v1, $zero, 0x97
    ctx->pc = 0x35545cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 151));
    // 0x355460: 0x10830015  beq         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x355460u;
    {
        const bool branch_taken_0x355460 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x355464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355460u;
        // 0x355464: 0x24030022  addiu       $v1, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355460) {
            ctx->pc = 0x3554B8u;
            goto label_3554b8;
        }
    }
    ctx->pc = 0x355468u;
    // 0x355468: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x355468u;
    {
        const bool branch_taken_0x355468 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x355468) {
            ctx->pc = 0x355478u;
            goto label_355478;
        }
    }
    ctx->pc = 0x355470u;
    // 0x355470: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x355470u;
    {
        const bool branch_taken_0x355470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x355470) {
            ctx->pc = 0x355500u;
            goto label_355500;
        }
    }
    ctx->pc = 0x355478u;
label_355478:
    // 0x355478: 0x9223052e  lbu         $v1, 0x52E($s1)
    ctx->pc = 0x355478u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x35547c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x35547cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x355480: 0x3c021b00  lui         $v0, 0x1B00
    ctx->pc = 0x355480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6912 << 16));
    // 0x355484: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x355484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x355488: 0x34450500  ori         $a1, $v0, 0x500
    ctx->pc = 0x355488u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1280);
    // 0x35548c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35548cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355490: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x355490u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x355494: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x355494u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355498: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x355498u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35549c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x35549cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3554a0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3554a0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3554a4: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3554A4u;
    SET_GPR_U32(ctx, 31, 0x3554ACu);
    ctx->pc = 0x3554A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3554A4u;
    // 0x3554a8: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3554A4u, 0x3554ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3554ACu;
label_3554ac:
    // 0x3554ac: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3554ACu;
    {
        const bool branch_taken_0x3554ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3554ac) {
            ctx->pc = 0x355500u;
            goto label_355500;
        }
    }
    ctx->pc = 0x3554B4u;
    // 0x3554b4: 0x0  nop
    ctx->pc = 0x3554b4u;
    // NOP
label_3554b8:
    // 0x3554b8: 0x9223052e  lbu         $v1, 0x52E($s1)
    ctx->pc = 0x3554b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x3554bc: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3554bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3554c0: 0x3c021800  lui         $v0, 0x1800
    ctx->pc = 0x3554c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6144 << 16));
    // 0x3554c4: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3554c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3554c8: 0x34459702  ori         $a1, $v0, 0x9702
    ctx->pc = 0x3554c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38658);
    // 0x3554cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3554ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3554d0: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x3554d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3554d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3554d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3554d8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3554d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3554dc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3554dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3554e0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3554e0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3554e4: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3554E4u;
    SET_GPR_U32(ctx, 31, 0x3554ECu);
    ctx->pc = 0x3554E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3554E4u;
    // 0x3554e8: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3554E4u, 0x3554ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3554ECu;
label_3554ec:
    // 0x3554ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3554ECu;
    {
        const bool branch_taken_0x3554ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3554ec) {
            ctx->pc = 0x355500u;
            goto label_355500;
        }
    }
    ctx->pc = 0x3554F4u;
    // 0x3554f4: 0x0  nop
    ctx->pc = 0x3554f4u;
    // NOP
label_3554f8:
    // 0x3554f8: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3554F8u;
    SET_GPR_U32(ctx, 31, 0x355500u);
    ctx->pc = 0x3554FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3554F8u;
    // 0x3554fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3554F8u, 0x355500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355500u;
label_355500:
    // 0x355500: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x355500u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x355504: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x355504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x355508: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x355508u;
    {
        const bool branch_taken_0x355508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35550Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355508u;
        // 0x35550c: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355508) {
            ctx->pc = 0x355770u;
            goto label_355770;
        }
    }
    ctx->pc = 0x355510u;
label_355510:
    // 0x355510: 0x86220526  lh          $v0, 0x526($s1)
    ctx->pc = 0x355510u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1318)));
    // 0x355514: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x355514u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x355518: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x355518u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x35551c: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x35551cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x355520: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x355520u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x355524: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x355524u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x355528: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x355528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x35552c: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x35552cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
label_355530:
    // 0x355530: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x355530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x355534: 0x34438885  ori         $v1, $v0, 0x8885
    ctx->pc = 0x355534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x355538: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x355538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x35553c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x35553cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x355540: 0x26250090  addiu       $a1, $s1, 0x90
    ctx->pc = 0x355540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x355544: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x355544u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x355548: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x355548u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x35554c: 0xc07681c  jal         func_1DA070
    ctx->pc = 0x35554Cu;
    SET_GPR_U32(ctx, 31, 0x355554u);
    ctx->pc = 0x355550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35554Cu;
    // 0x355550: 0x262600a0  addiu       $a2, $s1, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA070u, 0x35554Cu, 0x355554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355554u;
label_355554:
    // 0x355554: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x355554u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x355558: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x355558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x35555c: 0x24a55c70  addiu       $a1, $a1, 0x5C70
    ctx->pc = 0x35555cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23664));
    // 0x355560: 0x26260090  addiu       $a2, $s1, 0x90
    ctx->pc = 0x355560u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x355564: 0xc097384  jal         func_25CE10
    ctx->pc = 0x355564u;
    SET_GPR_U32(ctx, 31, 0x35556Cu);
    ctx->pc = 0x355568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355564u;
    // 0x355568: 0x26270020  addiu       $a3, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CE10u, 0x355564u, 0x35556Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35556Cu;
label_35556c:
    // 0x35556c: 0x92260558  lbu         $a2, 0x558($s1)
    ctx->pc = 0x35556cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1368)));
    // 0x355570: 0xc62c0554  lwc1        $f12, 0x554($s1)
    ctx->pc = 0x355570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x355574: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x355574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355578: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x355578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x35557c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x35557cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355580: 0xc0c0900  jal         func_302400
    ctx->pc = 0x355580u;
    SET_GPR_U32(ctx, 31, 0x355588u);
    ctx->pc = 0x355584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355580u;
    // 0x355584: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x355580u, 0x355588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355588u;
label_355588:
    // 0x355588: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x355588u;
    {
        const bool branch_taken_0x355588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35558Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355588u;
        // 0x35558c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355588) {
            ctx->pc = 0x3555A0u;
            goto label_3555a0;
        }
    }
    ctx->pc = 0x355590u;
    // 0x355590: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x355590u;
    SET_GPR_U32(ctx, 31, 0x355598u);
    ctx->pc = 0x355594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355590u;
    // 0x355594: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x355590u, 0x355598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355598u;
label_355598:
    // 0x355598: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x355598u;
    {
        const bool branch_taken_0x355598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x355598) {
            ctx->pc = 0x355770u;
            goto label_355770;
        }
    }
    ctx->pc = 0x3555A0u;
label_3555a0:
    // 0x3555a0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3555a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3555a4: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x3555a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x3555a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3555a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3555ac: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x3555acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3555b0: 0x26260080  addiu       $a2, $s1, 0x80
    ctx->pc = 0x3555b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x3555b4: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x3555b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3555b8: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x3555b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3555bc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x3555bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3555c0: 0xc0c0980  jal         func_302600
    ctx->pc = 0x3555C0u;
    SET_GPR_U32(ctx, 31, 0x3555C8u);
    ctx->pc = 0x3555C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3555C0u;
    // 0x3555c4: 0x27aa00bc  addiu       $t2, $sp, 0xBC (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302600u, 0x3555C0u, 0x3555C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3555C8u;
label_3555c8:
    // 0x3555c8: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x3555C8u;
    {
        const bool branch_taken_0x3555c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3555c8) {
            ctx->pc = 0x3556C8u;
            goto label_3556c8;
        }
    }
    ctx->pc = 0x3555D0u;
    // 0x3555d0: 0x8e260550  lw          $a2, 0x550($s1)
    ctx->pc = 0x3555d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
    // 0x3555d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3555d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3555d8: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x3555D8u;
    SET_GPR_U32(ctx, 31, 0x3555E0u);
    ctx->pc = 0x3555DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3555D8u;
    // 0x3555dc: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x3555D8u, 0x3555E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3555E0u;
label_3555e0:
    // 0x3555e0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3555e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3555e4: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x3555E4u;
    SET_GPR_U32(ctx, 31, 0x3555ECu);
    ctx->pc = 0x3555E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3555E4u;
    // 0x3555e8: 0x26250090  addiu       $a1, $s1, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x3555E4u, 0x3555ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3555ECu;
label_3555ec:
    // 0x3555ec: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3555ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3555f0: 0xc0766e8  jal         func_1D9BA0
    ctx->pc = 0x3555F0u;
    SET_GPR_U32(ctx, 31, 0x3555F8u);
    ctx->pc = 0x3555F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3555F0u;
    // 0x3555f4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9BA0u, 0x3555F0u, 0x3555F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3555F8u;
label_3555f8:
    // 0x3555f8: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x3555f8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
    // 0x3555fc: 0x26260020  addiu       $a2, $s1, 0x20
    ctx->pc = 0x3555fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x355600: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x355600u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x355604: 0xc0a90d4  jal         func_2A4350
    ctx->pc = 0x355604u;
    SET_GPR_U32(ctx, 31, 0x35560Cu);
    ctx->pc = 0x355608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355604u;
    // 0x355608: 0x27a70040  addiu       $a3, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4350u, 0x355604u, 0x35560Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35560Cu;
label_35560c:
    // 0x35560c: 0x12000028  beqz        $s0, . + 4 + (0x28 << 2)
    ctx->pc = 0x35560Cu;
    {
        const bool branch_taken_0x35560c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x35560c) {
            ctx->pc = 0x3556B0u;
            goto label_3556b0;
        }
    }
    ctx->pc = 0x355614u;
    // 0x355614: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x355614u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x355618: 0x24020097  addiu       $v0, $zero, 0x97
    ctx->pc = 0x355618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 151));
    // 0x35561c: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x35561Cu;
    {
        const bool branch_taken_0x35561c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x355620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35561Cu;
        // 0x355620: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35561c) {
            ctx->pc = 0x355678u;
            goto label_355678;
        }
    }
    ctx->pc = 0x355624u;
    // 0x355624: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x355624u;
    {
        const bool branch_taken_0x355624 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x355624) {
            ctx->pc = 0x355638u;
            goto label_355638;
        }
    }
    ctx->pc = 0x35562Cu;
    // 0x35562c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x35562Cu;
    {
        const bool branch_taken_0x35562c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35562c) {
            ctx->pc = 0x3556B0u;
            goto label_3556b0;
        }
    }
    ctx->pc = 0x355634u;
    // 0x355634: 0x0  nop
    ctx->pc = 0x355634u;
    // NOP
label_355638:
    // 0x355638: 0x9223052e  lbu         $v1, 0x52E($s1)
    ctx->pc = 0x355638u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x35563c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x35563cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x355640: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x355640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    // 0x355644: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x355644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x355648: 0x34450604  ori         $a1, $v0, 0x604
    ctx->pc = 0x355648u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1540);
    // 0x35564c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35564cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355650: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x355650u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x355654: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x355654u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355658: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x355658u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35565c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x35565cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355660: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x355660u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355664: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x355664u;
    SET_GPR_U32(ctx, 31, 0x35566Cu);
    ctx->pc = 0x355668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355664u;
    // 0x355668: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x355664u, 0x35566Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35566Cu;
label_35566c:
    // 0x35566c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x35566Cu;
    {
        const bool branch_taken_0x35566c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35566c) {
            ctx->pc = 0x3556B0u;
            goto label_3556b0;
        }
    }
    ctx->pc = 0x355674u;
    // 0x355674: 0x0  nop
    ctx->pc = 0x355674u;
    // NOP
label_355678:
    // 0x355678: 0x9223052e  lbu         $v1, 0x52E($s1)
    ctx->pc = 0x355678u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x35567c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x35567cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x355680: 0x3c021900  lui         $v0, 0x1900
    ctx->pc = 0x355680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6400 << 16));
    // 0x355684: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x355684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x355688: 0x34459702  ori         $a1, $v0, 0x9702
    ctx->pc = 0x355688u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38658);
    // 0x35568c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35568cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355690: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x355690u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x355694: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x355694u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355698: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x355698u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35569c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x35569cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3556a0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3556a0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3556a4: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3556A4u;
    SET_GPR_U32(ctx, 31, 0x3556ACu);
    ctx->pc = 0x3556A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3556A4u;
    // 0x3556a8: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3556A4u, 0x3556ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3556ACu;
label_3556ac:
    // 0x3556ac: 0x0  nop
    ctx->pc = 0x3556acu;
    // NOP
label_3556b0:
    // 0x3556b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3556b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3556b4: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3556B4u;
    SET_GPR_U32(ctx, 31, 0x3556BCu);
    ctx->pc = 0x3556B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3556B4u;
    // 0x3556b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3556B4u, 0x3556BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3556BCu;
label_3556bc:
    // 0x3556bc: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x3556BCu;
    {
        const bool branch_taken_0x3556bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3556bc) {
            ctx->pc = 0x355770u;
            goto label_355770;
        }
    }
    ctx->pc = 0x3556C4u;
    // 0x3556c4: 0x0  nop
    ctx->pc = 0x3556c4u;
    // NOP
label_3556c8:
    // 0x3556c8: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x3556c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
    // 0x3556cc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3556CCu;
    {
        const bool branch_taken_0x3556cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3556D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3556CCu;
        // 0x3556d0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3556cc) {
            ctx->pc = 0x3556E0u;
            goto label_3556e0;
        }
    }
    ctx->pc = 0x3556D4u;
    // 0x3556d4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3556D4u;
    {
        const bool branch_taken_0x3556d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3556d4) {
            ctx->pc = 0x355760u;
            goto label_355760;
        }
    }
    ctx->pc = 0x3556DCu;
    // 0x3556dc: 0x0  nop
    ctx->pc = 0x3556dcu;
    // NOP
label_3556e0:
    // 0x3556e0: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x3556e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3556e4: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3556e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3556e8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3556e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3556ec: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3556ecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3556f0: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x3556f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
    // 0x3556f4: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3556F4u;
    {
        const bool branch_taken_0x3556f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3556f4) {
            ctx->pc = 0x355730u;
            goto label_355730;
        }
    }
    ctx->pc = 0x3556FCu;
    // 0x3556fc: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x3556fcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x355700: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x355700u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x355704: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x355704u;
    {
        const bool branch_taken_0x355704 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x355708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355704u;
        // 0x355708: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355704) {
            ctx->pc = 0x355758u;
            goto label_355758;
        }
    }
    ctx->pc = 0x35570Cu;
    // 0x35570c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35570cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x355710: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x355710u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x355714: 0x0  nop
    ctx->pc = 0x355714u;
    // NOP
    // 0x355718: 0x0  nop
    ctx->pc = 0x355718u;
    // NOP
    // 0x35571c: 0x2010  mfhi        $a0
    ctx->pc = 0x35571cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x355720: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x355720u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x355724: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x355724u;
    {
        const bool branch_taken_0x355724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x355728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355724u;
        // 0x355728: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355724) {
            ctx->pc = 0x355758u;
            goto label_355758;
        }
    }
    ctx->pc = 0x35572Cu;
    // 0x35572c: 0x0  nop
    ctx->pc = 0x35572cu;
    // NOP
label_355730:
    // 0x355730: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x355730u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x355734: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x355734u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x355738: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x355738u;
    {
        const bool branch_taken_0x355738 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x355738) {
            ctx->pc = 0x355758u;
            goto label_355758;
        }
    }
    ctx->pc = 0x355740u;
    // 0x355740: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x355740u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x355744: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x355744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x355748: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x355748u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x35574c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x35574Cu;
    {
        const bool branch_taken_0x35574c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x355750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35574Cu;
        // 0x355750: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35574c) {
            ctx->pc = 0x355760u;
            goto label_355760;
        }
    }
    ctx->pc = 0x355754u;
    // 0x355754: 0x0  nop
    ctx->pc = 0x355754u;
    // NOP
label_355758:
    // 0x355758: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x355758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35575c: 0x0  nop
    ctx->pc = 0x35575cu;
    // NOP
label_355760:
    // 0x355760: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x355760u;
    {
        const bool branch_taken_0x355760 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x355764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355760u;
        // 0x355764: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355760) {
            ctx->pc = 0x355770u;
            goto label_355770;
        }
    }
    ctx->pc = 0x355768u;
    // 0x355768: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x355768u;
    SET_GPR_U32(ctx, 31, 0x355770u);
    ctx->pc = 0x35576Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355768u;
    // 0x35576c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x355768u, 0x355770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355770u;
label_355770:
    // 0x355770: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x355770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x355774: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x355774u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x355778: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x355778u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35577c: 0x3e00008  jr          $ra
    ctx->pc = 0x35577Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x355780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35577Cu;
        // 0x355780: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35577Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x355784u;
}
