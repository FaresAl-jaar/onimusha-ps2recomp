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

// Function: sub_003AA710
// Address: 0x3aa710 - 0x3aab0c
void sub_003AA710_0x3aa710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AA710_0x3aa710");
#endif

    switch (ctx->pc) {
        case 0x3aa778u: goto label_3aa778;
        case 0x3aa788u: goto label_3aa788;
        case 0x3aa7d0u: goto label_3aa7d0;
        case 0x3aa800u: goto label_3aa800;
        case 0x3aa848u: goto label_3aa848;
        case 0x3aa878u: goto label_3aa878;
        case 0x3aa8c0u: goto label_3aa8c0;
        case 0x3aa8fcu: goto label_3aa8fc;
        case 0x3aa90cu: goto label_3aa90c;
        case 0x3aa928u: goto label_3aa928;
        case 0x3aa95cu: goto label_3aa95c;
        case 0x3aa96cu: goto label_3aa96c;
        case 0x3aa998u: goto label_3aa998;
        case 0x3aa9ccu: goto label_3aa9cc;
        case 0x3aa9dcu: goto label_3aa9dc;
        case 0x3aaa38u: goto label_3aaa38;
        case 0x3aaa4cu: goto label_3aaa4c;
        case 0x3aaa8cu: goto label_3aaa8c;
        case 0x3aaa9cu: goto label_3aaa9c;
        case 0x3aaaccu: goto label_3aaacc;
        case 0x3aaadcu: goto label_3aaadc;
        default: break;
    }

    ctx->pc = 0x3aa710u;

    // 0x3aa710: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3aa710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3aa714: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3aa714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3aa718: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3aa718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3aa71c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3aa71cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3aa720: 0x90850003  lbu         $a1, 0x3($a0)
    ctx->pc = 0x3aa720u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x3aa724: 0x2ca10008  sltiu       $at, $a1, 0x8
    ctx->pc = 0x3aa724u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x3aa728: 0x102000f1  beqz        $at, . + 4 + (0xF1 << 2)
    ctx->pc = 0x3AA728u;
    {
        const bool branch_taken_0x3aa728 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA728u;
        // 0x3aa72c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa728) {
            ctx->pc = 0x3AAAF0u;
            goto label_3aaaf0;
        }
    }
    ctx->pc = 0x3AA730u;
    // 0x3aa730: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3aa730u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3aa734: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x3aa734u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3aa738: 0x24632940  addiu       $v1, $v1, 0x2940
    ctx->pc = 0x3aa738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10560));
    // 0x3aa73c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3aa73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3aa740: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3aa740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3aa744: 0x400008  jr          $v0
    ctx->pc = 0x3AA744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3AA750u: goto label_3aa750;
            case 0x3AA8E8u: goto label_3aa8e8;
            case 0x3AA948u: goto label_3aa948;
            case 0x3AA988u: goto label_3aa988;
            case 0x3AA9B8u: goto label_3aa9b8;
            case 0x3AAA28u: goto label_3aaa28;
            case 0x3AAA78u: goto label_3aaa78;
            case 0x3AAAB8u: goto label_3aaab8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AA744u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3AA74Cu;
    // 0x3aa74c: 0x0  nop
    ctx->pc = 0x3aa74cu;
    // NOP
label_3aa750:
    // 0x3aa750: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x3aa750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3aa754: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x3aa754u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x3aa758: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3aa758u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3aa75c: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x3aa75cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x3aa760: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x3aa760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x3aa764: 0x3c01006c  lui         $at, 0x6C
    ctx->pc = 0x3aa764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)108 << 16));
    // 0x3aa768: 0x24848c30  addiu       $a0, $a0, -0x73D0
    ctx->pc = 0x3aa768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937648));
    // 0x3aa76c: 0xa4228c12  sh          $v0, -0x73EE($at)
    ctx->pc = 0x3aa76cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B8C12u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x6B8C12u, _value); } while (0);
    // 0x3aa770: 0xc049ed2  jal         func_127B48
    ctx->pc = 0x3AA770u;
    SET_GPR_U32(ctx, 31, 0x3AA778u);
    ctx->pc = 0x3AA774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA770u;
    // 0x3aa774: 0x24a52930  addiu       $a1, $a1, 0x2930 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B48u, 0x3AA770u, 0x3AA778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA778u;
