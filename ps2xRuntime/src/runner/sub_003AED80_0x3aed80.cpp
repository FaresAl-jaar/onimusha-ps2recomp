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

// Function: sub_003AED80
// Address: 0x3aed80 - 0x3af208
void sub_003AED80_0x3aed80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AED80_0x3aed80");
#endif

    switch (ctx->pc) {
        case 0x3aedccu: goto label_3aedcc;
        case 0x3aeddcu: goto label_3aeddc;
        case 0x3aeec8u: goto label_3aeec8;
        case 0x3aef0cu: goto label_3aef0c;
        case 0x3aef18u: goto label_3aef18;
        case 0x3aef30u: goto label_3aef30;
        case 0x3af078u: goto label_3af078;
        case 0x3af0bcu: goto label_3af0bc;
        case 0x3af0c8u: goto label_3af0c8;
        case 0x3af0e8u: goto label_3af0e8;
        case 0x3af1b0u: goto label_3af1b0;
        case 0x3af1bcu: goto label_3af1bc;
        case 0x3af1d0u: goto label_3af1d0;
        case 0x3af1d8u: goto label_3af1d8;
        case 0x3af1ecu: goto label_3af1ec;
        default: break;
    }

    ctx->pc = 0x3aed80u;

    // 0x3aed80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3aed80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3aed84: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3aed84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3aed88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3aed88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3aed8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3aed8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3aed90: 0x90850119  lbu         $a1, 0x119($a0)
    ctx->pc = 0x3aed90u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 281)));
    // 0x3aed94: 0x10a3006a  beq         $a1, $v1, . + 4 + (0x6A << 2)
    ctx->pc = 0x3AED94u;
    {
        const bool branch_taken_0x3aed94 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3AED98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AED94u;
        // 0x3aed98: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aed94) {
            ctx->pc = 0x3AEF40u;
            goto label_3aef40;
        }
    }
    ctx->pc = 0x3AED9Cu;
    // 0x3aed9c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3aed9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3aeda0: 0x10a30017  beq         $a1, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x3AEDA0u;
    {
        const bool branch_taken_0x3aeda0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3AEDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEDA0u;
        // 0x3aeda4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aeda0) {
            ctx->pc = 0x3AEE00u;
            goto label_3aee00;
        }
    }
    ctx->pc = 0x3AEDA8u;
    // 0x3aeda8: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3AEDA8u;
    {
        const bool branch_taken_0x3aeda8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3aeda8) {
            ctx->pc = 0x3AEDC0u;
            goto label_3aedc0;
        }
    }
    ctx->pc = 0x3AEDB0u;
    // 0x3aedb0: 0x10a000d9  beqz        $a1, . + 4 + (0xD9 << 2)
    ctx->pc = 0x3AEDB0u;
    {
        const bool branch_taken_0x3aedb0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aedb0) {
            ctx->pc = 0x3AF118u;
            goto label_3af118;
        }
    }
    ctx->pc = 0x3AEDB8u;
    // 0x3aedb8: 0x100000d7  b           . + 4 + (0xD7 << 2)
    ctx->pc = 0x3AEDB8u;
    {
        const bool branch_taken_0x3aedb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aedb8) {
            ctx->pc = 0x3AF118u;
            goto label_3af118;
        }
    }
    ctx->pc = 0x3AEDC0u;
label_3aedc0:
    // 0x3aedc0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3aedc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3aedc4: 0xc0d0590  jal         func_341640
    ctx->pc = 0x3AEDC4u;
    SET_GPR_U32(ctx, 31, 0x3AEDCCu);
    ctx->pc = 0x3AEDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AEDC4u;
    // 0x3aedc8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341640u, 0x3AEDC4u, 0x3AEDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AEDCCu;
