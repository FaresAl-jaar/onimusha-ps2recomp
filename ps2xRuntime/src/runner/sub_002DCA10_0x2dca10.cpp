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

// Function: sub_002DCA10
// Address: 0x2dca10 - 0x2dce10
void sub_002DCA10_0x2dca10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DCA10_0x2dca10");
#endif

    switch (ctx->pc) {
        case 0x2dca4cu: goto label_2dca4c;
        case 0x2dca7cu: goto label_2dca7c;
        case 0x2dcaa8u: goto label_2dcaa8;
        case 0x2dcad0u: goto label_2dcad0;
        case 0x2dcad8u: goto label_2dcad8;
        case 0x2dcaf4u: goto label_2dcaf4;
        case 0x2dcb14u: goto label_2dcb14;
        case 0x2dcb38u: goto label_2dcb38;
        case 0x2dcb58u: goto label_2dcb58;
        case 0x2dcb98u: goto label_2dcb98;
        case 0x2dcbccu: goto label_2dcbcc;
        case 0x2dcc00u: goto label_2dcc00;
        case 0x2dcd2cu: goto label_2dcd2c;
        case 0x2dcd68u: goto label_2dcd68;
        case 0x2dcd80u: goto label_2dcd80;
        case 0x2dcda4u: goto label_2dcda4;
        case 0x2dcdc4u: goto label_2dcdc4;
        case 0x2dcde0u: goto label_2dcde0;
        default: break;
    }

    ctx->pc = 0x2dca10u;

    // 0x2dca10: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x2dca10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x2dca14: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2dca14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2dca18: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2dca18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2dca1c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2dca1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2dca20: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2dca20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2dca24: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2dca24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2dca28: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2dca28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2dca2c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2dca2cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dca30: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2dca30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2dca34: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2dca34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2dca38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dca38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2dca3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2dca3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2dca40: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2dca40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dca44: 0xc0745d0  jal         func_1D1740
    ctx->pc = 0x2DCA44u;
    SET_GPR_U32(ctx, 31, 0x2DCA4Cu);
    ctx->pc = 0x2DCA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCA44u;
    // 0x2dca48: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1740u, 0x2DCA44u, 0x2DCA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCA4Cu;
label_2dca4c:
    // 0x2dca4c: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x2dca4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
    // 0x2dca50: 0x111c3c  dsll32      $v1, $s1, 16
    ctx->pc = 0x2dca50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 16));
    // 0x2dca54: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2dca54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x2dca58: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2dca58u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2dca5c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2dca5cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2dca60: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x2dca60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x2dca64: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x2dca64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2dca68: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x2dca68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
    // 0x2dca6c: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x2dca6cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x2dca70: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x2dca70u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2dca74: 0xc09e644  jal         func_279910
    ctx->pc = 0x2DCA74u;
    SET_GPR_U32(ctx, 31, 0x2DCA7Cu);
    ctx->pc = 0x2DCA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCA74u;
    // 0x2dca78: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279910u, 0x2DCA74u, 0x2DCA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCA7Cu;
label_2dca7c:
    // 0x2dca7c: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x2dca7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x2dca80: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2dca80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x2dca84: 0x8ea30070  lw          $v1, 0x70($s5)
    ctx->pc = 0x2dca84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x2dca88: 0x24425ae0  addiu       $v0, $v0, 0x5AE0
    ctx->pc = 0x2dca88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23264));
    // 0x2dca8c: 0x8fa400ec  lw          $a0, 0xEC($sp)
    ctx->pc = 0x2dca8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x2dca90: 0x90630010  lbu         $v1, 0x10($v1)
    ctx->pc = 0x2dca90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2dca94: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2dca94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2dca98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2dca98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2dca9c: 0xdc460000  ld          $a2, 0x0($v0)
    ctx->pc = 0x2dca9cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dcaa0: 0xc074648  jal         func_1D1920
    ctx->pc = 0x2DCAA0u;
    SET_GPR_U32(ctx, 31, 0x2DCAA8u);
    ctx->pc = 0x2DCAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCAA0u;
    // 0x2dcaa4: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x2DCAA0u, 0x2DCAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCAA8u;
