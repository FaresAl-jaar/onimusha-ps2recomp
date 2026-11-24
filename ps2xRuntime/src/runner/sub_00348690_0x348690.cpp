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

// Function: sub_00348690
// Address: 0x348690 - 0x348980
void sub_00348690_0x348690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00348690_0x348690");
#endif

    switch (ctx->pc) {
        case 0x3486e8u: goto label_3486e8;
        case 0x3486f8u: goto label_3486f8;
        case 0x348774u: goto label_348774;
        case 0x3487a0u: goto label_3487a0;
        case 0x3487c0u: goto label_3487c0;
        case 0x3487ecu: goto label_3487ec;
        case 0x34882cu: goto label_34882c;
        case 0x348858u: goto label_348858;
        case 0x3488f0u: goto label_3488f0;
        case 0x348914u: goto label_348914;
        case 0x348958u: goto label_348958;
        default: break;
    }

    ctx->pc = 0x348690u;

    // 0x348690: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x348690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x348694: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x348694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x348698: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x348698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x34869c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x34869cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3486a0: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x3486a0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3486a4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3486a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3486a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3486a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3486ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3486acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3486b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3486b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3486b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3486b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3486b8: 0x8c860070  lw          $a2, 0x70($a0)
    ctx->pc = 0x3486b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x3486bc: 0x90c30002  lbu         $v1, 0x2($a2)
    ctx->pc = 0x3486bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x3486c0: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x3486C0u;
    {
        const bool branch_taken_0x3486c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3486C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3486C0u;
        // 0x3486c4: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3486c0) {
            ctx->pc = 0x348718u;
            goto label_348718;
        }
    }
    ctx->pc = 0x3486C8u;
    // 0x3486c8: 0x86c30054  lh          $v1, 0x54($s6)
    ctx->pc = 0x3486c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 84)));
    // 0x3486cc: 0x14600034  bnez        $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x3486CCu;
    {
        const bool branch_taken_0x3486cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3486cc) {
            ctx->pc = 0x3487A0u;
            goto label_3487a0;
        }
    }
    ctx->pc = 0x3486D4u;
    // 0x3486d4: 0x8ec30074  lw          $v1, 0x74($s6)
    ctx->pc = 0x3486d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 116)));
    // 0x3486d8: 0x9063000d  lbu         $v1, 0xD($v1)
    ctx->pc = 0x3486d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13)));
    // 0x3486dc: 0x60082a  slt         $at, $v1, $zero
    ctx->pc = 0x3486dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x3486e0: 0x1420002f  bnez        $at, . + 4 + (0x2F << 2)
    ctx->pc = 0x3486E0u;
    {
        const bool branch_taken_0x3486e0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3486E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3486E0u;
        // 0x3486e4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3486e0) {
            ctx->pc = 0x3487A0u;
            goto label_3487a0;
        }
    }
    ctx->pc = 0x3486E8u;
label_3486e8:
    // 0x3486e8: 0x102e3c  dsll32      $a1, $s0, 24
    ctx->pc = 0x3486e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 24));
    // 0x3486ec: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x3486ecu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x3486f0: 0xc0d2260  jal         func_348980
    ctx->pc = 0x3486F0u;
    SET_GPR_U32(ctx, 31, 0x3486F8u);
    ctx->pc = 0x3486F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3486F0u;
    // 0x3486f4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348980u, 0x3486F0u, 0x3486F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3486F8u;
label_3486f8:
    // 0x3486f8: 0x8ec30074  lw          $v1, 0x74($s6)
    ctx->pc = 0x3486f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 116)));
    // 0x3486fc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3486fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x348700: 0x9063000d  lbu         $v1, 0xD($v1)
    ctx->pc = 0x348700u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13)));
    // 0x348704: 0x70082a  slt         $at, $v1, $s0
    ctx->pc = 0x348704u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x348708: 0x1020fff7  beqz        $at, . + 4 + (-0x9 << 2)
    ctx->pc = 0x348708u;
    {
        const bool branch_taken_0x348708 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x348708) {
            ctx->pc = 0x3486E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3486e8;
        }
    }
    ctx->pc = 0x348710u;
    // 0x348710: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x348710u;
    {
        const bool branch_taken_0x348710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x348710) {
            ctx->pc = 0x3487A0u;
            goto label_3487a0;
        }
    }
    ctx->pc = 0x348718u;
