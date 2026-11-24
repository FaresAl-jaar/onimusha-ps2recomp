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

// Function: sub_0033F9C0
// Address: 0x33f9c0 - 0x33ff84
void sub_0033F9C0_0x33f9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033F9C0_0x33f9c0");
#endif

    switch (ctx->pc) {
        case 0x33fa18u: goto label_33fa18;
        case 0x33fa24u: goto label_33fa24;
        case 0x33fa3cu: goto label_33fa3c;
        case 0x33fa54u: goto label_33fa54;
        case 0x33faacu: goto label_33faac;
        case 0x33fac4u: goto label_33fac4;
        case 0x33fad8u: goto label_33fad8;
        case 0x33fae4u: goto label_33fae4;
        case 0x33faf4u: goto label_33faf4;
        case 0x33fb04u: goto label_33fb04;
        case 0x33fb24u: goto label_33fb24;
        case 0x33fb3cu: goto label_33fb3c;
        case 0x33fb4cu: goto label_33fb4c;
        case 0x33fb7cu: goto label_33fb7c;
        case 0x33fbb0u: goto label_33fbb0;
        case 0x33fbc8u: goto label_33fbc8;
        case 0x33fbd4u: goto label_33fbd4;
        case 0x33fbe0u: goto label_33fbe0;
        case 0x33fbf4u: goto label_33fbf4;
        case 0x33fc28u: goto label_33fc28;
        case 0x33fce0u: goto label_33fce0;
        case 0x33fcf0u: goto label_33fcf0;
        case 0x33fd28u: goto label_33fd28;
        case 0x33fd3cu: goto label_33fd3c;
        case 0x33fd50u: goto label_33fd50;
        case 0x33fd60u: goto label_33fd60;
        case 0x33fd88u: goto label_33fd88;
        case 0x33fda8u: goto label_33fda8;
        case 0x33fdc0u: goto label_33fdc0;
        case 0x33fdccu: goto label_33fdcc;
        case 0x33fe70u: goto label_33fe70;
        case 0x33fe80u: goto label_33fe80;
        case 0x33fec0u: goto label_33fec0;
        case 0x33feccu: goto label_33fecc;
        case 0x33ff70u: goto label_33ff70;
        default: break;
    }

    ctx->pc = 0x33f9c0u;

    // 0x33f9c0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x33f9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x33f9c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x33f9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x33f9c8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x33f9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x33f9cc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x33f9ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x33f9d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x33f9d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f9d4: 0x90830521  lbu         $v1, 0x521($a0)
    ctx->pc = 0x33f9d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1313)));
    // 0x33f9d8: 0x2c610007  sltiu       $at, $v1, 0x7
    ctx->pc = 0x33f9d8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x33f9dc: 0x10200164  beqz        $at, . + 4 + (0x164 << 2)
    ctx->pc = 0x33F9DCu;
    {
        const bool branch_taken_0x33f9dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F9DCu;
        // 0x33f9e0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f9dc) {
            ctx->pc = 0x33FF70u;
            goto label_33ff70;
        }
    }
    ctx->pc = 0x33F9E4u;
    // 0x33f9e4: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x33f9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x33f9e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x33f9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33f9ec: 0x2484f210  addiu       $a0, $a0, -0xDF0
    ctx->pc = 0x33f9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963728));
    // 0x33f9f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33f9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33f9f4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x33f9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33f9f8: 0x600008  jr          $v1
    ctx->pc = 0x33F9F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x33FA00u: goto label_33fa00;
            case 0x33FA68u: goto label_33fa68;
            case 0x33FA88u: goto label_33fa88;
            case 0x33FCE8u: goto label_33fce8;
            case 0x33FD18u: goto label_33fd18;
            case 0x33FE78u: goto label_33fe78;
            case 0x33FEA8u: goto label_33fea8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F9F8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x33FA00u;
label_33fa00:
    // 0x33fa00: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x33fa00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x33fa04: 0x26240550  addiu       $a0, $s1, 0x550
    ctx->pc = 0x33fa04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    // 0x33fa08: 0x24a55c70  addiu       $a1, $a1, 0x5C70
    ctx->pc = 0x33fa08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23664));
    // 0x33fa0c: 0x26260090  addiu       $a2, $s1, 0x90
    ctx->pc = 0x33fa0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x33fa10: 0xc097384  jal         func_25CE10
    ctx->pc = 0x33FA10u;
    SET_GPR_U32(ctx, 31, 0x33FA18u);
    ctx->pc = 0x33FA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33FA10u;
    // 0x33fa14: 0x26270020  addiu       $a3, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CE10u, 0x33FA10u, 0x33FA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FA18u;
label_33fa18:
    // 0x33fa18: 0x262400c0  addiu       $a0, $s1, 0xC0
    ctx->pc = 0x33fa18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x33fa1c: 0xc0763bc  jal         func_1D8EF0
    ctx->pc = 0x33FA1Cu;
    SET_GPR_U32(ctx, 31, 0x33FA24u);
    ctx->pc = 0x33FA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33FA1Cu;
    // 0x33fa20: 0x26250550  addiu       $a1, $s1, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8EF0u, 0x33FA1Cu, 0x33FA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FA24u;
