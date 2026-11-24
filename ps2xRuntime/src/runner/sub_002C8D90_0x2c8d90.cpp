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

// Function: sub_002C8D90
// Address: 0x2c8d90 - 0x2c9794
void sub_002C8D90_0x2c8d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C8D90_0x2c8d90");
#endif

    switch (ctx->pc) {
        case 0x2c8e48u: goto label_2c8e48;
        case 0x2c8e8cu: goto label_2c8e8c;
        case 0x2c8ef0u: goto label_2c8ef0;
        case 0x2c8f04u: goto label_2c8f04;
        case 0x2c8f10u: goto label_2c8f10;
        case 0x2c8f4cu: goto label_2c8f4c;
        case 0x2c9214u: goto label_2c9214;
        case 0x2c9270u: goto label_2c9270;
        case 0x2c96ecu: goto label_2c96ec;
        case 0x2c971cu: goto label_2c971c;
        default: break;
    }

    ctx->pc = 0x2c8d90u;

    // 0x2c8d90: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2c8d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x2c8d94: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x2c8d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x2c8d98: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2c8d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2c8d9c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2c8d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2c8da0: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x2c8da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x2c8da4: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c8da4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c8da8: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2c8da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x2c8dac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2c8dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2c8db0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2c8db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x2c8db4: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2c8db4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8db8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2c8db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2c8dbc: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2c8dbcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8dc0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2c8dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2c8dc4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2c8dc4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8dc8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2c8dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2c8dcc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2c8dccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8dd0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2c8dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2c8dd4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2c8dd4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8dd8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2c8dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2c8ddc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2c8ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2c8de0: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x2c8de0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2c8de4: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x2c8de4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2c8de8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2c8de8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2c8dec: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2c8decu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2c8df0: 0xac236478  sw          $v1, 0x6478($at)
    ctx->pc = 0x2c8df0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8D6478u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6478u, _value); } while (0);
    // 0x2c8df4: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c8df4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c8df8: 0xafa700cc  sw          $a3, 0xCC($sp)
    ctx->pc = 0x2c8df8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 7));
    // 0x2c8dfc: 0xac236468  sw          $v1, 0x6468($at)
    ctx->pc = 0x2c8dfcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8D6468u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6468u, _value); } while (0);
    // 0x2c8e00: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c8e00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c8e04: 0xa7a000b0  sh          $zero, 0xB0($sp)
    ctx->pc = 0x2c8e04u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 176), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c8e08: 0xac236458  sw          $v1, 0x6458($at)
    ctx->pc = 0x2c8e08u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8D6458u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6458u, _value); } while (0);
    // 0x2c8e0c: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c8e0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c8e10: 0xac236448  sw          $v1, 0x6448($at)
    ctx->pc = 0x2c8e10u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8D6448u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6448u, _value); } while (0);
    // 0x2c8e14: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c8e14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c8e18: 0xac226474  sw          $v0, 0x6474($at)
    ctx->pc = 0x2c8e18u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8D6474u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6474u, _value); } while (0);
    // 0x2c8e1c: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c8e1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c8e20: 0xac226464  sw          $v0, 0x6464($at)
    ctx->pc = 0x2c8e20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8D6464u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6464u, _value); } while (0);
    // 0x2c8e24: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c8e24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c8e28: 0xac226454  sw          $v0, 0x6454($at)
    ctx->pc = 0x2c8e28u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8D6454u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6454u, _value); } while (0);
    // 0x2c8e2c: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c8e2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c8e30: 0xac226444  sw          $v0, 0x6444($at)
    ctx->pc = 0x2c8e30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8D6444u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6444u, _value); } while (0);
    // 0x2c8e34: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2c8e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2c8e38: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x2c8e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x2c8e3c: 0xc4750008  lwc1        $f21, 0x8($v1)
    ctx->pc = 0x2c8e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2c8e40: 0x1040021d  beqz        $v0, . + 4 + (0x21D << 2)
    ctx->pc = 0x2C8E40u;
    {
        const bool branch_taken_0x2c8e40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8E40u;
        // 0x2c8e44: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8e40) {
            ctx->pc = 0x2C96B8u;
            goto label_2c96b8;
        }
    }
    ctx->pc = 0x2C8E48u;
label_2c8e48:
    // 0x2c8e48: 0x12530217  beq         $s2, $s3, . + 4 + (0x217 << 2)
    ctx->pc = 0x2C8E48u;
    {
        const bool branch_taken_0x2c8e48 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 19));
        if (branch_taken_0x2c8e48) {
            ctx->pc = 0x2C96A8u;
            goto label_2c96a8;
        }
    }
    ctx->pc = 0x2C8E50u;
    // 0x2c8e50: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x2c8e50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2c8e54: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x2c8e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x2c8e58: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x2c8e58u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2c8e5c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C8E5Cu;
    {
        const bool branch_taken_0x2c8e5c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8E5Cu;
        // 0x2c8e60: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8e5c) {
            ctx->pc = 0x2C8E68u;
            goto label_2c8e68;
        }
    }
    ctx->pc = 0x2C8E64u;
    // 0x2c8e64: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2c8e64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c8e68:
    // 0x2c8e68: 0x1060020f  beqz        $v1, . + 4 + (0x20F << 2)
    ctx->pc = 0x2C8E68u;
    {
        const bool branch_taken_0x2c8e68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8e68) {
            ctx->pc = 0x2C96A8u;
            goto label_2c96a8;
        }
    }
    ctx->pc = 0x2C8E70u;
    // 0x2c8e70: 0x8e6229c0  lw          $v0, 0x29C0($s3)
    ctx->pc = 0x2c8e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10688)));
    // 0x2c8e74: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2c8e74u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c8e78: 0x1040020b  beqz        $v0, . + 4 + (0x20B << 2)
    ctx->pc = 0x2C8E78u;
    {
        const bool branch_taken_0x2c8e78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8e78) {
            ctx->pc = 0x2C96A8u;
            goto label_2c96a8;
        }
    }
    ctx->pc = 0x2C8E80u;
    // 0x2c8e80: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c8e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8e84: 0xc0b2214  jal         func_2C8850
    ctx->pc = 0x2C8E84u;
    SET_GPR_U32(ctx, 31, 0x2C8E8Cu);
    ctx->pc = 0x2C8E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8E84u;
    // 0x2c8e88: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8850u, 0x2C8E84u, 0x2C8E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8E8Cu;
label_2c8e8c:
    // 0x2c8e8c: 0x10400206  beqz        $v0, . + 4 + (0x206 << 2)
    ctx->pc = 0x2C8E8Cu;
    {
        const bool branch_taken_0x2c8e8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8e8c) {
            ctx->pc = 0x2C96A8u;
            goto label_2c96a8;
        }
    }
    ctx->pc = 0x2C8E94u;
    // 0x2c8e94: 0x26c20001  addiu       $v0, $s6, 0x1
    ctx->pc = 0x2c8e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x2c8e98: 0x8e83008c  lw          $v1, 0x8C($s4)
    ctx->pc = 0x2c8e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 140)));
    // 0x2c8e9c: 0x3056ffff  andi        $s6, $v0, 0xFFFF
    ctx->pc = 0x2c8e9cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2c8ea0: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2c8ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2c8ea4: 0x10620200  beq         $v1, $v0, . + 4 + (0x200 << 2)
    ctx->pc = 0x2C8EA4u;
    {
        const bool branch_taken_0x2c8ea4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c8ea4) {
            ctx->pc = 0x2C96A8u;
            goto label_2c96a8;
        }
    }
    ctx->pc = 0x2C8EACu;
    // 0x2c8eac: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x2c8eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2c8eb0: 0x90430023  lbu         $v1, 0x23($v0)
    ctx->pc = 0x2c8eb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 35)));
    // 0x2c8eb4: 0x90440022  lbu         $a0, 0x22($v0)
    ctx->pc = 0x2c8eb4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 34)));
    // 0x2c8eb8: 0x831025  or          $v0, $a0, $v1
    ctx->pc = 0x2c8eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2c8ebc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C8EBCu;
    {
        const bool branch_taken_0x2c8ebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8ebc) {
            ctx->pc = 0x2C8EE0u;
            goto label_2c8ee0;
        }
    }
    ctx->pc = 0x2C8EC4u;
    // 0x2c8ec4: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x2c8ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2c8ec8: 0x926305b3  lbu         $v1, 0x5B3($s3)
    ctx->pc = 0x2c8ec8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1459)));
    // 0x2c8ecc: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2c8eccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c8ed0: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2c8ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c8ed4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x2c8ed4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2c8ed8: 0x142001f3  bnez        $at, . + 4 + (0x1F3 << 2)
    ctx->pc = 0x2C8ED8u;
    {
        const bool branch_taken_0x2c8ed8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c8ed8) {
            ctx->pc = 0x2C96A8u;
            goto label_2c96a8;
        }
    }
    ctx->pc = 0x2C8EE0u;
