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

// Function: sub_0027EFB0
// Address: 0x27efb0 - 0x27f210
void sub_0027EFB0_0x27efb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027EFB0_0x27efb0");
#endif

    switch (ctx->pc) {
        case 0x27f040u: goto label_27f040;
        case 0x27f0acu: goto label_27f0ac;
        case 0x27f0d8u: goto label_27f0d8;
        default: break;
    }

    ctx->pc = 0x27efb0u;

    // 0x27efb0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x27efb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x27efb4: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x27efb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x27efb8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x27efb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x27efbc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x27efbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27efc0: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x27efc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x27efc4: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x27efc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x27efc8: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x27efc8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27efcc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x27efccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x27efd0: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x27efd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x27efd4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x27efd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x27efd8: 0x24830194  addiu       $v1, $a0, 0x194
    ctx->pc = 0x27efd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 404));
    // 0x27efdc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x27efdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x27efe0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x27efe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x27efe4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x27efe4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27efe8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27efe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x27efec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27efecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27eff0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27eff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27eff4: 0xa3a600cf  sb          $a2, 0xCF($sp)
    ctx->pc = 0x27eff4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 207), (uint8_t)GPR_U32(ctx, 6));
    // 0x27eff8: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x27eff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x27effc: 0x8c850194  lw          $a1, 0x194($a0)
    ctx->pc = 0x27effcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 404)));
    // 0x27f000: 0x10a00077  beqz        $a1, . + 4 + (0x77 << 2)
    ctx->pc = 0x27F000u;
    {
        const bool branch_taken_0x27f000 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F000u;
        // 0x27f004: 0xe0b02d  daddu       $s6, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f000) {
            ctx->pc = 0x27F1E0u;
            goto label_27f1e0;
        }
    }
    ctx->pc = 0x27F008u;
    // 0x27f008: 0x8c8301a4  lw          $v1, 0x1A4($a0)
    ctx->pc = 0x27f008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 420)));
    // 0x27f00c: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x27f00cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
    // 0x27f010: 0x32c300ff  andi        $v1, $s6, 0xFF
    ctx->pc = 0x27f010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x27f014: 0x90b70005  lbu         $s7, 0x5($a1)
    ctx->pc = 0x27f014u;
    SET_GPR_ZE32(ctx, 23, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x27f018: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x27f018u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x27f01c: 0x8cb00014  lw          $s0, 0x14($a1)
    ctx->pc = 0x27f01cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x27f020: 0x8ca3003c  lw          $v1, 0x3C($a1)
    ctx->pc = 0x27f020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x27f024: 0x17082a  slt         $at, $zero, $s7
    ctx->pc = 0x27f024u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x27f028: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27f028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27f02c: 0x8c73000c  lw          $s3, 0xC($v1)
    ctx->pc = 0x27f02cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x27f030: 0x1020006b  beqz        $at, . + 4 + (0x6B << 2)
    ctx->pc = 0x27F030u;
    {
        const bool branch_taken_0x27f030 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F030u;
        // 0x27f034: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f030) {
            ctx->pc = 0x27F1E0u;
            goto label_27f1e0;
        }
    }
    ctx->pc = 0x27F038u;
    // 0x27f038: 0x27b500dc  addiu       $s5, $sp, 0xDC
    ctx->pc = 0x27f038u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
    // 0x27f03c: 0x0  nop
    ctx->pc = 0x27f03cu;
    // NOP
