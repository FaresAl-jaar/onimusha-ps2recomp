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

// Function: sub_001EAD10
// Address: 0x1ead10 - 0x1eb268
void sub_001EAD10_0x1ead10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EAD10_0x1ead10");
#endif

    switch (ctx->pc) {
        case 0x1ead78u: goto label_1ead78;
        case 0x1eadccu: goto label_1eadcc;
        case 0x1eadd4u: goto label_1eadd4;
        case 0x1eade0u: goto label_1eade0;
        case 0x1eadf8u: goto label_1eadf8;
        case 0x1eae08u: goto label_1eae08;
        case 0x1eae5cu: goto label_1eae5c;
        case 0x1eae6cu: goto label_1eae6c;
        case 0x1eae80u: goto label_1eae80;
        case 0x1eae90u: goto label_1eae90;
        case 0x1eaf3cu: goto label_1eaf3c;
        case 0x1eaf50u: goto label_1eaf50;
        case 0x1eaf64u: goto label_1eaf64;
        case 0x1eaf78u: goto label_1eaf78;
        case 0x1eaf8cu: goto label_1eaf8c;
        case 0x1eb008u: goto label_1eb008;
        case 0x1eb01cu: goto label_1eb01c;
        case 0x1eb030u: goto label_1eb030;
        case 0x1eb044u: goto label_1eb044;
        case 0x1eb080u: goto label_1eb080;
        case 0x1eb09cu: goto label_1eb09c;
        case 0x1eb0b8u: goto label_1eb0b8;
        case 0x1eb0d0u: goto label_1eb0d0;
        case 0x1eb0e4u: goto label_1eb0e4;
        case 0x1eb110u: goto label_1eb110;
        case 0x1eb120u: goto label_1eb120;
        case 0x1eb164u: goto label_1eb164;
        case 0x1eb184u: goto label_1eb184;
        case 0x1eb1a0u: goto label_1eb1a0;
        case 0x1eb1b8u: goto label_1eb1b8;
        case 0x1eb1e0u: goto label_1eb1e0;
        case 0x1eb20cu: goto label_1eb20c;
        case 0x1eb218u: goto label_1eb218;
        case 0x1eb230u: goto label_1eb230;
        default: break;
    }

    ctx->pc = 0x1ead10u;

    // 0x1ead10: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x1ead10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x1ead14: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x1ead14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x1ead18: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1ead18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1ead1c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1ead1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1ead20: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1ead20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1ead24: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1ead24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1ead28: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x1ead28u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ead2c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1ead2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1ead30: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1ead30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1ead34: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ead34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ead38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ead38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ead3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ead3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ead40: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ead40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ead44: 0xafa600ac  sw          $a2, 0xAC($sp)
    ctx->pc = 0x1ead44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 6));
    // 0x1ead48: 0xa7a800aa  sh          $t0, 0xAA($sp)
    ctx->pc = 0x1ead48u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 170), (uint16_t)GPR_U32(ctx, 8));
    // 0x1ead4c: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1ead4cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ead50: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EAD50u;
    {
        const bool branch_taken_0x1ead50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EAD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAD50u;
        // 0x1ead54: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ead50) {
            ctx->pc = 0x1EAD60u;
            goto label_1ead60;
        }
    }
    ctx->pc = 0x1EAD58u;
    // 0x1ead58: 0x10000137  b           . + 4 + (0x137 << 2)
    ctx->pc = 0x1EAD58u;
    {
        const bool branch_taken_0x1ead58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAD58u;
        // 0x1ead5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ead58) {
            ctx->pc = 0x1EB238u;
            goto label_1eb238;
        }
    }
    ctx->pc = 0x1EAD60u;
label_1ead60:
    // 0x1ead60: 0x12e00003  beqz        $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EAD60u;
    {
        const bool branch_taken_0x1ead60 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAD60u;
        // 0x1ead64: 0x2e0882d  daddu       $s1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ead60) {
            ctx->pc = 0x1EAD70u;
            goto label_1ead70;
        }
    }
    ctx->pc = 0x1EAD68u;
    // 0x1ead68: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1EAD68u;
    {
        const bool branch_taken_0x1ead68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAD68u;
        // 0x1ead6c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ead68) {
            ctx->pc = 0x1EAD80u;
            goto label_1ead80;
        }
    }
    ctx->pc = 0x1EAD70u;
label_1ead70:
    // 0x1ead70: 0xc0745d0  jal         func_1D1740
    ctx->pc = 0x1EAD70u;
    SET_GPR_U32(ctx, 31, 0x1EAD78u);
    ctx->pc = 0x1D1740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1740u, 0x1EAD70u, 0x1EAD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAD78u;