label_2c8ee0:
    // 0x2c8ee0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2c8ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2c8ee4: 0x26650020  addiu       $a1, $s3, 0x20
    ctx->pc = 0x2c8ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x2c8ee8: 0xc0414d0  jal         func_105340
    ctx->pc = 0x2C8EE8u;
    SET_GPR_U32(ctx, 31, 0x2C8EF0u);
    ctx->pc = 0x2C8EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8EE8u;
    // 0x2c8eec: 0x26460020  addiu       $a2, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x2C8EE8u, 0x2C8EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8EF0u;
label_2c8ef0:
    // 0x2c8ef0: 0x27a200e8  addiu       $v0, $sp, 0xE8
    ctx->pc = 0x2c8ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x2c8ef4: 0xc4570000  lwc1        $f23, 0x0($v0)
    ctx->pc = 0x2c8ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2c8ef8: 0xc7b600e0  lwc1        $f22, 0xE0($sp)
    ctx->pc = 0x2c8ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2c8efc: 0xc0aeb24  jal         func_2BAC90
    ctx->pc = 0x2C8EFCu;
    SET_GPR_U32(ctx, 31, 0x2C8F04u);
    ctx->pc = 0x2C8F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8EFCu;
    // 0x2c8f00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAC90u, 0x2C8EFCu, 0x2C8F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8F04u;
label_2c8f04:
    // 0x2c8f04: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2c8f04u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2c8f08: 0xc0aeb24  jal         func_2BAC90
    ctx->pc = 0x2C8F08u;
    SET_GPR_U32(ctx, 31, 0x2C8F10u);
    ctx->pc = 0x2C8F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8F08u;
    // 0x2c8f0c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAC90u, 0x2C8F08u, 0x2C8F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8F10u;
label_2c8f10:
    // 0x2c8f10: 0x4600a040  add.s       $f1, $f20, $f0
    ctx->pc = 0x2c8f10u;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2c8f14: 0x4616b01a  mula.s      $f22, $f22
    ctx->pc = 0x2c8f14u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[22], ctx->f[22]));
    // 0x2c8f18: 0x4617b81c  madd.s      $f0, $f23, $f23
    ctx->pc = 0x2c8f18u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[23], ctx->f[23]));
    // 0x2c8f1c: 0x46000004  c1          0x4
    ctx->pc = 0x2c8f1cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x2c8f20: 0x46010501  sub.s       $f20, $f0, $f1
    ctx->pc = 0x2c8f20u;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2c8f24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c8f24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c8f28: 0x0  nop
    ctx->pc = 0x2c8f28u;
    // NOP
    // 0x2c8f2c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2c8f2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c8f30: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2C8F30u;
    {
        const bool branch_taken_0x2c8f30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c8f30) {
            ctx->pc = 0x2C8F3Cu;
            goto label_2c8f3c;
        }
    }
    ctx->pc = 0x2C8F38u;
    // 0x2c8f38: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2c8f38u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2c8f3c:
    // 0x2c8f3c: 0x27a200e8  addiu       $v0, $sp, 0xE8
    ctx->pc = 0x2c8f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x2c8f40: 0xc44d0000  lwc1        $f13, 0x0($v0)
    ctx->pc = 0x2c8f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2c8f44: 0xc047b88  jal         func_11EE20
    ctx->pc = 0x2C8F44u;
    SET_GPR_U32(ctx, 31, 0x2C8F4Cu);
    ctx->pc = 0x2C8F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8F44u;
    // 0x2c8f48: 0xc7ac00e0  lwc1        $f12, 0xE0($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE20u, 0x2C8F44u, 0x2C8F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8F4Cu;
label_2c8f4c:
    // 0x2c8f4c: 0x27a200e4  addiu       $v0, $sp, 0xE4
    ctx->pc = 0x2c8f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x2c8f50: 0x3c034422  lui         $v1, 0x4422
    ctx->pc = 0x2c8f50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17442 << 16));
    // 0x2c8f54: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x2c8f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c8f58: 0x8e900004  lw          $s0, 0x4($s4)
    ctx->pc = 0x2c8f58u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2c8f5c: 0x3462f983  ori         $v0, $v1, 0xF983
    ctx->pc = 0x2c8f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63875);
    // 0x2c8f60: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c8f60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c8f64: 0x0  nop
    ctx->pc = 0x2c8f64u;
    // NOP
    // 0x2c8f68: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c8f68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c8f6c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c8f6cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2c8f70: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x2c8f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8f74: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2c8f74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2c8f78: 0x0  nop
    ctx->pc = 0x2c8f78u;
    // NOP
    // 0x2c8f7c: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x2c8f7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2c8f80: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x2c8f80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c8f84: 0x450001c8  bc1f        . + 4 + (0x1C8 << 2)
    ctx->pc = 0x2C8F84u;
    {
        const bool branch_taken_0x2c8f84 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C8F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8F84u;
        // 0x2c8f88: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8f84) {
            ctx->pc = 0x2C96A8u;
            goto label_2c96a8;
        }
    }
    ctx->pc = 0x2C8F8Cu;
    // 0x2c8f8c: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x2c8f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8f90: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x2c8f90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c8f94: 0x450101c4  bc1t        . + 4 + (0x1C4 << 2)
    ctx->pc = 0x2C8F94u;
    {
        const bool branch_taken_0x2c8f94 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c8f94) {
            ctx->pc = 0x2C96A8u;
            goto label_2c96a8;
        }
    }
    ctx->pc = 0x2C8F9Cu;
    // 0x2c8f9c: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x2c8f9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c8fa0: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x2C8FA0u;
    {
        const bool branch_taken_0x2c8fa0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c8fa0) {
            ctx->pc = 0x2C8FE0u;
            goto label_2c8fe0;
        }
    }
    ctx->pc = 0x2C8FA8u;
    // 0x2c8fa8: 0x97a200b0  lhu         $v0, 0xB0($sp)
    ctx->pc = 0x2c8fa8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2c8fac: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x2c8facu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x2c8fb0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2c8fb0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2c8fb4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2c8fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2c8fb8: 0xa7a200b0  sh          $v0, 0xB0($sp)
    ctx->pc = 0x2c8fb8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 176), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c8fbc: 0x24620080  addiu       $v0, $v1, 0x80
    ctx->pc = 0x2c8fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x2c8fc0: 0x30430f00  andi        $v1, $v0, 0xF00
    ctx->pc = 0x2c8fc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3840);
    // 0x2c8fc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c8fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c8fc8: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x2c8fc8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x2c8fcc: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x2c8fccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x2c8fd0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2c8fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2c8fd4: 0x3c21025  or          $v0, $fp, $v0
    ctx->pc = 0x2c8fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) | GPR_U64(ctx, 2));
    // 0x2c8fd8: 0x305effff  andi        $fp, $v0, 0xFFFF
    ctx->pc = 0x2c8fd8u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2c8fdc: 0x0  nop
    ctx->pc = 0x2c8fdcu;
    // NOP