label_348718:
    // 0x348718: 0x86c50054  lh          $a1, 0x54($s6)
    ctx->pc = 0x348718u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 84)));
    // 0x34871c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x34871cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x348720: 0xa3001a  div         $zero, $a1, $v1
    ctx->pc = 0x348720u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x348724: 0x0  nop
    ctx->pc = 0x348724u;
    // NOP
    // 0x348728: 0x0  nop
    ctx->pc = 0x348728u;
    // NOP
    // 0x34872c: 0x1810  mfhi        $v1
    ctx->pc = 0x34872cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x348730: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x348730u;
    {
        const bool branch_taken_0x348730 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x348730) {
            ctx->pc = 0x3487A0u;
            goto label_3487a0;
        }
    }
    ctx->pc = 0x348738u;
    // 0x348738: 0x90c30012  lbu         $v1, 0x12($a2)
    ctx->pc = 0x348738u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 18)));
    // 0x34873c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x34873cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x348740: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x348740u;
    {
        const bool branch_taken_0x348740 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x348740) {
            ctx->pc = 0x348780u;
            goto label_348780;
        }
    }
    ctx->pc = 0x348748u;
    // 0x348748: 0x8ec30074  lw          $v1, 0x74($s6)
    ctx->pc = 0x348748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 116)));
    // 0x34874c: 0x86c50084  lh          $a1, 0x84($s6)
    ctx->pc = 0x34874cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 132)));
    // 0x348750: 0x9063000d  lbu         $v1, 0xD($v1)
    ctx->pc = 0x348750u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13)));
    // 0x348754: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x348754u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x348758: 0x14200011  bnez        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x348758u;
    {
        const bool branch_taken_0x348758 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x348758) {
            ctx->pc = 0x3487A0u;
            goto label_3487a0;
        }
    }
    ctx->pc = 0x348760u;
    // 0x348760: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x348760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x348764: 0x52e3c  dsll32      $a1, $a1, 24
    ctx->pc = 0x348764u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 24));
    // 0x348768: 0xa6c20084  sh          $v0, 0x84($s6)
    ctx->pc = 0x348768u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 132), (uint16_t)GPR_U32(ctx, 2));
    // 0x34876c: 0xc0d2260  jal         func_348980
    ctx->pc = 0x34876Cu;
    SET_GPR_U32(ctx, 31, 0x348774u);
    ctx->pc = 0x348770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34876Cu;
    // 0x348770: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348980u, 0x34876Cu, 0x348774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348774u;
label_348774:
    // 0x348774: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x348774u;
    {
        const bool branch_taken_0x348774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x348774) {
            ctx->pc = 0x3487A0u;
            goto label_3487a0;
        }
    }
    ctx->pc = 0x34877Cu;
    // 0x34877c: 0x0  nop
    ctx->pc = 0x34877cu;
    // NOP
label_348780:
    // 0x348780: 0x86c30084  lh          $v1, 0x84($s6)
    ctx->pc = 0x348780u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 132)));
    // 0x348784: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x348784u;
    {
        const bool branch_taken_0x348784 = (GPR_S64(ctx, 3) < 0);
        if (branch_taken_0x348784) {
            ctx->pc = 0x3487A0u;
            goto label_3487a0;
        }
    }
    ctx->pc = 0x34878Cu;
    // 0x34878c: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x34878cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x348790: 0x32e3c  dsll32      $a1, $v1, 24
    ctx->pc = 0x348790u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 24));
    // 0x348794: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x348794u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x348798: 0xc0d2260  jal         func_348980
    ctx->pc = 0x348798u;
    SET_GPR_U32(ctx, 31, 0x3487A0u);
    ctx->pc = 0x34879Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348798u;
    // 0x34879c: 0xa6c20084  sh          $v0, 0x84($s6) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 22), 132), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348980u, 0x348798u, 0x3487A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3487A0u;