label_3aedcc:
    // 0x3aedcc: 0x8e020144  lw          $v0, 0x144($s0)
    ctx->pc = 0x3aedccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
    // 0x3aedd0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3aedd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3aedd4: 0xc0d0ae8  jal         func_342BA0
    ctx->pc = 0x3AEDD4u;
    SET_GPR_U32(ctx, 31, 0x3AEDDCu);
    ctx->pc = 0x3AEDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AEDD4u;
    // 0x3aedd8: 0x2444000c  addiu       $a0, $v0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342BA0u, 0x3AEDD4u, 0x3AEDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AEDDCu;
label_3aeddc:
    // 0x3aeddc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3aeddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3aede0: 0xa2030119  sb          $v1, 0x119($s0)
    ctx->pc = 0x3aede0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 281), (uint8_t)GPR_U32(ctx, 3));
    // 0x3aede4: 0x8e030144  lw          $v1, 0x144($s0)
    ctx->pc = 0x3aede4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
    // 0x3aede8: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x3aede8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
    // 0x3aedec: 0x8e030144  lw          $v1, 0x144($s0)
    ctx->pc = 0x3aedecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
    // 0x3aedf0: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x3aedf0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
    // 0x3aedf4: 0x8e030144  lw          $v1, 0x144($s0)
    ctx->pc = 0x3aedf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
    // 0x3aedf8: 0x100000c7  b           . + 4 + (0xC7 << 2)
    ctx->pc = 0x3AEDF8u;
    {
        const bool branch_taken_0x3aedf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AEDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEDF8u;
        // 0x3aedfc: 0xac600028  sw          $zero, 0x28($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aedf8) {
            ctx->pc = 0x3AF118u;
            goto label_3af118;
        }
    }
    ctx->pc = 0x3AEE00u;
label_3aee00:
    // 0x3aee00: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3aee00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3aee04: 0x8c23f004  lw          $v1, -0xFFC($at)
    ctx->pc = 0x3aee04u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81F004u));
    // 0x3aee08: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x3aee08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x3aee0c: 0x3446a9e5  ori         $a2, $v0, 0xA9E5
    ctx->pc = 0x3aee0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x3aee10: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3aee10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3aee14: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x3aee14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3aee18: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3aee18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3aee1c: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x3aee1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x3aee20: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3aee20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3aee24: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3aee24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3aee28: 0x661826  xor         $v1, $v1, $a2
    ctx->pc = 0x3aee28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 6));
    // 0x3aee2c: 0xac23f004  sw          $v1, -0xFFC($at)
    ctx->pc = 0x3aee2cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 3));
    // 0x3aee30: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x3aee30u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x3aee34: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3aee34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3aee38: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x3aee38u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x3aee3c: 0x8c23f004  lw          $v1, -0xFFC($at)
    ctx->pc = 0x3aee3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963204)));
    // 0x3aee40: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x3aee40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3aee44: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3aee44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3aee48: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x3aee48u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x3aee4c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3aee4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3aee50: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3aee50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3aee54: 0x661826  xor         $v1, $v1, $a2
    ctx->pc = 0x3aee54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 6));
    // 0x3aee58: 0x2010  mfhi        $a0
    ctx->pc = 0x3aee58u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3aee5c: 0x33202  srl         $a2, $v1, 8
    ctx->pc = 0x3aee5cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x3aee60: 0xac23f004  sw          $v1, -0xFFC($at)
    ctx->pc = 0x3aee60u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 3));
    // 0x3aee64: 0x8e030144  lw          $v1, 0x144($s0)
    ctx->pc = 0x3aee64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
    // 0x3aee68: 0xc5001b  divu        $zero, $a2, $a1
    ctx->pc = 0x3aee68u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
    // 0x3aee6c: 0x2484fffe  addiu       $a0, $a0, -0x2
    ctx->pc = 0x3aee6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
    // 0x3aee70: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3aee70u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3aee74: 0x0  nop
    ctx->pc = 0x3aee74u;
    // NOP
    // 0x3aee78: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3aee78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3aee7c: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x3aee7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3aee80: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3aee80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3aee84: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x3aee84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x3aee88: 0x8e030144  lw          $v1, 0x144($s0)
    ctx->pc = 0x3aee88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
    // 0x3aee8c: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x3aee8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3aee90: 0x2010  mfhi        $a0
    ctx->pc = 0x3aee90u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3aee94: 0x2484fffe  addiu       $a0, $a0, -0x2
    ctx->pc = 0x3aee94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
    // 0x3aee98: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3aee98u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3aee9c: 0x0  nop
    ctx->pc = 0x3aee9cu;
    // NOP
    // 0x3aeea0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3aeea0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3aeea4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3aeea4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3aeea8: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x3aeea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x3aeeac: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x3aeeacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3aeeb0: 0x9483006a  lhu         $v1, 0x6A($a0)
    ctx->pc = 0x3aeeb0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 106)));
    // 0x3aeeb4: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x3aeeb4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3aeeb8: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x3AEEB8u;
    {
        const bool branch_taken_0x3aeeb8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AEEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEEB8u;
        // 0x3aeebc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aeeb8) {
            ctx->pc = 0x3AEF00u;
            goto label_3aef00;
        }
    }
    ctx->pc = 0x3AEEC0u;
    // 0x3aeec0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3aeec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aeec4: 0x0  nop
    ctx->pc = 0x3aeec4u;
    // NOP