label_3aa778:
    // 0x3aa778: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x3aa778u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x3aa77c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3aa77cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa780: 0x246399e0  addiu       $v1, $v1, -0x6620
    ctx->pc = 0x3aa780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941152));
    // 0x3aa784: 0x0  nop
    ctx->pc = 0x3aa784u;
    // NOP
label_3aa788:
    // 0x3aa788: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3aa788u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3aa78c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3aa78cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3aa790: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x3aa790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x3aa794: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x3aa794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x3aa798: 0x2c820088  sltiu       $v0, $a0, 0x88
    ctx->pc = 0x3aa798u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)136) ? 1 : 0);
    // 0x3aa79c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3aa79cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3aa7a0: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3aa7a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3aa7a4: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x3aa7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x3aa7a8: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3aa7a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3aa7ac: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3aa7acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3aa7b0: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x3aa7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x3aa7b4: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3aa7b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3aa7b8: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3aa7b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3aa7bc: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x3AA7BCu;
    {
        const bool branch_taken_0x3aa7bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AA7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA7BCu;
        // 0x3aa7c0: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa7bc) {
            ctx->pc = 0x3AA788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3aa788;
        }
    }
    ctx->pc = 0x3AA7C4u;
    // 0x3aa7c4: 0x2c810090  sltiu       $at, $a0, 0x90
    ctx->pc = 0x3aa7c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)144) ? 1 : 0);
    // 0x3aa7c8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x3AA7C8u;
    {
        const bool branch_taken_0x3aa7c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aa7c8) {
            ctx->pc = 0x3AA7F0u;
            goto label_3aa7f0;
        }
    }
    ctx->pc = 0x3AA7D0u;
label_3aa7d0:
    // 0x3aa7d0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3aa7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3aa7d4: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3aa7d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3aa7d8: 0x2c820090  sltiu       $v0, $a0, 0x90
    ctx->pc = 0x3aa7d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)144) ? 1 : 0);
    // 0x3aa7dc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3aa7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3aa7e0: 0x0  nop
    ctx->pc = 0x3aa7e0u;
    // NOP
    // 0x3aa7e4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3AA7E4u;
    {
        const bool branch_taken_0x3aa7e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3aa7e4) {
            ctx->pc = 0x3AA7D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3aa7d0;
        }
    }
    ctx->pc = 0x3AA7ECu;
    // 0x3aa7ec: 0x0  nop
    ctx->pc = 0x3aa7ecu;
    // NOP
label_3aa7f0:
    // 0x3aa7f0: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x3aa7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x3aa7f4: 0x24639a70  addiu       $v1, $v1, -0x6590
    ctx->pc = 0x3aa7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941296));
    // 0x3aa7f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3aa7f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa7fc: 0x0  nop
    ctx->pc = 0x3aa7fcu;
    // NOP
label_3aa800:
    // 0x3aa800: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3aa800u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3aa804: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3aa804u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3aa808: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x3aa808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x3aa80c: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x3aa80cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x3aa810: 0x2c820328  sltiu       $v0, $a0, 0x328
    ctx->pc = 0x3aa810u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)808) ? 1 : 0);
    // 0x3aa814: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3aa814u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3aa818: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3aa818u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3aa81c: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x3aa81cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x3aa820: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3aa820u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3aa824: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3aa824u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3aa828: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x3aa828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x3aa82c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3aa82cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3aa830: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3aa830u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3aa834: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x3AA834u;
    {
        const bool branch_taken_0x3aa834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AA838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA834u;
        // 0x3aa838: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa834) {
            ctx->pc = 0x3AA800u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3aa800;
        }
    }
    ctx->pc = 0x3AA83Cu;
    // 0x3aa83c: 0x2c810330  sltiu       $at, $a0, 0x330
    ctx->pc = 0x3aa83cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)816) ? 1 : 0);
    // 0x3aa840: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x3AA840u;
    {
        const bool branch_taken_0x3aa840 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aa840) {
            ctx->pc = 0x3AA868u;
            goto label_3aa868;
        }
    }
    ctx->pc = 0x3AA848u;