label_3487a0:
    // 0x3487a0: 0x8ec40074  lw          $a0, 0x74($s6)
    ctx->pc = 0x3487a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 116)));
    // 0x3487a4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3487a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3487a8: 0x9083000c  lbu         $v1, 0xC($a0)
    ctx->pc = 0x3487a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3487ac: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x3487acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3487b0: 0x10200041  beqz        $at, . + 4 + (0x41 << 2)
    ctx->pc = 0x3487B0u;
    {
        const bool branch_taken_0x3487b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3487B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3487B0u;
        // 0x3487b4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3487b0) {
            ctx->pc = 0x3488B8u;
            goto label_3488b8;
        }
    }
    ctx->pc = 0x3487B8u;
    // 0x3487b8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3487b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3487bc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3487bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3487c0:
    // 0x3487c0: 0x8ec4007c  lw          $a0, 0x7C($s6)
    ctx->pc = 0x3487c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 124)));
    // 0x3487c4: 0x24037ffe  addiu       $v1, $zero, 0x7FFE
    ctx->pc = 0x3487c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x3487c8: 0x919021  addu        $s2, $a0, $s1
    ctx->pc = 0x3487c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x3487cc: 0x86440020  lh          $a0, 0x20($s2)
    ctx->pc = 0x3487ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x3487d0: 0x10830031  beq         $a0, $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x3487D0u;
    {
        const bool branch_taken_0x3487d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3487d0) {
            ctx->pc = 0x348898u;
            goto label_348898;
        }
    }
    ctx->pc = 0x3487D8u;
    // 0x3487d8: 0x8ec20078  lw          $v0, 0x78($s6)
    ctx->pc = 0x3487d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 120)));
    // 0x3487dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3487dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3487e0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3487e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3487e4: 0xc0a2228  jal         func_2888A0
    ctx->pc = 0x3487E4u;
    SET_GPR_U32(ctx, 31, 0x3487ECu);
    ctx->pc = 0x3487E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3487E4u;
    // 0x3487e8: 0x503021  addu        $a2, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2888A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2888A0u, 0x3487E4u, 0x3487ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3487ECu;
label_3487ec:
    // 0x3487ec: 0x92420025  lbu         $v0, 0x25($s2)
    ctx->pc = 0x3487ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 37)));
    // 0x3487f0: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3487F0u;
    {
        const bool branch_taken_0x3487f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3487f0) {
            ctx->pc = 0x348850u;
            goto label_348850;
        }
    }
    ctx->pc = 0x3487F8u;
    // 0x3487f8: 0x86c60080  lh          $a2, 0x80($s6)
    ctx->pc = 0x3487f8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 128)));
    // 0x3487fc: 0x86440020  lh          $a0, 0x20($s2)
    ctx->pc = 0x3487fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x348800: 0xc4082a  slt         $at, $a2, $a0
    ctx->pc = 0x348800u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x348804: 0x14200012  bnez        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x348804u;
    {
        const bool branch_taken_0x348804 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x348804) {
            ctx->pc = 0x348850u;
            goto label_348850;
        }
    }
    ctx->pc = 0x34880Cu;
    // 0x34880c: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x34880Cu;
    {
        const bool branch_taken_0x34880c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x348810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34880Cu;
        // 0x348810: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34880c) {
            ctx->pc = 0x348824u;
            goto label_348824;
        }
    }
    ctx->pc = 0x348814u;
    // 0x348814: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x348814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x348818: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x348818u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34881c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x34881Cu;
    {
        const bool branch_taken_0x34881c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x348820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34881Cu;
        // 0x348820: 0x3c024380  lui         $v0, 0x4380 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34881c) {
            ctx->pc = 0x348830u;
            goto label_348830;
        }
    }
    ctx->pc = 0x348824u;
label_348824:
    // 0x348824: 0xc0767d4  jal         func_1D9F50
    ctx->pc = 0x348824u;
    SET_GPR_U32(ctx, 31, 0x34882Cu);
    ctx->pc = 0x1D9F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9F50u, 0x348824u, 0x34882Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34882Cu;
label_34882c:
    // 0x34882c: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x34882cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
label_348830:
    // 0x348830: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x348830u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x348834: 0x0  nop
    ctx->pc = 0x348834u;
    // NOP
    // 0x348838: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x348838u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x34883c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x34883cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x348840: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x348840u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x348844: 0x0  nop
    ctx->pc = 0x348844u;
    // NOP
    // 0x348848: 0xa6420022  sh          $v0, 0x22($s2)
    ctx->pc = 0x348848u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 34), (uint16_t)GPR_U32(ctx, 2));
    // 0x34884c: 0x0  nop
    ctx->pc = 0x34884cu;
    // NOP