label_1ead78:
    // 0x1ead78: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ead78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ead7c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ead7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ead80:
    // 0x1ead80: 0x92a30042  lbu         $v1, 0x42($s5)
    ctx->pc = 0x1ead80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 66)));
    // 0x1ead84: 0x92a20043  lbu         $v0, 0x43($s5)
    ctx->pc = 0x1ead84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 67)));
    // 0x1ead88: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1ead88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1ead8c: 0x92a50034  lbu         $a1, 0x34($s5)
    ctx->pc = 0x1ead8cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 52)));
    // 0x1ead90: 0x342100c0  ori         $at, $at, 0xC0
    ctx->pc = 0x1ead90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)192);
    // 0x1ead94: 0x92a60035  lbu         $a2, 0x35($s5)
    ctx->pc = 0x1ead94u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 53)));
    // 0x1ead98: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1ead98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1ead9c: 0x92a80052  lbu         $t0, 0x52($s5)
    ctx->pc = 0x1ead9cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 82)));
    // 0x1eada0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1eada0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eada4: 0x24740001  addiu       $s4, $v1, 0x1
    ctx->pc = 0x1eada4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1eada8: 0x24530001  addiu       $s3, $v0, 0x1
    ctx->pc = 0x1eada8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1eadac: 0x2931018  mult        $v0, $s4, $s3
    ctx->pc = 0x1eadacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1eadb0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1eadb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1eadb4: 0x619021  addu        $s2, $v1, $at
    ctx->pc = 0x1eadb4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x1eadb8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1eadb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1eadbc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1eadbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1eadc0: 0x342100c0  ori         $at, $at, 0xC0
    ctx->pc = 0x1eadc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)192);
    // 0x1eadc4: 0xc07454c  jal         func_1D1530
    ctx->pc = 0x1EADC4u;
    SET_GPR_U32(ctx, 31, 0x1EADCCu);
    ctx->pc = 0x1EADC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EADC4u;
    // 0x1eadc8: 0x41b021  addu        $s6, $v0, $at (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1530u, 0x1EADC4u, 0x1EADCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EADCCu;
label_1eadcc:
    // 0x1eadcc: 0xc074570  jal         func_1D15C0
    ctx->pc = 0x1EADCCu;
    SET_GPR_U32(ctx, 31, 0x1EADD4u);
    ctx->pc = 0x1EADD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EADCCu;
    // 0x1eadd0: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15C0u, 0x1EADCCu, 0x1EADD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EADD4u;
label_1eadd4:
    // 0x1eadd4: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1eadd4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eadd8: 0xc07457c  jal         func_1D15F0
    ctx->pc = 0x1EADD8u;
    SET_GPR_U32(ctx, 31, 0x1EADE0u);
    ctx->pc = 0x1EADDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EADD8u;
    // 0x1eaddc: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15F0u, 0x1EADD8u, 0x1EADE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EADE0u;
label_1eade0:
    // 0x1eade0: 0x92a80032  lbu         $t0, 0x32($s5)
    ctx->pc = 0x1eade0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 50)));
    // 0x1eade4: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x1eade4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eade8: 0x26a400f0  addiu       $a0, $s5, 0xF0
    ctx->pc = 0x1eade8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 240));
    // 0x1eadec: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x1eadecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x1eadf0: 0xc074458  jal         func_1D1160
    ctx->pc = 0x1EADF0u;
    SET_GPR_U32(ctx, 31, 0x1EADF8u);
    ctx->pc = 0x1EADF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EADF0u;
    // 0x1eadf4: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1160u, 0x1EADF0u, 0x1EADF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EADF8u;
label_1eadf8:
    // 0x1eadf8: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1eadf8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eadfc: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1eadfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1eae00: 0xc076538  jal         func_1D94E0
    ctx->pc = 0x1EAE00u;
    SET_GPR_U32(ctx, 31, 0x1EAE08u);
    ctx->pc = 0x1EAE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAE00u;
    // 0x1eae04: 0x26a50044  addiu       $a1, $s5, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D94E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D94E0u, 0x1EAE00u, 0x1EAE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAE08u;