label_2c8fe0:
    // 0x2c8fe0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c8fe0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c8fe4: 0x0  nop
    ctx->pc = 0x2c8fe4u;
    // NOP
    // 0x2c8fe8: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x2c8fe8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c8fec: 0x450001ae  bc1f        . + 4 + (0x1AE << 2)
    ctx->pc = 0x2C8FECu;
    {
        const bool branch_taken_0x2c8fec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c8fec) {
            ctx->pc = 0x2C96A8u;
            goto label_2c96a8;
        }
    }
    ctx->pc = 0x2C8FF4u;
    // 0x2c8ff4: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x2c8ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8ff8: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x2c8ff8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c8ffc: 0x450101aa  bc1t        . + 4 + (0x1AA << 2)
    ctx->pc = 0x2C8FFCu;
    {
        const bool branch_taken_0x2c8ffc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c8ffc) {
            ctx->pc = 0x2C96A8u;
            goto label_2c96a8;
        }
    }
    ctx->pc = 0x2C9004u;
    // 0x2c9004: 0x864300c2  lh          $v1, 0xC2($s2)
    ctx->pc = 0x2c9004u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 194)));
    // 0x2c9008: 0x4143c  dsll32      $v0, $a0, 16
    ctx->pc = 0x2c9008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 16));
    // 0x2c900c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c900cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c9010: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2c9010u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c9014: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C9014u;
    {
        const bool branch_taken_0x2c9014 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x2C9018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9014u;
        // 0x2c9018: 0x86040020  lh          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9014) {
            ctx->pc = 0x2C9020u;
            goto label_2c9020;
        }
    }
    ctx->pc = 0x2C901Cu;
    // 0x2c901c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x2c901cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_2c9020:
    // 0x2c9020: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x2c9020u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x2c9024: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2c9024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2c9028: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2c9028u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2c902c: 0x18800006  blez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C902Cu;
    {
        const bool branch_taken_0x2c902c = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x2C9030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C902Cu;
        // 0x2c9030: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c902c) {
            ctx->pc = 0x2C9048u;
            goto label_2c9048;
        }
    }
    ctx->pc = 0x2C9034u;
    // 0x2c9034: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2c9034u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2c9038: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2c9038u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2c903c: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x2c903cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2c9040: 0x14200199  bnez        $at, . + 4 + (0x199 << 2)
    ctx->pc = 0x2C9040u;
    {
        const bool branch_taken_0x2c9040 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c9040) {
            ctx->pc = 0x2C96A8u;
            goto label_2c96a8;
        }
    }
    ctx->pc = 0x2C9048u;
label_2c9048:
    // 0x2c9048: 0x96030026  lhu         $v1, 0x26($s0)
    ctx->pc = 0x2c9048u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 38)));
    // 0x2c904c: 0x96050024  lhu         $a1, 0x24($s0)
    ctx->pc = 0x2c904cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2c9050: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C9050u;
    {
        const bool branch_taken_0x2c9050 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x2C9054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9050u;
        // 0x2c9054: 0x4600a106  mov.s       $f4, $f20 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9050) {
            ctx->pc = 0x2C9064u;
            goto label_2c9064;
        }
    }
    ctx->pc = 0x2C9058u;
    // 0x2c9058: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c9058u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c905c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C905Cu;
    {
        const bool branch_taken_0x2c905c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C905Cu;
        // 0x2c9060: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c905c) {
            ctx->pc = 0x2C9080u;
            goto label_2c9080;
        }
    }
    ctx->pc = 0x2C9064u;
label_2c9064:
    // 0x2c9064: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x2c9064u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x2c9068: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2c9068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2c906c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2c906cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2c9070: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2c9070u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9074: 0x0  nop
    ctx->pc = 0x2c9074u;
    // NOP
    // 0x2c9078: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x2c9078u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2c907c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2c907cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2c9080:
    // 0x2c9080: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c9080u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9084: 0x0  nop
    ctx->pc = 0x2c9084u;
    // NOP
    // 0x2c9088: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2c9088u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c908c: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x2C908Cu;
    {
        const bool branch_taken_0x2c908c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c908c) {
            ctx->pc = 0x2C90D0u;
            goto label_2c90d0;
        }
    }
    ctx->pc = 0x2C9094u;
    // 0x2c9094: 0x46001047  neg.s       $f1, $f2
    ctx->pc = 0x2c9094u;
    ctx->f[1] = FPU_NEG_S(ctx->f[2]);
    // 0x2c9098: 0x4601a036  c.le.s      $f20, $f1
    ctx->pc = 0x2c9098u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c909c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2C909Cu;
    {
        const bool branch_taken_0x2c909c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c909c) {
            ctx->pc = 0x2C90A8u;
            goto label_2c90a8;
        }
    }
    ctx->pc = 0x2C90A4u;
    // 0x2c90a4: 0x46000906  mov.s       $f4, $f1
    ctx->pc = 0x2c90a4u;
    ctx->f[4] = FPU_MOV_S(ctx->f[1]);
label_2c90a8:
    // 0x2c90a8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2c90a8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c90ac: 0x0  nop
    ctx->pc = 0x2c90acu;
    // NOP
    // 0x2c90b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c90b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c90b4: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x2c90b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2c90b8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2c90b8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2c90bc: 0x0  nop
    ctx->pc = 0x2c90bcu;
    // NOP
    // 0x2c90c0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c90c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2c90c4: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x2c90c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x2c90c8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2C90C8u;
    {
        const bool branch_taken_0x2c90c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c90c8) {
            ctx->pc = 0x2C9100u;
            goto label_2c9100;
        }
    }
    ctx->pc = 0x2C90D0u;
label_2c90d0:
    // 0x2c90d0: 0x4602a036  c.le.s      $f20, $f2
    ctx->pc = 0x2c90d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c90d4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2C90D4u;
    {
        const bool branch_taken_0x2c90d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c90d4) {
            ctx->pc = 0x2C90E0u;
            goto label_2c90e0;
        }
    }
    ctx->pc = 0x2C90DCu;
    // 0x2c90dc: 0x46001106  mov.s       $f4, $f2
    ctx->pc = 0x2c90dcu;
    ctx->f[4] = FPU_MOV_S(ctx->f[2]);
label_2c90e0:
    // 0x2c90e0: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2c90e0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c90e4: 0x46041001  sub.s       $f0, $f2, $f4
    ctx->pc = 0x2c90e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x2c90e8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2c90e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2c90ec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c90ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c90f0: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2c90f0u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x2c90f4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c90f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2c90f8: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x2c90f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x2c90fc: 0x0  nop
    ctx->pc = 0x2c90fcu;
    // NOP
label_2c9100:
    // 0x2c9100: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c9100u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9104: 0x0  nop
    ctx->pc = 0x2c9104u;
    // NOP
    // 0x2c9108: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x2c9108u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c910c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x2C910Cu;
    {
        const bool branch_taken_0x2c910c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c910c) {
            ctx->pc = 0x2C9130u;
            goto label_2c9130;
        }
    }
    ctx->pc = 0x2C9114u;
    // 0x2c9114: 0x9603002e  lhu         $v1, 0x2E($s0)
    ctx->pc = 0x2c9114u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 46)));
    // 0x2c9118: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x2c9118u;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
    // 0x2c911c: 0x9606002c  lhu         $a2, 0x2C($s0)
    ctx->pc = 0x2c911cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2c9120: 0x31823  negu        $v1, $v1
    ctx->pc = 0x2c9120u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x2c9124: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c9124u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9128: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2C9128u;
    {
        const bool branch_taken_0x2c9128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C912Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9128u;
        // 0x2c912c: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9128) {
            ctx->pc = 0x2C9168u;
            goto label_2c9168;
        }
    }
    ctx->pc = 0x2C9130u;
label_2c9130:
    // 0x2c9130: 0x9603002a  lhu         $v1, 0x2A($s0)
    ctx->pc = 0x2c9130u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x2c9134: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C9134u;
    {
        const bool branch_taken_0x2c9134 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x2C9138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9134u;
        // 0x2c9138: 0x96060028  lhu         $a2, 0x28($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9134) {
            ctx->pc = 0x2C9148u;
            goto label_2c9148;
        }
    }
    ctx->pc = 0x2C913Cu;
    // 0x2c913c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c913cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9140: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C9140u;
    {
        const bool branch_taken_0x2c9140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9140u;
        // 0x2c9144: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9140) {
            ctx->pc = 0x2C9164u;
            goto label_2c9164;
        }
    }
    ctx->pc = 0x2C9148u;
