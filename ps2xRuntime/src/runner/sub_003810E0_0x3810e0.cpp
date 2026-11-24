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

// Function: sub_003810E0
// Address: 0x3810e0 - 0x381270
void sub_003810E0_0x3810e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003810E0_0x3810e0");
#endif

    switch (ctx->pc) {
        case 0x381128u: goto label_381128;
        case 0x381224u: goto label_381224;
        case 0x381238u: goto label_381238;
        default: break;
    }

    ctx->pc = 0x3810e0u;

    // 0x3810e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3810e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3810e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3810e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3810e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3810e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3810ec: 0x24030029  addiu       $v1, $zero, 0x29
    ctx->pc = 0x3810ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x3810f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3810f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3810f4: 0xa0822b40  sb          $v0, 0x2B40($a0)
    ctx->pc = 0x3810f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11072), (uint8_t)GPR_U32(ctx, 2));
    // 0x3810f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3810f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3810fc: 0xac832b30  sw          $v1, 0x2B30($a0)
    ctx->pc = 0x3810fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11056), GPR_U32(ctx, 3));
    // 0x381100: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x381100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x381104: 0xac822b34  sw          $v0, 0x2B34($a0)
    ctx->pc = 0x381104u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11060), GPR_U32(ctx, 2));
    // 0x381108: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x381108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x38110c: 0x8c85004c  lw          $a1, 0x4C($a0)
    ctx->pc = 0x38110cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x381110: 0x24020700  addiu       $v0, $zero, 0x700
    ctx->pc = 0x381110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1792));
    // 0x381114: 0x8ca50074  lw          $a1, 0x74($a1)
    ctx->pc = 0x381114u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 116)));
    // 0x381118: 0xc4a00088  lwc1        $f0, 0x88($a1)
    ctx->pc = 0x381118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38111c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x38111cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x381120: 0xe4802b34  swc1        $f0, 0x2B34($a0)
    ctx->pc = 0x381120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 11060), bits); }
    // 0x381124: 0x0  nop
    ctx->pc = 0x381124u;
    // NOP
label_381128:
    // 0x381128: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x381128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x38112c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x38112cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x381130: 0x2c610029  sltiu       $at, $v1, 0x29
    ctx->pc = 0x381130u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)41) ? 1 : 0);
    // 0x381134: 0x8c840080  lw          $a0, 0x80($a0)
    ctx->pc = 0x381134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x381138: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x381138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x38113c: 0x94a400c6  lhu         $a0, 0xC6($a1)
    ctx->pc = 0x38113cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 198)));
    // 0x381140: 0x34840040  ori         $a0, $a0, 0x40
    ctx->pc = 0x381140u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64);
    // 0x381144: 0xa4a400c6  sh          $a0, 0xC6($a1)
    ctx->pc = 0x381144u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 198), (uint16_t)GPR_U32(ctx, 4));
    // 0x381148: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x381148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x38114c: 0x8c840080  lw          $a0, 0x80($a0)
    ctx->pc = 0x38114cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x381150: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x381150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x381154: 0x94a401a6  lhu         $a0, 0x1A6($a1)
    ctx->pc = 0x381154u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 422)));
    // 0x381158: 0x34840040  ori         $a0, $a0, 0x40
    ctx->pc = 0x381158u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64);
    // 0x38115c: 0xa4a401a6  sh          $a0, 0x1A6($a1)
    ctx->pc = 0x38115cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 422), (uint16_t)GPR_U32(ctx, 4));
    // 0x381160: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x381160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x381164: 0x8c840080  lw          $a0, 0x80($a0)
    ctx->pc = 0x381164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x381168: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x381168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x38116c: 0x94a40286  lhu         $a0, 0x286($a1)
    ctx->pc = 0x38116cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 646)));
    // 0x381170: 0x34840040  ori         $a0, $a0, 0x40
    ctx->pc = 0x381170u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64);
    // 0x381174: 0xa4a40286  sh          $a0, 0x286($a1)
    ctx->pc = 0x381174u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 646), (uint16_t)GPR_U32(ctx, 4));
    // 0x381178: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x381178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x38117c: 0x8c840080  lw          $a0, 0x80($a0)
    ctx->pc = 0x38117cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x381180: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x381180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x381184: 0x94a40366  lhu         $a0, 0x366($a1)
    ctx->pc = 0x381184u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 870)));
    // 0x381188: 0x34840040  ori         $a0, $a0, 0x40
    ctx->pc = 0x381188u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64);
    // 0x38118c: 0xa4a40366  sh          $a0, 0x366($a1)
    ctx->pc = 0x38118cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 870), (uint16_t)GPR_U32(ctx, 4));
    // 0x381190: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x381190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x381194: 0x8c840080  lw          $a0, 0x80($a0)
    ctx->pc = 0x381194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x381198: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x381198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x38119c: 0x94a40446  lhu         $a0, 0x446($a1)
    ctx->pc = 0x38119cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 1094)));
    // 0x3811a0: 0x34840040  ori         $a0, $a0, 0x40
    ctx->pc = 0x3811a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64);
    // 0x3811a4: 0xa4a40446  sh          $a0, 0x446($a1)
    ctx->pc = 0x3811a4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1094), (uint16_t)GPR_U32(ctx, 4));
    // 0x3811a8: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x3811a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3811ac: 0x8c840080  lw          $a0, 0x80($a0)
    ctx->pc = 0x3811acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x3811b0: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x3811b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3811b4: 0x94a40526  lhu         $a0, 0x526($a1)
    ctx->pc = 0x3811b4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 1318)));
    // 0x3811b8: 0x34840040  ori         $a0, $a0, 0x40
    ctx->pc = 0x3811b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64);
    // 0x3811bc: 0xa4a40526  sh          $a0, 0x526($a1)
    ctx->pc = 0x3811bcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1318), (uint16_t)GPR_U32(ctx, 4));
    // 0x3811c0: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x3811c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3811c4: 0x8c840080  lw          $a0, 0x80($a0)
    ctx->pc = 0x3811c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x3811c8: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x3811c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3811cc: 0x94a40606  lhu         $a0, 0x606($a1)
    ctx->pc = 0x3811ccu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 1542)));
    // 0x3811d0: 0x34840040  ori         $a0, $a0, 0x40
    ctx->pc = 0x3811d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64);
    // 0x3811d4: 0xa4a40606  sh          $a0, 0x606($a1)
    ctx->pc = 0x3811d4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1542), (uint16_t)GPR_U32(ctx, 4));
    // 0x3811d8: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x3811d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3811dc: 0x8c840080  lw          $a0, 0x80($a0)
    ctx->pc = 0x3811dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x3811e0: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x3811e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3811e4: 0x94a406e6  lhu         $a0, 0x6E6($a1)
    ctx->pc = 0x3811e4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 1766)));
    // 0x3811e8: 0x24420700  addiu       $v0, $v0, 0x700
    ctx->pc = 0x3811e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1792));
    // 0x3811ec: 0x34840040  ori         $a0, $a0, 0x40
    ctx->pc = 0x3811ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64);
    // 0x3811f0: 0x1420ffcd  bnez        $at, . + 4 + (-0x33 << 2)
    ctx->pc = 0x3811F0u;
    {
        const bool branch_taken_0x3811f0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3811F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3811F0u;
        // 0x3811f4: 0xa4a406e6  sh          $a0, 0x6E6($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 1766), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3811f0) {
            ctx->pc = 0x381128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_381128;
        }
    }
    ctx->pc = 0x3811F8u;
    // 0x3811f8: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x3811f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3811fc: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x3811fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x381200: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x381200u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x381204: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x381204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381208: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x381208u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x38120c: 0x8ca30080  lw          $v1, 0x80($a1)
    ctx->pc = 0x38120cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x381210: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x381210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x381214: 0x946200c6  lhu         $v0, 0xC6($v1)
    ctx->pc = 0x381214u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 198)));
    // 0x381218: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x381218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x38121c: 0xc0e049c  jal         func_381270
    ctx->pc = 0x38121Cu;
    SET_GPR_U32(ctx, 31, 0x381224u);
    ctx->pc = 0x381220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38121Cu;
    // 0x381220: 0xa46200c6  sh          $v0, 0xC6($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 198), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x381270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x381270u, 0x38121Cu, 0x381224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381224u;