label_1eae08:
    // 0x1eae08: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x1eae08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x1eae0c: 0x27aa0190  addiu       $t2, $sp, 0x190
    ctx->pc = 0x1eae0cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1eae10: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x1eae10u;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x1eae14: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1eae14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1eae18: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1eae18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1eae1c: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x1eae1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1eae20: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x1eae20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1eae24: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x1eae24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x1eae28: 0x7fa90160  sq          $t1, 0x160($sp)
    ctx->pc = 0x1eae28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 9));
    // 0x1eae2c: 0x78285c30  lq          $t0, 0x5C30($at)
    ctx->pc = 0x1eae2cu;
    SET_GPR_VEC(ctx, 8, FAST_READ128(0x665C30u));
    // 0x1eae30: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x1eae30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x1eae34: 0x7fa80170  sq          $t0, 0x170($sp)
    ctx->pc = 0x1eae34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 8));
    // 0x1eae38: 0x78275c40  lq          $a3, 0x5C40($at)
    ctx->pc = 0x1eae38u;
    SET_GPR_VEC(ctx, 7, FAST_READ128(0x665C40u));
    // 0x1eae3c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x1eae3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x1eae40: 0x7fa70180  sq          $a3, 0x180($sp)
    ctx->pc = 0x1eae40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 7));
    // 0x1eae44: 0x78235c50  lq          $v1, 0x5C50($at)
    ctx->pc = 0x1eae44u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C50u));
    // 0x1eae48: 0x7d430000  sq          $v1, 0x0($t2)
    ctx->pc = 0x1eae48u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 3));
    // 0x1eae4c: 0x7aa300a0  lq          $v1, 0xA0($s5)
    ctx->pc = 0x1eae4cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 21), 160)));
    // 0x1eae50: 0x7d430000  sq          $v1, 0x0($t2)
    ctx->pc = 0x1eae50u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 3));
    // 0x1eae54: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x1EAE54u;
    SET_GPR_U32(ctx, 31, 0x1EAE5Cu);
    ctx->pc = 0x1EAE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAE54u;
    // 0x1eae58: 0xafa2019c  sw          $v0, 0x19C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x1EAE54u, 0x1EAE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAE5Cu;
label_1eae5c:
    // 0x1eae5c: 0x8fa500ac  lw          $a1, 0xAC($sp)
    ctx->pc = 0x1eae5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1eae60: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1eae60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1eae64: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x1EAE64u;
    SET_GPR_U32(ctx, 31, 0x1EAE6Cu);
    ctx->pc = 0x1EAE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAE64u;
    // 0x1eae68: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x1EAE64u, 0x1EAE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAE6Cu;
label_1eae6c:
    // 0x1eae6c: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1eae6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1eae70: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1eae70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1eae74: 0x24a56a20  addiu       $a1, $a1, 0x6A20
    ctx->pc = 0x1eae74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27168));
    // 0x1eae78: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x1EAE78u;
    SET_GPR_U32(ctx, 31, 0x1EAE80u);
    ctx->pc = 0x1EAE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAE78u;
    // 0x1eae7c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x1EAE78u, 0x1EAE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAE80u;
label_1eae80:
    // 0x1eae80: 0x8fa500ac  lw          $a1, 0xAC($sp)
    ctx->pc = 0x1eae80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1eae84: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x1eae84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x1eae88: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x1EAE88u;
    SET_GPR_U32(ctx, 31, 0x1EAE90u);
    ctx->pc = 0x1EAE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAE88u;
    // 0x1eae8c: 0x26a600a0  addiu       $a2, $s5, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x1EAE88u, 0x1EAE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAE90u;
