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

// Function: sub_002C9960
// Address: 0x2c9960 - 0x2c9ce8
void sub_002C9960_0x2c9960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C9960_0x2c9960");
#endif

    switch (ctx->pc) {
        case 0x2c99a4u: goto label_2c99a4;
        case 0x2c99d0u: goto label_2c99d0;
        case 0x2c9afcu: goto label_2c9afc;
        case 0x2c9bb4u: goto label_2c9bb4;
        case 0x2c9c6cu: goto label_2c9c6c;
        case 0x2c9cc4u: goto label_2c9cc4;
        default: break;
    }

    ctx->pc = 0x2c9960u;

    // 0x2c9960: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c9960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2c9964: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2c9964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2c9968: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2c9968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2c996c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c996cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c9970: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2c9970u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9974: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c9974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c9978: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x2c9978u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c997c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c997cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c9980: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2c9980u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9984: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c9984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c9988: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2c9988u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c998c: 0x128000ce  beqz        $s4, . + 4 + (0xCE << 2)
    ctx->pc = 0x2C998Cu;
    {
        const bool branch_taken_0x2c998c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C998Cu;
        // 0x2c9990: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c998c) {
            ctx->pc = 0x2C9CC8u;
            goto label_2c9cc8;
        }
    }
    ctx->pc = 0x2C9994u;
    // 0x2c9994: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c9994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9998: 0x24060110  addiu       $a2, $zero, 0x110
    ctx->pc = 0x2c9998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    // 0x2c999c: 0xc049590  jal         func_125640
    ctx->pc = 0x2C999Cu;
    SET_GPR_U32(ctx, 31, 0x2C99A4u);
    ctx->pc = 0x2C99A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C999Cu;
    // 0x2c99a0: 0xa38089d0  sb          $zero, -0x7630($gp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937040), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x2C999Cu, 0x2C99A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C99A4u;
label_2c99a4:
    // 0x2c99a4: 0xae540000  sw          $s4, 0x0($s2)
    ctx->pc = 0x2c99a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 20));
    // 0x2c99a8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2c99a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c99ac: 0x938389dc  lbu         $v1, -0x7624($gp)
    ctx->pc = 0x2c99acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937052)));
    // 0x2c99b0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2c99b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c99b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c99b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c99b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c99b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c99bc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2c99bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2c99c0: 0xa38389dc  sb          $v1, -0x7624($gp)
    ctx->pc = 0x2c99c0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937052), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c99c4: 0xa2430039  sb          $v1, 0x39($s2)
    ctx->pc = 0x2c99c4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 57), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c99c8: 0xc0b20cc  jal         func_2C8330
    ctx->pc = 0x2C99C8u;
    SET_GPR_U32(ctx, 31, 0x2C99D0u);
    ctx->pc = 0x2C99CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C99C8u;
    // 0x2c99cc: 0xa2420031  sb          $v0, 0x31($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 49), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8330u, 0x2C99C8u, 0x2C99D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C99D0u;
label_2c99d0:
    // 0x2c99d0: 0x92240001  lbu         $a0, 0x1($s1)
    ctx->pc = 0x2c99d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x2c99d4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2c99d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c99d8: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C99D8u;
    {
        const bool branch_taken_0x2c99d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C99DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C99D8u;
        // 0x2c99dc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c99d8) {
            ctx->pc = 0x2C99F8u;
            goto label_2c99f8;
        }
    }
    ctx->pc = 0x2C99E0u;
    // 0x2c99e0: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x2c99e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2c99e4: 0xa2440101  sb          $a0, 0x101($s2)
    ctx->pc = 0x2c99e4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 257), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c99e8: 0xa2400082  sb          $zero, 0x82($s2)
    ctx->pc = 0x2c99e8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 130), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c99ec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C99ECu;
    {
        const bool branch_taken_0x2c99ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C99F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C99ECu;
        // 0x2c99f0: 0xa2430103  sb          $v1, 0x103($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 259), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c99ec) {
            ctx->pc = 0x2C9A10u;
            goto label_2c9a10;
        }
    }
    ctx->pc = 0x2C99F4u;
    // 0x2c99f4: 0x0  nop
    ctx->pc = 0x2c99f4u;
    // NOP