label_348850:
    // 0x348850: 0xc0743c0  jal         func_1D0F00
    ctx->pc = 0x348850u;
    SET_GPR_U32(ctx, 31, 0x348858u);
    ctx->pc = 0x348854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348850u;
    // 0x348854: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F00u, 0x348850u, 0x348858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348858u;
label_348858:
    // 0x348858: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x348858u;
    {
        const bool branch_taken_0x348858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34885Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348858u;
        // 0x34885c: 0x24037ffe  addiu       $v1, $zero, 0x7FFE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348858) {
            ctx->pc = 0x348868u;
            goto label_348868;
        }
    }
    ctx->pc = 0x348860u;
    // 0x348860: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x348860u;
    {
        const bool branch_taken_0x348860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x348864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348860u;
        // 0x348864: 0xa6430020  sh          $v1, 0x20($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 32), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348860) {
            ctx->pc = 0x348898u;
            goto label_348898;
        }
    }
    ctx->pc = 0x348868u;
label_348868:
    // 0x348868: 0x86430020  lh          $v1, 0x20($s2)
    ctx->pc = 0x348868u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x34886c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x34886cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x348870: 0xa6430020  sh          $v1, 0x20($s2)
    ctx->pc = 0x348870u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 32), (uint16_t)GPR_U32(ctx, 3));
    // 0x348874: 0x86430020  lh          $v1, 0x20($s2)
    ctx->pc = 0x348874u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x348878: 0x28617ff1  slti        $at, $v1, 0x7FF1
    ctx->pc = 0x348878u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32753) ? 1 : 0);
    // 0x34887c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x34887Cu;
    {
        const bool branch_taken_0x34887c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x348880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34887Cu;
        // 0x348880: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34887c) {
            ctx->pc = 0x348890u;
            goto label_348890;
        }
    }
    ctx->pc = 0x348884u;
    // 0x348884: 0xa2430025  sb          $v1, 0x25($s2)
    ctx->pc = 0x348884u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 37), (uint8_t)GPR_U32(ctx, 3));
    // 0x348888: 0xa6400020  sh          $zero, 0x20($s2)
    ctx->pc = 0x348888u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x34888c: 0x0  nop
    ctx->pc = 0x34888cu;
    // NOP
label_348890:
    // 0x348890: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x348890u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x348894: 0x0  nop
    ctx->pc = 0x348894u;
    // NOP
label_348898:
    // 0x348898: 0x8ec40074  lw          $a0, 0x74($s6)
    ctx->pc = 0x348898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 116)));
    // 0x34889c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x34889cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x3488a0: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x3488a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x3488a4: 0x9083000c  lbu         $v1, 0xC($a0)
    ctx->pc = 0x3488a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3488a8: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x3488a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3488ac: 0x1460ffc4  bnez        $v1, . + 4 + (-0x3C << 2)
    ctx->pc = 0x3488ACu;
    {
        const bool branch_taken_0x3488ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3488B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3488ACu;
        // 0x3488b0: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3488ac) {
            ctx->pc = 0x3487C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3487c0;
        }
    }
    ctx->pc = 0x3488B4u;
    // 0x3488b4: 0x0  nop
    ctx->pc = 0x3488b4u;
    // NOP
label_3488b8:
    // 0x3488b8: 0x8ec30070  lw          $v1, 0x70($s6)
    ctx->pc = 0x3488b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 112)));
    // 0x3488bc: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x3488bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x3488c0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3488c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3488c4: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x3488C4u;
    {
        const bool branch_taken_0x3488c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3488c4) {
            ctx->pc = 0x3488F8u;
            goto label_3488f8;
        }
    }
    ctx->pc = 0x3488CCu;
    // 0x3488cc: 0x9083000d  lbu         $v1, 0xD($a0)
    ctx->pc = 0x3488ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 13)));
    // 0x3488d0: 0x86c40084  lh          $a0, 0x84($s6)
    ctx->pc = 0x3488d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 132)));
    // 0x3488d4: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x3488d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3488d8: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x3488D8u;
    {
        const bool branch_taken_0x3488d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3488d8) {
            ctx->pc = 0x348918u;
            goto label_348918;
        }
    }
    ctx->pc = 0x3488E0u;
    // 0x3488e0: 0x1660000d  bnez        $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x3488E0u;
    {
        const bool branch_taken_0x3488e0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x3488E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3488E0u;
        // 0x3488e4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3488e0) {
            ctx->pc = 0x348918u;
            goto label_348918;
        }
    }
    ctx->pc = 0x3488E8u;
    // 0x3488e8: 0xc096b54  jal         func_25AD50
    ctx->pc = 0x3488E8u;
    SET_GPR_U32(ctx, 31, 0x3488F0u);
    ctx->pc = 0x25AD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD50u, 0x3488E8u, 0x3488F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3488F0u;