label_1eae90:
    // 0x1eae90: 0x87a200aa  lh          $v0, 0xAA($sp)
    ctx->pc = 0x1eae90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 170)));
    // 0x1eae94: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x1eae94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x1eae98: 0x7aa60060  lq          $a2, 0x60($s5)
    ctx->pc = 0x1eae98u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x1eae9c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1eae9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1eaea0: 0x34640080  ori         $a0, $v1, 0x80
    ctx->pc = 0x1eaea0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x1eaea4: 0x40102d  daddu       $v0, $v0, $zero
    ctx->pc = 0x1eaea4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaea8: 0x7c260040  sq          $a2, 0x40($at)
    ctx->pc = 0x1eaea8u;
    runtime->Store128(rdram, ctx, 0x70000040u, GPR_VEC(ctx, 6));
    // 0x1eaeac: 0x7aa30070  lq          $v1, 0x70($s5)
    ctx->pc = 0x1eaeacu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x1eaeb0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1eaeb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1eaeb4: 0x7c230050  sq          $v1, 0x50($at)
    ctx->pc = 0x1eaeb4u;
    runtime->Store128(rdram, ctx, 0x70000050u, GPR_VEC(ctx, 3));
    // 0x1eaeb8: 0x7aa30080  lq          $v1, 0x80($s5)
    ctx->pc = 0x1eaeb8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 21), 128)));
    // 0x1eaebc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1eaebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1eaec0: 0x7c230060  sq          $v1, 0x60($at)
    ctx->pc = 0x1eaec0u;
    runtime->Store128(rdram, ctx, 0x70000060u, GPR_VEC(ctx, 3));
    // 0x1eaec4: 0x7aa30090  lq          $v1, 0x90($s5)
    ctx->pc = 0x1eaec4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 21), 144)));
    // 0x1eaec8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1eaec8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1eaecc: 0x7c230070  sq          $v1, 0x70($at)
    ctx->pc = 0x1eaeccu;
    runtime->Store128(rdram, ctx, 0x70000070u, GPR_VEC(ctx, 3));
    // 0x1eaed0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1eaed0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1eaed4: 0x8c23004c  lw          $v1, 0x4C($at)
    ctx->pc = 0x1eaed4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x7000004Cu)); // MMIO: 0x7000004c
    // 0x1eaed8: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1eaed8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1eaedc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1eaedcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1eaee0: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x1eaee0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x1eaee4: 0xac23004c  sw          $v1, 0x4C($at)
    ctx->pc = 0x1eaee4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 76), GPR_U32(ctx, 3));
    // 0x1eaee8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1eaee8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1eaeec: 0x8c23005c  lw          $v1, 0x5C($at)
    ctx->pc = 0x1eaeecu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x7000005Cu)); // MMIO: 0x7000005c
    // 0x1eaef0: 0x70621818  mult1       $v1, $v1, $v0
    ctx->pc = 0x1eaef0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1eaef4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1eaef4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1eaef8: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x1eaef8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x1eaefc: 0xac23005c  sw          $v1, 0x5C($at)
    ctx->pc = 0x1eaefcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 92), GPR_U32(ctx, 3));
    // 0x1eaf00: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1eaf00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1eaf04: 0x8c23006c  lw          $v1, 0x6C($at)
    ctx->pc = 0x1eaf04u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x7000006Cu)); // MMIO: 0x7000006c
    // 0x1eaf08: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1eaf08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1eaf0c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1eaf0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1eaf10: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x1eaf10u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x1eaf14: 0xac23006c  sw          $v1, 0x6C($at)
    ctx->pc = 0x1eaf14u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 108), GPR_U32(ctx, 3));
    // 0x1eaf18: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1eaf18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1eaf1c: 0x8c23007c  lw          $v1, 0x7C($at)
    ctx->pc = 0x1eaf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x7000007Cu)); // MMIO: 0x7000007c
    // 0x1eaf20: 0x70621018  mult1       $v0, $v1, $v0
    ctx->pc = 0x1eaf20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1eaf24: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1eaf24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1eaf28: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x1eaf28u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x1eaf2c: 0xac22007c  sw          $v0, 0x7C($at)
    ctx->pc = 0x1eaf2cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 124), GPR_U32(ctx, 2));
    // 0x1eaf30: 0xc6ac0054  lwc1        $f12, 0x54($s5)
    ctx->pc = 0x1eaf30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1eaf34: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x1EAF34u;
    SET_GPR_U32(ctx, 31, 0x1EAF3Cu);
    ctx->pc = 0x1EAF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAF34u;
    // 0x1eaf38: 0x26a500b0  addiu       $a1, $s5, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x1EAF34u, 0x1EAF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAF3Cu;
label_1eaf3c:
    // 0x1eaf3c: 0xc6ac0054  lwc1        $f12, 0x54($s5)
    ctx->pc = 0x1eaf3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1eaf40: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1eaf40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1eaf44: 0x26a500c0  addiu       $a1, $s5, 0xC0
    ctx->pc = 0x1eaf44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 192));
    // 0x1eaf48: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x1EAF48u;
    SET_GPR_U32(ctx, 31, 0x1EAF50u);
    ctx->pc = 0x1EAF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAF48u;
    // 0x1eaf4c: 0x34440090  ori         $a0, $v0, 0x90 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)144);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x1EAF48u, 0x1EAF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAF50u;
label_1eaf50:
    // 0x1eaf50: 0xc6ac0054  lwc1        $f12, 0x54($s5)
    ctx->pc = 0x1eaf50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1eaf54: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1eaf54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1eaf58: 0x26a500d0  addiu       $a1, $s5, 0xD0
    ctx->pc = 0x1eaf58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 208));
    // 0x1eaf5c: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x1EAF5Cu;
    SET_GPR_U32(ctx, 31, 0x1EAF64u);
    ctx->pc = 0x1EAF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAF5Cu;
    // 0x1eaf60: 0x344400a0  ori         $a0, $v0, 0xA0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)160);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x1EAF5Cu, 0x1EAF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAF64u;