label_2c9148:
    // 0x2c9148: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x2c9148u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x2c914c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2c914cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2c9150: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2c9150u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2c9154: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2c9154u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9158: 0x0  nop
    ctx->pc = 0x2c9158u;
    // NOP
    // 0x2c915c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x2c915cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2c9160: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2c9160u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2c9164:
    // 0x2c9164: 0x0  nop
    ctx->pc = 0x2c9164u;
    // NOP
label_2c9168:
    // 0x2c9168: 0x46021836  c.le.s      $f3, $f2
    ctx->pc = 0x2c9168u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c916c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2C916Cu;
    {
        const bool branch_taken_0x2c916c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c916c) {
            ctx->pc = 0x2C9178u;
            goto label_2c9178;
        }
    }
    ctx->pc = 0x2C9174u;
    // 0x2c9174: 0x460010c6  mov.s       $f3, $f2
    ctx->pc = 0x2c9174u;
    ctx->f[3] = FPU_MOV_S(ctx->f[2]);
label_2c9178:
    // 0x2c9178: 0x82040033  lb          $a0, 0x33($s0)
    ctx->pc = 0x2c9178u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 51)));
    // 0x2c917c: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x2c917cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c9180: 0x96050030  lhu         $a1, 0x30($s0)
    ctx->pc = 0x2c9180u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2c9184: 0x46031001  sub.s       $f0, $f2, $f3
    ctx->pc = 0x2c9184u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x2c9188: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2c9188u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2c918c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c918cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c9190: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2c9190u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x2c9194: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c9194u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2c9198: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2c9198u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2c919c: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2C919Cu;
    {
        const bool branch_taken_0x2c919c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C91A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C919Cu;
        // 0x2c91a0: 0x2238821  addu        $s1, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c919c) {
            ctx->pc = 0x2C9200u;
            goto label_2c9200;
        }
    }
    ctx->pc = 0x2C91A4u;
    // 0x2c91a4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2c91a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2c91a8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c91a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c91ac: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C91ACu;
    {
        const bool branch_taken_0x2c91ac = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x2c91ac) {
            ctx->pc = 0x2C91B8u;
            goto label_2c91b8;
        }
    }
    ctx->pc = 0x2C91B4u;
    // 0x2c91b4: 0x21023  negu        $v0, $v0
    ctx->pc = 0x2c91b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_2c91b8:
    // 0x2c91b8: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x2c91b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x2c91bc: 0x41e3c  dsll32      $v1, $a0, 24
    ctx->pc = 0x2c91bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 24));
    // 0x2c91c0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2c91c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2c91c4: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2c91c4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2c91c8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c91c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c91cc: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x2c91ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c91d0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C91D0u;
    {
        const bool branch_taken_0x2c91d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c91d0) {
            ctx->pc = 0x2C91E0u;
            goto label_2c91e0;
        }
    }
    ctx->pc = 0x2C91D8u;
    // 0x2c91d8: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x2c91d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2c91dc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c91dcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2c91e0:
    // 0x2c91e0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2c91e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2c91e4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c91e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c91e8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2c91e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c91ec: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x2c91ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2c91f0: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x2c91f0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2c91f4: 0x0  nop
    ctx->pc = 0x2c91f4u;
    // NOP
    // 0x2c91f8: 0x0  nop
    ctx->pc = 0x2c91f8u;
    // NOP
    // 0x2c91fc: 0x2812  mflo        $a1
    ctx->pc = 0x2c91fcu;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_2c9200:
    // 0x2c9200: 0x8e6229c0  lw          $v0, 0x29C0($s3)
    ctx->pc = 0x2c9200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10688)));
    // 0x2c9204: 0x2258821  addu        $s1, $s1, $a1
    ctx->pc = 0x2c9204u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x2c9208: 0x94570000  lhu         $s7, 0x0($v0)
    ctx->pc = 0x2c9208u;
    SET_GPR_ZE32(ctx, 23, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c920c: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x2C920Cu;
    SET_GPR_U32(ctx, 31, 0x2C9214u);
    ctx->pc = 0x2C9210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C920Cu;
    // 0x2c9210: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x2C920Cu, 0x2C9214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9214u;
label_2c9214:
    // 0x2c9214: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x2c9214u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2c9218: 0x96020036  lhu         $v0, 0x36($s0)
    ctx->pc = 0x2c9218u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 54)));
    // 0x2c921c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2C921Cu;
    {
        const bool branch_taken_0x2c921c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C921Cu;
        // 0x2c9220: 0x96030034  lhu         $v1, 0x34($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c921c) {
            ctx->pc = 0x2C9248u;
            goto label_2c9248;
        }
    }
    ctx->pc = 0x2C9224u;
    // 0x2c9224: 0x971023  subu        $v0, $a0, $s7
    ctx->pc = 0x2c9224u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
    // 0x2c9228: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x2c9228u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2c922c: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x2c922cu;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2c9230: 0x0  nop
    ctx->pc = 0x2c9230u;
    // NOP
    // 0x2c9234: 0x0  nop
    ctx->pc = 0x2c9234u;
    // NOP
    // 0x2c9238: 0x1012  mflo        $v0
    ctx->pc = 0x2c9238u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2c923c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C923Cu;
    {
        const bool branch_taken_0x2c923c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c923c) {
            ctx->pc = 0x2C9260u;
            goto label_2c9260;
        }
    }
    ctx->pc = 0x2C9244u;
    // 0x2c9244: 0x0  nop
    ctx->pc = 0x2c9244u;
    // NOP
label_2c9248:
    // 0x2c9248: 0x2e31018  mult        $v0, $s7, $v1
    ctx->pc = 0x2c9248u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2c924c: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x2c924cu;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2c9250: 0x0  nop
    ctx->pc = 0x2c9250u;
    // NOP
    // 0x2c9254: 0x0  nop
    ctx->pc = 0x2c9254u;
    // NOP
    // 0x2c9258: 0x1012  mflo        $v0
    ctx->pc = 0x2c9258u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2c925c: 0x0  nop
    ctx->pc = 0x2c925cu;
    // NOP
label_2c9260:
    // 0x2c9260: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x2c9260u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2c9264: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x2c9264u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2c9268: 0xc0ae944  jal         func_2BA510
    ctx->pc = 0x2C9268u;
    SET_GPR_U32(ctx, 31, 0x2C9270u);
    ctx->pc = 0x2C926Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9268u;
    // 0x2c926c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA510u, 0x2C9268u, 0x2C9270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9270u;
label_2c9270:
    // 0x2c9270: 0x94a3003a  lhu         $v1, 0x3A($a1)
    ctx->pc = 0x2c9270u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 58)));
    // 0x2c9274: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C9274u;
    {
        const bool branch_taken_0x2c9274 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9274u;
        // 0x2c9278: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9274) {
            ctx->pc = 0x2C928Cu;
            goto label_2c928c;
        }
    }
    ctx->pc = 0x2C927Cu;
    // 0x2c927c: 0x24081000  addiu       $t0, $zero, 0x1000
    ctx->pc = 0x2c927cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x2c9280: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C9280u;
    {
        const bool branch_taken_0x2c9280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9280u;
        // 0x2c9284: 0x2400a  movz        $t0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9280) {
            ctx->pc = 0x2C9294u;
            goto label_2c9294;
        }
    }
    ctx->pc = 0x2C9288u;
    // 0x2c9288: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2c9288u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c928c:
    // 0x2c928c: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x2c928cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x2c9290: 0x62400a  movz        $t0, $v1, $v0
    ctx->pc = 0x2c9290u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