label_2dcaa8:
    // 0x2dcaa8: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2dcaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2dcaac: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x2dcaacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x2dcab0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2dcab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2dcab4: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x2dcab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    // 0x2dcab8: 0x8ea20070  lw          $v0, 0x70($s5)
    ctx->pc = 0x2dcab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x2dcabc: 0x90450004  lbu         $a1, 0x4($v0)
    ctx->pc = 0x2dcabcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2dcac0: 0x90460005  lbu         $a2, 0x5($v0)
    ctx->pc = 0x2dcac0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
    // 0x2dcac4: 0x90480011  lbu         $t0, 0x11($v0)
    ctx->pc = 0x2dcac4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 17)));
    // 0x2dcac8: 0xc07454c  jal         func_1D1530
    ctx->pc = 0x2DCAC8u;
    SET_GPR_U32(ctx, 31, 0x2DCAD0u);
    ctx->pc = 0x2DCACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCAC8u;
    // 0x2dcacc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1530u, 0x2DCAC8u, 0x2DCAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCAD0u;
label_2dcad0:
    // 0x2dcad0: 0xc07456c  jal         func_1D15B0
    ctx->pc = 0x2DCAD0u;
    SET_GPR_U32(ctx, 31, 0x2DCAD8u);
    ctx->pc = 0x2DCAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCAD0u;
    // 0x2dcad4: 0x27a40160  addiu       $a0, $sp, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15B0u, 0x2DCAD0u, 0x2DCAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCAD8u;
label_2dcad8:
    // 0x2dcad8: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2dcad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2dcadc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2dcadcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2dcae0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2dcae0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcae4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2dcae4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2dcae8: 0x8fa300ec  lw          $v1, 0xEC($sp)
    ctx->pc = 0x2dcae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x2dcaec: 0xc074648  jal         func_1D1920
    ctx->pc = 0x2DCAECu;
    SET_GPR_U32(ctx, 31, 0x2DCAF4u);
    ctx->pc = 0x2DCAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCAECu;
    // 0x2dcaf0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x2DCAECu, 0x2DCAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCAF4u;
label_2dcaf4:
    // 0x2dcaf4: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2dcaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2dcaf8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2dcaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2dcafc: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x2dcafcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    // 0x2dcb00: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2dcb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2dcb04: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2dcb04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2dcb08: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x2dcb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x2dcb0c: 0xc07549c  jal         func_1D5270
    ctx->pc = 0x2DCB0Cu;
    SET_GPR_U32(ctx, 31, 0x2DCB14u);
    ctx->pc = 0x2DCB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCB0Cu;
    // 0x2dcb10: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5270u, 0x2DCB0Cu, 0x2DCB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCB14u;
label_2dcb14:
    // 0x2dcb14: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x2dcb14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
    // 0x2dcb18: 0x90420004  lbu         $v0, 0x4($v0)
    ctx->pc = 0x2dcb18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2dcb1c: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x2dcb1cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2dcb20: 0x1020008f  beqz        $at, . + 4 + (0x8F << 2)
    ctx->pc = 0x2DCB20u;
    {
        const bool branch_taken_0x2dcb20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DCB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCB20u;
        // 0x2dcb24: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcb20) {
            ctx->pc = 0x2DCD60u;
            goto label_2dcd60;
        }
    }
    ctx->pc = 0x2DCB28u;
    // 0x2dcb28: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2dcb28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x2dcb2c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2dcb2cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcb30: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2dcb30u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2dcb34: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x2dcb34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_2dcb38:
    // 0x2dcb38: 0x8ea20070  lw          $v0, 0x70($s5)
    ctx->pc = 0x2dcb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x2dcb3c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2dcb3cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcb40: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x2dcb40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2dcb44: 0x2c31018  mult        $v0, $s6, $v1
    ctx->pc = 0x2dcb44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2dcb48: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x2dcb48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2dcb4c: 0x1020007e  beqz        $at, . + 4 + (0x7E << 2)
    ctx->pc = 0x2DCB4Cu;
    {
        const bool branch_taken_0x2dcb4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DCB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCB4Cu;
        // 0x2dcb50: 0xafa200b0  sw          $v0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcb4c) {
            ctx->pc = 0x2DCD48u;
            goto label_2dcd48;
        }
    }
    ctx->pc = 0x2DCB54u;
    // 0x2dcb54: 0x0  nop
    ctx->pc = 0x2dcb54u;
    // NOP