label_2c99f8:
    // 0x2c99f8: 0xa2400101  sb          $zero, 0x101($s2)
    ctx->pc = 0x2c99f8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 257), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c99fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c99fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c9a00: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x2c9a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2c9a04: 0xa2440082  sb          $a0, 0x82($s2)
    ctx->pc = 0x2c9a04u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 130), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c9a08: 0xa2430103  sb          $v1, 0x103($s2)
    ctx->pc = 0x2c9a08u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 259), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c9a0c: 0x0  nop
    ctx->pc = 0x2c9a0cu;
    // NOP
label_2c9a10:
    // 0x2c9a10: 0x9224000a  lbu         $a0, 0xA($s1)
    ctx->pc = 0x2c9a10u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x2c9a14: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2c9a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c9a18: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C9A18u;
    {
        const bool branch_taken_0x2c9a18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c9a18) {
            ctx->pc = 0x2C9A28u;
            goto label_2c9a28;
        }
    }
    ctx->pc = 0x2C9A20u;
    // 0x2c9a20: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C9A20u;
    {
        const bool branch_taken_0x2c9a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9A20u;
        // 0x2c9a24: 0xa2400082  sb          $zero, 0x82($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 130), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9a20) {
            ctx->pc = 0x2C9A30u;
            goto label_2c9a30;
        }
    }
    ctx->pc = 0x2C9A28u;
label_2c9a28:
    // 0x2c9a28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c9a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c9a2c: 0xa2430082  sb          $v1, 0x82($s2)
    ctx->pc = 0x2c9a2cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 130), (uint8_t)GPR_U32(ctx, 3));