label_27f040:
    // 0x27f040: 0x32630001  andi        $v1, $s3, 0x1
    ctx->pc = 0x27f040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x27f044: 0x10600060  beqz        $v1, . + 4 + (0x60 << 2)
    ctx->pc = 0x27F044u;
    {
        const bool branch_taken_0x27f044 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f044) {
            ctx->pc = 0x27F1C8u;
            goto label_27f1c8;
        }
    }
    ctx->pc = 0x27F04Cu;
    // 0x27f04c: 0x97868924  lhu         $a2, -0x76DC($gp)
    ctx->pc = 0x27f04cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936868)));
    // 0x27f050: 0x3c04008c  lui         $a0, 0x8C
    ctx->pc = 0x27f050u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)140 << 16));
    // 0x27f054: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x27f054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x27f058: 0x248431a0  addiu       $a0, $a0, 0x31A0
    ctx->pc = 0x27f058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12704));
    // 0x27f05c: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x27f05cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x27f060: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x27f060u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x27f064: 0xa7838924  sh          $v1, -0x76DC($gp)
    ctx->pc = 0x27f064u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936868), (uint16_t)GPR_U32(ctx, 3));
    // 0x27f068: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x27f068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x27f06c: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x27f06cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27f070: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x27f070u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x27f074: 0x7fa300d0  sq          $v1, 0xD0($sp)
    ctx->pc = 0x27f074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 3));
    // 0x27f078: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x27f078u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x27f07c: 0x9203000c  lbu         $v1, 0xC($s0)
    ctx->pc = 0x27f07cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x27f080: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x27f080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x27f084: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x27F084u;
    {
        const bool branch_taken_0x27f084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F084u;
        // 0x27f088: 0x858821  addu        $s1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f084) {
            ctx->pc = 0x27F0B8u;
            goto label_27f0b8;
        }
    }
    ctx->pc = 0x27F08Cu;
    // 0x27f08c: 0x8e85004c  lw          $a1, 0x4C($s4)
    ctx->pc = 0x27f08cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x27f090: 0x2462ff80  addiu       $v0, $v1, -0x80
    ctx->pc = 0x27f090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967168));
    // 0x27f094: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x27f094u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x27f098: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x27f098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x27f09c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x27f09cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f0a0: 0x8ca20094  lw          $v0, 0x94($a1)
    ctx->pc = 0x27f0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 148)));
    // 0x27f0a4: 0xc041442  jal         func_105108
    ctx->pc = 0x27F0A4u;
    SET_GPR_U32(ctx, 31, 0x27F0ACu);
    ctx->pc = 0x27F0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F0A4u;
    // 0x27f0a8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x27F0A4u, 0x27F0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F0ACu;
label_27f0ac:
    // 0x27f0ac: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x27F0ACu;
    {
        const bool branch_taken_0x27f0ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f0ac) {
            ctx->pc = 0x27F0D8u;
            goto label_27f0d8;
        }
    }
    ctx->pc = 0x27F0B4u;
    // 0x27f0b4: 0x0  nop
    ctx->pc = 0x27f0b4u;
    // NOP
label_27f0b8:
    // 0x27f0b8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x27f0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x27f0bc: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x27f0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x27f0c0: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x27f0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x27f0c4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x27f0c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f0c8: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x27f0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x27f0cc: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x27f0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x27f0d0: 0xc041442  jal         func_105108
    ctx->pc = 0x27F0D0u;
    SET_GPR_U32(ctx, 31, 0x27F0D8u);
    ctx->pc = 0x27F0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F0D0u;
    // 0x27f0d4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x27F0D0u, 0x27F0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F0D8u;
label_27f0d8:
    // 0x27f0d8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x27f0d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x27f0dc: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x27f0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x27f0e0: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x27f0e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x27f0e4: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x27F0E4u;
    {
        const bool branch_taken_0x27f0e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f0e4) {
            ctx->pc = 0x27F148u;
            goto label_27f148;
        }
    }
    ctx->pc = 0x27F0ECu;
    // 0x27f0ec: 0x92840000  lbu         $a0, 0x0($s4)
    ctx->pc = 0x27f0ecu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x27f0f0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x27f0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27f0f4: 0x14830014  bne         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x27F0F4u;
    {
        const bool branch_taken_0x27f0f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x27f0f4) {
            ctx->pc = 0x27F148u;
            goto label_27f148;
        }
    }
    ctx->pc = 0x27F0FCu;
    // 0x27f0fc: 0x9603000e  lhu         $v1, 0xE($s0)
    ctx->pc = 0x27f0fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x27f100: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x27F100u;
    {
        const bool branch_taken_0x27f100 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x27F104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F100u;
        // 0x27f104: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f100) {
            ctx->pc = 0x27F114u;
            goto label_27f114;
        }
    }
    ctx->pc = 0x27F108u;
    // 0x27f108: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27f108u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27f10c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x27F10Cu;
    {
        const bool branch_taken_0x27f10c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F10Cu;
        // 0x27f110: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f10c) {
            ctx->pc = 0x27F12Cu;
            goto label_27f12c;
        }
    }
    ctx->pc = 0x27F114u;
label_27f114:
    // 0x27f114: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x27f114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x27f118: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x27f118u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x27f11c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x27f11cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27f120: 0x0  nop
    ctx->pc = 0x27f120u;
    // NOP
    // 0x27f124: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x27f124u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x27f128: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x27f128u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_27f12c:
    // 0x27f12c: 0x3c033fe6  lui         $v1, 0x3FE6
    ctx->pc = 0x27f12cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16358 << 16));
    // 0x27f130: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x27f130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x27f134: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27f134u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27f138: 0x0  nop
    ctx->pc = 0x27f138u;
    // NOP
    // 0x27f13c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x27f13cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x27f140: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x27F140u;
    {
        const bool branch_taken_0x27f140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F140u;
        // 0x27f144: 0xe6a00000  swc1        $f0, 0x0($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f140) {
            ctx->pc = 0x27F180u;
            goto label_27f180;
        }
    }
    ctx->pc = 0x27F148u;