label_33fa24:
    // 0x33fa24: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x33FA24u;
    {
        const bool branch_taken_0x33fa24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x33fa24) {
            ctx->pc = 0x33FA48u;
            goto label_33fa48;
        }
    }
    ctx->pc = 0x33FA2Cu;
    // 0x33fa2c: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x33fa2cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
    // 0x33fa30: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x33fa30u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x33fa34: 0xc0a97e0  jal         func_2A5F80
    ctx->pc = 0x33FA34u;
    SET_GPR_U32(ctx, 31, 0x33FA3Cu);
    ctx->pc = 0x33FA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33FA34u;
    // 0x33fa38: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A5F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5F80u, 0x33FA34u, 0x33FA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FA3Cu;
label_33fa3c:
    // 0x33fa3c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x33FA3Cu;
    {
        const bool branch_taken_0x33fa3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FA3Cu;
        // 0x33fa40: 0xae2205a0  sw          $v0, 0x5A0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1440), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fa3c) {
            ctx->pc = 0x33FA58u;
            goto label_33fa58;
        }
    }
    ctx->pc = 0x33FA44u;
    // 0x33fa44: 0x0  nop
    ctx->pc = 0x33fa44u;
    // NOP
label_33fa48:
    // 0x33fa48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33fa48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33fa4c: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x33FA4Cu;
    SET_GPR_U32(ctx, 31, 0x33FA54u);
    ctx->pc = 0x33FA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33FA4Cu;
    // 0x33fa50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x33FA4Cu, 0x33FA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FA54u;
label_33fa54:
    // 0x33fa54: 0x0  nop
    ctx->pc = 0x33fa54u;
    // NOP
label_33fa58:
    // 0x33fa58: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x33fa58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x33fa5c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x33fa5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x33fa60: 0x10000143  b           . + 4 + (0x143 << 2)
    ctx->pc = 0x33FA60u;
    {
        const bool branch_taken_0x33fa60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FA60u;
        // 0x33fa64: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fa60) {
            ctx->pc = 0x33FF70u;
            goto label_33ff70;
        }
    }
    ctx->pc = 0x33FA68u;
label_33fa68:
    // 0x33fa68: 0x86220526  lh          $v0, 0x526($s1)
    ctx->pc = 0x33fa68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1318)));
    // 0x33fa6c: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x33fa6cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x33fa70: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x33fa70u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x33fa74: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x33fa74u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x33fa78: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x33fa78u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x33fa7c: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x33fa7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x33fa80: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33fa80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33fa84: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x33fa84u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
label_33fa88:
    // 0x33fa88: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x33fa88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x33fa8c: 0x34438885  ori         $v1, $v0, 0x8885
    ctx->pc = 0x33fa8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x33fa90: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x33fa90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x33fa94: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x33fa94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x33fa98: 0x26250090  addiu       $a1, $s1, 0x90
    ctx->pc = 0x33fa98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x33fa9c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x33fa9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x33faa0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x33faa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x33faa4: 0xc07681c  jal         func_1DA070
    ctx->pc = 0x33FAA4u;
    SET_GPR_U32(ctx, 31, 0x33FAACu);
    ctx->pc = 0x33FAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33FAA4u;
    // 0x33faa8: 0x262600a0  addiu       $a2, $s1, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA070u, 0x33FAA4u, 0x33FAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FAACu;
label_33faac:
    // 0x33faac: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x33faacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x33fab0: 0x26240550  addiu       $a0, $s1, 0x550
    ctx->pc = 0x33fab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    // 0x33fab4: 0x24a55c70  addiu       $a1, $a1, 0x5C70
    ctx->pc = 0x33fab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23664));
    // 0x33fab8: 0x26260090  addiu       $a2, $s1, 0x90
    ctx->pc = 0x33fab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x33fabc: 0xc097384  jal         func_25CE10
    ctx->pc = 0x33FABCu;
    SET_GPR_U32(ctx, 31, 0x33FAC4u);
    ctx->pc = 0x33FAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33FABCu;
    // 0x33fac0: 0x26270020  addiu       $a3, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CE10u, 0x33FABCu, 0x33FAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FAC4u;
label_33fac4:
    // 0x33fac4: 0x3c060068  lui         $a2, 0x68
    ctx->pc = 0x33fac4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)104 << 16));
    // 0x33fac8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x33fac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x33facc: 0x26250550  addiu       $a1, $s1, 0x550
    ctx->pc = 0x33faccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    // 0x33fad0: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x33FAD0u;
    SET_GPR_U32(ctx, 31, 0x33FAD8u);
    ctx->pc = 0x33FAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33FAD0u;
    // 0x33fad4: 0x24c6f1f0  addiu       $a2, $a2, -0xE10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x33FAD0u, 0x33FAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FAD8u;
label_33fad8:
    // 0x33fad8: 0x262400c0  addiu       $a0, $s1, 0xC0
    ctx->pc = 0x33fad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x33fadc: 0xc0763bc  jal         func_1D8EF0
    ctx->pc = 0x33FADCu;
    SET_GPR_U32(ctx, 31, 0x33FAE4u);
    ctx->pc = 0x33FAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33FADCu;
    // 0x33fae0: 0x26250550  addiu       $a1, $s1, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8EF0u, 0x33FADCu, 0x33FAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FAE4u;
