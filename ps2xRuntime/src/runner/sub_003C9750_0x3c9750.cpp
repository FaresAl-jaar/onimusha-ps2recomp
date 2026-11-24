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

// Function: sub_003C9750
// Address: 0x3c9750 - 0x3c9944
void sub_003C9750_0x3c9750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C9750_0x3c9750");
#endif

    switch (ctx->pc) {
        case 0x3c9788u: goto label_3c9788;
        case 0x3c9800u: goto label_3c9800;
        case 0x3c98e8u: goto label_3c98e8;
        default: break;
    }

    ctx->pc = 0x3c9750u;

    // 0x3c9750: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3c9750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3c9754: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3c9754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3c9758: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3c9758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3c975c: 0x27a5003c  addiu       $a1, $sp, 0x3C
    ctx->pc = 0x3c975cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x3c9760: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c9760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3c9764: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c9764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3c9768: 0xc7808434  lwc1        $f0, -0x7BCC($gp)
    ctx->pc = 0x3c9768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c976c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x3c976cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x3c9770: 0x94852b2e  lhu         $a1, 0x2B2E($a0)
    ctx->pc = 0x3c9770u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 11054)));
    // 0x3c9774: 0x14a30006  bne         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3C9774u;
    {
        const bool branch_taken_0x3c9774 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x3C9778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9774u;
        // 0x3c9778: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9774) {
            ctx->pc = 0x3C9790u;
            goto label_3c9790;
        }
    }
    ctx->pc = 0x3C977Cu;
    // 0x3c977c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3c977cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c9780: 0xc09ffb0  jal         func_27FEC0
    ctx->pc = 0x3C9780u;
    SET_GPR_U32(ctx, 31, 0x3C9788u);
    ctx->pc = 0x3C9784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9780u;
    // 0x3c9784: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27FEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27FEC0u, 0x3C9780u, 0x3C9788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9788u;
label_3c9788:
    // 0x3c9788: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3C9788u;
    {
        const bool branch_taken_0x3c9788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C978Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9788u;
        // 0x3c978c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9788) {
            ctx->pc = 0x3C9794u;
            goto label_3c9794;
        }
    }
    ctx->pc = 0x3C9790u;
label_3c9790:
    // 0x3c9790: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3c9790u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c9794:
    // 0x3c9794: 0x92240821  lbu         $a0, 0x821($s1)
    ctx->pc = 0x3c9794u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2081)));
    // 0x3c9798: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3c9798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3c979c: 0x1083005e  beq         $a0, $v1, . + 4 + (0x5E << 2)
    ctx->pc = 0x3C979Cu;
    {
        const bool branch_taken_0x3c979c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3C97A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C979Cu;
        // 0x3c97a0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c979c) {
            ctx->pc = 0x3C9918u;
            goto label_3c9918;
        }
    }
    ctx->pc = 0x3C97A4u;
    // 0x3c97a4: 0x1083003c  beq         $a0, $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x3C97A4u;
    {
        const bool branch_taken_0x3c97a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3c97a4) {
            ctx->pc = 0x3C9898u;
            goto label_3c9898;
        }
    }
    ctx->pc = 0x3C97ACu;
    // 0x3c97ac: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C97ACu;
    {
        const bool branch_taken_0x3c97ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c97ac) {
            ctx->pc = 0x3C97C0u;
            goto label_3c97c0;
        }
    }
    ctx->pc = 0x3C97B4u;
    // 0x3c97b4: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x3C97B4u;
    {
        const bool branch_taken_0x3c97b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c97b4) {
            ctx->pc = 0x3C9930u;
            goto label_3c9930;
        }
    }
    ctx->pc = 0x3C97BCu;
    // 0x3c97bc: 0x0  nop
    ctx->pc = 0x3c97bcu;
    // NOP
label_3c97c0:
    // 0x3c97c0: 0x96252b2c  lhu         $a1, 0x2B2C($s1)
    ctx->pc = 0x3c97c0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 11052)));
    // 0x3c97c4: 0x8e232b28  lw          $v1, 0x2B28($s1)
    ctx->pc = 0x3c97c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11048)));
    // 0x3c97c8: 0x52140  sll         $a0, $a1, 5
    ctx->pc = 0x3c97c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x3c97cc: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x3c97ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3c97d0: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x3c97d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3c97d4: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x3c97d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3c97d8: 0x10200023  beqz        $at, . + 4 + (0x23 << 2)
    ctx->pc = 0x3C97D8u;
    {
        const bool branch_taken_0x3c97d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c97d8) {
            ctx->pc = 0x3C9868u;
            goto label_3c9868;
        }
    }
    ctx->pc = 0x3C97E0u;
    // 0x3c97e0: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x3c97e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x3c97e4: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x3c97e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3c97e8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3c97e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3c97ec: 0xa6232b2c  sh          $v1, 0x2B2C($s1)
    ctx->pc = 0x3c97ecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 11052), (uint16_t)GPR_U32(ctx, 3));
    // 0x3c97f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c97f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c97f4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3c97f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3c97f8: 0xc0ec9c4  jal         func_3B2710
    ctx->pc = 0x3C97F8u;
    SET_GPR_U32(ctx, 31, 0x3C9800u);
    ctx->pc = 0x3C97FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C97F8u;
    // 0x3c97fc: 0x34451100  ori         $a1, $v0, 0x1100 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4352);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2710u, 0x3C97F8u, 0x3C9800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9800u;