label_3aa848:
    // 0x3aa848: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3aa848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3aa84c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3aa84cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3aa850: 0x2c820330  sltiu       $v0, $a0, 0x330
    ctx->pc = 0x3aa850u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)816) ? 1 : 0);
    // 0x3aa854: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3aa854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3aa858: 0x0  nop
    ctx->pc = 0x3aa858u;
    // NOP
    // 0x3aa85c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3AA85Cu;
    {
        const bool branch_taken_0x3aa85c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3aa85c) {
            ctx->pc = 0x3AA848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3aa848;
        }
    }
    ctx->pc = 0x3AA864u;
    // 0x3aa864: 0x0  nop
    ctx->pc = 0x3aa864u;
    // NOP
label_3aa868:
    // 0x3aa868: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x3aa868u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x3aa86c: 0x24639da0  addiu       $v1, $v1, -0x6260
    ctx->pc = 0x3aa86cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942112));
    // 0x3aa870: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3aa870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa874: 0x0  nop
    ctx->pc = 0x3aa874u;
    // NOP
label_3aa878:
    // 0x3aa878: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3aa878u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3aa87c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3aa87cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3aa880: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x3aa880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x3aa884: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x3aa884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x3aa888: 0x2c825ea8  sltiu       $v0, $a0, 0x5EA8
    ctx->pc = 0x3aa888u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24232) ? 1 : 0);
    // 0x3aa88c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3aa88cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3aa890: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3aa890u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3aa894: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x3aa894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x3aa898: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3aa898u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3aa89c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3aa89cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3aa8a0: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x3aa8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x3aa8a4: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3aa8a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3aa8a8: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3aa8a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3aa8ac: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x3AA8ACu;
    {
        const bool branch_taken_0x3aa8ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AA8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA8ACu;
        // 0x3aa8b0: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa8ac) {
            ctx->pc = 0x3AA878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3aa878;
        }
    }
    ctx->pc = 0x3AA8B4u;
    // 0x3aa8b4: 0x2c815eb0  sltiu       $at, $a0, 0x5EB0
    ctx->pc = 0x3aa8b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24240) ? 1 : 0);
    // 0x3aa8b8: 0x1020008d  beqz        $at, . + 4 + (0x8D << 2)
    ctx->pc = 0x3AA8B8u;
    {
        const bool branch_taken_0x3aa8b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aa8b8) {
            ctx->pc = 0x3AAAF0u;
            goto label_3aaaf0;
        }
    }
    ctx->pc = 0x3AA8C0u;
label_3aa8c0:
    // 0x3aa8c0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3aa8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3aa8c4: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3aa8c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3aa8c8: 0x2c825eb0  sltiu       $v0, $a0, 0x5EB0
    ctx->pc = 0x3aa8c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24240) ? 1 : 0);
    // 0x3aa8cc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3aa8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3aa8d0: 0x0  nop
    ctx->pc = 0x3aa8d0u;
    // NOP
    // 0x3aa8d4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3AA8D4u;
    {
        const bool branch_taken_0x3aa8d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3aa8d4) {
            ctx->pc = 0x3AA8C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3aa8c0;
        }
    }
    ctx->pc = 0x3AA8DCu;
    // 0x3aa8dc: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x3AA8DCu;
    {
        const bool branch_taken_0x3aa8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aa8dc) {
            ctx->pc = 0x3AAAF0u;
            goto label_3aaaf0;
        }
    }
    ctx->pc = 0x3AA8E4u;
    // 0x3aa8e4: 0x0  nop
    ctx->pc = 0x3aa8e4u;
    // NOP
label_3aa8e8:
    // 0x3aa8e8: 0x82050007  lb          $a1, 0x7($s0)
    ctx->pc = 0x3aa8e8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3aa8ec: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3aa8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3aa8f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3aa8f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa8f4: 0xc052840  jal         func_14A100
    ctx->pc = 0x3AA8F4u;
    SET_GPR_U32(ctx, 31, 0x3AA8FCu);
    ctx->pc = 0x3AA8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA8F4u;
    // 0x3aa8f8: 0x24848c10  addiu       $a0, $a0, -0x73F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A100u, 0x3AA8F4u, 0x3AA8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA8FCu;
