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

// Function: sub_00360CD0
// Address: 0x360cd0 - 0x360e68
void sub_00360CD0_0x360cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00360CD0_0x360cd0");
#endif

    switch (ctx->pc) {
        case 0x360d0cu: goto label_360d0c;
        case 0x360d48u: goto label_360d48;
        case 0x360e2cu: goto label_360e2c;
        default: break;
    }

    ctx->pc = 0x360cd0u;

    // 0x360cd0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x360cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x360cd4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x360cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x360cd8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x360cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x360cdc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x360cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x360ce0: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x360ce0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360ce4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x360ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x360ce8: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x360ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x360cec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x360cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x360cf0: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x360cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x360cf4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x360cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x360cf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x360cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x360cfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x360cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x360d00: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x360d00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360d04: 0xc05e360  jal         func_178D80
    ctx->pc = 0x360D04u;
    SET_GPR_U32(ctx, 31, 0x360D0Cu);
    ctx->pc = 0x360D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360D04u;
    // 0x360d08: 0x240500a0  addiu       $a1, $zero, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x360D04u, 0x360D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360D0Cu;
label_360d0c:
    // 0x360d0c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x360d0cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360d10: 0x12a0004b  beqz        $s5, . + 4 + (0x4B << 2)
    ctx->pc = 0x360D10u;
    {
        const bool branch_taken_0x360d10 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x360D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360D10u;
        // 0x360d14: 0x10963c  dsll32      $s2, $s0, 24 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) << (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360d10) {
            ctx->pc = 0x360E40u;
            goto label_360e40;
        }
    }
    ctx->pc = 0x360D18u;
    // 0x360d18: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x360d18u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360d1c: 0x12963f  dsra32      $s2, $s2, 24
    ctx->pc = 0x360d1cu;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 24));
    // 0x360d20: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x360d20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360d24: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x360d24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x360d28: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x360d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x360d2c: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x360d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x360d30: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x360d30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x360d34: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x360d34u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x360d38: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x360d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x360d3c: 0x28140  sll         $s0, $v0, 5
    ctx->pc = 0x360d3cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x360d40: 0x38900  sll         $s1, $v1, 4
    ctx->pc = 0x360d40u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x360d44: 0x0  nop
    ctx->pc = 0x360d44u;
    // NOP