label_33fae4:
    // 0x33fae4: 0x8e2605a0  lw          $a2, 0x5A0($s1)
    ctx->pc = 0x33fae4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1440)));
    // 0x33fae8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33fae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33faec: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x33FAECu;
    SET_GPR_U32(ctx, 31, 0x33FAF4u);
    ctx->pc = 0x33FAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33FAECu;
    // 0x33faf0: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x33FAECu, 0x33FAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FAF4u;
label_33faf4:
    // 0x33faf4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33FAF4u;
    {
        const bool branch_taken_0x33faf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33FAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FAF4u;
        // 0x33faf8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33faf4) {
            ctx->pc = 0x33FB08u;
            goto label_33fb08;
        }
    }
    ctx->pc = 0x33FAFCu;
    // 0x33fafc: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x33FAFCu;
    SET_GPR_U32(ctx, 31, 0x33FB04u);
    ctx->pc = 0x33FB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33FAFCu;
    // 0x33fb00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x33FAFCu, 0x33FB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FB04u;
label_33fb04:
    // 0x33fb04: 0x0  nop
    ctx->pc = 0x33fb04u;
    // NOP
label_33fb08:
    // 0x33fb08: 0x922605a8  lbu         $a2, 0x5A8($s1)
    ctx->pc = 0x33fb08u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1448)));
    // 0x33fb0c: 0xc62c05a4  lwc1        $f12, 0x5A4($s1)
    ctx->pc = 0x33fb0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x33fb10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33fb10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33fb14: 0x26250550  addiu       $a1, $s1, 0x550
    ctx->pc = 0x33fb14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    // 0x33fb18: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x33fb18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33fb1c: 0xc0c0900  jal         func_302400
    ctx->pc = 0x33FB1Cu;
    SET_GPR_U32(ctx, 31, 0x33FB24u);
    ctx->pc = 0x33FB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33FB1Cu;
    // 0x33fb20: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x33FB1Cu, 0x33FB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FB24u;
label_33fb24:
    // 0x33fb24: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x33FB24u;
    {
        const bool branch_taken_0x33fb24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FB24u;
        // 0x33fb28: 0x262401c0  addiu       $a0, $s1, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fb24) {
            ctx->pc = 0x33FB88u;
            goto label_33fb88;
        }
    }
    ctx->pc = 0x33FB2Cu;
    // 0x33fb2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33fb2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33fb30: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x33fb30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33fb34: 0xc097184  jal         func_25C610
    ctx->pc = 0x33FB34u;
    SET_GPR_U32(ctx, 31, 0x33FB3Cu);
    ctx->pc = 0x33FB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33FB34u;
    // 0x33fb38: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C610u, 0x33FB34u, 0x33FB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FB3Cu;
label_33fb3c:
    // 0x33fb3c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x33FB3Cu;
    {
        const bool branch_taken_0x33fb3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33FB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FB3Cu;
        // 0x33fb40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fb3c) {
            ctx->pc = 0x33FB58u;
            goto label_33fb58;
        }
    }
    ctx->pc = 0x33FB44u;
    // 0x33fb44: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x33FB44u;
    SET_GPR_U32(ctx, 31, 0x33FB4Cu);
    ctx->pc = 0x33FB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33FB44u;
    // 0x33fb48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x33FB44u, 0x33FB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FB4Cu;
label_33fb4c:
    // 0x33fb4c: 0x10000108  b           . + 4 + (0x108 << 2)
    ctx->pc = 0x33FB4Cu;
    {
        const bool branch_taken_0x33fb4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33fb4c) {
            ctx->pc = 0x33FF70u;
            goto label_33ff70;
        }
    }
    ctx->pc = 0x33FB54u;
    // 0x33fb54: 0x0  nop
    ctx->pc = 0x33fb54u;
    // NOP
label_33fb58:
    // 0x33fb58: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x33fb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x33fb5c: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x33fb5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x33fb60: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x33fb60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x33fb64: 0x26270590  addiu       $a3, $s1, 0x590
    ctx->pc = 0x33fb64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 1424));
    // 0x33fb68: 0x26280090  addiu       $t0, $s1, 0x90
    ctx->pc = 0x33fb68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x33fb6c: 0xae220518  sw          $v0, 0x518($s1)
    ctx->pc = 0x33fb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1304), GPR_U32(ctx, 2));
    // 0x33fb70: 0x8e240518  lw          $a0, 0x518($s1)
    ctx->pc = 0x33fb70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1304)));
    // 0x33fb74: 0xc0971e4  jal         func_25C790
    ctx->pc = 0x33FB74u;
    SET_GPR_U32(ctx, 31, 0x33FB7Cu);
    ctx->pc = 0x33FB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33FB74u;
    // 0x33fb78: 0x262905aa  addiu       $t1, $s1, 0x5AA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 1450));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C790u, 0x33FB74u, 0x33FB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FB7Cu;
label_33fb7c:
    // 0x33fb7c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x33fb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33fb80: 0x100000fb  b           . + 4 + (0xFB << 2)
    ctx->pc = 0x33FB80u;
    {
        const bool branch_taken_0x33fb80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FB80u;
        // 0x33fb84: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fb80) {
            ctx->pc = 0x33FF70u;
            goto label_33ff70;
        }
    }
    ctx->pc = 0x33FB88u;