label_1eaf64:
    // 0x1eaf64: 0xc6ac0054  lwc1        $f12, 0x54($s5)
    ctx->pc = 0x1eaf64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1eaf68: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1eaf68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1eaf6c: 0x26a500e0  addiu       $a1, $s5, 0xE0
    ctx->pc = 0x1eaf6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 224));
    // 0x1eaf70: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x1EAF70u;
    SET_GPR_U32(ctx, 31, 0x1EAF78u);
    ctx->pc = 0x1EAF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAF70u;
    // 0x1eaf74: 0x344400b0  ori         $a0, $v0, 0xB0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)176);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x1EAF70u, 0x1EAF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAF78u;
label_1eaf78:
    // 0x1eaf78: 0x92a50031  lbu         $a1, 0x31($s5)
    ctx->pc = 0x1eaf78u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 49)));
    // 0x1eaf7c: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1eaf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1eaf80: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x1eaf80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1eaf84: 0xc078604  jal         func_1E1810
    ctx->pc = 0x1EAF84u;
    SET_GPR_U32(ctx, 31, 0x1EAF8Cu);
    ctx->pc = 0x1EAF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAF84u;
    // 0x1eaf88: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1810u, 0x1EAF84u, 0x1EAF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAF8Cu;
label_1eaf8c:
    // 0x1eaf8c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1eaf8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1eaf90: 0x92a20033  lbu         $v0, 0x33($s5)
    ctx->pc = 0x1eaf90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 51)));
    // 0x1eaf94: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1eaf94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1eaf98: 0x10400063  beqz        $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x1EAF98u;
    {
        const bool branch_taken_0x1eaf98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eaf98) {
            ctx->pc = 0x1EB128u;
            goto label_1eb128;
        }
    }
    ctx->pc = 0x1EAFA0u;
    // 0x1eafa0: 0xc6a00038  lwc1        $f0, 0x38($s5)
    ctx->pc = 0x1eafa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eafa4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1eafa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1eafa8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1eafa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1eafac: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x1eafacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x1eafb0: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x1eafb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1eafb4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1eafb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eafb8: 0x87c20008  lh          $v0, 0x8($fp)
    ctx->pc = 0x1eafb8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1eafbc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1eafbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1eafc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eafc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eafc4: 0x0  nop
    ctx->pc = 0x1eafc4u;
    // NOP
    // 0x1eafc8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1eafc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1eafcc: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x1eafccu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x1eafd0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1eafd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1eafd4: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x1eafd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1eafd8: 0xc6a0003c  lwc1        $f0, 0x3C($s5)
    ctx->pc = 0x1eafd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eafdc: 0x87c2000a  lh          $v0, 0xA($fp)
    ctx->pc = 0x1eafdcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x1eafe0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1eafe0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1eafe4: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x1eafe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
    // 0x1eafe8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eafe8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eafec: 0x0  nop
    ctx->pc = 0x1eafecu;
    // NOP
    // 0x1eaff0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1eaff0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1eaff4: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x1eaff4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x1eaff8: 0x0  nop
    ctx->pc = 0x1eaff8u;
    // NOP
    // 0x1eaffc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1eaffcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1eb000: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x1EB000u;
    SET_GPR_U32(ctx, 31, 0x1EB008u);
    ctx->pc = 0x1EB004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB000u;
    // 0x1eb004: 0xe7a000c4  swc1        $f0, 0xC4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x1EB000u, 0x1EB008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB008u;
label_1eb008:
    // 0x1eb008: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1eb008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1eb00c: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x1eb00cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1eb010: 0x34440010  ori         $a0, $v0, 0x10
    ctx->pc = 0x1eb010u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1eb014: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x1EB014u;
    SET_GPR_U32(ctx, 31, 0x1EB01Cu);
    ctx->pc = 0x1EB018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB014u;
    // 0x1eb018: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x1EB014u, 0x1EB01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB01Cu;
label_1eb01c:
    // 0x1eb01c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1eb01cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1eb020: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x1eb020u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1eb024: 0x34440020  ori         $a0, $v0, 0x20
    ctx->pc = 0x1eb024u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x1eb028: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x1EB028u;
    SET_GPR_U32(ctx, 31, 0x1EB030u);
    ctx->pc = 0x1EB02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB028u;
    // 0x1eb02c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x1EB028u, 0x1EB030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB030u;