label_3aa8fc:
    // 0x3aa8fc: 0x1440007c  bnez        $v0, . + 4 + (0x7C << 2)
    ctx->pc = 0x3AA8FCu;
    {
        const bool branch_taken_0x3aa8fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AA900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA8FCu;
        // 0x3aa900: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa8fc) {
            ctx->pc = 0x3AAAF0u;
            goto label_3aaaf0;
        }
    }
    ctx->pc = 0x3AA904u;
    // 0x3aa904: 0xc0ea8f0  jal         func_3AA3C0
    ctx->pc = 0x3AA904u;
    SET_GPR_U32(ctx, 31, 0x3AA90Cu);
    ctx->pc = 0x3AA3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AA3C0u, 0x3AA904u, 0x3AA90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA90Cu;
label_3aa90c:
    // 0x3aa90c: 0x4400078  bltz        $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x3AA90Cu;
    {
        const bool branch_taken_0x3aa90c = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x3aa90c) {
            ctx->pc = 0x3AAAF0u;
            goto label_3aaaf0;
        }
    }
    ctx->pc = 0x3AA914u;
    // 0x3aa914: 0x92020003  lbu         $v0, 0x3($s0)
    ctx->pc = 0x3aa914u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x3aa918: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3aa918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa91c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3aa91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3aa920: 0xc0eadc4  jal         func_3AB710
    ctx->pc = 0x3AA920u;
    SET_GPR_U32(ctx, 31, 0x3AA928u);
    ctx->pc = 0x3AA924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA920u;
    // 0x3aa924: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AB710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AB710u, 0x3AA920u, 0x3AA928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA928u;
label_3aa928:
    // 0x3aa928: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x3aa928u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x3aa92c: 0x3c01006c  lui         $at, 0x6C
    ctx->pc = 0x3aa92cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)108 << 16));
    // 0x3aa930: 0x246399e0  addiu       $v1, $v1, -0x6620
    ctx->pc = 0x3aa930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941152));
    // 0x3aa934: 0x24020090  addiu       $v0, $zero, 0x90
    ctx->pc = 0x3aa934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x3aa938: 0xac238c28  sw          $v1, -0x73D8($at)
    ctx->pc = 0x3aa938u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B8C28u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B8C28u, _value); } while (0);
    // 0x3aa93c: 0x3c01006c  lui         $at, 0x6C
    ctx->pc = 0x3aa93cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)108 << 16));
    // 0x3aa940: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x3AA940u;
    {
        const bool branch_taken_0x3aa940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA940u;
        // 0x3aa944: 0xac228c2c  sw          $v0, -0x73D4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294937644), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa940) {
            ctx->pc = 0x3AAAF0u;
            goto label_3aaaf0;
        }
    }
    ctx->pc = 0x3AA948u;
label_3aa948:
    // 0x3aa948: 0x82050007  lb          $a1, 0x7($s0)
    ctx->pc = 0x3aa948u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3aa94c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3aa94cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3aa950: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3aa950u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa954: 0xc0529d4  jal         func_14A750
    ctx->pc = 0x3AA954u;
    SET_GPR_U32(ctx, 31, 0x3AA95Cu);
    ctx->pc = 0x3AA958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA954u;
    // 0x3aa958: 0x24848c10  addiu       $a0, $a0, -0x73F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A750u, 0x3AA954u, 0x3AA95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA95Cu;
label_3aa95c:
    // 0x3aa95c: 0x14400064  bnez        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x3AA95Cu;
    {
        const bool branch_taken_0x3aa95c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AA960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA95Cu;
        // 0x3aa960: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa95c) {
            ctx->pc = 0x3AAAF0u;
            goto label_3aaaf0;
        }
    }
    ctx->pc = 0x3AA964u;
    // 0x3aa964: 0xc0ea8f0  jal         func_3AA3C0
    ctx->pc = 0x3AA964u;
    SET_GPR_U32(ctx, 31, 0x3AA96Cu);
    ctx->pc = 0x3AA3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AA3C0u, 0x3AA964u, 0x3AA96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA96Cu;
label_3aa96c:
    // 0x3aa96c: 0x4400060  bltz        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x3AA96Cu;
    {
        const bool branch_taken_0x3aa96c = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x3aa96c) {
            ctx->pc = 0x3AAAF0u;
            goto label_3aaaf0;
        }
    }
    ctx->pc = 0x3AA974u;
    // 0x3aa974: 0x92020003  lbu         $v0, 0x3($s0)
    ctx->pc = 0x3aa974u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x3aa978: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3aa978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3aa97c: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x3aa97cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x3aa980: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x3AA980u;
    {
        const bool branch_taken_0x3aa980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA980u;
        // 0x3aa984: 0xa2000008  sb          $zero, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa980) {
            ctx->pc = 0x3AAAF0u;
            goto label_3aaaf0;
        }
    }
    ctx->pc = 0x3AA988u;