label_2c9294:
    // 0x2c9294: 0x94a60038  lhu         $a2, 0x38($a1)
    ctx->pc = 0x2c9294u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x2c9298: 0x24071000  addiu       $a3, $zero, 0x1000
    ctx->pc = 0x2c9298u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x2c929c: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x2c929cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2c92a0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2c92a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c92a4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2c92a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c92a8: 0x1064818  mult        $t1, $t0, $a2
    ctx->pc = 0x2c92a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x2c92ac: 0x9245000a  lbu         $a1, 0xA($s2)
    ctx->pc = 0x2c92acu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x2c92b0: 0x9448003e  lhu         $t0, 0x3E($v0)
    ctx->pc = 0x2c92b0u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 62)));
    // 0x2c92b4: 0x94b03  sra         $t1, $t1, 12
    ctx->pc = 0x2c92b4u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 12));
    // 0x2c92b8: 0x9446003c  lhu         $a2, 0x3C($v0)
    ctx->pc = 0x2c92b8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x2c92bc: 0x2298821  addu        $s1, $s1, $t1
    ctx->pc = 0x2c92bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 9)));
    // 0x2c92c0: 0x8380a  movz        $a3, $zero, $t0
    ctx->pc = 0x2c92c0u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
    // 0x2c92c4: 0x70e63018  mult1       $a2, $a3, $a2
    ctx->pc = 0x2c92c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2c92c8: 0x63303  sra         $a2, $a2, 12
    ctx->pc = 0x2c92c8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 12));
    // 0x2c92cc: 0x14a4001a  bne         $a1, $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2C92CCu;
    {
        const bool branch_taken_0x2c92cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x2C92D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C92CCu;
        // 0x2c92d0: 0x2268821  addu        $s1, $s1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c92cc) {
            ctx->pc = 0x2C9338u;
            goto label_2c9338;
        }
    }
    ctx->pc = 0x2C92D4u;
    // 0x2c92d4: 0x94440042  lhu         $a0, 0x42($v0)
    ctx->pc = 0x2c92d4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 66)));
    // 0x2c92d8: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x2C92D8u;
    {
        const bool branch_taken_0x2c92d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c92d8) {
            ctx->pc = 0x2C9310u;
            goto label_2c9310;
        }
    }
    ctx->pc = 0x2C92E0u;
    // 0x2c92e0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c92e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c92e4: 0x27848060  addiu       $a0, $gp, -0x7FA0
    ctx->pc = 0x2c92e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2c92e8: 0x90256c1c  lbu         $a1, 0x6C1C($at)
    ctx->pc = 0x2c92e8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x2c92ec: 0x38a50001  xori        $a1, $a1, 0x1
    ctx->pc = 0x2c92ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x2c92f0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2c92f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2c92f4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2c92f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2c92f8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2c92f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c92fc: 0x14930014  bne         $a0, $s3, . + 4 + (0x14 << 2)
    ctx->pc = 0x2C92FCu;
    {
        const bool branch_taken_0x2c92fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 19));
        if (branch_taken_0x2c92fc) {
            ctx->pc = 0x2C9350u;
            goto label_2c9350;
        }
    }
    ctx->pc = 0x2C9304u;
    // 0x2c9304: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2C9304u;
    {
        const bool branch_taken_0x2c9304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9304u;
        // 0x2c9308: 0x24031000  addiu       $v1, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9304) {
            ctx->pc = 0x2C9350u;
            goto label_2c9350;
        }
    }
    ctx->pc = 0x2C930Cu;
    // 0x2c930c: 0x0  nop
    ctx->pc = 0x2c930cu;
    // NOP
label_2c9310:
    // 0x2c9310: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c9310u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c9314: 0x90256c1c  lbu         $a1, 0x6C1C($at)
    ctx->pc = 0x2c9314u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x2c9318: 0x27848060  addiu       $a0, $gp, -0x7FA0
    ctx->pc = 0x2c9318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2c931c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2c931cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2c9320: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2c9320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2c9324: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2c9324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c9328: 0x14930009  bne         $a0, $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C9328u;
    {
        const bool branch_taken_0x2c9328 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 19));
        if (branch_taken_0x2c9328) {
            ctx->pc = 0x2C9350u;
            goto label_2c9350;
        }
    }
    ctx->pc = 0x2C9330u;
    // 0x2c9330: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2C9330u;
    {
        const bool branch_taken_0x2c9330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9330u;
        // 0x2c9334: 0x24031000  addiu       $v1, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9330) {
            ctx->pc = 0x2C9350u;
            goto label_2c9350;
        }
    }
    ctx->pc = 0x2C9338u;
label_2c9338:
    // 0x2c9338: 0x94440042  lhu         $a0, 0x42($v0)
    ctx->pc = 0x2c9338u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 66)));
    // 0x2c933c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C933Cu;
    {
        const bool branch_taken_0x2c933c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c933c) {
            ctx->pc = 0x2C9350u;
            goto label_2c9350;
        }
    }
    ctx->pc = 0x2C9344u;
    // 0x2c9344: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C9344u;
    {
        const bool branch_taken_0x2c9344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9344u;
        // 0x2c9348: 0x24031000  addiu       $v1, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9344) {
            ctx->pc = 0x2C9350u;
            goto label_2c9350;
        }
    }
    ctx->pc = 0x2C934Cu;
    // 0x2c934c: 0x0  nop
    ctx->pc = 0x2c934cu;
    // NOP
label_2c9350:
    // 0x2c9350: 0x94470040  lhu         $a3, 0x40($v0)
    ctx->pc = 0x2c9350u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x2c9354: 0x90460046  lbu         $a2, 0x46($v0)
    ctx->pc = 0x2c9354u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x2c9358: 0x926505b3  lbu         $a1, 0x5B3($s3)
    ctx->pc = 0x2c9358u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1459)));
    // 0x2c935c: 0x90440047  lbu         $a0, 0x47($v0)
    ctx->pc = 0x2c935cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 71)));
    // 0x2c9360: 0x94490044  lhu         $t1, 0x44($v0)
    ctx->pc = 0x2c9360u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x2c9364: 0x673818  mult        $a3, $v1, $a3
    ctx->pc = 0x2c9364u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2c9368: 0x30c8007f  andi        $t0, $a2, 0x7F
    ctx->pc = 0x2c9368u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)127);
    // 0x2c936c: 0xa82823  subu        $a1, $a1, $t0
    ctx->pc = 0x2c936cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x2c9370: 0x882023  subu        $a0, $a0, $t0
    ctx->pc = 0x2c9370u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x2c9374: 0x30c30080  andi        $v1, $a2, 0x80
    ctx->pc = 0x2c9374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)128);
    // 0x2c9378: 0x85202b  sltu        $a0, $a0, $a1
    ctx->pc = 0x2c9378u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2c937c: 0x73303  sra         $a2, $a3, 12
    ctx->pc = 0x2c937cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 7), 12));
    // 0x2c9380: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x2c9380u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x2c9384: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C9384u;
    {
        const bool branch_taken_0x2c9384 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9384u;
        // 0x2c9388: 0x2268821  addu        $s1, $s1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9384) {
            ctx->pc = 0x2C93A0u;
            goto label_2c93a0;
        }
    }
    ctx->pc = 0x2C938Cu;
    // 0x2c938c: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C938Cu;
    {
        const bool branch_taken_0x2c938c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c938c) {
            ctx->pc = 0x2C9398u;
            goto label_2c9398;
        }
    }
    ctx->pc = 0x2C9394u;
    // 0x2c9394: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2c9394u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c9398:
    // 0x2c9398: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C9398u;
    {
        const bool branch_taken_0x2c9398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9398) {
            ctx->pc = 0x2C93A8u;
            goto label_2c93a8;
        }
    }
    ctx->pc = 0x2C93A0u;
label_2c93a0:
    // 0x2c93a0: 0x4480a  movz        $t1, $zero, $a0
    ctx->pc = 0x2c93a0u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
    // 0x2c93a4: 0x0  nop
    ctx->pc = 0x2c93a4u;
    // NOP