label_360d48:
    // 0x360d48: 0x92c70008  lbu         $a3, 0x8($s6)
    ctx->pc = 0x360d48u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x360d4c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x360d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x360d50: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x360d50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x360d54: 0x542023  subu        $a0, $v0, $s4
    ctx->pc = 0x360d54u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x360d58: 0x3c0b7f40  lui         $t3, 0x7F40
    ctx->pc = 0x360d58u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)32576 << 16));
    // 0x360d5c: 0x3c023020  lui         $v0, 0x3020
    ctx->pc = 0x360d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12320 << 16));
    // 0x360d60: 0x430c0  sll         $a2, $a0, 3
    ctx->pc = 0x360d60u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x360d64: 0x34450043  ori         $a1, $v0, 0x43
    ctx->pc = 0x360d64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)67);
    // 0x360d68: 0x240a7fff  addiu       $t2, $zero, 0x7FFF
    ctx->pc = 0x360d68u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x360d6c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x360d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x360d70: 0x3c0980c0  lui         $t1, 0x80C0
    ctx->pc = 0x360d70u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32960 << 16));
    // 0x360d74: 0x30e7003f  andi        $a3, $a3, 0x3F
    ctx->pc = 0x360d74u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)63);
    // 0x360d78: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x360d78u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x360d7c: 0x73843  sra         $a3, $a3, 1
    ctx->pc = 0x360d7cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 1));
    // 0x360d80: 0x532023  subu        $a0, $v0, $s3
    ctx->pc = 0x360d80u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x360d84: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x360d84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x360d88: 0xaea50004  sw          $a1, 0x4($s5)
    ctx->pc = 0x360d88u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 5));
    // 0x360d8c: 0x30c5001f  andi        $a1, $a2, 0x1F
    ctx->pc = 0x360d8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)31);
    // 0x360d90: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x360d90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x360d94: 0x2454018  mult        $t0, $s2, $a1
    ctx->pc = 0x360d94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x360d98: 0x348400c0  ori         $a0, $a0, 0xC0
    ctx->pc = 0x360d98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)192);
    // 0x360d9c: 0xaea40008  sw          $a0, 0x8($s5)
    ctx->pc = 0x360d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 4));
    // 0x360da0: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x360da0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x360da4: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x360da4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x360da8: 0x34872000  ori         $a3, $a0, 0x2000
    ctx->pc = 0x360da8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8192);
    // 0x360dac: 0x8443c  dsll32      $t0, $t0, 16
    ctx->pc = 0x360dacu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 16));
    // 0x360db0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x360db0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x360db4: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x360db4u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x360db8: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x360db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x360dbc: 0x25080100  addiu       $t0, $t0, 0x100
    ctx->pc = 0x360dbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 256));
    // 0x360dc0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x360dc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360dc4: 0x1116021  addu        $t4, $t0, $s1
    ctx->pc = 0x360dc4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 17)));
    // 0x360dc8: 0x1104021  addu        $t0, $t0, $s0
    ctx->pc = 0x360dc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
    // 0x360dcc: 0xc643c  dsll32      $t4, $t4, 16
    ctx->pc = 0x360dccu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 16));
    // 0x360dd0: 0xc643f  dsra32      $t4, $t4, 16
    ctx->pc = 0x360dd0u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 16));
    // 0x360dd4: 0x8443c  dsll32      $t0, $t0, 16
    ctx->pc = 0x360dd4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 16));
    // 0x360dd8: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x360dd8u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x360ddc: 0x258c0700  addiu       $t4, $t4, 0x700
    ctx->pc = 0x360ddcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1792));
    // 0x360de0: 0x25080700  addiu       $t0, $t0, 0x700
    ctx->pc = 0x360de0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1792));
    // 0x360de4: 0xc6100  sll         $t4, $t4, 4
    ctx->pc = 0x360de4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
    // 0x360de8: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x360de8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x360dec: 0x318cffff  andi        $t4, $t4, 0xFFFF
    ctx->pc = 0x360decu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
    // 0x360df0: 0x3108ffff  andi        $t0, $t0, 0xFFFF
    ctx->pc = 0x360df0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x360df4: 0x18b5825  or          $t3, $t4, $t3
    ctx->pc = 0x360df4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) | GPR_U64(ctx, 11));
    // 0x360df8: 0x1031825  or          $v1, $t0, $v1
    ctx->pc = 0x360df8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x360dfc: 0xaeab0010  sw          $t3, 0x10($s5)
    ctx->pc = 0x360dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 11));
    // 0x360e00: 0x1894025  or          $t0, $t4, $t1
    ctx->pc = 0x360e00u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 12) | GPR_U64(ctx, 9));
    // 0x360e04: 0xaeaa0014  sw          $t2, 0x14($s5)
    ctx->pc = 0x360e04u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 10));
    // 0x360e08: 0xaea80018  sw          $t0, 0x18($s5)
    ctx->pc = 0x360e08u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 8));
    // 0x360e0c: 0xaeaa001c  sw          $t2, 0x1C($s5)
    ctx->pc = 0x360e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 10));
    // 0x360e10: 0xaea30020  sw          $v1, 0x20($s5)
    ctx->pc = 0x360e10u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 3));
    // 0x360e14: 0xaeaa0024  sw          $t2, 0x24($s5)
    ctx->pc = 0x360e14u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 10));
    // 0x360e18: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x360e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x360e1c: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x360e1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x360e20: 0xaea30004  sw          $v1, 0x4($s5)
    ctx->pc = 0x360e20u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 3));
    // 0x360e24: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x360E24u;
    SET_GPR_U32(ctx, 31, 0x360E2Cu);
    ctx->pc = 0x360E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360E24u;
    // 0x360e28: 0xa2a2000f  sb          $v0, 0xF($s5) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 21), 15), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x360E24u, 0x360E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360E2Cu;
label_360e2c:
    // 0x360e2c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x360e2cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x360e30: 0x26b50028  addiu       $s5, $s5, 0x28
    ctx->pc = 0x360e30u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 40));
    // 0x360e34: 0x2a830004  slti        $v1, $s4, 0x4
    ctx->pc = 0x360e34u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x360e38: 0x1460ffc3  bnez        $v1, . + 4 + (-0x3D << 2)
    ctx->pc = 0x360E38u;
    {
        const bool branch_taken_0x360e38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x360E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360E38u;
        // 0x360e3c: 0x26730020  addiu       $s3, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360e38) {
            ctx->pc = 0x360D48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_360d48;
        }
    }
    ctx->pc = 0x360E40u;
label_360e40:
    // 0x360e40: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x360e40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x360e44: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x360e44u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x360e48: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x360e48u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x360e4c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x360e4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x360e50: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x360e50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x360e54: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x360e54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x360e58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x360e58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x360e5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x360e5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x360e60: 0x3e00008  jr          $ra
    ctx->pc = 0x360E60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x360E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360E60u;
        // 0x360e64: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x360E60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x360E68u;
}