label_33fb88:
    // 0x33fb88: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x33fb88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x33fb8c: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x33fb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
    // 0x33fb90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33fb90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33fb94: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x33fb94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x33fb98: 0x26260080  addiu       $a2, $s1, 0x80
    ctx->pc = 0x33fb98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x33fb9c: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x33fb9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x33fba0: 0x27a80070  addiu       $t0, $sp, 0x70
    ctx->pc = 0x33fba0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x33fba4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x33fba4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33fba8: 0xc0c0980  jal         func_302600
    ctx->pc = 0x33FBA8u;
    SET_GPR_U32(ctx, 31, 0x33FBB0u);
    ctx->pc = 0x33FBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33FBA8u;
    // 0x33fbac: 0x27aa008c  addiu       $t2, $sp, 0x8C (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302600u, 0x33FBA8u, 0x33FBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FBB0u;
label_33fbb0:
    // 0x33fbb0: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x33FBB0u;
    {
        const bool branch_taken_0x33fbb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33fbb0) {
            ctx->pc = 0x33FC38u;
            goto label_33fc38;
        }
    }
    ctx->pc = 0x33FBB8u;
    // 0x33fbb8: 0x8e2605a0  lw          $a2, 0x5A0($s1)
    ctx->pc = 0x33fbb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1440)));
    // 0x33fbbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33fbbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33fbc0: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x33FBC0u;
    SET_GPR_U32(ctx, 31, 0x33FBC8u);
    ctx->pc = 0x33FBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33FBC0u;
    // 0x33fbc4: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x33FBC0u, 0x33FBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FBC8u;
label_33fbc8:
    // 0x33fbc8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x33fbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x33fbcc: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x33FBCCu;
    SET_GPR_U32(ctx, 31, 0x33FBD4u);
    ctx->pc = 0x33FBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33FBCCu;
    // 0x33fbd0: 0x26250090  addiu       $a1, $s1, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x33FBCCu, 0x33FBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FBD4u;
label_33fbd4:
    // 0x33fbd4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x33fbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x33fbd8: 0xc0766e8  jal         func_1D9BA0
    ctx->pc = 0x33FBD8u;
    SET_GPR_U32(ctx, 31, 0x33FBE0u);
    ctx->pc = 0x33FBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33FBD8u;
    // 0x33fbdc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9BA0u, 0x33FBD8u, 0x33FBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FBE0u;
label_33fbe0:
    // 0x33fbe0: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x33fbe0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
    // 0x33fbe4: 0x26260020  addiu       $a2, $s1, 0x20
    ctx->pc = 0x33fbe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x33fbe8: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x33fbe8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x33fbec: 0xc0a90d4  jal         func_2A4350
    ctx->pc = 0x33FBECu;
    SET_GPR_U32(ctx, 31, 0x33FBF4u);
    ctx->pc = 0x33FBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33FBECu;
    // 0x33fbf0: 0x27a70070  addiu       $a3, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4350u, 0x33FBECu, 0x33FBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FBF4u;
label_33fbf4:
    // 0x33fbf4: 0x9223052e  lbu         $v1, 0x52E($s1)
    ctx->pc = 0x33fbf4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x33fbf8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x33fbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x33fbfc: 0x3c021700  lui         $v0, 0x1700
    ctx->pc = 0x33fbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5888 << 16));
    // 0x33fc00: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x33fc00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x33fc04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x33fc04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33fc08: 0x34450500  ori         $a1, $v0, 0x500
    ctx->pc = 0x33fc08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1280);
    // 0x33fc0c: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x33fc0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x33fc10: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x33fc10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33fc14: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x33fc14u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33fc18: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x33fc18u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33fc1c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x33fc1cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33fc20: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x33FC20u;
    SET_GPR_U32(ctx, 31, 0x33FC28u);
    ctx->pc = 0x33FC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33FC20u;
    // 0x33fc24: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x33FC20u, 0x33FC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FC28u;
label_33fc28:
    // 0x33fc28: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x33fc28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x33fc2c: 0x100000d0  b           . + 4 + (0xD0 << 2)
    ctx->pc = 0x33FC2Cu;
    {
        const bool branch_taken_0x33fc2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FC2Cu;
        // 0x33fc30: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fc2c) {
            ctx->pc = 0x33FF70u;
            goto label_33ff70;
        }
    }
    ctx->pc = 0x33FC34u;
    // 0x33fc34: 0x0  nop
    ctx->pc = 0x33fc34u;
    // NOP
label_33fc38:
    // 0x33fc38: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x33fc38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
    // 0x33fc3c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x33FC3Cu;
    {
        const bool branch_taken_0x33fc3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FC3Cu;
        // 0x33fc40: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fc3c) {
            ctx->pc = 0x33FC50u;
            goto label_33fc50;
        }
    }
    ctx->pc = 0x33FC44u;
    // 0x33fc44: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x33FC44u;
    {
        const bool branch_taken_0x33fc44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33fc44) {
            ctx->pc = 0x33FCD0u;
            goto label_33fcd0;
        }
    }
    ctx->pc = 0x33FC4Cu;
    // 0x33fc4c: 0x0  nop
    ctx->pc = 0x33fc4cu;
    // NOP