label_2dcb58:
    // 0x2dcb58: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2dcb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2dcb5c: 0x8ea3007c  lw          $v1, 0x7C($s5)
    ctx->pc = 0x2dcb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 124)));
    // 0x2dcb60: 0x542021  addu        $a0, $v0, $s4
    ctx->pc = 0x2dcb60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2dcb64: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x2dcb64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2dcb68: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x2dcb68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2dcb6c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2dcb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2dcb70: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x2dcb70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x2dcb74: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x2dcb74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2dcb78: 0x86230020  lh          $v1, 0x20($s1)
    ctx->pc = 0x2dcb78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2dcb7c: 0x1062006c  beq         $v1, $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x2DCB7Cu;
    {
        const bool branch_taken_0x2dcb7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2dcb7c) {
            ctx->pc = 0x2DCD30u;
            goto label_2dcd30;
        }
    }
    ctx->pc = 0x2DCB84u;
    // 0x2dcb84: 0x92260024  lbu         $a2, 0x24($s1)
    ctx->pc = 0x2dcb84u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x2dcb88: 0x14c0000d  bnez        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x2DCB88u;
    {
        const bool branch_taken_0x2dcb88 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DCB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCB88u;
        // 0x2dcb8c: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcb88) {
            ctx->pc = 0x2DCBC0u;
            goto label_2dcbc0;
        }
    }
    ctx->pc = 0x2DCB90u;
    // 0x2dcb90: 0xc0743e0  jal         func_1D0F80
    ctx->pc = 0x2DCB90u;
    SET_GPR_U32(ctx, 31, 0x2DCB98u);
    ctx->pc = 0x1D0F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F80u, 0x2DCB90u, 0x2DCB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCB98u;
label_2dcb98:
    // 0x2dcb98: 0x94530004  lhu         $s3, 0x4($v0)
    ctx->pc = 0x2dcb98u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2dcb9c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dcb9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcba0: 0x84430008  lh          $v1, 0x8($v0)
    ctx->pc = 0x2dcba0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2dcba4: 0x94520006  lhu         $s2, 0x6($v0)
    ctx->pc = 0x2dcba4u;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2dcba8: 0x263f021  addu        $fp, $s3, $v1
    ctx->pc = 0x2dcba8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x2dcbac: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x2dcbacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x2dcbb0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2dcbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2dcbb4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2DCBB4u;
    {
        const bool branch_taken_0x2dcbb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DCBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCBB4u;
        // 0x2dcbb8: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcbb4) {
            ctx->pc = 0x2DCBF0u;
            goto label_2dcbf0;
        }
    }
    ctx->pc = 0x2DCBBCu;
    // 0x2dcbbc: 0x0  nop
    ctx->pc = 0x2dcbbcu;
    // NOP
label_2dcbc0:
    // 0x2dcbc0: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x2dcbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2dcbc4: 0xc0743e4  jal         func_1D0F90
    ctx->pc = 0x2DCBC4u;
    SET_GPR_U32(ctx, 31, 0x2DCBCCu);
    ctx->pc = 0x2DCBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCBC4u;
    // 0x2dcbc8: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F90u, 0x2DCBC4u, 0x2DCBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCBCCu;
label_2dcbcc:
    // 0x2dcbcc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dcbccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcbd0: 0x8fb30100  lw          $s3, 0x100($sp)
    ctx->pc = 0x2dcbd0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2dcbd4: 0x27a20104  addiu       $v0, $sp, 0x104
    ctx->pc = 0x2dcbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x2dcbd8: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x2dcbd8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dcbdc: 0x27a20130  addiu       $v0, $sp, 0x130
    ctx->pc = 0x2dcbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2dcbe0: 0x8c5e0000  lw          $fp, 0x0($v0)
    ctx->pc = 0x2dcbe0u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dcbe4: 0x27a20134  addiu       $v0, $sp, 0x134
    ctx->pc = 0x2dcbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
    // 0x2dcbe8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2dcbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dcbec: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x2dcbecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_2dcbf0:
    // 0x2dcbf0: 0x8ea20070  lw          $v0, 0x70($s5)
    ctx->pc = 0x2dcbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x2dcbf4: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2dcbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2dcbf8: 0xc078e98  jal         func_1E3A60
    ctx->pc = 0x2DCBF8u;
    SET_GPR_U32(ctx, 31, 0x2DCC00u);
    ctx->pc = 0x2DCBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCBF8u;
    // 0x2dcbfc: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3A60u, 0x2DCBF8u, 0x2DCC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCC00u;