label_2c9a30:
    // 0x2c9a30: 0x7a240020  lq          $a0, 0x20($s1)
    ctx->pc = 0x2c9a30u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2c9a34: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2c9a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2c9a38: 0x7e4400d0  sq          $a0, 0xD0($s2)
    ctx->pc = 0x2c9a38u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 208), GPR_VEC(ctx, 4));
    // 0x2c9a3c: 0x862400c2  lh          $a0, 0xC2($s1)
    ctx->pc = 0x2c9a3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 194)));
    // 0x2c9a40: 0xa64400dc  sh          $a0, 0xDC($s2)
    ctx->pc = 0x2c9a40u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 220), (uint16_t)GPR_U32(ctx, 4));
    // 0x2c9a44: 0x7a240020  lq          $a0, 0x20($s1)
    ctx->pc = 0x2c9a44u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2c9a48: 0x7e4400c0  sq          $a0, 0xC0($s2)
    ctx->pc = 0x2c9a48u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 192), GPR_VEC(ctx, 4));
    // 0x2c9a4c: 0x862400c2  lh          $a0, 0xC2($s1)
    ctx->pc = 0x2c9a4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 194)));
    // 0x2c9a50: 0xa64400cc  sh          $a0, 0xCC($s2)
    ctx->pc = 0x2c9a50u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 204), (uint16_t)GPR_U32(ctx, 4));
    // 0x2c9a54: 0xa24300e7  sb          $v1, 0xE7($s2)
    ctx->pc = 0x2c9a54u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 231), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c9a58: 0x8e2329c0  lw          $v1, 0x29C0($s1)
    ctx->pc = 0x2c9a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x2c9a5c: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x2c9a5cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c9a60: 0xae43007c  sw          $v1, 0x7C($s2)
    ctx->pc = 0x2c9a60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 3));
    // 0x2c9a64: 0x92460053  lbu         $a2, 0x53($s2)
    ctx->pc = 0x2c9a64u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 83)));
    // 0x2c9a68: 0x10c0002d  beqz        $a2, . + 4 + (0x2D << 2)
    ctx->pc = 0x2C9A68u;
    {
        const bool branch_taken_0x2c9a68 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9A68u;
        // 0x2c9a6c: 0x3c03004e  lui         $v1, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9a68) {
            ctx->pc = 0x2C9B20u;
            goto label_2c9b20;
        }
    }
    ctx->pc = 0x2C9A70u;
    // 0x2c9a70: 0xa2400053  sb          $zero, 0x53($s2)
    ctx->pc = 0x2c9a70u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 83), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c9a74: 0x24635930  addiu       $v1, $v1, 0x5930
    ctx->pc = 0x2c9a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22832));
    // 0x2c9a78: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2c9a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c9a7c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2c9a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c9a80: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2c9a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9a84: 0xe6420008  swc1        $f2, 0x8($s2)
    ctx->pc = 0x2c9a84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x2c9a88: 0xe641000c  swc1        $f1, 0xC($s2)
    ctx->pc = 0x2c9a88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x2c9a8c: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x2c9a8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x2c9a90: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x2c9a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c9a94: 0xc641000c  lwc1        $f1, 0xC($s2)
    ctx->pc = 0x2c9a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c9a98: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x2c9a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9a9c: 0xe6420014  swc1        $f2, 0x14($s2)
    ctx->pc = 0x2c9a9cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x2c9aa0: 0xe6410018  swc1        $f1, 0x18($s2)
    ctx->pc = 0x2c9aa0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
    // 0x2c9aa4: 0xe640001c  swc1        $f0, 0x1C($s2)
    ctx->pc = 0x2c9aa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
    // 0x2c9aa8: 0x938389d0  lbu         $v1, -0x7630($gp)
    ctx->pc = 0x2c9aa8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937040)));
    // 0x2c9aac: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2C9AACu;
    {
        const bool branch_taken_0x2c9aac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c9aac) {
            ctx->pc = 0x2C9B08u;
            goto label_2c9b08;
        }
    }
    ctx->pc = 0x2C9AB4u;
    // 0x2c9ab4: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x2C9AB4u;
    {
        const bool branch_taken_0x2c9ab4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9AB4u;
        // 0x2c9ab8: 0xa240004f  sb          $zero, 0x4F($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 79), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9ab4) {
            ctx->pc = 0x2C9AF0u;
            goto label_2c9af0;
        }
    }
    ctx->pc = 0x2C9ABCu;
    // 0x2c9abc: 0x92450037  lbu         $a1, 0x37($s2)
    ctx->pc = 0x2c9abcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 55)));
    // 0x2c9ac0: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x2c9ac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2c9ac4: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2c9ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c9ac8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c9ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c9acc: 0xa245004e  sb          $a1, 0x4E($s2)
    ctx->pc = 0x2c9accu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 78), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c9ad0: 0xa2460037  sb          $a2, 0x37($s2)
    ctx->pc = 0x2c9ad0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 55), (uint8_t)GPR_U32(ctx, 6));
    // 0x2c9ad4: 0xa2400032  sb          $zero, 0x32($s2)
    ctx->pc = 0x2c9ad4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c9ad8: 0xa244005f  sb          $a0, 0x5F($s2)
    ctx->pc = 0x2c9ad8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 95), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c9adc: 0xa6400080  sh          $zero, 0x80($s2)
    ctx->pc = 0x2c9adcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 128), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c9ae0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2c9ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2c9ae4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c9ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c9ae8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2C9AE8u;
    {
        const bool branch_taken_0x2c9ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9AE8u;
        // 0x2c9aec: 0x8c630018  lw          $v1, 0x18($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9ae8) {
            ctx->pc = 0x2C9B18u;
            goto label_2c9b18;
        }
    }
    ctx->pc = 0x2C9AF0u;
label_2c9af0:
    // 0x2c9af0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c9af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9af4: 0xc0b20e4  jal         func_2C8390
    ctx->pc = 0x2C9AF4u;
    SET_GPR_U32(ctx, 31, 0x2C9AFCu);
    ctx->pc = 0x2C9AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9AF4u;
    // 0x2c9af8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8390u, 0x2C9AF4u, 0x2C9AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9AFCu;
label_2c9afc:
    // 0x2c9afc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C9AFCu;
    {
        const bool branch_taken_0x2c9afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9afc) {
            ctx->pc = 0x2C9B10u;
            goto label_2c9b10;
        }
    }
    ctx->pc = 0x2C9B04u;
    // 0x2c9b04: 0x0  nop
    ctx->pc = 0x2c9b04u;
    // NOP
label_2c9b08:
    // 0x2c9b08: 0xa38689d8  sb          $a2, -0x7628($gp)
    ctx->pc = 0x2c9b08u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937048), (uint8_t)GPR_U32(ctx, 6));
    // 0x2c9b0c: 0x0  nop
    ctx->pc = 0x2c9b0cu;
    // NOP
label_2c9b10:
    // 0x2c9b10: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2c9b10u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9b14: 0x0  nop
    ctx->pc = 0x2c9b14u;
    // NOP