label_33fc50:
    // 0x33fc50: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x33fc50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x33fc54: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x33fc54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x33fc58: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x33fc58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x33fc5c: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x33fc5cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x33fc60: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x33fc60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
    // 0x33fc64: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x33FC64u;
    {
        const bool branch_taken_0x33fc64 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x33fc64) {
            ctx->pc = 0x33FCA0u;
            goto label_33fca0;
        }
    }
    ctx->pc = 0x33FC6Cu;
    // 0x33fc6c: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x33fc6cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x33fc70: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x33fc70u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x33fc74: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x33FC74u;
    {
        const bool branch_taken_0x33fc74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x33FC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FC74u;
        // 0x33fc78: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fc74) {
            ctx->pc = 0x33FCC8u;
            goto label_33fcc8;
        }
    }
    ctx->pc = 0x33FC7Cu;
    // 0x33fc7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33fc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33fc80: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x33fc80u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x33fc84: 0x0  nop
    ctx->pc = 0x33fc84u;
    // NOP
    // 0x33fc88: 0x0  nop
    ctx->pc = 0x33fc88u;
    // NOP
    // 0x33fc8c: 0x2010  mfhi        $a0
    ctx->pc = 0x33fc8cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x33fc90: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x33fc90u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x33fc94: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x33FC94u;
    {
        const bool branch_taken_0x33fc94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FC94u;
        // 0x33fc98: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fc94) {
            ctx->pc = 0x33FCC8u;
            goto label_33fcc8;
        }
    }
    ctx->pc = 0x33FC9Cu;
    // 0x33fc9c: 0x0  nop
    ctx->pc = 0x33fc9cu;
    // NOP
label_33fca0:
    // 0x33fca0: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x33fca0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x33fca4: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x33fca4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x33fca8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x33FCA8u;
    {
        const bool branch_taken_0x33fca8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33fca8) {
            ctx->pc = 0x33FCC8u;
            goto label_33fcc8;
        }
    }
    ctx->pc = 0x33FCB0u;
    // 0x33fcb0: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x33fcb0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x33fcb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33fcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33fcb8: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x33fcb8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x33fcbc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x33FCBCu;
    {
        const bool branch_taken_0x33fcbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FCBCu;
        // 0x33fcc0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fcbc) {
            ctx->pc = 0x33FCD0u;
            goto label_33fcd0;
        }
    }
    ctx->pc = 0x33FCC4u;
    // 0x33fcc4: 0x0  nop
    ctx->pc = 0x33fcc4u;
    // NOP
label_33fcc8:
    // 0x33fcc8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33fcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33fccc: 0x0  nop
    ctx->pc = 0x33fcccu;
    // NOP
label_33fcd0:
    // 0x33fcd0: 0x146000a7  bnez        $v1, . + 4 + (0xA7 << 2)
    ctx->pc = 0x33FCD0u;
    {
        const bool branch_taken_0x33fcd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x33FCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FCD0u;
        // 0x33fcd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fcd0) {
            ctx->pc = 0x33FF70u;
            goto label_33ff70;
        }
    }
    ctx->pc = 0x33FCD8u;
    // 0x33fcd8: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x33FCD8u;
    SET_GPR_U32(ctx, 31, 0x33FCE0u);
    ctx->pc = 0x33FCDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33FCD8u;
    // 0x33fcdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x33FCD8u, 0x33FCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FCE0u;
label_33fce0:
    // 0x33fce0: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x33FCE0u;
    {
        const bool branch_taken_0x33fce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33fce0) {
            ctx->pc = 0x33FF70u;
            goto label_33ff70;
        }
    }
    ctx->pc = 0x33FCE8u;
label_33fce8:
    // 0x33fce8: 0xc096c4c  jal         func_25B130
    ctx->pc = 0x33FCE8u;
    SET_GPR_U32(ctx, 31, 0x33FCF0u);
    ctx->pc = 0x33FCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33FCE8u;
    // 0x33fcec: 0x8e2405a0  lw          $a0, 0x5A0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1440)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B130u, 0x33FCE8u, 0x33FCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FCF0u;
label_33fcf0:
    // 0x33fcf0: 0xae2005a0  sw          $zero, 0x5A0($s1)
    ctx->pc = 0x33fcf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1440), GPR_U32(ctx, 0));
    // 0x33fcf4: 0x86220528  lh          $v0, 0x528($s1)
    ctx->pc = 0x33fcf4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1320)));
    // 0x33fcf8: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x33fcf8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x33fcfc: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x33fcfcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x33fd00: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x33fd00u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x33fd04: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x33fd04u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x33fd08: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x33fd08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x33fd0c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33fd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33fd10: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x33fd10u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
    // 0x33fd14: 0x0  nop
    ctx->pc = 0x33fd14u;
    // NOP
label_33fd18:
    // 0x33fd18: 0x8e250518  lw          $a1, 0x518($s1)
    ctx->pc = 0x33fd18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1304)));
    // 0x33fd1c: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x33fd1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x33fd20: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x33FD20u;
    SET_GPR_U32(ctx, 31, 0x33FD28u);
    ctx->pc = 0x33FD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33FD20u;
    // 0x33fd24: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x33FD20u, 0x33FD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FD28u;