label_3aa988:
    // 0x3aa988: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x3aa988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3aa98c: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x3aa98cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x3aa990: 0xc0eaec8  jal         func_3ABB20
    ctx->pc = 0x3AA990u;
    SET_GPR_U32(ctx, 31, 0x3AA998u);
    ctx->pc = 0x3AA994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA990u;
    // 0x3aa994: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ABB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ABB20u, 0x3AA990u, 0x3AA998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA998u;
label_3aa998:
    // 0x3aa998: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x3aa998u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x3aa99c: 0x3c01006c  lui         $at, 0x6C
    ctx->pc = 0x3aa99cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)108 << 16));
    // 0x3aa9a0: 0x24639da0  addiu       $v1, $v1, -0x6260
    ctx->pc = 0x3aa9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942112));
    // 0x3aa9a4: 0x24025eb0  addiu       $v0, $zero, 0x5EB0
    ctx->pc = 0x3aa9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24240));
    // 0x3aa9a8: 0xac238c28  sw          $v1, -0x73D8($at)
    ctx->pc = 0x3aa9a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B8C28u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B8C28u, _value); } while (0);
    // 0x3aa9ac: 0x3c01006c  lui         $at, 0x6C
    ctx->pc = 0x3aa9acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)108 << 16));
    // 0x3aa9b0: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x3AA9B0u;
    {
        const bool branch_taken_0x3aa9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA9B0u;
        // 0x3aa9b4: 0xac228c2c  sw          $v0, -0x73D4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294937644), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa9b0) {
            ctx->pc = 0x3AAAF0u;
            goto label_3aaaf0;
        }
    }
    ctx->pc = 0x3AA9B8u;
label_3aa9b8:
    // 0x3aa9b8: 0x82050007  lb          $a1, 0x7($s0)
    ctx->pc = 0x3aa9b8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3aa9bc: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3aa9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3aa9c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3aa9c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa9c4: 0xc0529d4  jal         func_14A750
    ctx->pc = 0x3AA9C4u;
    SET_GPR_U32(ctx, 31, 0x3AA9CCu);
    ctx->pc = 0x3AA9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA9C4u;
    // 0x3aa9c8: 0x24848c10  addiu       $a0, $a0, -0x73F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A750u, 0x3AA9C4u, 0x3AA9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA9CCu;
label_3aa9cc:
    // 0x3aa9cc: 0x14400048  bnez        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x3AA9CCu;
    {
        const bool branch_taken_0x3aa9cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AA9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA9CCu;
        // 0x3aa9d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa9cc) {
            ctx->pc = 0x3AAAF0u;
            goto label_3aaaf0;
        }
    }
    ctx->pc = 0x3AA9D4u;
    // 0x3aa9d4: 0xc0ea8f0  jal         func_3AA3C0
    ctx->pc = 0x3AA9D4u;
    SET_GPR_U32(ctx, 31, 0x3AA9DCu);
    ctx->pc = 0x3AA3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AA3C0u, 0x3AA9D4u, 0x3AA9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA9DCu;
label_3aa9dc:
    // 0x3aa9dc: 0x4400044  bltz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x3AA9DCu;
    {
        const bool branch_taken_0x3aa9dc = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x3aa9dc) {
            ctx->pc = 0x3AAAF0u;
            goto label_3aaaf0;
        }
    }
    ctx->pc = 0x3AA9E4u;
    // 0x3aa9e4: 0x82020008  lb          $v0, 0x8($s0)
    ctx->pc = 0x3aa9e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3aa9e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3aa9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3aa9ec: 0xa2020008  sb          $v0, 0x8($s0)
    ctx->pc = 0x3aa9ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x3aa9f0: 0x82020008  lb          $v0, 0x8($s0)
    ctx->pc = 0x3aa9f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3aa9f4: 0x2841000a  slti        $at, $v0, 0xA
    ctx->pc = 0x3aa9f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x3aa9f8: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x3AA9F8u;
    {
        const bool branch_taken_0x3aa9f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aa9f8) {
            ctx->pc = 0x3AAA10u;
            goto label_3aaa10;
        }
    }
    ctx->pc = 0x3AAA00u;
    // 0x3aaa00: 0x92020003  lbu         $v0, 0x3($s0)
    ctx->pc = 0x3aaa00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x3aaa04: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3aaa04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3aaa08: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x3AAA08u;
    {
        const bool branch_taken_0x3aaa08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AAA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAA08u;
        // 0x3aaa0c: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aaa08) {
            ctx->pc = 0x3AAAF0u;
            goto label_3aaaf0;
        }
    }
    ctx->pc = 0x3AAA10u;