label_3aeec8:
    // 0x3aeec8: 0x8e030144  lw          $v1, 0x144($s0)
    ctx->pc = 0x3aeec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
    // 0x3aeecc: 0x8c840080  lw          $a0, 0x80($a0)
    ctx->pc = 0x3aeeccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x3aeed0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3aeed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3aeed4: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x3aeed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3aeed8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3aeed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3aeedc: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x3aeedcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x3aeee0: 0x8e030144  lw          $v1, 0x144($s0)
    ctx->pc = 0x3aeee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
    // 0x3aeee4: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x3aeee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3aeee8: 0xe4800038  swc1        $f0, 0x38($a0)
    ctx->pc = 0x3aeee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x3aeeec: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x3aeeecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3aeef0: 0x9483006a  lhu         $v1, 0x6A($a0)
    ctx->pc = 0x3aeef0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 106)));
    // 0x3aeef4: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x3aeef4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3aeef8: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x3AEEF8u;
    {
        const bool branch_taken_0x3aeef8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AEEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEEF8u;
        // 0x3aeefc: 0x24a500e0  addiu       $a1, $a1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aeef8) {
            ctx->pc = 0x3AEEC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3aeec8;
        }
    }
    ctx->pc = 0x3AEF00u;
label_3aef00:
    // 0x3aef00: 0x8e020144  lw          $v0, 0x144($s0)
    ctx->pc = 0x3aef00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
    // 0x3aef04: 0xc0d0b00  jal         func_342C00
    ctx->pc = 0x3AEF04u;
    SET_GPR_U32(ctx, 31, 0x3AEF0Cu);
    ctx->pc = 0x3AEF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AEF04u;
    // 0x3aef08: 0x2444000c  addiu       $a0, $v0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342C00u, 0x3AEF04u, 0x3AEF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AEF0Cu;
label_3aef0c:
    // 0x3aef0c: 0x8e020144  lw          $v0, 0x144($s0)
    ctx->pc = 0x3aef0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
    // 0x3aef10: 0xc0d0af4  jal         func_342BD0
    ctx->pc = 0x3AEF10u;
    SET_GPR_U32(ctx, 31, 0x3AEF18u);
    ctx->pc = 0x3AEF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AEF10u;
    // 0x3aef14: 0x2444000c  addiu       $a0, $v0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342BD0u, 0x3AEF10u, 0x3AEF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AEF18u;
