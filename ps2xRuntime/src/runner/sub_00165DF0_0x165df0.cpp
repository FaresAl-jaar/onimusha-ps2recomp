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

// Function: sub_00165DF0
// Address: 0x165df0 - 0x165f38
void sub_00165DF0_0x165df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165DF0_0x165df0");
#endif

    switch (ctx->pc) {
        case 0x165e18u: goto label_165e18;
        case 0x165ec8u: goto label_165ec8;
        case 0x165f24u: goto label_165f24;
        default: break;
    }

    ctx->pc = 0x165df0u;

    // 0x165df0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x165df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x165df4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x165df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x165df8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x165df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x165dfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x165dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x165e00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x165e00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165e04: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x165e04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165e08: 0xac900090  sw          $s0, 0x90($a0)
    ctx->pc = 0x165e08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 16));
    // 0x165e0c: 0x90a20006  lbu         $v0, 0x6($a1)
    ctx->pc = 0x165e0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x165e10: 0xc0597d0  jal         func_165F40
    ctx->pc = 0x165E10u;
    SET_GPR_U32(ctx, 31, 0x165E18u);
    ctx->pc = 0x165E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165E10u;
    // 0x165e14: 0xa0820012  sb          $v0, 0x12($a0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 4), 18), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165F40u, 0x165E10u, 0x165E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165E18u;
label_165e18:
    // 0x165e18: 0x9202000e  lbu         $v0, 0xE($s0)
    ctx->pc = 0x165e18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x165e1c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x165E1Cu;
    {
        const bool branch_taken_0x165e1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165e1c) {
            ctx->pc = 0x165E30u;
            goto label_165e30;
        }
    }
    ctx->pc = 0x165E24u;
    // 0x165e24: 0x96220010  lhu         $v0, 0x10($s1)
    ctx->pc = 0x165e24u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x165e28: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x165e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x165e2c: 0xa6220010  sh          $v0, 0x10($s1)
    ctx->pc = 0x165e2cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 2));
label_165e30:
    // 0x165e30: 0x92030039  lbu         $v1, 0x39($s0)
    ctx->pc = 0x165e30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 57)));
    // 0x165e34: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x165e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x165e38: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x165e38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x165e3c: 0xa62200a0  sh          $v0, 0xA0($s1)
    ctx->pc = 0x165e3cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 160), (uint16_t)GPR_U32(ctx, 2));
    // 0x165e40: 0xa62000aa  sh          $zero, 0xAA($s1)
    ctx->pc = 0x165e40u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 170), (uint16_t)GPR_U32(ctx, 0));
    // 0x165e44: 0xa62000a8  sh          $zero, 0xA8($s1)
    ctx->pc = 0x165e44u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 168), (uint16_t)GPR_U32(ctx, 0));
    // 0x165e48: 0x922200a7  lbu         $v0, 0xA7($s1)
    ctx->pc = 0x165e48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 167)));
    // 0x165e4c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x165E4Cu;
    {
        const bool branch_taken_0x165e4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x165E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165E4Cu;
        // 0x165e50: 0x26230050  addiu       $v1, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165e4c) {
            ctx->pc = 0x165E60u;
            goto label_165e60;
        }
    }
    ctx->pc = 0x165E54u;
    // 0x165e54: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x165e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x165e58: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x165e58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x165e5c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x165e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_165e60:
    // 0x165e60: 0x96030054  lhu         $v1, 0x54($s0)
    ctx->pc = 0x165e60u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x165e64: 0x3062f000  andi        $v0, $v1, 0xF000
    ctx->pc = 0x165e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)61440);
    // 0x165e68: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x165E68u;
    {
        const bool branch_taken_0x165e68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x165E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165E68u;
        // 0x165e6c: 0x30620fff  andi        $v0, $v1, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x165e68) {
            ctx->pc = 0x165E78u;
            goto label_165e78;
        }
    }
    ctx->pc = 0x165E70u;
    // 0x165e70: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x165E70u;
    {
        const bool branch_taken_0x165e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x165e70) {
            ctx->pc = 0x165E80u;
            goto label_165e80;
        }
    }
    ctx->pc = 0x165E78u;
label_165e78:
    // 0x165e78: 0x30620fff  andi        $v0, $v1, 0xFFF
    ctx->pc = 0x165e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x165e7c: 0x0  nop
    ctx->pc = 0x165e7cu;
    // NOP