label_2c9b18:
    // 0x2c9b18: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x2C9B18u;
    {
        const bool branch_taken_0x2c9b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9B18u;
        // 0x2c9b1c: 0xae43002c  sw          $v1, 0x2C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9b18) {
            ctx->pc = 0x2C9C90u;
            goto label_2c9c90;
        }
    }
    ctx->pc = 0x2C9B20u;
label_2c9b20:
    // 0x2c9b20: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2C9B20u;
    {
        const bool branch_taken_0x2c9b20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9B20u;
        // 0x2c9b24: 0x3c03004e  lui         $v1, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9b20) {
            ctx->pc = 0x2C9BD8u;
            goto label_2c9bd8;
        }
    }
    ctx->pc = 0x2C9B28u;
    // 0x2c9b28: 0x24635940  addiu       $v1, $v1, 0x5940
    ctx->pc = 0x2c9b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22848));
    // 0x2c9b2c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2c9b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c9b30: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2c9b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c9b34: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2c9b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9b38: 0xe6420008  swc1        $f2, 0x8($s2)
    ctx->pc = 0x2c9b38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x2c9b3c: 0xe641000c  swc1        $f1, 0xC($s2)
    ctx->pc = 0x2c9b3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x2c9b40: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x2c9b40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x2c9b44: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x2c9b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c9b48: 0xc641000c  lwc1        $f1, 0xC($s2)
    ctx->pc = 0x2c9b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c9b4c: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x2c9b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9b50: 0xe6420014  swc1        $f2, 0x14($s2)
    ctx->pc = 0x2c9b50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x2c9b54: 0xe6410018  swc1        $f1, 0x18($s2)
    ctx->pc = 0x2c9b54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
    // 0x2c9b58: 0xe640001c  swc1        $f0, 0x1C($s2)
    ctx->pc = 0x2c9b58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
    // 0x2c9b5c: 0x938389d0  lbu         $v1, -0x7630($gp)
    ctx->pc = 0x2c9b5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937040)));
    // 0x2c9b60: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2C9B60u;
    {
        const bool branch_taken_0x2c9b60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c9b60) {
            ctx->pc = 0x2C9BC0u;
            goto label_2c9bc0;
        }
    }
    ctx->pc = 0x2C9B68u;
    // 0x2c9b68: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x2C9B68u;
    {
        const bool branch_taken_0x2c9b68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9B68u;
        // 0x2c9b6c: 0xa240004f  sb          $zero, 0x4F($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 79), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9b68) {
            ctx->pc = 0x2C9BA8u;
            goto label_2c9ba8;
        }
    }
    ctx->pc = 0x2C9B70u;
    // 0x2c9b70: 0x92450037  lbu         $a1, 0x37($s2)
    ctx->pc = 0x2c9b70u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 55)));
    // 0x2c9b74: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x2c9b74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2c9b78: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2c9b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c9b7c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c9b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c9b80: 0xa245004e  sb          $a1, 0x4E($s2)
    ctx->pc = 0x2c9b80u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 78), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c9b84: 0xa2500037  sb          $s0, 0x37($s2)
    ctx->pc = 0x2c9b84u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 55), (uint8_t)GPR_U32(ctx, 16));
    // 0x2c9b88: 0xa2400032  sb          $zero, 0x32($s2)
    ctx->pc = 0x2c9b88u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c9b8c: 0xa244005f  sb          $a0, 0x5F($s2)
    ctx->pc = 0x2c9b8cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 95), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c9b90: 0xa6400080  sh          $zero, 0x80($s2)
    ctx->pc = 0x2c9b90u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 128), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c9b94: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2c9b94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2c9b98: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c9b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c9b9c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2C9B9Cu;
    {
        const bool branch_taken_0x2c9b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9B9Cu;
        // 0x2c9ba0: 0x8c630018  lw          $v1, 0x18($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9b9c) {
            ctx->pc = 0x2C9BD0u;
            goto label_2c9bd0;
        }
    }
    ctx->pc = 0x2C9BA4u;
    // 0x2c9ba4: 0x0  nop
    ctx->pc = 0x2c9ba4u;
    // NOP
label_2c9ba8:
    // 0x2c9ba8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c9ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9bac: 0xc0b20e4  jal         func_2C8390
    ctx->pc = 0x2C9BACu;
    SET_GPR_U32(ctx, 31, 0x2C9BB4u);
    ctx->pc = 0x2C9BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9BACu;
    // 0x2c9bb0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8390u, 0x2C9BACu, 0x2C9BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9BB4u;