label_3488f0:
    // 0x3488f0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3488F0u;
    {
        const bool branch_taken_0x3488f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3488f0) {
            ctx->pc = 0x348918u;
            goto label_348918;
        }
    }
    ctx->pc = 0x3488F8u;
label_3488f8:
    // 0x3488f8: 0x86c30084  lh          $v1, 0x84($s6)
    ctx->pc = 0x3488f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 132)));
    // 0x3488fc: 0x4610006  bgez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3488FCu;
    {
        const bool branch_taken_0x3488fc = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x3488fc) {
            ctx->pc = 0x348918u;
            goto label_348918;
        }
    }
    ctx->pc = 0x348904u;
    // 0x348904: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x348904u;
    {
        const bool branch_taken_0x348904 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x348908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348904u;
        // 0x348908: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348904) {
            ctx->pc = 0x348918u;
            goto label_348918;
        }
    }
    ctx->pc = 0x34890Cu;
    // 0x34890c: 0xc096b54  jal         func_25AD50
    ctx->pc = 0x34890Cu;
    SET_GPR_U32(ctx, 31, 0x348914u);
    ctx->pc = 0x25AD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD50u, 0x34890Cu, 0x348914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348914u;
label_348914:
    // 0x348914: 0x0  nop
    ctx->pc = 0x348914u;
    // NOP
label_348918:
    // 0x348918: 0x7aa30020  lq          $v1, 0x20($s5)
    ctx->pc = 0x348918u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x34891c: 0x7ec30040  sq          $v1, 0x40($s6)
    ctx->pc = 0x34891cu;
    WRITE128(ADD32(GPR_U32(ctx, 22), 64), GPR_VEC(ctx, 3));
    // 0x348920: 0x86c30054  lh          $v1, 0x54($s6)
    ctx->pc = 0x348920u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 84)));
    // 0x348924: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x348924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x348928: 0xa6c30054  sh          $v1, 0x54($s6)
    ctx->pc = 0x348928u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 84), (uint16_t)GPR_U32(ctx, 3));
    // 0x34892c: 0x86c30054  lh          $v1, 0x54($s6)
    ctx->pc = 0x34892cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 84)));
    // 0x348930: 0x28637ff0  slti        $v1, $v1, 0x7FF0
    ctx->pc = 0x348930u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x348934: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x348934u;
    {
        const bool branch_taken_0x348934 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x348938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348934u;
        // 0x348938: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348934) {
            ctx->pc = 0x348940u;
            goto label_348940;
        }
    }
    ctx->pc = 0x34893Cu;
    // 0x34893c: 0xa6c30054  sh          $v1, 0x54($s6)
    ctx->pc = 0x34893cu;
    WRITE16(ADD32(GPR_U32(ctx, 22), 84), (uint16_t)GPR_U32(ctx, 3));
label_348940:
    // 0x348940: 0x92c30050  lbu         $v1, 0x50($s6)
    ctx->pc = 0x348940u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 80)));
    // 0x348944: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x348944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x348948: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x348948u;
    {
        const bool branch_taken_0x348948 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34894Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348948u;
        // 0x34894c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348948) {
            ctx->pc = 0x348958u;
            goto label_348958;
        }
    }
    ctx->pc = 0x348950u;
    // 0x348950: 0xc096b58  jal         func_25AD60
    ctx->pc = 0x348950u;
    SET_GPR_U32(ctx, 31, 0x348958u);
    ctx->pc = 0x348954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348950u;
    // 0x348954: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD60u, 0x348950u, 0x348958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348958u;
label_348958:
    // 0x348958: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x348958u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x34895c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x34895cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x348960: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x348960u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x348964: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x348964u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x348968: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x348968u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34896c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x34896cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x348970: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x348970u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x348974: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x348974u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x348978: 0x3e00008  jr          $ra
    ctx->pc = 0x348978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34897Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348978u;
        // 0x34897c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x348980u;
}