label_1eb030:
    // 0x1eb030: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1eb030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1eb034: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x1eb034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1eb038: 0x34440030  ori         $a0, $v0, 0x30
    ctx->pc = 0x1eb038u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48);
    // 0x1eb03c: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x1EB03Cu;
    SET_GPR_U32(ctx, 31, 0x1EB044u);
    ctx->pc = 0x1EB040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB03Cu;
    // 0x1eb040: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x1EB03Cu, 0x1EB044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB044u;
label_1eb044:
    // 0x1eb044: 0x92a90051  lbu         $t1, 0x51($s5)
    ctx->pc = 0x1eb044u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 81)));
    // 0x1eb048: 0x92a20043  lbu         $v0, 0x43($s5)
    ctx->pc = 0x1eb048u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 67)));
    // 0x1eb04c: 0x92a80050  lbu         $t0, 0x50($s5)
    ctx->pc = 0x1eb04cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x1eb050: 0x92a30042  lbu         $v1, 0x42($s5)
    ctx->pc = 0x1eb050u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 66)));
    // 0x1eb054: 0x491026  xor         $v0, $v0, $t1
    ctx->pc = 0x1eb054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 9));
    // 0x1eb058: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1eb058u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1eb05c: 0x681826  xor         $v1, $v1, $t0
    ctx->pc = 0x1eb05cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 8));
    // 0x1eb060: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x1eb060u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1eb064: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1eb064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1eb068: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EB068u;
    {
        const bool branch_taken_0x1eb068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB068u;
        // 0x1eb06c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb068) {
            ctx->pc = 0x1EB088u;
            goto label_1eb088;
        }
    }
    ctx->pc = 0x1EB070u;
    // 0x1eb070: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x1eb070u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x1eb074: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1eb074u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb078: 0xc076b04  jal         func_1DAC10
    ctx->pc = 0x1EB078u;
    SET_GPR_U32(ctx, 31, 0x1EB080u);
    ctx->pc = 0x1EB07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB078u;
    // 0x1eb07c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DAC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DAC10u, 0x1EB078u, 0x1EB080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB080u;
label_1eb080:
    // 0x1eb080: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1EB080u;
    {
        const bool branch_taken_0x1eb080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb080) {
            ctx->pc = 0x1EB0A0u;
            goto label_1eb0a0;
        }
    }
    ctx->pc = 0x1EB088u;
label_1eb088:
    // 0x1eb088: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1eb088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb08c: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x1eb08cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x1eb090: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1eb090u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb094: 0xc076a34  jal         func_1DA8D0
    ctx->pc = 0x1EB094u;
    SET_GPR_U32(ctx, 31, 0x1EB09Cu);
    ctx->pc = 0x1EB098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB094u;
    // 0x1eb098: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA8D0u, 0x1EB094u, 0x1EB09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB09Cu;
label_1eb09c:
    // 0x1eb09c: 0x0  nop
    ctx->pc = 0x1eb09cu;
    // NOP
label_1eb0a0:
    // 0x1eb0a0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1eb0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1eb0a4: 0x344400c0  ori         $a0, $v0, 0xC0
    ctx->pc = 0x1eb0a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x1eb0a8: 0x34450040  ori         $a1, $v0, 0x40
    ctx->pc = 0x1eb0a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x1eb0ac: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1eb0acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb0b0: 0xc076b74  jal         func_1DADD0
    ctx->pc = 0x1EB0B0u;
    SET_GPR_U32(ctx, 31, 0x1EB0B8u);
    ctx->pc = 0x1EB0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB0B0u;
    // 0x1eb0b4: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DADD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DADD0u, 0x1EB0B0u, 0x1EB0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB0B8u;
label_1eb0b8:
    // 0x1eb0b8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1eb0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1eb0bc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1eb0bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb0c0: 0x34450080  ori         $a1, $v0, 0x80
    ctx->pc = 0x1eb0c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1eb0c4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1eb0c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb0c8: 0xc074a98  jal         func_1D2A60
    ctx->pc = 0x1EB0C8u;
    SET_GPR_U32(ctx, 31, 0x1EB0D0u);
    ctx->pc = 0x1EB0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB0C8u;
    // 0x1eb0cc: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2A60u, 0x1EB0C8u, 0x1EB0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB0D0u;
label_1eb0d0:
    // 0x1eb0d0: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1eb0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1eb0d4: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x1eb0d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb0d8: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x1eb0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1eb0dc: 0xc078624  jal         func_1E1890
    ctx->pc = 0x1EB0DCu;
    SET_GPR_U32(ctx, 31, 0x1EB0E4u);
    ctx->pc = 0x1EB0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB0DCu;
    // 0x1eb0e0: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1890u, 0x1EB0DCu, 0x1EB0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB0E4u;