label_2c9bb4:
    // 0x2c9bb4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C9BB4u;
    {
        const bool branch_taken_0x2c9bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9bb4) {
            ctx->pc = 0x2C9BC8u;
            goto label_2c9bc8;
        }
    }
    ctx->pc = 0x2C9BBCu;
    // 0x2c9bbc: 0x0  nop
    ctx->pc = 0x2c9bbcu;
    // NOP
label_2c9bc0:
    // 0x2c9bc0: 0xa39089d8  sb          $s0, -0x7628($gp)
    ctx->pc = 0x2c9bc0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937048), (uint8_t)GPR_U32(ctx, 16));
    // 0x2c9bc4: 0x0  nop
    ctx->pc = 0x2c9bc4u;
    // NOP
label_2c9bc8:
    // 0x2c9bc8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2c9bc8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9bcc: 0x0  nop
    ctx->pc = 0x2c9bccu;
    // NOP
label_2c9bd0:
    // 0x2c9bd0: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x2C9BD0u;
    {
        const bool branch_taken_0x2c9bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9BD0u;
        // 0x2c9bd4: 0xae43002c  sw          $v1, 0x2C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9bd0) {
            ctx->pc = 0x2C9C90u;
            goto label_2c9c90;
        }
    }
    ctx->pc = 0x2C9BD8u;
label_2c9bd8:
    // 0x2c9bd8: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x2c9bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x2c9bdc: 0x24845950  addiu       $a0, $a0, 0x5950
    ctx->pc = 0x2c9bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22864));
    // 0x2c9be0: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x2c9be0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x2c9be4: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x2c9be4u;
    { uint32_t bits = FAST_READ32(0x4E5950u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c9be8: 0x24635960  addiu       $v1, $v1, 0x5960
    ctx->pc = 0x2c9be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22880));
    // 0x2c9bec: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x2c9becu;
    { uint32_t bits = FAST_READ32(0x4E5954u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c9bf0: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2c9bf0u;
    { uint32_t bits = FAST_READ32(0x4E5958u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9bf4: 0xe6420014  swc1        $f2, 0x14($s2)
    ctx->pc = 0x2c9bf4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x2c9bf8: 0xe6410018  swc1        $f1, 0x18($s2)
    ctx->pc = 0x2c9bf8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
    // 0x2c9bfc: 0xe640001c  swc1        $f0, 0x1C($s2)
    ctx->pc = 0x2c9bfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
    // 0x2c9c00: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2c9c00u;
    { uint32_t bits = FAST_READ32(0x4E5960u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c9c04: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2c9c04u;
    { uint32_t bits = FAST_READ32(0x4E5964u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c9c08: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2c9c08u;
    { uint32_t bits = FAST_READ32(0x4E5968u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9c0c: 0xe6420008  swc1        $f2, 0x8($s2)
    ctx->pc = 0x2c9c0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x2c9c10: 0xe641000c  swc1        $f1, 0xC($s2)
    ctx->pc = 0x2c9c10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x2c9c14: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x2c9c14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x2c9c18: 0x938389d0  lbu         $v1, -0x7630($gp)
    ctx->pc = 0x2c9c18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937040)));
    // 0x2c9c1c: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2C9C1Cu;
    {
        const bool branch_taken_0x2c9c1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c9c1c) {
            ctx->pc = 0x2C9C78u;
            goto label_2c9c78;
        }
    }
    ctx->pc = 0x2C9C24u;
    // 0x2c9c24: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x2C9C24u;
    {
        const bool branch_taken_0x2c9c24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9C24u;
        // 0x2c9c28: 0xa240004f  sb          $zero, 0x4F($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 79), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9c24) {
            ctx->pc = 0x2C9C60u;
            goto label_2c9c60;
        }
    }
    ctx->pc = 0x2C9C2Cu;
    // 0x2c9c2c: 0x92450037  lbu         $a1, 0x37($s2)
    ctx->pc = 0x2c9c2cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 55)));
    // 0x2c9c30: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x2c9c30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2c9c34: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2c9c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c9c38: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c9c38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c9c3c: 0xa245004e  sb          $a1, 0x4E($s2)
    ctx->pc = 0x2c9c3cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 78), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c9c40: 0xa2500037  sb          $s0, 0x37($s2)
    ctx->pc = 0x2c9c40u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 55), (uint8_t)GPR_U32(ctx, 16));
    // 0x2c9c44: 0xa2400032  sb          $zero, 0x32($s2)
    ctx->pc = 0x2c9c44u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c9c48: 0xa244005f  sb          $a0, 0x5F($s2)
    ctx->pc = 0x2c9c48u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 95), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c9c4c: 0xa6400080  sh          $zero, 0x80($s2)
    ctx->pc = 0x2c9c4cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 128), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c9c50: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2c9c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2c9c54: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c9c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c9c58: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2C9C58u;
    {
        const bool branch_taken_0x2c9c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9C58u;
        // 0x2c9c5c: 0x8c630018  lw          $v1, 0x18($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9c58) {
            ctx->pc = 0x2C9C88u;
            goto label_2c9c88;
        }
    }
    ctx->pc = 0x2C9C60u;