label_3aaa10:
    // 0x3aaa10: 0x92020003  lbu         $v0, 0x3($s0)
    ctx->pc = 0x3aaa10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x3aaa14: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3aaa14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3aaa18: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x3aaa18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x3aaa1c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x3AAA1Cu;
    {
        const bool branch_taken_0x3aaa1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AAA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAA1Cu;
        // 0x3aaa20: 0xa2000008  sb          $zero, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aaa1c) {
            ctx->pc = 0x3AAAF0u;
            goto label_3aaaf0;
        }
    }
    ctx->pc = 0x3AAA24u;
    // 0x3aaa24: 0x0  nop
    ctx->pc = 0x3aaa24u;
    // NOP
label_3aaa28:
    // 0x3aaa28: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x3aaa28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3aaa2c: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x3aaa2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x3aaa30: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3aaa30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aaa34: 0x0  nop
    ctx->pc = 0x3aaa34u;
    // NOP
label_3aaa38:
    // 0x3aaa38: 0x112e3c  dsll32      $a1, $s1, 24
    ctx->pc = 0x3aaa38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 24));
    // 0x3aaa3c: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x3aaa3cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x3aaa40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3aaa40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aaa44: 0xc0eae18  jal         func_3AB860
    ctx->pc = 0x3AAA44u;
    SET_GPR_U32(ctx, 31, 0x3AAA4Cu);
    ctx->pc = 0x3AAA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AAA44u;
    // 0x3aaa48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AB860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AB860u, 0x3AAA44u, 0x3AAA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AAA4Cu;
label_3aaa4c:
    // 0x3aaa4c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3aaa4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3aaa50: 0x2a22000a  slti        $v0, $s1, 0xA
    ctx->pc = 0x3aaa50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x3aaa54: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3AAA54u;
    {
        const bool branch_taken_0x3aaa54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AAA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAA54u;
        // 0x3aaa58: 0x3c030093  lui         $v1, 0x93 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aaa54) {
            ctx->pc = 0x3AAA38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3aaa38;
        }
    }
    ctx->pc = 0x3AAA5Cu;
    // 0x3aaa5c: 0x3c01006c  lui         $at, 0x6C
    ctx->pc = 0x3aaa5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)108 << 16));
    // 0x3aaa60: 0x24639a70  addiu       $v1, $v1, -0x6590
    ctx->pc = 0x3aaa60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941296));
    // 0x3aaa64: 0x24020330  addiu       $v0, $zero, 0x330
    ctx->pc = 0x3aaa64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 816));
    // 0x3aaa68: 0xac238c28  sw          $v1, -0x73D8($at)
    ctx->pc = 0x3aaa68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B8C28u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B8C28u, _value); } while (0);
    // 0x3aaa6c: 0x3c01006c  lui         $at, 0x6C
    ctx->pc = 0x3aaa6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)108 << 16));
    // 0x3aaa70: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x3AAA70u;
    {
        const bool branch_taken_0x3aaa70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AAA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAA70u;
        // 0x3aaa74: 0xac228c2c  sw          $v0, -0x73D4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294937644), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aaa70) {
            ctx->pc = 0x3AAAF0u;
            goto label_3aaaf0;
        }
    }
    ctx->pc = 0x3AAA78u;
label_3aaa78:
    // 0x3aaa78: 0x82050007  lb          $a1, 0x7($s0)
    ctx->pc = 0x3aaa78u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3aaa7c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3aaa7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3aaa80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3aaa80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aaa84: 0xc0529d4  jal         func_14A750
    ctx->pc = 0x3AAA84u;
    SET_GPR_U32(ctx, 31, 0x3AAA8Cu);
    ctx->pc = 0x3AAA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AAA84u;
    // 0x3aaa88: 0x24848c10  addiu       $a0, $a0, -0x73F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A750u, 0x3AAA84u, 0x3AAA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AAA8Cu;