label_2c93a8:
    // 0x2c93a8: 0x9683005a  lhu         $v1, 0x5A($s4)
    ctx->pc = 0x2c93a8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 90)));
    // 0x2c93ac: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C93ACu;
    {
        const bool branch_taken_0x2c93ac = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x2C93B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C93ACu;
        // 0x2c93b0: 0x2298821  addu        $s1, $s1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c93ac) {
            ctx->pc = 0x2C93C0u;
            goto label_2c93c0;
        }
    }
    ctx->pc = 0x2C93B4u;
    // 0x2c93b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c93b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c93b8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C93B8u;
    {
        const bool branch_taken_0x2c93b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C93BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C93B8u;
        // 0x2c93bc: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c93b8) {
            ctx->pc = 0x2C93DCu;
            goto label_2c93dc;
        }
    }
    ctx->pc = 0x2C93C0u;
label_2c93c0:
    // 0x2c93c0: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x2c93c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x2c93c4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2c93c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2c93c8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2c93c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2c93cc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2c93ccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c93d0: 0x0  nop
    ctx->pc = 0x2c93d0u;
    // NOP
    // 0x2c93d4: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x2c93d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2c93d8: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2c93d8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_2c93dc:
    // 0x2c93dc: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2c93dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c93e0: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x2c93e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x2c93e4: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x2c93e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x2c93e8: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2c93e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x2c93ec: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2c93ecu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c93f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c93f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c93f4: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2c93f4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2c93f8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2c93f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2c93fc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2c93fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c9400: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2C9400u;
    {
        const bool branch_taken_0x2c9400 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c9400) {
            ctx->pc = 0x2C9418u;
            goto label_2c9418;
        }
    }
    ctx->pc = 0x2C9408u;
    // 0x2c9408: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c9408u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2c940c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2c940cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2c9410: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C9410u;
    {
        const bool branch_taken_0x2c9410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9410u;
        // 0x2c9414: 0x94430048  lhu         $v1, 0x48($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9410) {
            ctx->pc = 0x2C9434u;
            goto label_2c9434;
        }
    }
    ctx->pc = 0x2C9418u;
label_2c9418:
    // 0x2c9418: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2c9418u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c941c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2c941cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2c9420: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c9420u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2c9424: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2c9424u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2c9428: 0x0  nop
    ctx->pc = 0x2c9428u;
    // NOP
    // 0x2c942c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2c942cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2c9430: 0x94430048  lhu         $v1, 0x48($v0)
    ctx->pc = 0x2c9430u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_2c9434:
    // 0x2c9434: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x2c9434u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x2c9438: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x2c9438u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2c943c: 0x31b03  sra         $v1, $v1, 12
    ctx->pc = 0x2c943cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x2c9440: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x2c9440u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2c9444: 0x4b04043c  vrnext.x    $vf4, $R
    ctx->pc = 0x2c9444u;
    {
    uint32_t r_vals[4];
    _mm_storeu_si128((__m128i*)r_vals, _mm_castps_si128(ctx->vu0_r));

    // Simple LFSR-based random number generation (PS2-like behavior)
    uint32_t feedback = r_vals[0] ^ (r_vals[0] << 13) ^ (r_vals[1] >> 19) ^ (r_vals[2] << 7);
    r_vals[0] = r_vals[1];
    r_vals[1] = r_vals[2];
    r_vals[2] = r_vals[3];
    r_vals[3] = feedback;

    ctx->vu0_r = _mm_castsi128_ps(_mm_loadu_si128((__m128i*)r_vals));
}
    // 0x2c9448: 0x48232001  qmfc2.i     $v1, $vf4
    ctx->pc = 0x2c9448u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2c944c: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c944cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c9450: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2c9450u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2c9454: 0x9445004e  lhu         $a1, 0x4E($v0)
    ctx->pc = 0x2c9454u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 78)));
    // 0x2c9458: 0x9443004c  lhu         $v1, 0x4C($v0)
    ctx->pc = 0x2c9458u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x2c945c: 0x85001b  divu        $zero, $a0, $a1
    ctx->pc = 0x2c945cu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2c9460: 0x8c226458  lw          $v0, 0x6458($at)
    ctx->pc = 0x2c9460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 25688)));
    // 0x2c9464: 0x0  nop
    ctx->pc = 0x2c9464u;
    // NOP
    // 0x2c9468: 0x2010  mfhi        $a0
    ctx->pc = 0x2c9468u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2c946c: 0x70831818  mult1       $v1, $a0, $v1
    ctx->pc = 0x2c946cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2c9470: 0x31b03  sra         $v1, $v1, 12
    ctx->pc = 0x2c9470u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x2c9474: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x2c9474u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2c9478: 0x51082a  slt         $at, $v0, $s1
    ctx->pc = 0x2c9478u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2c947c: 0x10200066  beqz        $at, . + 4 + (0x66 << 2)
    ctx->pc = 0x2C947Cu;
    {
        const bool branch_taken_0x2c947c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c947c) {
            ctx->pc = 0x2C9618u;
            goto label_2c9618;
        }
    }
    ctx->pc = 0x2C9484u;
    // 0x2c9484: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c9484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c9488: 0x8c226448  lw          $v0, 0x6448($at)
    ctx->pc = 0x2c9488u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8D6448u));
    // 0x2c948c: 0x51082a  slt         $at, $v0, $s1
    ctx->pc = 0x2c948cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2c9490: 0x10200039  beqz        $at, . + 4 + (0x39 << 2)
    ctx->pc = 0x2C9490u;
    {
        const bool branch_taken_0x2c9490 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9490) {
            ctx->pc = 0x2C9578u;
            goto label_2c9578;
        }
    }
    ctx->pc = 0x2C9498u;
    // 0x2c9498: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c9498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c949c: 0x8c256460  lw          $a1, 0x6460($at)
    ctx->pc = 0x2c949cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x8D6460u));
    // 0x2c94a0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c94a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c94a4: 0xc4216464  lwc1        $f1, 0x6464($at)
    ctx->pc = 0x2c94a4u;
    { uint32_t bits = FAST_READ32(0x8D6464u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c94a8: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c94a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c94ac: 0x8c246468  lw          $a0, 0x6468($at)
    ctx->pc = 0x2c94acu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8D6468u));
    // 0x2c94b0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c94b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c94b4: 0x8c23646c  lw          $v1, 0x646C($at)
    ctx->pc = 0x2c94b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8D646Cu));
    // 0x2c94b8: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c94b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c94bc: 0x8c226450  lw          $v0, 0x6450($at)
    ctx->pc = 0x2c94bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8D6450u));
    // 0x2c94c0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c94c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c94c4: 0xc4206454  lwc1        $f0, 0x6454($at)
    ctx->pc = 0x2c94c4u;
    { uint32_t bits = FAST_READ32(0x8D6454u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c94c8: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c94c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c94cc: 0xac256470  sw          $a1, 0x6470($at)
    ctx->pc = 0x2c94ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x8D6470u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6470u, _value); } while (0);
    // 0x2c94d0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c94d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c94d4: 0xe4216474  swc1        $f1, 0x6474($at)
    ctx->pc = 0x2c94d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8D6474u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6474u, _value); } while (0); }
    // 0x2c94d8: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c94d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c94dc: 0xac246478  sw          $a0, 0x6478($at)
    ctx->pc = 0x2c94dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x8D6478u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6478u, _value); } while (0);
    // 0x2c94e0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c94e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c94e4: 0xac23647c  sw          $v1, 0x647C($at)
    ctx->pc = 0x2c94e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8D647Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D647Cu, _value); } while (0);
    // 0x2c94e8: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c94e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c94ec: 0xac226460  sw          $v0, 0x6460($at)
    ctx->pc = 0x2c94ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8D6460u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6460u, _value); } while (0);
    // 0x2c94f0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c94f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c94f4: 0xe4206464  swc1        $f0, 0x6464($at)
    ctx->pc = 0x2c94f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8D6464u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6464u, _value); } while (0); }
    // 0x2c94f8: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c94f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c94fc: 0x8c266458  lw          $a2, 0x6458($at)
    ctx->pc = 0x2c94fcu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x8D6458u));
    // 0x2c9500: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c9500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c9504: 0x8c25645c  lw          $a1, 0x645C($at)
    ctx->pc = 0x2c9504u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x8D645Cu));
    // 0x2c9508: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c9508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c950c: 0x8c246440  lw          $a0, 0x6440($at)
    ctx->pc = 0x2c950cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8D6440u));
    // 0x2c9510: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c9510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c9514: 0xc4206444  lwc1        $f0, 0x6444($at)
    ctx->pc = 0x2c9514u;
    { uint32_t bits = FAST_READ32(0x8D6444u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9518: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c9518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c951c: 0x8c236448  lw          $v1, 0x6448($at)
    ctx->pc = 0x2c951cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8D6448u));
    // 0x2c9520: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c9520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c9524: 0x8c22644c  lw          $v0, 0x644C($at)
    ctx->pc = 0x2c9524u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8D644Cu));
    // 0x2c9528: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c9528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c952c: 0xac266468  sw          $a2, 0x6468($at)
    ctx->pc = 0x2c952cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x8D6468u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6468u, _value); } while (0);
    // 0x2c9530: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c9530u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c9534: 0xac25646c  sw          $a1, 0x646C($at)
    ctx->pc = 0x2c9534u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x8D646Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D646Cu, _value); } while (0);
    // 0x2c9538: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c9538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c953c: 0xac246450  sw          $a0, 0x6450($at)
    ctx->pc = 0x2c953cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x8D6450u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6450u, _value); } while (0);
    // 0x2c9540: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c9540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c9544: 0xe4206454  swc1        $f0, 0x6454($at)
    ctx->pc = 0x2c9544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8D6454u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6454u, _value); } while (0); }
    // 0x2c9548: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c9548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c954c: 0xac236458  sw          $v1, 0x6458($at)
    ctx->pc = 0x2c954cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8D6458u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6458u, _value); } while (0);
    // 0x2c9550: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c9550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c9554: 0xac22645c  sw          $v0, 0x645C($at)
    ctx->pc = 0x2c9554u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8D645Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D645Cu, _value); } while (0);
    // 0x2c9558: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c9558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c955c: 0xe4346444  swc1        $f20, 0x6444($at)
    ctx->pc = 0x2c955cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8D6444u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6444u, _value); } while (0); }
    // 0x2c9560: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c9560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c9564: 0xac316448  sw          $s1, 0x6448($at)
    ctx->pc = 0x2c9564u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x8D6448u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6448u, _value); } while (0);
    // 0x2c9568: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c9568u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c956c: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x2C956Cu;
    {
        const bool branch_taken_0x2c956c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C956Cu;
        // 0x2c9570: 0xac336440  sw          $s3, 0x6440($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 25664), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c956c) {
            ctx->pc = 0x2C96A0u;
            goto label_2c96a0;
        }
    }
    ctx->pc = 0x2C9574u;
    // 0x2c9574: 0x0  nop
    ctx->pc = 0x2c9574u;
    // NOP