label_33fd28:
    // 0x33fd28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x33fd28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33fd2c: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x33FD2Cu;
    {
        const bool branch_taken_0x33fd2c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x33FD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FD2Cu;
        // 0x33fd30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fd2c) {
            ctx->pc = 0x33FD48u;
            goto label_33fd48;
        }
    }
    ctx->pc = 0x33FD34u;
    // 0x33fd34: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x33FD34u;
    SET_GPR_U32(ctx, 31, 0x33FD3Cu);
    ctx->pc = 0x33FD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33FD34u;
    // 0x33fd38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x33FD34u, 0x33FD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FD3Cu;
label_33fd3c:
    // 0x33fd3c: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x33FD3Cu;
    {
        const bool branch_taken_0x33fd3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33fd3c) {
            ctx->pc = 0x33FF70u;
            goto label_33ff70;
        }
    }
    ctx->pc = 0x33FD44u;
    // 0x33fd44: 0x0  nop
    ctx->pc = 0x33fd44u;
    // NOP
label_33fd48:
    // 0x33fd48: 0xc097864  jal         func_25E190
    ctx->pc = 0x33FD48u;
    SET_GPR_U32(ctx, 31, 0x33FD50u);
    ctx->pc = 0x33FD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33FD48u;
    // 0x33fd4c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E190u, 0x33FD48u, 0x33FD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FD50u;
label_33fd50:
    // 0x33fd50: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33FD50u;
    {
        const bool branch_taken_0x33fd50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33FD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FD50u;
        // 0x33fd54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fd50) {
            ctx->pc = 0x33FD68u;
            goto label_33fd68;
        }
    }
    ctx->pc = 0x33FD58u;
    // 0x33fd58: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x33FD58u;
    SET_GPR_U32(ctx, 31, 0x33FD60u);
    ctx->pc = 0x33FD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33FD58u;
    // 0x33fd5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x33FD58u, 0x33FD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FD60u;
label_33fd60:
    // 0x33fd60: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x33FD60u;
    {
        const bool branch_taken_0x33fd60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33fd60) {
            ctx->pc = 0x33FF70u;
            goto label_33ff70;
        }
    }
    ctx->pc = 0x33FD68u;
label_33fd68:
    // 0x33fd68: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x33fd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x33fd6c: 0x922305aa  lbu         $v1, 0x5AA($s1)
    ctx->pc = 0x33fd6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1450)));
    // 0x33fd70: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x33fd70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x33fd74: 0x26260590  addiu       $a2, $s1, 0x590
    ctx->pc = 0x33fd74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1424));
    // 0x33fd78: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x33fd78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x33fd7c: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x33fd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x33fd80: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x33FD80u;
    SET_GPR_U32(ctx, 31, 0x33FD88u);
    ctx->pc = 0x33FD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33FD80u;
    // 0x33fd84: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x33FD80u, 0x33FD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FD88u;
label_33fd88:
    // 0x33fd88: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x33fd88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x33fd8c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x33fd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x33fd90: 0x922305aa  lbu         $v1, 0x5AA($s1)
    ctx->pc = 0x33fd90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1450)));
    // 0x33fd94: 0x26260090  addiu       $a2, $s1, 0x90
    ctx->pc = 0x33fd94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x33fd98: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x33fd98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x33fd9c: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x33fd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x33fda0: 0xc0767a8  jal         func_1D9EA0
    ctx->pc = 0x33FDA0u;
    SET_GPR_U32(ctx, 31, 0x33FDA8u);
    ctx->pc = 0x33FDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33FDA0u;
    // 0x33fda4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9EA0u, 0x33FDA0u, 0x33FDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FDA8u;
label_33fda8:
    // 0x33fda8: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x33fda8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x33fdac: 0x26240550  addiu       $a0, $s1, 0x550
    ctx->pc = 0x33fdacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    // 0x33fdb0: 0x24a55c70  addiu       $a1, $a1, 0x5C70
    ctx->pc = 0x33fdb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23664));
    // 0x33fdb4: 0x26260090  addiu       $a2, $s1, 0x90
    ctx->pc = 0x33fdb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x33fdb8: 0xc097384  jal         func_25CE10
    ctx->pc = 0x33FDB8u;
    SET_GPR_U32(ctx, 31, 0x33FDC0u);
    ctx->pc = 0x33FDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33FDB8u;
    // 0x33fdbc: 0x26270020  addiu       $a3, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CE10u, 0x33FDB8u, 0x33FDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FDC0u;
label_33fdc0:
    // 0x33fdc0: 0x262400c0  addiu       $a0, $s1, 0xC0
    ctx->pc = 0x33fdc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x33fdc4: 0xc0763bc  jal         func_1D8EF0
    ctx->pc = 0x33FDC4u;
    SET_GPR_U32(ctx, 31, 0x33FDCCu);
    ctx->pc = 0x33FDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33FDC4u;
    // 0x33fdc8: 0x26250550  addiu       $a1, $s1, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8EF0u, 0x33FDC4u, 0x33FDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FDCCu;