label_3aaa8c:
    // 0x3aaa8c: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3AAA8Cu;
    {
        const bool branch_taken_0x3aaa8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AAA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAA8Cu;
        // 0x3aaa90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aaa8c) {
            ctx->pc = 0x3AAAF0u;
            goto label_3aaaf0;
        }
    }
    ctx->pc = 0x3AAA94u;
    // 0x3aaa94: 0xc0ea8f0  jal         func_3AA3C0
    ctx->pc = 0x3AAA94u;
    SET_GPR_U32(ctx, 31, 0x3AAA9Cu);
    ctx->pc = 0x3AA3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AA3C0u, 0x3AAA94u, 0x3AAA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AAA9Cu;
label_3aaa9c:
    // 0x3aaa9c: 0x4400014  bltz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3AAA9Cu;
    {
        const bool branch_taken_0x3aaa9c = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x3aaa9c) {
            ctx->pc = 0x3AAAF0u;
            goto label_3aaaf0;
        }
    }
    ctx->pc = 0x3AAAA4u;
    // 0x3aaaa4: 0x92020003  lbu         $v0, 0x3($s0)
    ctx->pc = 0x3aaaa4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x3aaaa8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3aaaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3aaaac: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x3aaaacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x3aaab0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3AAAB0u;
    {
        const bool branch_taken_0x3aaab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AAAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAAB0u;
        // 0x3aaab4: 0xa2000008  sb          $zero, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aaab0) {
            ctx->pc = 0x3AAAF0u;
            goto label_3aaaf0;
        }
    }
    ctx->pc = 0x3AAAB8u;
label_3aaab8:
    // 0x3aaab8: 0x82050007  lb          $a1, 0x7($s0)
    ctx->pc = 0x3aaab8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3aaabc: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3aaabcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3aaac0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3aaac0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aaac4: 0xc0528b4  jal         func_14A2D0
    ctx->pc = 0x3AAAC4u;
    SET_GPR_U32(ctx, 31, 0x3AAACCu);
    ctx->pc = 0x3AAAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AAAC4u;
    // 0x3aaac8: 0x24848c10  addiu       $a0, $a0, -0x73F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A2D0u, 0x3AAAC4u, 0x3AAACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AAACCu;
label_3aaacc:
    // 0x3aaacc: 0x1c400008  bgtz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3AAACCu;
    {
        const bool branch_taken_0x3aaacc = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x3AAAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAACCu;
        // 0x3aaad0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aaacc) {
            ctx->pc = 0x3AAAF0u;
            goto label_3aaaf0;
        }
    }
    ctx->pc = 0x3AAAD4u;
    // 0x3aaad4: 0xc0ea8f0  jal         func_3AA3C0
    ctx->pc = 0x3AAAD4u;
    SET_GPR_U32(ctx, 31, 0x3AAADCu);
    ctx->pc = 0x3AA3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AA3C0u, 0x3AAAD4u, 0x3AAADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AAADCu;
label_3aaadc:
    // 0x3aaadc: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AAADCu;
    {
        const bool branch_taken_0x3aaadc = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x3aaadc) {
            ctx->pc = 0x3AAAF0u;
            goto label_3aaaf0;
        }
    }
    ctx->pc = 0x3AAAE4u;
    // 0x3aaae4: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x3aaae4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3aaae8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3AAAE8u;
    {
        const bool branch_taken_0x3aaae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AAAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAAE8u;
        // 0x3aaaec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aaae8) {
            ctx->pc = 0x3AAAF8u;
            goto label_3aaaf8;
        }
    }
    ctx->pc = 0x3AAAF0u;
label_3aaaf0:
    // 0x3aaaf0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3aaaf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aaaf4: 0x0  nop
    ctx->pc = 0x3aaaf4u;
    // NOP
label_3aaaf8:
    // 0x3aaaf8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3aaaf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3aaafc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3aaafcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3aab00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3aab00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3aab04: 0x3e00008  jr          $ra
    ctx->pc = 0x3AAB04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AAB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAB04u;
        // 0x3aab08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AAB04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AAB0Cu;
}