label_2c9c60:
    // 0x2c9c60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c9c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9c64: 0xc0b20e4  jal         func_2C8390
    ctx->pc = 0x2C9C64u;
    SET_GPR_U32(ctx, 31, 0x2C9C6Cu);
    ctx->pc = 0x2C9C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9C64u;
    // 0x2c9c68: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8390u, 0x2C9C64u, 0x2C9C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9C6Cu;
label_2c9c6c:
    // 0x2c9c6c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C9C6Cu;
    {
        const bool branch_taken_0x2c9c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9c6c) {
            ctx->pc = 0x2C9C80u;
            goto label_2c9c80;
        }
    }
    ctx->pc = 0x2C9C74u;
    // 0x2c9c74: 0x0  nop
    ctx->pc = 0x2c9c74u;
    // NOP
label_2c9c78:
    // 0x2c9c78: 0xa39089d8  sb          $s0, -0x7628($gp)
    ctx->pc = 0x2c9c78u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937048), (uint8_t)GPR_U32(ctx, 16));
    // 0x2c9c7c: 0x0  nop
    ctx->pc = 0x2c9c7cu;
    // NOP
label_2c9c80:
    // 0x2c9c80: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2c9c80u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9c84: 0x0  nop
    ctx->pc = 0x2c9c84u;
    // NOP
label_2c9c88:
    // 0x2c9c88: 0xae43002c  sw          $v1, 0x2C($s2)
    ctx->pc = 0x2c9c88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 3));
    // 0x2c9c8c: 0x0  nop
    ctx->pc = 0x2c9c8cu;
    // NOP
label_2c9c90:
    // 0x2c9c90: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x2c9c90u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c9c94: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2c9c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c9c98: 0x1483000b  bne         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2C9C98u;
    {
        const bool branch_taken_0x2c9c98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c9c98) {
            ctx->pc = 0x2C9CC8u;
            goto label_2c9cc8;
        }
    }
    ctx->pc = 0x2C9CA0u;
    // 0x2c9ca0: 0x8e2629c0  lw          $a2, 0x29C0($s1)
    ctx->pc = 0x2c9ca0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x2c9ca4: 0x278289e8  addiu       $v0, $gp, -0x7618
    ctx->pc = 0x2c9ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937064));
    // 0x2c9ca8: 0x922308e8  lbu         $v1, 0x8E8($s1)
    ctx->pc = 0x2c9ca8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2280)));
    // 0x2c9cac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c9cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9cb0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c9cb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9cb4: 0x90c6003a  lbu         $a2, 0x3A($a2)
    ctx->pc = 0x2c9cb4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 58)));
    // 0x2c9cb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c9cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c9cbc: 0xc0b2b68  jal         func_2CADA0
    ctx->pc = 0x2C9CBCu;
    SET_GPR_U32(ctx, 31, 0x2C9CC4u);
    ctx->pc = 0x2C9CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9CBCu;
    // 0x2c9cc0: 0xa0460000  sb          $a2, 0x0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CADA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CADA0u, 0x2C9CBCu, 0x2C9CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9CC4u;
label_2c9cc4:
    // 0x2c9cc4: 0x0  nop
    ctx->pc = 0x2c9cc4u;
    // NOP
label_2c9cc8:
    // 0x2c9cc8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2c9cc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c9ccc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2c9cccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c9cd0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c9cd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c9cd4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c9cd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c9cd8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c9cd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c9cdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c9cdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c9ce0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C9CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9CE0u;
        // 0x2c9ce4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C9CE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C9CE8u;
}
