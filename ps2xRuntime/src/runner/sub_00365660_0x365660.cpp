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

// Function: sub_00365660
// Address: 0x365660 - 0x3657f8
void sub_00365660_0x365660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00365660_0x365660");
#endif

    switch (ctx->pc) {
        case 0x365690u: goto label_365690;
        case 0x3656c8u: goto label_3656c8;
        case 0x365720u: goto label_365720;
        case 0x365730u: goto label_365730;
        case 0x36575cu: goto label_36575c;
        case 0x365780u: goto label_365780;
        case 0x3657b4u: goto label_3657b4;
        default: break;
    }

    ctx->pc = 0x365660u;

    // 0x365660: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x365660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x365664: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x365664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x365668: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x365668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x36566c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36566cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x365670: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x365670u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365674: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x365674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x365678: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x365678u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36567c: 0x8e250070  lw          $a1, 0x70($s1)
    ctx->pc = 0x36567cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x365680: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x365680u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x365684: 0x24844570  addiu       $a0, $a0, 0x4570
    ctx->pc = 0x365684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    // 0x365688: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x365688u;
    SET_GPR_U32(ctx, 31, 0x365690u);
    ctx->pc = 0x36568Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365688u;
    // 0x36568c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x365688u, 0x365690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365690u;
label_365690:
    // 0x365690: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x365690u;
    {
        const bool branch_taken_0x365690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x365690) {
            ctx->pc = 0x3656A8u;
            goto label_3656a8;
        }
    }
    ctx->pc = 0x365698u;
    // 0x365698: 0x8c4406ac  lw          $a0, 0x6AC($v0)
    ctx->pc = 0x365698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1708)));
    // 0x36569c: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x36569cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x3656a0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3656a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3656a4: 0x3802b  sltu        $s0, $zero, $v1
    ctx->pc = 0x3656a4u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3656a8:
    // 0x3656a8: 0x16000045  bnez        $s0, . + 4 + (0x45 << 2)
    ctx->pc = 0x3656A8u;
    {
        const bool branch_taken_0x3656a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3656a8) {
            ctx->pc = 0x3657C0u;
            goto label_3657c0;
        }
    }
    ctx->pc = 0x3656B0u;
    // 0x3656b0: 0x8e220084  lw          $v0, 0x84($s1)
    ctx->pc = 0x3656b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x3656b4: 0x8e50004c  lw          $s0, 0x4C($s2)
    ctx->pc = 0x3656b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x3656b8: 0x90450003  lbu         $a1, 0x3($v0)
    ctx->pc = 0x3656b8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x3656bc: 0x90460004  lbu         $a2, 0x4($v0)
    ctx->pc = 0x3656bcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3656c0: 0xc09d57c  jal         func_2755F0
    ctx->pc = 0x3656C0u;
    SET_GPR_U32(ctx, 31, 0x3656C8u);
    ctx->pc = 0x3656C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3656C0u;
    // 0x3656c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2755F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2755F0u, 0x3656C0u, 0x3656C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3656C8u;