label_3aef18:
    // 0x3aef18: 0x1040007f  beqz        $v0, . + 4 + (0x7F << 2)
    ctx->pc = 0x3AEF18u;
    {
        const bool branch_taken_0x3aef18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aef18) {
            ctx->pc = 0x3AF118u;
            goto label_3af118;
        }
    }
    ctx->pc = 0x3AEF20u;
    // 0x3aef20: 0x8e020144  lw          $v0, 0x144($s0)
    ctx->pc = 0x3aef20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
    // 0x3aef24: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3aef24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3aef28: 0xc0d0ae8  jal         func_342BA0
    ctx->pc = 0x3AEF28u;
    SET_GPR_U32(ctx, 31, 0x3AEF30u);
    ctx->pc = 0x3AEF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AEF28u;
    // 0x3aef2c: 0x2444000c  addiu       $a0, $v0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342BA0u, 0x3AEF28u, 0x3AEF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AEF30u;
label_3aef30:
    // 0x3aef30: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3aef30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3aef34: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x3AEF34u;
    {
        const bool branch_taken_0x3aef34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AEF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEF34u;
        // 0x3aef38: 0xa2030119  sb          $v1, 0x119($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 281), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aef34) {
            ctx->pc = 0x3AF118u;
            goto label_3af118;
        }
    }
    ctx->pc = 0x3AEF3Cu;
    // 0x3aef3c: 0x0  nop
    ctx->pc = 0x3aef3cu;
    // NOP
label_3aef40:
    // 0x3aef40: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3aef40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3aef44: 0x8c25f004  lw          $a1, -0xFFC($at)
    ctx->pc = 0x3aef44u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81F004u));
    // 0x3aef48: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x3aef48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x3aef4c: 0x3444a9e5  ori         $a0, $v0, 0xA9E5
    ctx->pc = 0x3aef4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x3aef50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3aef50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aef54: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x3aef54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x3aef58: 0x517c2  srl         $v0, $a1, 31
    ctx->pc = 0x3aef58u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x3aef5c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3aef5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3aef60: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3aef60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3aef64: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3aef64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3aef68: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x3aef68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x3aef6c: 0xac22f004  sw          $v0, -0xFFC($at)
    ctx->pc = 0x3aef6cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 2));
    // 0x3aef70: 0x22a02  srl         $a1, $v0, 8
    ctx->pc = 0x3aef70u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3aef74: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3aef74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3aef78: 0x8c22f004  lw          $v0, -0xFFC($at)
    ctx->pc = 0x3aef78u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81F004u));
    // 0x3aef7c: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x3aef7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3aef80: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3aef80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3aef84: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x3aef84u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x3aef88: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3aef88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3aef8c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3aef8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3aef90: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x3aef90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x3aef94: 0xac22f004  sw          $v0, -0xFFC($at)
    ctx->pc = 0x3aef94u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 2));
    // 0x3aef98: 0x8e020144  lw          $v0, 0x144($s0)
    ctx->pc = 0x3aef98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
    // 0x3aef9c: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x3aef9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3aefa0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3aefa0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3aefa4: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x3AEFA4u;
    {
        const bool branch_taken_0x3aefa4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3AEFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEFA4u;
        // 0x3aefa8: 0x24430020  addiu       $v1, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aefa4) {
            ctx->pc = 0x3AEFE0u;
            goto label_3aefe0;
        }
    }
    ctx->pc = 0x3AEFACu;
    // 0x3aefac: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3aefacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3aefb0: 0xa2001b  divu        $zero, $a1, $v0
    ctx->pc = 0x3aefb0u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x3aefb4: 0x0  nop
    ctx->pc = 0x3aefb4u;
    // NOP
    // 0x3aefb8: 0x0  nop
    ctx->pc = 0x3aefb8u;
    // NOP
    // 0x3aefbc: 0x2010  mfhi        $a0
    ctx->pc = 0x3aefbcu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3aefc0: 0x2482fffd  addiu       $v0, $a0, -0x3
    ctx->pc = 0x3aefc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967293));
    // 0x3aefc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3aefc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aefc8: 0x0  nop
    ctx->pc = 0x3aefc8u;
    // NOP
    // 0x3aefcc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3aefccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3aefd0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3aefd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3aefd4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3AEFD4u;
    {
        const bool branch_taken_0x3aefd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AEFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEFD4u;
        // 0x3aefd8: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aefd4) {
            ctx->pc = 0x3AF010u;
            goto label_3af010;
        }
    }
    ctx->pc = 0x3AEFDCu;
    // 0x3aefdc: 0x0  nop
    ctx->pc = 0x3aefdcu;
    // NOP