label_1eb0e4:
    // 0x1eb0e4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1eb0e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1eb0e8: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1eb0e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb0ec: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1eb0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1eb0f0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1eb0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1eb0f4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1eb0f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb0f8: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1eb0f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb0fc: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x1eb0fcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb100: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x1eb100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1eb104: 0x2232021  addu        $a0, $s1, $v1
    ctx->pc = 0x1eb104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1eb108: 0xc07603c  jal         func_1D80F0
    ctx->pc = 0x1EB108u;
    SET_GPR_U32(ctx, 31, 0x1EB110u);
    ctx->pc = 0x1EB10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB108u;
    // 0x1eb10c: 0x344800c0  ori         $t0, $v0, 0xC0 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D80F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D80F0u, 0x1EB108u, 0x1EB110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB110u;
label_1eb110:
    // 0x1eb110: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1eb110u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1eb114: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1eb114u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1eb118: 0xc07864c  jal         func_1E1930
    ctx->pc = 0x1EB118u;
    SET_GPR_U32(ctx, 31, 0x1EB120u);
    ctx->pc = 0x1EB11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB118u;
    // 0x1eb11c: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1930u, 0x1EB118u, 0x1EB120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB120u;
label_1eb120:
    // 0x1eb120: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1EB120u;
    {
        const bool branch_taken_0x1eb120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB120u;
        // 0x1eb124: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb120) {
            ctx->pc = 0x1EB1E8u;
            goto label_1eb1e8;
        }
    }
    ctx->pc = 0x1EB128u;
label_1eb128:
    // 0x1eb128: 0x92a90051  lbu         $t1, 0x51($s5)
    ctx->pc = 0x1eb128u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 81)));
    // 0x1eb12c: 0x92a20043  lbu         $v0, 0x43($s5)
    ctx->pc = 0x1eb12cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 67)));
    // 0x1eb130: 0x92a80050  lbu         $t0, 0x50($s5)
    ctx->pc = 0x1eb130u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x1eb134: 0x92a30042  lbu         $v1, 0x42($s5)
    ctx->pc = 0x1eb134u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 66)));
    // 0x1eb138: 0x491026  xor         $v0, $v0, $t1
    ctx->pc = 0x1eb138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 9));
    // 0x1eb13c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1eb13cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1eb140: 0x681826  xor         $v1, $v1, $t0
    ctx->pc = 0x1eb140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 8));
    // 0x1eb144: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x1eb144u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1eb148: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1eb148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1eb14c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EB14Cu;
    {
        const bool branch_taken_0x1eb14c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB14Cu;
        // 0x1eb150: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb14c) {
            ctx->pc = 0x1EB170u;
            goto label_1eb170;
        }
    }
    ctx->pc = 0x1EB154u;
    // 0x1eb154: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x1eb154u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x1eb158: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1eb158u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb15c: 0xc076b04  jal         func_1DAC10
    ctx->pc = 0x1EB15Cu;
    SET_GPR_U32(ctx, 31, 0x1EB164u);
    ctx->pc = 0x1EB160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB15Cu;
    // 0x1eb160: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DAC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DAC10u, 0x1EB15Cu, 0x1EB164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB164u;
label_1eb164:
    // 0x1eb164: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1EB164u;
    {
        const bool branch_taken_0x1eb164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb164) {
            ctx->pc = 0x1EB188u;
            goto label_1eb188;
        }
    }
    ctx->pc = 0x1EB16Cu;
    // 0x1eb16c: 0x0  nop
    ctx->pc = 0x1eb16cu;
    // NOP
label_1eb170:
    // 0x1eb170: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1eb170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb174: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x1eb174u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x1eb178: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1eb178u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb17c: 0xc076a34  jal         func_1DA8D0
    ctx->pc = 0x1EB17Cu;
    SET_GPR_U32(ctx, 31, 0x1EB184u);
    ctx->pc = 0x1EB180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB17Cu;
    // 0x1eb180: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA8D0u, 0x1EB17Cu, 0x1EB184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB184u;
label_1eb184:
    // 0x1eb184: 0x0  nop
    ctx->pc = 0x1eb184u;
    // NOP
label_1eb188:
    // 0x1eb188: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1eb188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1eb18c: 0x344400c0  ori         $a0, $v0, 0xC0
    ctx->pc = 0x1eb18cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x1eb190: 0x34450040  ori         $a1, $v0, 0x40
    ctx->pc = 0x1eb190u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x1eb194: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1eb194u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb198: 0xc076b74  jal         func_1DADD0
    ctx->pc = 0x1EB198u;
    SET_GPR_U32(ctx, 31, 0x1EB1A0u);
    ctx->pc = 0x1EB19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB198u;
    // 0x1eb19c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DADD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DADD0u, 0x1EB198u, 0x1EB1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB1A0u;