label_33fdcc:
    // 0x33fdcc: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x33fdccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
    // 0x33fdd0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x33FDD0u;
    {
        const bool branch_taken_0x33fdd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FDD0u;
        // 0x33fdd4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fdd0) {
            ctx->pc = 0x33FDE0u;
            goto label_33fde0;
        }
    }
    ctx->pc = 0x33FDD8u;
    // 0x33fdd8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x33FDD8u;
    {
        const bool branch_taken_0x33fdd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33fdd8) {
            ctx->pc = 0x33FE60u;
            goto label_33fe60;
        }
    }
    ctx->pc = 0x33FDE0u;
label_33fde0:
    // 0x33fde0: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x33fde0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x33fde4: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x33fde4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x33fde8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x33fde8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x33fdec: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x33fdecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x33fdf0: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x33fdf0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
    // 0x33fdf4: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x33FDF4u;
    {
        const bool branch_taken_0x33fdf4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x33fdf4) {
            ctx->pc = 0x33FE30u;
            goto label_33fe30;
        }
    }
    ctx->pc = 0x33FDFCu;
    // 0x33fdfc: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x33fdfcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x33fe00: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x33fe00u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x33fe04: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x33FE04u;
    {
        const bool branch_taken_0x33fe04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x33FE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FE04u;
        // 0x33fe08: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fe04) {
            ctx->pc = 0x33FE58u;
            goto label_33fe58;
        }
    }
    ctx->pc = 0x33FE0Cu;
    // 0x33fe0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33fe0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33fe10: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x33fe10u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x33fe14: 0x0  nop
    ctx->pc = 0x33fe14u;
    // NOP
    // 0x33fe18: 0x0  nop
    ctx->pc = 0x33fe18u;
    // NOP
    // 0x33fe1c: 0x2010  mfhi        $a0
    ctx->pc = 0x33fe1cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x33fe20: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x33fe20u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x33fe24: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x33FE24u;
    {
        const bool branch_taken_0x33fe24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FE24u;
        // 0x33fe28: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fe24) {
            ctx->pc = 0x33FE58u;
            goto label_33fe58;
        }
    }
    ctx->pc = 0x33FE2Cu;
    // 0x33fe2c: 0x0  nop
    ctx->pc = 0x33fe2cu;
    // NOP
label_33fe30:
    // 0x33fe30: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x33fe30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x33fe34: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x33fe34u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x33fe38: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x33FE38u;
    {
        const bool branch_taken_0x33fe38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33fe38) {
            ctx->pc = 0x33FE58u;
            goto label_33fe58;
        }
    }
    ctx->pc = 0x33FE40u;
    // 0x33fe40: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x33fe40u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x33fe44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33fe44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33fe48: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x33fe48u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x33fe4c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x33FE4Cu;
    {
        const bool branch_taken_0x33fe4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FE4Cu;
        // 0x33fe50: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fe4c) {
            ctx->pc = 0x33FE60u;
            goto label_33fe60;
        }
    }
    ctx->pc = 0x33FE54u;
    // 0x33fe54: 0x0  nop
    ctx->pc = 0x33fe54u;
    // NOP
label_33fe58:
    // 0x33fe58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33fe58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33fe5c: 0x0  nop
    ctx->pc = 0x33fe5cu;
    // NOP
label_33fe60:
    // 0x33fe60: 0x14600043  bnez        $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x33FE60u;
    {
        const bool branch_taken_0x33fe60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x33FE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FE60u;
        // 0x33fe64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fe60) {
            ctx->pc = 0x33FF70u;
            goto label_33ff70;
        }
    }
    ctx->pc = 0x33FE68u;
    // 0x33fe68: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x33FE68u;
    SET_GPR_U32(ctx, 31, 0x33FE70u);
    ctx->pc = 0x33FE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33FE68u;
    // 0x33fe6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x33FE68u, 0x33FE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FE70u;
label_33fe70:
    // 0x33fe70: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x33FE70u;
    {
        const bool branch_taken_0x33fe70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33fe70) {
            ctx->pc = 0x33FF70u;
            goto label_33ff70;
        }
    }
    ctx->pc = 0x33FE78u;
label_33fe78:
    // 0x33fe78: 0xc096c4c  jal         func_25B130
    ctx->pc = 0x33FE78u;
    SET_GPR_U32(ctx, 31, 0x33FE80u);
    ctx->pc = 0x33FE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33FE78u;
    // 0x33fe7c: 0x8e2405a0  lw          $a0, 0x5A0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1440)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B130u, 0x33FE78u, 0x33FE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FE80u;
label_33fe80:
    // 0x33fe80: 0xae2005a0  sw          $zero, 0x5A0($s1)
    ctx->pc = 0x33fe80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1440), GPR_U32(ctx, 0));
    // 0x33fe84: 0x8622052a  lh          $v0, 0x52A($s1)
    ctx->pc = 0x33fe84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1322)));
    // 0x33fe88: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x33fe88u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x33fe8c: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x33fe8cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x33fe90: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x33fe90u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x33fe94: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x33fe94u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x33fe98: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x33fe98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x33fe9c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33fe9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33fea0: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x33fea0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
    // 0x33fea4: 0x0  nop
    ctx->pc = 0x33fea4u;
    // NOP