label_3aefe0:
    // 0x3aefe0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3aefe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3aefe4: 0xa2001b  divu        $zero, $a1, $v0
    ctx->pc = 0x3aefe4u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x3aefe8: 0x0  nop
    ctx->pc = 0x3aefe8u;
    // NOP
    // 0x3aefec: 0x0  nop
    ctx->pc = 0x3aefecu;
    // NOP
    // 0x3aeff0: 0x2010  mfhi        $a0
    ctx->pc = 0x3aeff0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3aeff4: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x3aeff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3aeff8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3aeff8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aeffc: 0x0  nop
    ctx->pc = 0x3aeffcu;
    // NOP
    // 0x3af000: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3af000u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3af004: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3af004u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3af008: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x3af008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x3af00c: 0x0  nop
    ctx->pc = 0x3af00cu;
    // NOP
label_3af010:
    // 0x3af010: 0x8e030144  lw          $v1, 0x144($s0)
    ctx->pc = 0x3af010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
    // 0x3af014: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3af014u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3af018: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x3af018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3af01c: 0x24620020  addiu       $v0, $v1, 0x20
    ctx->pc = 0x3af01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x3af020: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3af020u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3af024: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x3AF024u;
    {
        const bool branch_taken_0x3af024 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3AF028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF024u;
        // 0x3af028: 0x24430008  addiu       $v1, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af024) {
            ctx->pc = 0x3AF048u;
            goto label_3af048;
        }
    }
    ctx->pc = 0x3AF02Cu;
    // 0x3af02c: 0x2482fffd  addiu       $v0, $a0, -0x3
    ctx->pc = 0x3af02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967293));
    // 0x3af030: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3af030u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3af034: 0x0  nop
    ctx->pc = 0x3af034u;
    // NOP
    // 0x3af038: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3af038u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3af03c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3af03cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3af040: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3AF040u;
    {
        const bool branch_taken_0x3af040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF040u;
        // 0x3af044: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af040) {
            ctx->pc = 0x3AF060u;
            goto label_3af060;
        }
    }
    ctx->pc = 0x3AF048u;
label_3af048:
    // 0x3af048: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x3af048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3af04c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3af04cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3af050: 0x0  nop
    ctx->pc = 0x3af050u;
    // NOP
    // 0x3af054: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3af054u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3af058: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3af058u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3af05c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x3af05cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_3af060:
    // 0x3af060: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x3af060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3af064: 0x9462006a  lhu         $v0, 0x6A($v1)
    ctx->pc = 0x3af064u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 106)));
    // 0x3af068: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x3af068u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3af06c: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x3AF06Cu;
    {
        const bool branch_taken_0x3af06c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF06Cu;
        // 0x3af070: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af06c) {
            ctx->pc = 0x3AF0B0u;
            goto label_3af0b0;
        }
    }
    ctx->pc = 0x3AF074u;
    // 0x3af074: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3af074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3af078:
    // 0x3af078: 0x8e020144  lw          $v0, 0x144($s0)
    ctx->pc = 0x3af078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
    // 0x3af07c: 0x8c630080  lw          $v1, 0x80($v1)
    ctx->pc = 0x3af07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x3af080: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3af080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3af084: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x3af084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3af088: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3af088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3af08c: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x3af08cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x3af090: 0x8e020144  lw          $v0, 0x144($s0)
    ctx->pc = 0x3af090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
    // 0x3af094: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x3af094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3af098: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x3af098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x3af09c: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x3af09cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3af0a0: 0x9462006a  lhu         $v0, 0x6A($v1)
    ctx->pc = 0x3af0a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 106)));
    // 0x3af0a4: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x3af0a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3af0a8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x3AF0A8u;
    {
        const bool branch_taken_0x3af0a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AF0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF0A8u;
        // 0x3af0ac: 0x248400e0  addiu       $a0, $a0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af0a8) {
            ctx->pc = 0x3AF078u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3af078;
        }
    }
    ctx->pc = 0x3AF0B0u;