label_1eb1a0:
    // 0x1eb1a0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1eb1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1eb1a4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1eb1a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb1a8: 0x34450080  ori         $a1, $v0, 0x80
    ctx->pc = 0x1eb1a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1eb1ac: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1eb1acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb1b0: 0xc074a98  jal         func_1D2A60
    ctx->pc = 0x1EB1B0u;
    SET_GPR_U32(ctx, 31, 0x1EB1B8u);
    ctx->pc = 0x1EB1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB1B0u;
    // 0x1eb1b4: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2A60u, 0x1EB1B0u, 0x1EB1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB1B8u;
label_1eb1b8:
    // 0x1eb1b8: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1eb1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1eb1bc: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1eb1bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb1c0: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x1eb1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1eb1c4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1eb1c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb1c8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1eb1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1eb1cc: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1eb1ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb1d0: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x1eb1d0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb1d4: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x1eb1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1eb1d8: 0xc07603c  jal         func_1D80F0
    ctx->pc = 0x1EB1D8u;
    SET_GPR_U32(ctx, 31, 0x1EB1E0u);
    ctx->pc = 0x1EB1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB1D8u;
    // 0x1eb1dc: 0x344800c0  ori         $t0, $v0, 0xC0 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D80F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D80F0u, 0x1EB1D8u, 0x1EB1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB1E0u;
label_1eb1e0:
    // 0x1eb1e0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1eb1e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1eb1e4: 0x0  nop
    ctx->pc = 0x1eb1e4u;
    // NOP
label_1eb1e8:
    // 0x1eb1e8: 0x12e00003  beqz        $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EB1E8u;
    {
        const bool branch_taken_0x1eb1e8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB1E8u;
        // 0x1eb1ec: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb1e8) {
            ctx->pc = 0x1EB1F8u;
            goto label_1eb1f8;
        }
    }
    ctx->pc = 0x1EB1F0u;
    // 0x1eb1f0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1EB1F0u;
    {
        const bool branch_taken_0x1eb1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb1f0) {
            ctx->pc = 0x1EB238u;
            goto label_1eb238;
        }
    }
    ctx->pc = 0x1EB1F8u;
label_1eb1f8:
    // 0x1eb1f8: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1eb1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1eb1fc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1eb1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1eb200: 0x24a56a20  addiu       $a1, $a1, 0x6A20
    ctx->pc = 0x1eb200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27168));
    // 0x1eb204: 0xc076788  jal         func_1D9E20
    ctx->pc = 0x1EB204u;
    SET_GPR_U32(ctx, 31, 0x1EB20Cu);
    ctx->pc = 0x1EB208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB204u;
    // 0x1eb208: 0x27a601a0  addiu       $a2, $sp, 0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E20u, 0x1EB204u, 0x1EB20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB20Cu;
label_1eb20c:
    // 0x1eb20c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1eb20cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb210: 0xc07463c  jal         func_1D18F0
    ctx->pc = 0x1EB210u;
    SET_GPR_U32(ctx, 31, 0x1EB218u);
    ctx->pc = 0x1EB214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB210u;
    // 0x1eb214: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18F0u, 0x1EB210u, 0x1EB218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB218u;
label_1eb218:
    // 0x1eb218: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1eb218u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1eb21c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1eb21cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb220: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1eb220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1eb224: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1eb224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb228: 0xc0745fc  jal         func_1D17F0
    ctx->pc = 0x1EB228u;
    SET_GPR_U32(ctx, 31, 0x1EB230u);
    ctx->pc = 0x1EB22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB228u;
    // 0x1eb22c: 0x23283  sra         $a2, $v0, 10 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D17F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D17F0u, 0x1EB228u, 0x1EB230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB230u;
label_1eb230:
    // 0x1eb230: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1eb230u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb234: 0x0  nop
    ctx->pc = 0x1eb234u;
    // NOP
label_1eb238:
    // 0x1eb238: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1eb238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1eb23c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1eb23cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1eb240: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1eb240u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1eb244: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1eb244u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1eb248: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1eb248u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1eb24c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1eb24cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1eb250: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1eb250u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1eb254: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1eb254u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eb258: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1eb258u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eb25c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1eb25cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eb260: 0x3e00008  jr          $ra
    ctx->pc = 0x1EB260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB260u;
        // 0x1eb264: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EB268u;
}