label_2dcc00:
    // 0x2dcc00: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2dcc00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2dcc04: 0x86240022  lh          $a0, 0x22($s1)
    ctx->pc = 0x2dcc04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 34)));
    // 0x2dcc08: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2dcc08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2dcc0c: 0x27a2014c  addiu       $v0, $sp, 0x14C
    ctx->pc = 0x2dcc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
    // 0x2dcc10: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2dcc10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dcc14: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2dcc14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2dcc18: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x2dcc18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2dcc1c: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x2dcc1cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x2dcc20: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2dcc20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2dcc24: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2dcc24u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2dcc28: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x2dcc28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2dcc2c: 0x21a03  sra         $v1, $v0, 8
    ctx->pc = 0x2dcc2cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 8));
    // 0x2dcc30: 0x27a2014c  addiu       $v0, $sp, 0x14C
    ctx->pc = 0x2dcc30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
    // 0x2dcc34: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2dcc34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2dcc38: 0x8ea20078  lw          $v0, 0x78($s5)
    ctx->pc = 0x2dcc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 120)));
    // 0x2dcc3c: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x2dcc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x2dcc40: 0x94440012  lhu         $a0, 0x12($v0)
    ctx->pc = 0x2dcc40u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x2dcc44: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DCC44u;
    {
        const bool branch_taken_0x2dcc44 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x2DCC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCC44u;
        // 0x2dcc48: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcc44) {
            ctx->pc = 0x2DCC58u;
            goto label_2dcc58;
        }
    }
    ctx->pc = 0x2DCC4Cu;
    // 0x2dcc4c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2dcc4cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dcc50: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2DCC50u;
    {
        const bool branch_taken_0x2dcc50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DCC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCC50u;
        // 0x2dcc54: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcc50) {
            ctx->pc = 0x2DCC70u;
            goto label_2dcc70;
        }
    }
    ctx->pc = 0x2DCC58u;