label_3af0b0:
    // 0x3af0b0: 0x8e020144  lw          $v0, 0x144($s0)
    ctx->pc = 0x3af0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
    // 0x3af0b4: 0xc0d0b00  jal         func_342C00
    ctx->pc = 0x3AF0B4u;
    SET_GPR_U32(ctx, 31, 0x3AF0BCu);
    ctx->pc = 0x3AF0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF0B4u;
    // 0x3af0b8: 0x2444000c  addiu       $a0, $v0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342C00u, 0x3AF0B4u, 0x3AF0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF0BCu;
label_3af0bc:
    // 0x3af0bc: 0x8e020144  lw          $v0, 0x144($s0)
    ctx->pc = 0x3af0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
    // 0x3af0c0: 0xc0d0af4  jal         func_342BD0
    ctx->pc = 0x3AF0C0u;
    SET_GPR_U32(ctx, 31, 0x3AF0C8u);
    ctx->pc = 0x3AF0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF0C0u;
    // 0x3af0c4: 0x2444000c  addiu       $a0, $v0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342BD0u, 0x3AF0C0u, 0x3AF0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF0C8u;
label_3af0c8:
    // 0x3af0c8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3AF0C8u;
    {
        const bool branch_taken_0x3af0c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3af0c8) {
            ctx->pc = 0x3AF118u;
            goto label_3af118;
        }
    }
    ctx->pc = 0x3AF0D0u;
    // 0x3af0d0: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x3af0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3af0d4: 0x9483006a  lhu         $v1, 0x6A($a0)
    ctx->pc = 0x3af0d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 106)));
    // 0x3af0d8: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x3af0d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3af0dc: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x3AF0DCu;
    {
        const bool branch_taken_0x3af0dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF0DCu;
        // 0x3af0e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af0dc) {
            ctx->pc = 0x3AF110u;
            goto label_3af110;
        }
    }
    ctx->pc = 0x3AF0E4u;
    // 0x3af0e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3af0e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3af0e8:
    // 0x3af0e8: 0x8c830080  lw          $v1, 0x80($a0)
    ctx->pc = 0x3af0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x3af0ec: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3af0ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3af0f0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3af0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3af0f4: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x3af0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
    // 0x3af0f8: 0xac600038  sw          $zero, 0x38($v1)
    ctx->pc = 0x3af0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 0));
    // 0x3af0fc: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x3af0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3af100: 0x9483006a  lhu         $v1, 0x6A($a0)
    ctx->pc = 0x3af100u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 106)));
    // 0x3af104: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x3af104u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3af108: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3AF108u;
    {
        const bool branch_taken_0x3af108 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AF10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF108u;
        // 0x3af10c: 0x24a500e0  addiu       $a1, $a1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af108) {
            ctx->pc = 0x3AF0E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3af0e8;
        }
    }
    ctx->pc = 0x3AF110u;
label_3af110:
    // 0x3af110: 0xa2000119  sb          $zero, 0x119($s0)
    ctx->pc = 0x3af110u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 281), (uint8_t)GPR_U32(ctx, 0));
    // 0x3af114: 0x0  nop
    ctx->pc = 0x3af114u;
    // NOP