label_3c9800:
    // 0x3c9800: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3C9800u;
    {
        const bool branch_taken_0x3c9800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c9800) {
            ctx->pc = 0x3C9838u;
            goto label_3c9838;
        }
    }
    ctx->pc = 0x3C9808u;
    // 0x3c9808: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x3c9808u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c980c: 0x2404005d  addiu       $a0, $zero, 0x5D
    ctx->pc = 0x3c980cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x3c9810: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x3c9810u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c9814: 0x3c038004  lui         $v1, 0x8004
    ctx->pc = 0x3c9814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32772 << 16));
    // 0x3c9818: 0xa62407f2  sh          $a0, 0x7F2($s1)
    ctx->pc = 0x3c9818u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 4));
    // 0x3c981c: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x3c981cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3c9820: 0xa22007f5  sb          $zero, 0x7F5($s1)
    ctx->pc = 0x3c9820u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c9824: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3c9824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3c9828: 0xae2407ec  sw          $a0, 0x7EC($s1)
    ctx->pc = 0x3c9828u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 4));
    // 0x3c982c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x3C982Cu;
    {
        const bool branch_taken_0x3c982c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C9830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C982Cu;
        // 0x3c9830: 0xa6232b2e  sh          $v1, 0x2B2E($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 11054), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c982c) {
            ctx->pc = 0x3C9890u;
            goto label_3c9890;
        }
    }
    ctx->pc = 0x3C9834u;
    // 0x3c9834: 0x0  nop
    ctx->pc = 0x3c9834u;
    // NOP
label_3c9838:
    // 0x3c9838: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x3c9838u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c983c: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x3c983cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c9840: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x3c9840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x3c9844: 0xa62307f2  sh          $v1, 0x7F2($s1)
    ctx->pc = 0x3c9844u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x3c9848: 0x3c038004  lui         $v1, 0x8004
    ctx->pc = 0x3c9848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32772 << 16));
    // 0x3c984c: 0xa22007f5  sb          $zero, 0x7F5($s1)
    ctx->pc = 0x3c984cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c9850: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3c9850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3c9854: 0xae2307ec  sw          $v1, 0x7EC($s1)
    ctx->pc = 0x3c9854u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 3));
    // 0x3c9858: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c9858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c985c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3C985Cu;
    {
        const bool branch_taken_0x3c985c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C9860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C985Cu;
        // 0x3c9860: 0xa6232b2e  sh          $v1, 0x2B2E($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 11054), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c985c) {
            ctx->pc = 0x3C9890u;
            goto label_3c9890;
        }
    }
    ctx->pc = 0x3C9864u;
    // 0x3c9864: 0x0  nop
    ctx->pc = 0x3c9864u;
    // NOP
label_3c9868:
    // 0x3c9868: 0x92240838  lbu         $a0, 0x838($s1)
    ctx->pc = 0x3c9868u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2104)));
    // 0x3c986c: 0x3c038004  lui         $v1, 0x8004
    ctx->pc = 0x3c986cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32772 << 16));
    // 0x3c9870: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x3c9870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x3c9874: 0x9084003c  lbu         $a0, 0x3C($a0)
    ctx->pc = 0x3c9874u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x3c9878: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x3c9878u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c987c: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x3c987cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c9880: 0xa62407f2  sh          $a0, 0x7F2($s1)
    ctx->pc = 0x3c9880u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 4));
    // 0x3c9884: 0xa22007f5  sb          $zero, 0x7F5($s1)
    ctx->pc = 0x3c9884u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c9888: 0xae2307ec  sw          $v1, 0x7EC($s1)
    ctx->pc = 0x3c9888u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 3));
    // 0x3c988c: 0xa6202b2e  sh          $zero, 0x2B2E($s1)
    ctx->pc = 0x3c988cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 11054), (uint16_t)GPR_U32(ctx, 0));