label_2dcc58:
    // 0x2dcc58: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2dcc58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2dcc5c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2dcc5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2dcc60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2dcc60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dcc64: 0x0  nop
    ctx->pc = 0x2dcc64u;
    // NOP
    // 0x2dcc68: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2dcc68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2dcc6c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2dcc6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2dcc70:
    // 0x2dcc70: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x2dcc70u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2dcc74: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x2dcc74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2dcc78: 0x21023  negu        $v0, $v0
    ctx->pc = 0x2dcc78u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2dcc7c: 0x8ead0070  lw          $t5, 0x70($s5)
    ctx->pc = 0x2dcc7cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x2dcc80: 0x860b000a  lh          $t3, 0xA($s0)
    ctx->pc = 0x2dcc80u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x2dcc84: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2dcc84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2dcc88: 0x860c0008  lh          $t4, 0x8($s0)
    ctx->pc = 0x2dcc88u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2dcc8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dcc8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcc90: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2dcc90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcc94: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2dcc94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcc98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dcc98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dcc9c: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x2dcc9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcca0: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x2dcca0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2dcca4: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x2dcca4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2dcca8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2dcca8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2dccac: 0x3c023d80  lui         $v0, 0x3D80
    ctx->pc = 0x2dccacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15744 << 16));
    // 0x2dccb0: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x2dccb0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2dccb4: 0x27a90140  addiu       $t1, $sp, 0x140
    ctx->pc = 0x2dccb4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2dccb8: 0x27aa0150  addiu       $t2, $sp, 0x150
    ctx->pc = 0x2dccb8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x2dccbc: 0xc5a0001c  lwc1        $f0, 0x1C($t5)
    ctx->pc = 0x2dccbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dccc0: 0x448b1800  mtc1        $t3, $f3
    ctx->pc = 0x2dccc0u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2dccc4: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x2dccc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2dccc8: 0xc5b10018  lwc1        $f17, 0x18($t5)
    ctx->pc = 0x2dccc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x2dcccc: 0x468019a0  cvt.s.w     $f6, $f3
    ctx->pc = 0x2dccccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x2dccd0: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x2dccd0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2dccd4: 0x46010402  mul.s       $f16, $f0, $f1
    ctx->pc = 0x2dccd4u;
    ctx->f[16] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2dccd8: 0x448c1000  mtc1        $t4, $f2
    ctx->pc = 0x2dccd8u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2dccdc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2dccdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2dcce0: 0x468010e0  cvt.s.w     $f3, $f2
    ctx->pc = 0x2dcce0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2dcce4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2dcce4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2dcce8: 0x46016082  mul.s       $f2, $f12, $f1
    ctx->pc = 0x2dcce8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x2dccec: 0x46032843  div.s       $f1, $f5, $f3
    ctx->pc = 0x2dccecu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[5], ctx->f[3]); }
    // 0x2dccf0: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x2dccf0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x2dccf4: 0x46016342  mul.s       $f13, $f12, $f1
    ctx->pc = 0x2dccf4u;
    ctx->f[13] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x2dccf8: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x2dccf8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x2dccfc: 0x46062042  mul.s       $f1, $f4, $f6
    ctx->pc = 0x2dccfcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x2dcd00: 0x460328c3  div.s       $f3, $f5, $f3
    ctx->pc = 0x2dcd00u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[5], ctx->f[3]); }
    // 0x2dcd04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dcd04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dcd08: 0x0  nop
    ctx->pc = 0x2dcd08u;
    // NOP
    // 0x2dcd0c: 0x46012843  div.s       $f1, $f5, $f1
    ctx->pc = 0x2dcd0cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[5], ctx->f[1]); }
    // 0x2dcd10: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2dcd10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2dcd14: 0x46008c86  mov.s       $f18, $f17
    ctx->pc = 0x2dcd14u;
    ctx->f[18] = FPU_MOV_S(ctx->f[17]);
    // 0x2dcd18: 0x46021b82  mul.s       $f14, $f3, $f2
    ctx->pc = 0x2dcd18u;
    ctx->f[14] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2dcd1c: 0x0  nop
    ctx->pc = 0x2dcd1cu;
    // NOP
    // 0x2dcd20: 0x46006802  mul.s       $f0, $f13, $f0
    ctx->pc = 0x2dcd20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x2dcd24: 0xc0754d0  jal         func_1D5340
    ctx->pc = 0x2DCD24u;
    SET_GPR_U32(ctx, 31, 0x2DCD2Cu);
    ctx->pc = 0x2DCD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCD24u;
    // 0x2dcd28: 0x46000bc2  mul.s       $f15, $f1, $f0 (Delay Slot)
    ctx->f[15] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5340u, 0x2DCD24u, 0x2DCD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCD2Cu;
label_2dcd2c:
    // 0x2dcd2c: 0x0  nop
    ctx->pc = 0x2dcd2cu;
    // NOP
label_2dcd30:
    // 0x2dcd30: 0x8ea20070  lw          $v0, 0x70($s5)
    ctx->pc = 0x2dcd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x2dcd34: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2dcd34u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2dcd38: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x2dcd38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2dcd3c: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x2dcd3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2dcd40: 0x1440ff85  bnez        $v0, . + 4 + (-0x7B << 2)
    ctx->pc = 0x2DCD40u;
    {
        const bool branch_taken_0x2dcd40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dcd40) {
            ctx->pc = 0x2DCB58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dcb58;
        }
    }
    ctx->pc = 0x2DCD48u;
label_2dcd48:
    // 0x2dcd48: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x2dcd48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
    // 0x2dcd4c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x2dcd4cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x2dcd50: 0x90420004  lbu         $v0, 0x4($v0)
    ctx->pc = 0x2dcd50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2dcd54: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x2dcd54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2dcd58: 0x1440ff77  bnez        $v0, . + 4 + (-0x89 << 2)
    ctx->pc = 0x2DCD58u;
    {
        const bool branch_taken_0x2dcd58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DCD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCD58u;
        // 0x2dcd5c: 0x26f70020  addiu       $s7, $s7, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcd58) {
            ctx->pc = 0x2DCB38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dcb38;
        }
    }
    ctx->pc = 0x2DCD60u;