label_3af118:
    // 0x3af118: 0x92040118  lbu         $a0, 0x118($s0)
    ctx->pc = 0x3af118u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x3af11c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3af11cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3af120: 0x10850035  beq         $a0, $a1, . + 4 + (0x35 << 2)
    ctx->pc = 0x3AF120u;
    {
        const bool branch_taken_0x3af120 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x3AF124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF120u;
        // 0x3af124: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af120) {
            ctx->pc = 0x3AF1F8u;
            goto label_3af1f8;
        }
    }
    ctx->pc = 0x3AF128u;
    // 0x3af128: 0x10830027  beq         $a0, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x3AF128u;
    {
        const bool branch_taken_0x3af128 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3af128) {
            ctx->pc = 0x3AF1C8u;
            goto label_3af1c8;
        }
    }
    ctx->pc = 0x3AF130u;
    // 0x3af130: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AF130u;
    {
        const bool branch_taken_0x3af130 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3af130) {
            ctx->pc = 0x3AF140u;
            goto label_3af140;
        }
    }
    ctx->pc = 0x3AF138u;
    // 0x3af138: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x3AF138u;
    {
        const bool branch_taken_0x3af138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3af138) {
            ctx->pc = 0x3AF1F8u;
            goto label_3af1f8;
        }
    }
    ctx->pc = 0x3AF140u;
label_3af140:
    // 0x3af140: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x3af140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x3af144: 0x8c241098  lw          $a0, 0x1098($at)
    ctx->pc = 0x3af144u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x811098u));
    // 0x3af148: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x3af148u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x3af14c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3af14cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3af150: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AF150u;
    {
        const bool branch_taken_0x3af150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3af150) {
            ctx->pc = 0x3AF160u;
            goto label_3af160;
        }
    }
    ctx->pc = 0x3AF158u;
    // 0x3af158: 0xa2050118  sb          $a1, 0x118($s0)
    ctx->pc = 0x3af158u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 280), (uint8_t)GPR_U32(ctx, 5));
    // 0x3af15c: 0x0  nop
    ctx->pc = 0x3af15cu;
    // NOP
label_3af160:
    // 0x3af160: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3af160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3af164: 0xa2042ac0  sb          $a0, 0x2AC0($s0)
    ctx->pc = 0x3af164u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10944), (uint8_t)GPR_U32(ctx, 4));
    // 0x3af168: 0x8e0306ac  lw          $v1, 0x6AC($s0)
    ctx->pc = 0x3af168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1708)));
    // 0x3af16c: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x3af16cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x3af170: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3AF170u;
    {
        const bool branch_taken_0x3af170 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3af170) {
            ctx->pc = 0x3AF188u;
            goto label_3af188;
        }
    }
    ctx->pc = 0x3AF178u;
    // 0x3af178: 0x96032ad2  lhu         $v1, 0x2AD2($s0)
    ctx->pc = 0x3af178u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10962)));
    // 0x3af17c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3af17cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3af180: 0xa6032ad2  sh          $v1, 0x2AD2($s0)
    ctx->pc = 0x3af180u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10962), (uint16_t)GPR_U32(ctx, 3));
    // 0x3af184: 0xa2040119  sb          $a0, 0x119($s0)
    ctx->pc = 0x3af184u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 281), (uint8_t)GPR_U32(ctx, 4));
label_3af188:
    // 0x3af188: 0x96042ad2  lhu         $a0, 0x2AD2($s0)
    ctx->pc = 0x3af188u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10962)));
    // 0x3af18c: 0x96032ad0  lhu         $v1, 0x2AD0($s0)
    ctx->pc = 0x3af18cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10960)));
    // 0x3af190: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x3af190u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3af194: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x3AF194u;
    {
        const bool branch_taken_0x3af194 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3af194) {
            ctx->pc = 0x3AF1F8u;
            goto label_3af1f8;
        }
    }
    ctx->pc = 0x3AF19Cu;
    // 0x3af19c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3af19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3af1a0: 0xa2020118  sb          $v0, 0x118($s0)
    ctx->pc = 0x3af1a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 280), (uint8_t)GPR_U32(ctx, 2));
    // 0x3af1a4: 0x8e020144  lw          $v0, 0x144($s0)
    ctx->pc = 0x3af1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
    // 0x3af1a8: 0xc0d0b20  jal         func_342C80
    ctx->pc = 0x3AF1A8u;
    SET_GPR_U32(ctx, 31, 0x3AF1B0u);
    ctx->pc = 0x3AF1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF1A8u;
    // 0x3af1ac: 0x24440018  addiu       $a0, $v0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342C80u, 0x3AF1A8u, 0x3AF1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF1B0u;