label_3656c8:
    // 0x3656c8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3656C8u;
    {
        const bool branch_taken_0x3656c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3656c8) {
            ctx->pc = 0x365718u;
            goto label_365718;
        }
    }
    ctx->pc = 0x3656D0u;
    // 0x3656d0: 0x8e240084  lw          $a0, 0x84($s1)
    ctx->pc = 0x3656d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x3656d4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3656d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3656d8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3656d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3656dc: 0x90850005  lbu         $a1, 0x5($a0)
    ctx->pc = 0x3656dcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x3656e0: 0x9084000f  lbu         $a0, 0xF($a0)
    ctx->pc = 0x3656e0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 15)));
    // 0x3656e4: 0xa42818  mult        $a1, $a1, $a0
    ctx->pc = 0x3656e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3656e8: 0x24a4ffff  addiu       $a0, $a1, -0x1
    ctx->pc = 0x3656e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3656ec: 0xa6240090  sh          $a0, 0x90($s1)
    ctx->pc = 0x3656ecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 144), (uint16_t)GPR_U32(ctx, 4));
    // 0x3656f0: 0xa6200092  sh          $zero, 0x92($s1)
    ctx->pc = 0x3656f0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 146), (uint16_t)GPR_U32(ctx, 0));
    // 0x3656f4: 0xa6250094  sh          $a1, 0x94($s1)
    ctx->pc = 0x3656f4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 148), (uint16_t)GPR_U32(ctx, 5));
    // 0x3656f8: 0x86240090  lh          $a0, 0x90($s1)
    ctx->pc = 0x3656f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x3656fc: 0xa6240096  sh          $a0, 0x96($s1)
    ctx->pc = 0x3656fcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 150), (uint16_t)GPR_U32(ctx, 4));
    // 0x365700: 0xa6230098  sh          $v1, 0x98($s1)
    ctx->pc = 0x365700u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 152), (uint16_t)GPR_U32(ctx, 3));
    // 0x365704: 0xa620009a  sh          $zero, 0x9A($s1)
    ctx->pc = 0x365704u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 154), (uint16_t)GPR_U32(ctx, 0));
    // 0x365708: 0xa622009c  sh          $v0, 0x9C($s1)
    ctx->pc = 0x365708u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 156), (uint16_t)GPR_U32(ctx, 2));
    // 0x36570c: 0x86220098  lh          $v0, 0x98($s1)
    ctx->pc = 0x36570cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x365710: 0xa622009e  sh          $v0, 0x9E($s1)
    ctx->pc = 0x365710u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 158), (uint16_t)GPR_U32(ctx, 2));
    // 0x365714: 0x0  nop
    ctx->pc = 0x365714u;
    // NOP
label_365718:
    // 0x365718: 0xc0743c0  jal         func_1D0F00
    ctx->pc = 0x365718u;
    SET_GPR_U32(ctx, 31, 0x365720u);
    ctx->pc = 0x36571Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365718u;
    // 0x36571c: 0x26240120  addiu       $a0, $s1, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F00u, 0x365718u, 0x365720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365720u;
label_365720:
    // 0x365720: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x365720u;
    {
        const bool branch_taken_0x365720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x365724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365720u;
        // 0x365724: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365720) {
            ctx->pc = 0x365730u;
            goto label_365730;
        }
    }
    ctx->pc = 0x365728u;
    // 0x365728: 0xc096b54  jal         func_25AD50
    ctx->pc = 0x365728u;
    SET_GPR_U32(ctx, 31, 0x365730u);
    ctx->pc = 0x25AD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD50u, 0x365728u, 0x365730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365730u;
label_365730:
    // 0x365730: 0x9223007a  lbu         $v1, 0x7A($s1)
    ctx->pc = 0x365730u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 122)));
    // 0x365734: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x365734u;
    {
        const bool branch_taken_0x365734 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x365734) {
            ctx->pc = 0x365780u;
            goto label_365780;
        }
    }
    ctx->pc = 0x36573Cu;
    // 0x36573c: 0x8e250080  lw          $a1, 0x80($s1)
    ctx->pc = 0x36573cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x365740: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x365740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x365744: 0x8e020094  lw          $v0, 0x94($s0)
    ctx->pc = 0x365744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x365748: 0x90a30006  lbu         $v1, 0x6($a1)
    ctx->pc = 0x365748u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x36574c: 0x24a60020  addiu       $a2, $a1, 0x20
    ctx->pc = 0x36574cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x365750: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x365750u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x365754: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x365754u;
    SET_GPR_U32(ctx, 31, 0x36575Cu);
    ctx->pc = 0x365758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365754u;
    // 0x365758: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x365754u, 0x36575Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36575Cu;