label_165e80:
    // 0x165e80: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x165e80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x165e84: 0xa4220280  sh          $v0, 0x280($at)
    ctx->pc = 0x165e84u;
    runtime->Store16(rdram, ctx, 0x70000280u, (uint16_t)GPR_U32(ctx, 2));
    // 0x165e88: 0x96030056  lhu         $v1, 0x56($s0)
    ctx->pc = 0x165e88u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 86)));
    // 0x165e8c: 0x3062f000  andi        $v0, $v1, 0xF000
    ctx->pc = 0x165e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)61440);
    // 0x165e90: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x165E90u;
    {
        const bool branch_taken_0x165e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165e90) {
            ctx->pc = 0x165EA0u;
            goto label_165ea0;
        }
    }
    ctx->pc = 0x165E98u;
    // 0x165e98: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x165E98u;
    {
        const bool branch_taken_0x165e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165E98u;
        // 0x165e9c: 0x30620fff  andi        $v0, $v1, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x165e98) {
            ctx->pc = 0x165EA8u;
            goto label_165ea8;
        }
    }
    ctx->pc = 0x165EA0u;
label_165ea0:
    // 0x165ea0: 0x30620fff  andi        $v0, $v1, 0xFFF
    ctx->pc = 0x165ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x165ea4: 0x0  nop
    ctx->pc = 0x165ea4u;
    // NOP
label_165ea8:
    // 0x165ea8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x165ea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x165eac: 0xa4220282  sh          $v0, 0x282($at)
    ctx->pc = 0x165eacu;
    runtime->Store16(rdram, ctx, 0x70000282u, (uint16_t)GPR_U32(ctx, 2));
    // 0x165eb0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x165eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x165eb4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x165eb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x165eb8: 0x34440200  ori         $a0, $v0, 0x200
    ctx->pc = 0x165eb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x165ebc: 0x34450280  ori         $a1, $v0, 0x280
    ctx->pc = 0x165ebcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)640);
    // 0x165ec0: 0xc04d52c  jal         func_1354B0
    ctx->pc = 0x165EC0u;
    SET_GPR_U32(ctx, 31, 0x165EC8u);
    ctx->pc = 0x165EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165EC0u;
    // 0x165ec4: 0xa4200284  sh          $zero, 0x284($at) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 1), 644), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1354B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1354B0u, 0x165EC0u, 0x165EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165EC8u;
label_165ec8:
    // 0x165ec8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x165ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x165ecc: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x165eccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x165ed0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x165ed0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x165ed4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x165ed4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x165ed8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x165ed8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x165edc: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x165edcu;
    runtime->Store128(rdram, ctx, 0x70000000u, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x165ee0: 0x44011000  mfc1        $at, $f2
    ctx->pc = 0x165ee0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 1, bits); }
    // 0x165ee4: 0x0  nop
    ctx->pc = 0x165ee4u;
    // NOP
    // 0x165ee8: 0xac610000  sw          $at, 0x0($v1)
    ctx->pc = 0x165ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 1));
    // 0x165eec: 0x44010800  mfc1        $at, $f1
    ctx->pc = 0x165eecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 1, bits); }
    // 0x165ef0: 0x0  nop
    ctx->pc = 0x165ef0u;
    // NOP
    // 0x165ef4: 0xac610004  sw          $at, 0x4($v1)
    ctx->pc = 0x165ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 1));
    // 0x165ef8: 0x44010000  mfc1        $at, $f0
    ctx->pc = 0x165ef8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 1, bits); }
    // 0x165efc: 0x0  nop
    ctx->pc = 0x165efcu;
    // NOP
    // 0x165f00: 0xac610008  sw          $at, 0x8($v1)
    ctx->pc = 0x165f00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 1));
    // 0x165f04: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x165f04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x165f08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x165f08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x165f0c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x165f0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x165f10: 0x26240070  addiu       $a0, $s1, 0x70
    ctx->pc = 0x165f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x165f14: 0x34450200  ori         $a1, $v0, 0x200
    ctx->pc = 0x165f14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x165f18: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x165f18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x165f1c: 0xc041442  jal         func_105108
    ctx->pc = 0x165F1Cu;
    SET_GPR_U32(ctx, 31, 0x165F24u);
    ctx->pc = 0x165F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165F1Cu;
    // 0x165f20: 0xe420000c  swc1        $f0, 0xC($at) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x165F1Cu, 0x165F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165F24u;
label_165f24:
    // 0x165f24: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x165f24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x165f28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x165f28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165f2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x165f2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165f30: 0x3e00008  jr          $ra
    ctx->pc = 0x165F30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165F30u;
        // 0x165f34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165F30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165F38u;
}