label_3af1b0:
    // 0x3af1b0: 0x8e040144  lw          $a0, 0x144($s0)
    ctx->pc = 0x3af1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
    // 0x3af1b4: 0xc0d0ae8  jal         func_342BA0
    ctx->pc = 0x3AF1B4u;
    SET_GPR_U32(ctx, 31, 0x3AF1BCu);
    ctx->pc = 0x3AF1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF1B4u;
    // 0x3af1b8: 0x8c850008  lw          $a1, 0x8($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342BA0u, 0x3AF1B4u, 0x3AF1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF1BCu;
label_3af1bc:
    // 0x3af1bc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3AF1BCu;
    {
        const bool branch_taken_0x3af1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3af1bc) {
            ctx->pc = 0x3AF1F8u;
            goto label_3af1f8;
        }
    }
    ctx->pc = 0x3AF1C4u;
    // 0x3af1c4: 0x0  nop
    ctx->pc = 0x3af1c4u;
    // NOP
label_3af1c8:
    // 0x3af1c8: 0xc0d0b00  jal         func_342C00
    ctx->pc = 0x3AF1C8u;
    SET_GPR_U32(ctx, 31, 0x3AF1D0u);
    ctx->pc = 0x3AF1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF1C8u;
    // 0x3af1cc: 0x8e040144  lw          $a0, 0x144($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342C00u, 0x3AF1C8u, 0x3AF1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF1D0u;
label_3af1d0:
    // 0x3af1d0: 0xc0d0af4  jal         func_342BD0
    ctx->pc = 0x3AF1D0u;
    SET_GPR_U32(ctx, 31, 0x3AF1D8u);
    ctx->pc = 0x3AF1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF1D0u;
    // 0x3af1d4: 0x8e040144  lw          $a0, 0x144($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342BD0u, 0x3AF1D0u, 0x3AF1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF1D8u;
label_3af1d8:
    // 0x3af1d8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3AF1D8u;
    {
        const bool branch_taken_0x3af1d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3af1d8) {
            ctx->pc = 0x3AF1F8u;
            goto label_3af1f8;
        }
    }
    ctx->pc = 0x3AF1E0u;
    // 0x3af1e0: 0x8e020144  lw          $v0, 0x144($s0)
    ctx->pc = 0x3af1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
    // 0x3af1e4: 0xc0d0b20  jal         func_342C80
    ctx->pc = 0x3AF1E4u;
    SET_GPR_U32(ctx, 31, 0x3AF1ECu);
    ctx->pc = 0x3AF1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF1E4u;
    // 0x3af1e8: 0x2444001c  addiu       $a0, $v0, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342C80u, 0x3AF1E4u, 0x3AF1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF1ECu;
label_3af1ec:
    // 0x3af1ec: 0xa6002ad2  sh          $zero, 0x2AD2($s0)
    ctx->pc = 0x3af1ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10962), (uint16_t)GPR_U32(ctx, 0));
    // 0x3af1f0: 0xa2000118  sb          $zero, 0x118($s0)
    ctx->pc = 0x3af1f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 280), (uint8_t)GPR_U32(ctx, 0));
    // 0x3af1f4: 0x0  nop
    ctx->pc = 0x3af1f4u;
    // NOP
label_3af1f8:
    // 0x3af1f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3af1f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3af1fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3af1fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3af200: 0x3e00008  jr          $ra
    ctx->pc = 0x3AF200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AF204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF200u;
        // 0x3af204: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AF200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AF208u;
}
