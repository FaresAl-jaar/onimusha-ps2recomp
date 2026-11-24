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

// Function: sub_002F4E40
// Address: 0x2f4e40 - 0x2f4f90
void sub_002F4E40_0x2f4e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F4E40_0x2f4e40");
#endif

    switch (ctx->pc) {
        case 0x2f4f1cu: goto label_2f4f1c;
        case 0x2f4f50u: goto label_2f4f50;
        case 0x2f4f58u: goto label_2f4f58;
        case 0x2f4f6cu: goto label_2f4f6c;
        default: break;
    }

    ctx->pc = 0x2f4e40u;

    // 0x2f4e40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2f4e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2f4e44: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x2f4e44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2f4e48: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2f4e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2f4e4c: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x2f4e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x2f4e50: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2f4e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2f4e54: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2f4e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2f4e58: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2f4e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2f4e5c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2f4e5cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4e60: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2f4e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2f4e64: 0x24639100  addiu       $v1, $v1, -0x6F00
    ctx->pc = 0x2f4e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938880));
    // 0x2f4e68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f4e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f4e6c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2f4e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2f4e70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f4e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f4e74: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2f4e74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4e78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f4e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f4e7c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2f4e7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4e80: 0x90840001  lbu         $a0, 0x1($a0)
    ctx->pc = 0x2f4e80u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x2f4e84: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x2f4e84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f4e88: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x2f4e88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2f4e8c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2f4e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2f4e90: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2f4e90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2f4e94: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x2f4e94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f4e98: 0x92220005  lbu         $v0, 0x5($s1)
    ctx->pc = 0x2f4e98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
    // 0x2f4e9c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2F4E9Cu;
    {
        const bool branch_taken_0x2f4e9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4E9Cu;
        // 0x2f4ea0: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4e9c) {
            ctx->pc = 0x2F4EE0u;
            goto label_2f4ee0;
        }
    }
    ctx->pc = 0x2F4EA4u;
    // 0x2f4ea4: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2f4ea4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f4ea8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2f4ea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2f4eac: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2f4eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2f4eb0: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x2f4eb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x2f4eb4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f4eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f4eb8: 0x832016  dsrlv       $a0, $v1, $a0
    ctx->pc = 0x2f4eb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) >> (GPR_U32(ctx, 4) & 0x3F));
    // 0x2f4ebc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f4ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2f4ec0: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x2f4ec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f4ec4: 0x8c22cebc  lw          $v0, -0x3144($at)
    ctx->pc = 0x2f4ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
    // 0x2f4ec8: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x2f4ec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x2f4ecc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2f4eccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2f4ed0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2f4ed0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2f4ed4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f4ed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2f4ed8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2f4ed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2f4edc: 0xac22cebc  sw          $v0, -0x3144($at)
    ctx->pc = 0x2f4edcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
label_2f4ee0:
    // 0x2f4ee0: 0x92220006  lbu         $v0, 0x6($s1)
    ctx->pc = 0x2f4ee0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x2f4ee4: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x2f4ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2f4ee8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2F4EE8u;
    {
        const bool branch_taken_0x2f4ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4ee8) {
            ctx->pc = 0x2F4F20u;
            goto label_2f4f20;
        }
    }
    ctx->pc = 0x2F4EF0u;
    // 0x2f4ef0: 0x92020006  lbu         $v0, 0x6($s0)
    ctx->pc = 0x2f4ef0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x2f4ef4: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x2f4ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x2f4ef8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F4EF8u;
    {
        const bool branch_taken_0x2f4ef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4EF8u;
        // 0x2f4efc: 0x3c040083  lui         $a0, 0x83 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4ef8) {
            ctx->pc = 0x2F4F20u;
            goto label_2f4f20;
        }
    }
    ctx->pc = 0x2F4F00u;
    // 0x2f4f00: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2f4f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2f4f04: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x2f4f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x2f4f08: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f4f08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4f0c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f4f0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4f10: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2f4f10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4f14: 0xc063c70  jal         func_18F1C0
    ctx->pc = 0x2F4F14u;
    SET_GPR_U32(ctx, 31, 0x2F4F1Cu);
    ctx->pc = 0x2F4F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4F14u;
    // 0x2f4f18: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F1C0u, 0x2F4F14u, 0x2F4F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4F1Cu;
label_2f4f1c:
    // 0x2f4f1c: 0x0  nop
    ctx->pc = 0x2f4f1cu;
    // NOP
label_2f4f20:
    // 0x2f4f20: 0x92220008  lbu         $v0, 0x8($s1)
    ctx->pc = 0x2f4f20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2f4f24: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2F4F24u;
    {
        const bool branch_taken_0x2f4f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4f24) {
            ctx->pc = 0x2F4F58u;
            goto label_2f4f58;
        }
    }
    ctx->pc = 0x2F4F2Cu;
    // 0x2f4f2c: 0x92020008  lbu         $v0, 0x8($s0)
    ctx->pc = 0x2f4f2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2f4f30: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F4F30u;
    {
        const bool branch_taken_0x2f4f30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4F30u;
        // 0x2f4f34: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4f30) {
            ctx->pc = 0x2F4F58u;
            goto label_2f4f58;
        }
    }
    ctx->pc = 0x2F4F38u;
    // 0x2f4f38: 0x8c22cebc  lw          $v0, -0x3144($at)
    ctx->pc = 0x2f4f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
    // 0x2f4f3c: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x2f4f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x2f4f40: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F4F40u;
    {
        const bool branch_taken_0x2f4f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4f40) {
            ctx->pc = 0x2F4F50u;
            goto label_2f4f50;
        }
    }
    ctx->pc = 0x2F4F48u;
    // 0x2f4f48: 0xc0d2818  jal         func_34A060
    ctx->pc = 0x2F4F48u;
    SET_GPR_U32(ctx, 31, 0x2F4F50u);
    ctx->pc = 0x34A060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34A060u, 0x2F4F48u, 0x2F4F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4F50u;
label_2f4f50:
    // 0x2f4f50: 0xc0d2800  jal         func_34A000
    ctx->pc = 0x2F4F50u;
    SET_GPR_U32(ctx, 31, 0x2F4F58u);
    ctx->pc = 0x34A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34A000u, 0x2F4F50u, 0x2F4F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4F58u;
label_2f4f58:
    // 0x2f4f58: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2f4f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4f5c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2f4f5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4f60: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2f4f60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4f64: 0xc0bd3e4  jal         func_2F4F90
    ctx->pc = 0x2F4F64u;
    SET_GPR_U32(ctx, 31, 0x2F4F6Cu);
    ctx->pc = 0x2F4F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4F64u;
    // 0x2f4f68: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4F90u, 0x2F4F64u, 0x2F4F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4F6Cu;
label_2f4f6c:
    // 0x2f4f6c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2f4f6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f4f70: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2f4f70u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f4f74: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2f4f74u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f4f78: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f4f78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f4f7c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f4f7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f4f80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f4f80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f4f84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f4f84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f4f88: 0x3e00008  jr          $ra
    ctx->pc = 0x2F4F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F4F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4F88u;
        // 0x2f4f8c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4F88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F4F90u;
}