label_2c9578:
    // 0x2c9578: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c9578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c957c: 0x8c256460  lw          $a1, 0x6460($at)
    ctx->pc = 0x2c957cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x8D6460u));
    // 0x2c9580: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c9580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c9584: 0xc4216464  lwc1        $f1, 0x6464($at)
    ctx->pc = 0x2c9584u;
    { uint32_t bits = FAST_READ32(0x8D6464u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c9588: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c9588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c958c: 0x8c246468  lw          $a0, 0x6468($at)
    ctx->pc = 0x2c958cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8D6468u));
    // 0x2c9590: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c9590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c9594: 0x8c23646c  lw          $v1, 0x646C($at)
    ctx->pc = 0x2c9594u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8D646Cu));
    // 0x2c9598: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c9598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c959c: 0x8c226450  lw          $v0, 0x6450($at)
    ctx->pc = 0x2c959cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8D6450u));
    // 0x2c95a0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c95a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c95a4: 0xc4206454  lwc1        $f0, 0x6454($at)
    ctx->pc = 0x2c95a4u;
    { uint32_t bits = FAST_READ32(0x8D6454u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c95a8: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c95a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c95ac: 0xac256470  sw          $a1, 0x6470($at)
    ctx->pc = 0x2c95acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x8D6470u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6470u, _value); } while (0);
    // 0x2c95b0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c95b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c95b4: 0xe4216474  swc1        $f1, 0x6474($at)
    ctx->pc = 0x2c95b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8D6474u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6474u, _value); } while (0); }
    // 0x2c95b8: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c95b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c95bc: 0xac246478  sw          $a0, 0x6478($at)
    ctx->pc = 0x2c95bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x8D6478u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6478u, _value); } while (0);
    // 0x2c95c0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c95c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c95c4: 0xac23647c  sw          $v1, 0x647C($at)
    ctx->pc = 0x2c95c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8D647Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D647Cu, _value); } while (0);
    // 0x2c95c8: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c95c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c95cc: 0xac226460  sw          $v0, 0x6460($at)
    ctx->pc = 0x2c95ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8D6460u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6460u, _value); } while (0);
    // 0x2c95d0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c95d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c95d4: 0xe4206464  swc1        $f0, 0x6464($at)
    ctx->pc = 0x2c95d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8D6464u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6464u, _value); } while (0); }
    // 0x2c95d8: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c95d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c95dc: 0xe4346454  swc1        $f20, 0x6454($at)
    ctx->pc = 0x2c95dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8D6454u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6454u, _value); } while (0); }
    // 0x2c95e0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c95e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c95e4: 0xac336450  sw          $s3, 0x6450($at)
    ctx->pc = 0x2c95e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 19)); ps2TraceGuestWrite(rdram, 0x8D6450u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6450u, _value); } while (0);
    // 0x2c95e8: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c95e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c95ec: 0x8c236458  lw          $v1, 0x6458($at)
    ctx->pc = 0x2c95ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8D6458u));
    // 0x2c95f0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c95f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c95f4: 0x8c22645c  lw          $v0, 0x645C($at)
    ctx->pc = 0x2c95f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8D645Cu));
    // 0x2c95f8: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c95f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c95fc: 0xac236468  sw          $v1, 0x6468($at)
    ctx->pc = 0x2c95fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8D6468u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6468u, _value); } while (0);
    // 0x2c9600: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c9600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c9604: 0xac22646c  sw          $v0, 0x646C($at)
    ctx->pc = 0x2c9604u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8D646Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D646Cu, _value); } while (0);
    // 0x2c9608: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c9608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c960c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2C960Cu;
    {
        const bool branch_taken_0x2c960c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C960Cu;
        // 0x2c9610: 0xac316458  sw          $s1, 0x6458($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 25688), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c960c) {
            ctx->pc = 0x2C96A0u;
            goto label_2c96a0;
        }
    }
    ctx->pc = 0x2C9614u;
    // 0x2c9614: 0x0  nop
    ctx->pc = 0x2c9614u;
    // NOP