label_381224:
    // 0x381224: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x381224u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x381228: 0x24050520  addiu       $a1, $zero, 0x520
    ctx->pc = 0x381228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1312));
    // 0x38122c: 0x24846ae8  addiu       $a0, $a0, 0x6AE8
    ctx->pc = 0x38122cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27368));
    // 0x381230: 0xc04bf78  jal         func_12FDE0
    ctx->pc = 0x381230u;
    SET_GPR_U32(ctx, 31, 0x381238u);
    ctx->pc = 0x381234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381230u;
    // 0x381234: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FDE0u, 0x381230u, 0x381238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381238u;
label_381238:
    // 0x381238: 0xae022b38  sw          $v0, 0x2B38($s0)
    ctx->pc = 0x381238u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11064), GPR_U32(ctx, 2));
    // 0x38123c: 0x8e032b38  lw          $v1, 0x2B38($s0)
    ctx->pc = 0x38123cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11064)));
    // 0x381240: 0x24630290  addiu       $v1, $v1, 0x290
    ctx->pc = 0x381240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 656));
    // 0x381244: 0xae032b3c  sw          $v1, 0x2B3C($s0)
    ctx->pc = 0x381244u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11068), GPR_U32(ctx, 3));
    // 0x381248: 0x8e032b38  lw          $v1, 0x2B38($s0)
    ctx->pc = 0x381248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11064)));
    // 0x38124c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x38124Cu;
    {
        const bool branch_taken_0x38124c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x38124c) {
            ctx->pc = 0x381260u;
            goto label_381260;
        }
    }
    ctx->pc = 0x381254u;
    // 0x381254: 0x92032b40  lbu         $v1, 0x2B40($s0)
    ctx->pc = 0x381254u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11072)));
    // 0x381258: 0x306300fe  andi        $v1, $v1, 0xFE
    ctx->pc = 0x381258u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)254);
    // 0x38125c: 0xa2032b40  sb          $v1, 0x2B40($s0)
    ctx->pc = 0x38125cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11072), (uint8_t)GPR_U32(ctx, 3));
label_381260:
    // 0x381260: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x381260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x381264: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x381264u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x381268: 0x3e00008  jr          $ra
    ctx->pc = 0x381268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38126Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381268u;
        // 0x38126c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x381268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x381270u;
}