label_3c9890:
    // 0x3c9890: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c9890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c9894: 0xa2230821  sb          $v1, 0x821($s1)
    ctx->pc = 0x3c9894u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
label_3c9898:
    // 0x3c9898: 0x96242b2e  lhu         $a0, 0x2B2E($s1)
    ctx->pc = 0x3c9898u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 11054)));
    // 0x3c989c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3c989cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3c98a0: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C98A0u;
    {
        const bool branch_taken_0x3c98a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3c98a0) {
            ctx->pc = 0x3C98B8u;
            goto label_3c98b8;
        }
    }
    ctx->pc = 0x3C98A8u;
    // 0x3c98a8: 0x8e230148  lw          $v1, 0x148($s1)
    ctx->pc = 0x3c98a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x3c98ac: 0x34630200  ori         $v1, $v1, 0x200
    ctx->pc = 0x3c98acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
    // 0x3c98b0: 0xae230148  sw          $v1, 0x148($s1)
    ctx->pc = 0x3c98b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 3));
    // 0x3c98b4: 0x0  nop
    ctx->pc = 0x3c98b4u;
    // NOP
label_3c98b8:
    // 0x3c98b8: 0x922307f6  lbu         $v1, 0x7F6($s1)
    ctx->pc = 0x3c98b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2038)));
    // 0x3c98bc: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x3C98BCu;
    {
        const bool branch_taken_0x3c98bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c98bc) {
            ctx->pc = 0x3C9930u;
            goto label_3c9930;
        }
    }
    ctx->pc = 0x3C98C4u;
    // 0x3c98c4: 0x96242b2e  lhu         $a0, 0x2B2E($s1)
    ctx->pc = 0x3c98c4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 11054)));
    // 0x3c98c8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3c98c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3c98cc: 0x14830010  bne         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3C98CCu;
    {
        const bool branch_taken_0x3c98cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3c98cc) {
            ctx->pc = 0x3C9910u;
            goto label_3c9910;
        }
    }
    ctx->pc = 0x3C98D4u;
    // 0x3c98d4: 0x862200c2  lh          $v0, 0xC2($s1)
    ctx->pc = 0x3c98d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 194)));
    // 0x3c98d8: 0x24420800  addiu       $v0, $v0, 0x800
    ctx->pc = 0x3c98d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    // 0x3c98dc: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x3c98dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3c98e0: 0xc0967cc  jal         func_259F30
    ctx->pc = 0x3C98E0u;
    SET_GPR_U32(ctx, 31, 0x3C98E8u);
    ctx->pc = 0x3C98E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C98E0u;
    // 0x3c98e4: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F30u, 0x3C98E0u, 0x3C98E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C98E8u;
label_3c98e8:
    // 0x3c98e8: 0xa62200c2  sh          $v0, 0xC2($s1)
    ctx->pc = 0x3c98e8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 194), (uint16_t)GPR_U32(ctx, 2));
    // 0x3c98ec: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3c98ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3c98f0: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x3c98f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c98f4: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x3c98f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3c98f8: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x3c98f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c98fc: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3c98fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3c9900: 0xa62407f2  sh          $a0, 0x7F2($s1)
    ctx->pc = 0x3c9900u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 4));
    // 0x3c9904: 0xa22007f5  sb          $zero, 0x7F5($s1)
    ctx->pc = 0x3c9904u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c9908: 0xae2307ec  sw          $v1, 0x7EC($s1)
    ctx->pc = 0x3c9908u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 3));
    // 0x3c990c: 0x0  nop
    ctx->pc = 0x3c990cu;
    // NOP
label_3c9910:
    // 0x3c9910: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3c9910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3c9914: 0xa2230821  sb          $v1, 0x821($s1)
    ctx->pc = 0x3c9914u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
label_3c9918:
    // 0x3c9918: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C9918u;
    {
        const bool branch_taken_0x3c9918 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c9918) {
            ctx->pc = 0x3C9930u;
            goto label_3c9930;
        }
    }
    ctx->pc = 0x3C9920u;
    // 0x3c9920: 0xa6202b2e  sh          $zero, 0x2B2E($s1)
    ctx->pc = 0x3c9920u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 11054), (uint16_t)GPR_U32(ctx, 0));
    // 0x3c9924: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c9924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c9928: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x3c9928u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3c992c: 0x0  nop
    ctx->pc = 0x3c992cu;
    // NOP
label_3c9930:
    // 0x3c9930: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3c9930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c9934: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c9934u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c9938: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c9938u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c993c: 0x3e00008  jr          $ra
    ctx->pc = 0x3C993Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C9940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C993Cu;
        // 0x3c9940: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C993Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9944u;
}