label_27f148:
    // 0x27f148: 0x9603000e  lhu         $v1, 0xE($s0)
    ctx->pc = 0x27f148u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x27f14c: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x27F14Cu;
    {
        const bool branch_taken_0x27f14c = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x27F150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F14Cu;
        // 0x27f150: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f14c) {
            ctx->pc = 0x27F160u;
            goto label_27f160;
        }
    }
    ctx->pc = 0x27F154u;
    // 0x27f154: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27f154u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27f158: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x27F158u;
    {
        const bool branch_taken_0x27f158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F158u;
        // 0x27f15c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f158) {
            ctx->pc = 0x27F178u;
            goto label_27f178;
        }
    }
    ctx->pc = 0x27F160u;
label_27f160:
    // 0x27f160: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x27f160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x27f164: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x27f164u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x27f168: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x27f168u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27f16c: 0x0  nop
    ctx->pc = 0x27f16cu;
    // NOP
    // 0x27f170: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27f170u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x27f174: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x27f174u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_27f178:
    // 0x27f178: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x27f178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x27f17c: 0x0  nop
    ctx->pc = 0x27f17cu;
    // NOP
label_27f180:
    // 0x27f180: 0xae340008  sw          $s4, 0x8($s1)
    ctx->pc = 0x27f180u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 20));
    // 0x27f184: 0xae340000  sw          $s4, 0x0($s1)
    ctx->pc = 0x27f184u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 20));
    // 0x27f188: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27f188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27f18c: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x27f18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x27f190: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x27f190u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x27f194: 0x93a300cf  lbu         $v1, 0xCF($sp)
    ctx->pc = 0x27f194u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 207)));
    // 0x27f198: 0xa2230005  sb          $v1, 0x5($s1)
    ctx->pc = 0x27f198u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x27f19c: 0xa2360004  sb          $s6, 0x4($s1)
    ctx->pc = 0x27f19cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 22));
    // 0x27f1a0: 0xa2200006  sb          $zero, 0x6($s1)
    ctx->pc = 0x27f1a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x27f1a4: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x27f1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x27f1a8: 0xa2230007  sb          $v1, 0x7($s1)
    ctx->pc = 0x27f1a8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x27f1ac: 0xa2240040  sb          $a0, 0x40($s1)
    ctx->pc = 0x27f1acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 64), (uint8_t)GPR_U32(ctx, 4));
    // 0x27f1b0: 0x7ba300d0  lq          $v1, 0xD0($sp)
    ctx->pc = 0x27f1b0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x27f1b4: 0x7e230020  sq          $v1, 0x20($s1)
    ctx->pc = 0x27f1b4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 3));
    // 0x27f1b8: 0xa2200042  sb          $zero, 0x42($s1)
    ctx->pc = 0x27f1b8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 66), (uint8_t)GPR_U32(ctx, 0));
    // 0x27f1bc: 0x8fc3007c  lw          $v1, 0x7C($fp)
    ctx->pc = 0x27f1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 124)));
    // 0x27f1c0: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x27f1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x27f1c4: 0x0  nop
    ctx->pc = 0x27f1c4u;
    // NOP
label_27f1c8:
    // 0x27f1c8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x27f1c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x27f1cc: 0x257182a  slt         $v1, $s2, $s7
    ctx->pc = 0x27f1ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x27f1d0: 0x139842  srl         $s3, $s3, 1
    ctx->pc = 0x27f1d0u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
    // 0x27f1d4: 0x1460ff9a  bnez        $v1, . + 4 + (-0x66 << 2)
    ctx->pc = 0x27F1D4u;
    {
        const bool branch_taken_0x27f1d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F1D4u;
        // 0x27f1d8: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f1d4) {
            ctx->pc = 0x27F040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27f040;
        }
    }
    ctx->pc = 0x27F1DCu;
    // 0x27f1dc: 0x0  nop
    ctx->pc = 0x27f1dcu;
    // NOP
label_27f1e0:
    // 0x27f1e0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x27f1e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x27f1e4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x27f1e4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x27f1e8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x27f1e8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x27f1ec: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x27f1ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27f1f0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x27f1f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27f1f4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x27f1f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27f1f8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x27f1f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27f1fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27f1fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27f200: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27f200u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27f204: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27f204u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27f208: 0x3e00008  jr          $ra
    ctx->pc = 0x27F208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F208u;
        // 0x27f20c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27F210u;
}