label_33fea8:
    // 0x33fea8: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x33fea8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x33feac: 0x26240550  addiu       $a0, $s1, 0x550
    ctx->pc = 0x33feacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    // 0x33feb0: 0x24a55c70  addiu       $a1, $a1, 0x5C70
    ctx->pc = 0x33feb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23664));
    // 0x33feb4: 0x26260090  addiu       $a2, $s1, 0x90
    ctx->pc = 0x33feb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x33feb8: 0xc097384  jal         func_25CE10
    ctx->pc = 0x33FEB8u;
    SET_GPR_U32(ctx, 31, 0x33FEC0u);
    ctx->pc = 0x33FEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33FEB8u;
    // 0x33febc: 0x26270020  addiu       $a3, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CE10u, 0x33FEB8u, 0x33FEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FEC0u;
label_33fec0:
    // 0x33fec0: 0x262400c0  addiu       $a0, $s1, 0xC0
    ctx->pc = 0x33fec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x33fec4: 0xc0763bc  jal         func_1D8EF0
    ctx->pc = 0x33FEC4u;
    SET_GPR_U32(ctx, 31, 0x33FECCu);
    ctx->pc = 0x33FEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33FEC4u;
    // 0x33fec8: 0x26250550  addiu       $a1, $s1, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8EF0u, 0x33FEC4u, 0x33FECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FECCu;
label_33fecc:
    // 0x33fecc: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x33feccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
    // 0x33fed0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x33FED0u;
    {
        const bool branch_taken_0x33fed0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FED0u;
        // 0x33fed4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fed0) {
            ctx->pc = 0x33FEE0u;
            goto label_33fee0;
        }
    }
    ctx->pc = 0x33FED8u;
    // 0x33fed8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x33FED8u;
    {
        const bool branch_taken_0x33fed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33fed8) {
            ctx->pc = 0x33FF60u;
            goto label_33ff60;
        }
    }
    ctx->pc = 0x33FEE0u;
label_33fee0:
    // 0x33fee0: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x33fee0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x33fee4: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x33fee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x33fee8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x33fee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x33feec: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x33feecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x33fef0: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x33fef0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
    // 0x33fef4: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x33FEF4u;
    {
        const bool branch_taken_0x33fef4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x33fef4) {
            ctx->pc = 0x33FF30u;
            goto label_33ff30;
        }
    }
    ctx->pc = 0x33FEFCu;
    // 0x33fefc: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x33fefcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x33ff00: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x33ff00u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x33ff04: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x33FF04u;
    {
        const bool branch_taken_0x33ff04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x33FF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FF04u;
        // 0x33ff08: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ff04) {
            ctx->pc = 0x33FF58u;
            goto label_33ff58;
        }
    }
    ctx->pc = 0x33FF0Cu;
    // 0x33ff0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33ff0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33ff10: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x33ff10u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x33ff14: 0x0  nop
    ctx->pc = 0x33ff14u;
    // NOP
    // 0x33ff18: 0x0  nop
    ctx->pc = 0x33ff18u;
    // NOP
    // 0x33ff1c: 0x2010  mfhi        $a0
    ctx->pc = 0x33ff1cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x33ff20: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x33ff20u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x33ff24: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x33FF24u;
    {
        const bool branch_taken_0x33ff24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FF24u;
        // 0x33ff28: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ff24) {
            ctx->pc = 0x33FF58u;
            goto label_33ff58;
        }
    }
    ctx->pc = 0x33FF2Cu;
    // 0x33ff2c: 0x0  nop
    ctx->pc = 0x33ff2cu;
    // NOP
label_33ff30:
    // 0x33ff30: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x33ff30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x33ff34: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x33ff34u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x33ff38: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x33FF38u;
    {
        const bool branch_taken_0x33ff38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33ff38) {
            ctx->pc = 0x33FF58u;
            goto label_33ff58;
        }
    }
    ctx->pc = 0x33FF40u;
    // 0x33ff40: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x33ff40u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x33ff44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33ff44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33ff48: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x33ff48u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x33ff4c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x33FF4Cu;
    {
        const bool branch_taken_0x33ff4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FF4Cu;
        // 0x33ff50: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ff4c) {
            ctx->pc = 0x33FF60u;
            goto label_33ff60;
        }
    }
    ctx->pc = 0x33FF54u;
    // 0x33ff54: 0x0  nop
    ctx->pc = 0x33ff54u;
    // NOP
label_33ff58:
    // 0x33ff58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33ff58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33ff5c: 0x0  nop
    ctx->pc = 0x33ff5cu;
    // NOP
label_33ff60:
    // 0x33ff60: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x33FF60u;
    {
        const bool branch_taken_0x33ff60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x33FF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FF60u;
        // 0x33ff64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ff60) {
            ctx->pc = 0x33FF70u;
            goto label_33ff70;
        }
    }
    ctx->pc = 0x33FF68u;
    // 0x33ff68: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x33FF68u;
    SET_GPR_U32(ctx, 31, 0x33FF70u);
    ctx->pc = 0x33FF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33FF68u;
    // 0x33ff6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x33FF68u, 0x33FF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FF70u;
label_33ff70:
    // 0x33ff70: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x33ff70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33ff74: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x33ff74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33ff78: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x33ff78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33ff7c: 0x3e00008  jr          $ra
    ctx->pc = 0x33FF7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33FF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FF7Cu;
        // 0x33ff80: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33FF7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33FF84u;
}