label_2dcd60:
    // 0x2dcd60: 0xc0754ac  jal         func_1D52B0
    ctx->pc = 0x2DCD60u;
    SET_GPR_U32(ctx, 31, 0x2DCD68u);
    ctx->pc = 0x1D52B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D52B0u, 0x2DCD60u, 0x2DCD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCD68u;
label_2dcd68:
    // 0x2dcd68: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2dcd68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2dcd6c: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x2dcd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x2dcd70: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2dcd70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2dcd74: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2dcd74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2dcd78: 0xc074138  jal         func_1D04E0
    ctx->pc = 0x2DCD78u;
    SET_GPR_U32(ctx, 31, 0x2DCD80u);
    ctx->pc = 0x2DCD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCD78u;
    // 0x2dcd7c: 0xafa300c0  sw          $v1, 0xC0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D04E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D04E0u, 0x2DCD78u, 0x2DCD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCD80u;
label_2dcd80:
    // 0x2dcd80: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x2dcd80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2dcd84: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x2dcd84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x2dcd88: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2dcd88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2dcd8c: 0x26a60040  addiu       $a2, $s5, 0x40
    ctx->pc = 0x2dcd8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x2dcd90: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x2dcd90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x2dcd94: 0x24a56a20  addiu       $a1, $a1, 0x6A20
    ctx->pc = 0x2dcd94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27168));
    // 0x2dcd98: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2dcd98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2dcd9c: 0xc076788  jal         func_1D9E20
    ctx->pc = 0x2DCD9Cu;
    SET_GPR_U32(ctx, 31, 0x2DCDA4u);
    ctx->pc = 0x2DCDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCD9Cu;
    // 0x2dcda0: 0xafa300f0  sw          $v1, 0xF0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E20u, 0x2DCD9Cu, 0x2DCDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCDA4u;
label_2dcda4:
    // 0x2dcda4: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2dcda4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2dcda8: 0x38283  sra         $s0, $v1, 10
    ctx->pc = 0x2dcda8u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 10));
    // 0x2dcdac: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x2dcdacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2dcdb0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2DCDB0u;
    {
        const bool branch_taken_0x2dcdb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dcdb0) {
            ctx->pc = 0x2DCDE0u;
            goto label_2dcde0;
        }
    }
    ctx->pc = 0x2DCDB8u;
    // 0x2dcdb8: 0x8fa400ec  lw          $a0, 0xEC($sp)
    ctx->pc = 0x2dcdb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x2dcdbc: 0xc07463c  jal         func_1D18F0
    ctx->pc = 0x2DCDBCu;
    SET_GPR_U32(ctx, 31, 0x2DCDC4u);
    ctx->pc = 0x2DCDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCDBCu;
    // 0x2dcdc0: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18F0u, 0x2DCDBCu, 0x2DCDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCDC4u;
label_2dcdc4:
    // 0x2dcdc4: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x2dcdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2dcdc8: 0x8fa400ec  lw          $a0, 0xEC($sp)
    ctx->pc = 0x2dcdc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x2dcdcc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2dcdccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2dcdd0: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x2dcdd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
    // 0x2dcdd4: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x2dcdd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2dcdd8: 0xc0745fc  jal         func_1D17F0
    ctx->pc = 0x2DCDD8u;
    SET_GPR_U32(ctx, 31, 0x2DCDE0u);
    ctx->pc = 0x2DCDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCDD8u;
    // 0x2dcddc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D17F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D17F0u, 0x2DCDD8u, 0x2DCDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCDE0u;
label_2dcde0:
    // 0x2dcde0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2dcde0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2dcde4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2dcde4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2dcde8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2dcde8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2dcdec: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2dcdecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2dcdf0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2dcdf0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2dcdf4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2dcdf4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2dcdf8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2dcdf8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dcdfc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2dcdfcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dce00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dce00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dce04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dce04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dce08: 0x3e00008  jr          $ra
    ctx->pc = 0x2DCE08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DCE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCE08u;
        // 0x2dce0c: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DCE08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DCE10u;
}