label_2c9618:
    // 0x2c9618: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c9618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c961c: 0x8c226468  lw          $v0, 0x6468($at)
    ctx->pc = 0x2c961cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8D6468u));
    // 0x2c9620: 0x51082a  slt         $at, $v0, $s1
    ctx->pc = 0x2c9620u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2c9624: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x2C9624u;
    {
        const bool branch_taken_0x2c9624 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9624) {
            ctx->pc = 0x2C9688u;
            goto label_2c9688;
        }
    }
    ctx->pc = 0x2C962Cu;
    // 0x2c962c: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c962cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c9630: 0x8c246460  lw          $a0, 0x6460($at)
    ctx->pc = 0x2c9630u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8D6460u));
    // 0x2c9634: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c9634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c9638: 0xc4206464  lwc1        $f0, 0x6464($at)
    ctx->pc = 0x2c9638u;
    { uint32_t bits = FAST_READ32(0x8D6464u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c963c: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c963cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c9640: 0x8c236468  lw          $v1, 0x6468($at)
    ctx->pc = 0x2c9640u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8D6468u));
    // 0x2c9644: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c9644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c9648: 0x8c22646c  lw          $v0, 0x646C($at)
    ctx->pc = 0x2c9648u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8D646Cu));
    // 0x2c964c: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c964cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c9650: 0xac246470  sw          $a0, 0x6470($at)
    ctx->pc = 0x2c9650u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x8D6470u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6470u, _value); } while (0);
    // 0x2c9654: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c9654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c9658: 0xe4206474  swc1        $f0, 0x6474($at)
    ctx->pc = 0x2c9658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8D6474u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6474u, _value); } while (0); }
    // 0x2c965c: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c965cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c9660: 0xac236478  sw          $v1, 0x6478($at)
    ctx->pc = 0x2c9660u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8D6478u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6478u, _value); } while (0);
    // 0x2c9664: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c9664u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c9668: 0xac22647c  sw          $v0, 0x647C($at)
    ctx->pc = 0x2c9668u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8D647Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D647Cu, _value); } while (0);
    // 0x2c966c: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c966cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c9670: 0xe4346464  swc1        $f20, 0x6464($at)
    ctx->pc = 0x2c9670u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8D6464u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6464u, _value); } while (0); }
    // 0x2c9674: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c9674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c9678: 0xac316468  sw          $s1, 0x6468($at)
    ctx->pc = 0x2c9678u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x8D6468u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6468u, _value); } while (0);
    // 0x2c967c: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c967cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c9680: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2C9680u;
    {
        const bool branch_taken_0x2c9680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9680u;
        // 0x2c9684: 0xac336460  sw          $s3, 0x6460($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 25696), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9680) {
            ctx->pc = 0x2C96A0u;
            goto label_2c96a0;
        }
    }
    ctx->pc = 0x2C9688u;
label_2c9688:
    // 0x2c9688: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c9688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c968c: 0xe4346474  swc1        $f20, 0x6474($at)
    ctx->pc = 0x2c968cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8D6474u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6474u, _value); } while (0); }
    // 0x2c9690: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c9690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c9694: 0xac316478  sw          $s1, 0x6478($at)
    ctx->pc = 0x2c9694u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x8D6478u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6478u, _value); } while (0);
    // 0x2c9698: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c9698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c969c: 0xac336470  sw          $s3, 0x6470($at)
    ctx->pc = 0x2c969cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 19)); ps2TraceGuestWrite(rdram, 0x8D6470u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6470u, _value); } while (0);
label_2c96a0:
    // 0x2c96a0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2c96a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2c96a4: 0x0  nop
    ctx->pc = 0x2c96a4u;
    // NOP
label_2c96a8:
    // 0x2c96a8: 0x8e730018  lw          $s3, 0x18($s3)
    ctx->pc = 0x2c96a8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x2c96ac: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x2c96acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x2c96b0: 0x1440fde5  bnez        $v0, . + 4 + (-0x21B << 2)
    ctx->pc = 0x2C96B0u;
    {
        const bool branch_taken_0x2c96b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c96b0) {
            ctx->pc = 0x2C8E48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c8e48;
        }
    }
    ctx->pc = 0x2C96B8u;
label_2c96b8:
    // 0x2c96b8: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x2c96b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x2c96bc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2c96bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2c96c0: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x2c96c0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2c96c4: 0x278289ec  addiu       $v0, $gp, -0x7614
    ctx->pc = 0x2c96c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937068));
    // 0x2c96c8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2c96c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2c96cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c96ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c96d0: 0x16a00017  bnez        $s5, . + 4 + (0x17 << 2)
    ctx->pc = 0x2C96D0u;
    {
        const bool branch_taken_0x2c96d0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C96D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C96D0u;
        // 0x2c96d4: 0xa4560000  sh          $s6, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c96d0) {
            ctx->pc = 0x2C9730u;
            goto label_2c9730;
        }
    }
    ctx->pc = 0x2C96D8u;
    // 0x2c96d8: 0x8e85008c  lw          $a1, 0x8C($s4)
    ctx->pc = 0x2c96d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 140)));
    // 0x2c96dc: 0x10a00014  beqz        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2C96DCu;
    {
        const bool branch_taken_0x2c96dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c96dc) {
            ctx->pc = 0x2C9730u;
            goto label_2c9730;
        }
    }
    ctx->pc = 0x2C96E4u;
    // 0x2c96e4: 0xc0b221c  jal         func_2C8870
    ctx->pc = 0x2C96E4u;
    SET_GPR_U32(ctx, 31, 0x2C96ECu);
    ctx->pc = 0x2C96E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C96E4u;
    // 0x2c96e8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8870u, 0x2C96E4u, 0x2C96ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C96ECu;
label_2c96ec:
    // 0x2c96ec: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2C96ECu;
    {
        const bool branch_taken_0x2c96ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C96F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C96ECu;
        // 0x2c96f0: 0xae80008c  sw          $zero, 0x8C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c96ec) {
            ctx->pc = 0x2C9730u;
            goto label_2c9730;
        }
    }
    ctx->pc = 0x2C96F4u;
    // 0x2c96f4: 0x8c4329c0  lw          $v1, 0x29C0($v0)
    ctx->pc = 0x2c96f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10688)));
    // 0x2c96f8: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x2c96f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c96fc: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2C96FCu;
    {
        const bool branch_taken_0x2c96fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c96fc) {
            ctx->pc = 0x2C9730u;
            goto label_2c9730;
        }
    }
    ctx->pc = 0x2C9704u;
    // 0x2c9704: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c9704u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c9708: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c9708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c970c: 0xac226440  sw          $v0, 0x6440($at)
    ctx->pc = 0x2c970cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8D6440u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6440u, _value); } while (0);
    // 0x2c9710: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c9710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9714: 0xc0aec0c  jal         func_2BB030
    ctx->pc = 0x2C9714u;
    SET_GPR_U32(ctx, 31, 0x2C971Cu);
    ctx->pc = 0x2C9718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9714u;
    // 0x2c9718: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB030u, 0x2C9714u, 0x2C971Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C971Cu;
label_2c971c:
    // 0x2c971c: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c971cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c9720: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2c9720u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c9724: 0xe4206444  swc1        $f0, 0x6444($at)
    ctx->pc = 0x2c9724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8D6444u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6444u, _value); } while (0); }
    // 0x2c9728: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c9728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c972c: 0xac206448  sw          $zero, 0x6448($at)
    ctx->pc = 0x2c972cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8D6448u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6448u, _value); } while (0);
label_2c9730:
    // 0x2c9730: 0x97a200b0  lhu         $v0, 0xB0($sp)
    ctx->pc = 0x2c9730u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2c9734: 0x2aa10005  slti        $at, $s5, 0x5
    ctx->pc = 0x2c9734u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2c9738: 0xa68200e0  sh          $v0, 0xE0($s4)
    ctx->pc = 0x2c9738u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 224), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c973c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C973Cu;
    {
        const bool branch_taken_0x2c973c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C973Cu;
        // 0x2c9740: 0xa69e00e2  sh          $fp, 0xE2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 226), (uint16_t)GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c973c) {
            ctx->pc = 0x2C974Cu;
            goto label_2c974c;
        }
    }
    ctx->pc = 0x2C9744u;
    // 0x2c9744: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C9744u;
    {
        const bool branch_taken_0x2c9744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9744u;
        // 0x2c9748: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9744) {
            ctx->pc = 0x2C9754u;
            goto label_2c9754;
        }
    }
    ctx->pc = 0x2C974Cu;
label_2c974c:
    // 0x2c974c: 0x24150004  addiu       $s5, $zero, 0x4
    ctx->pc = 0x2c974cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c9750: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x2c9750u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2c9754:
    // 0x2c9754: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2c9754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2c9758: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x2c9758u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c975c: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x2c975cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2c9760: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2c9760u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c9764: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x2c9764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2c9768: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2c9768u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c976c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2c976cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2c9770: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2c9770u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c9774: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2c9774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c9778: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2c9778u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c977c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2c977cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c9780: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2c9780u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c9784: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2c9784u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c9788: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2c9788u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c978c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C978Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C978Cu;
        // 0x2c9790: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C978Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C9794u;
}