label_36575c:
    // 0x36575c: 0x8e220084  lw          $v0, 0x84($s1)
    ctx->pc = 0x36575cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x365760: 0x26250090  addiu       $a1, $s1, 0x90
    ctx->pc = 0x365760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x365764: 0x8e240088  lw          $a0, 0x88($s1)
    ctx->pc = 0x365764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x365768: 0x262600a0  addiu       $a2, $s1, 0xA0
    ctx->pc = 0x365768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    // 0x36576c: 0x262700e0  addiu       $a3, $s1, 0xE0
    ctx->pc = 0x36576cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
    // 0x365770: 0x26280098  addiu       $t0, $s1, 0x98
    ctx->pc = 0x365770u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 152));
    // 0x365774: 0x904a0005  lbu         $t2, 0x5($v0)
    ctx->pc = 0x365774u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
    // 0x365778: 0xc07692c  jal         func_1DA4B0
    ctx->pc = 0x365778u;
    SET_GPR_U32(ctx, 31, 0x365780u);
    ctx->pc = 0x36577Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365778u;
    // 0x36577c: 0x27a90040  addiu       $t1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA4B0u, 0x365778u, 0x365780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365780u;
label_365780:
    // 0x365780: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x365780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x365784: 0x8e030094  lw          $v1, 0x94($s0)
    ctx->pc = 0x365784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x365788: 0x90840006  lbu         $a0, 0x6($a0)
    ctx->pc = 0x365788u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x36578c: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x36578cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x365790: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x365790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x365794: 0x78630030  lq          $v1, 0x30($v1)
    ctx->pc = 0x365794u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x365798: 0x7e230040  sq          $v1, 0x40($s1)
    ctx->pc = 0x365798u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), GPR_VEC(ctx, 3));
    // 0x36579c: 0x92230050  lbu         $v1, 0x50($s1)
    ctx->pc = 0x36579cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x3657a0: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x3657a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x3657a4: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3657A4u;
    {
        const bool branch_taken_0x3657a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3657A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3657A4u;
        // 0x3657a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3657a4) {
            ctx->pc = 0x3657E0u;
            goto label_3657e0;
        }
    }
    ctx->pc = 0x3657ACu;
    // 0x3657ac: 0xc096b58  jal         func_25AD60
    ctx->pc = 0x3657ACu;
    SET_GPR_U32(ctx, 31, 0x3657B4u);
    ctx->pc = 0x3657B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3657ACu;
    // 0x3657b0: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD60u, 0x3657ACu, 0x3657B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3657B4u;
label_3657b4:
    // 0x3657b4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3657B4u;
    {
        const bool branch_taken_0x3657b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3657b4) {
            ctx->pc = 0x3657E0u;
            goto label_3657e0;
        }
    }
    ctx->pc = 0x3657BCu;
    // 0x3657bc: 0x0  nop
    ctx->pc = 0x3657bcu;
    // NOP
label_3657c0:
    // 0x3657c0: 0x92240051  lbu         $a0, 0x51($s1)
    ctx->pc = 0x3657c0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 81)));
    // 0x3657c4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3657c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3657c8: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3657C8u;
    {
        const bool branch_taken_0x3657c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3657CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3657C8u;
        // 0x3657cc: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3657c8) {
            ctx->pc = 0x3657D8u;
            goto label_3657d8;
        }
    }
    ctx->pc = 0x3657D0u;
    // 0x3657d0: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3657D0u;
    {
        const bool branch_taken_0x3657d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3657d0) {
            ctx->pc = 0x3657E0u;
            goto label_3657e0;
        }
    }
    ctx->pc = 0x3657D8u;
label_3657d8:
    // 0x3657d8: 0xa220007b  sb          $zero, 0x7B($s1)
    ctx->pc = 0x3657d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 123), (uint8_t)GPR_U32(ctx, 0));
    // 0x3657dc: 0x0  nop
    ctx->pc = 0x3657dcu;
    // NOP
label_3657e0:
    // 0x3657e0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3657e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3657e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3657e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3657e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3657e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3657ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3657ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3657f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3657F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3657F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3657F0u;
        // 0x3657f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3657F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3657F8u;
}
