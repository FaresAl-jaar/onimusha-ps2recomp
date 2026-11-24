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

// Function: entry_117e80
// Address: 0x117e80 - 0x117f80
void entry_117e80_0x117f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_117e80_0x117f80");
#endif

    ctx->pc = 0x117e80u;

    // 0x117e80: 0x40016000  mfc0        $at, Status
    ctx->pc = 0x117e80u;
    SET_GPR_S32(ctx, 1, (int32_t)ctx->cop0_status);
    // 0x117e84: 0x241affe4  addiu       $k0, $zero, -0x1C
    ctx->pc = 0x117e84u;
    SET_GPR_S32(ctx, 26, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967268));
    // 0x117e88: 0x3a0824  and         $at, $at, $k0
    ctx->pc = 0x117e88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) & GPR_U64(ctx, 26));
    // 0x117e8c: 0x40816000  mtc0        $at, Status
    ctx->pc = 0x117e8cu;
    ctx->cop0_status = GPR_U32(ctx, 1) & 0xFF57FFFF;
    // 0x117e90: 0x40f  sync.p
    ctx->pc = 0x117e90u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x117e94: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x117e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x117e98: 0x8c421b28  lw          $v0, 0x1B28($v0)
    ctx->pc = 0x117e98u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x691B28u));
    // 0x117e9c: 0x40827000  mtc0        $v0, EPC
    ctx->pc = 0x117e9cu;
    ctx->cop0_epc = GPR_U32(ctx, 2);
    // 0x117ea0: 0x40f  sync.p
    ctx->pc = 0x117ea0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x117ea4: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x117ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x117ea8: 0xdc421b00  ld          $v0, 0x1B00($v0)
    ctx->pc = 0x117ea8u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x691B00u));
    // 0x117eac: 0x400011  mthi        $v0
    ctx->pc = 0x117eacu;
    ctx->hi = GPR_U64(ctx, 2);
    // 0x117eb0: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x117eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x117eb4: 0xdc421b08  ld          $v0, 0x1B08($v0)
    ctx->pc = 0x117eb4u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x691B08u));
    // 0x117eb8: 0x70400011  mthi1       $v0
    ctx->pc = 0x117eb8u;
    ctx->hi1 = GPR_U64(ctx, 2);
    // 0x117ebc: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x117ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x117ec0: 0xdc421b10  ld          $v0, 0x1B10($v0)
    ctx->pc = 0x117ec0u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x691B10u));
    // 0x117ec4: 0x400013  mtlo        $v0
    ctx->pc = 0x117ec4u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x117ec8: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x117ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x117ecc: 0xdc421b18  ld          $v0, 0x1B18($v0)
    ctx->pc = 0x117eccu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x691B18u));
    // 0x117ed0: 0x70400013  mtlo1       $v0
    ctx->pc = 0x117ed0u;
    ctx->lo1 = GPR_U64(ctx, 2);
    // 0x117ed4: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x117ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x117ed8: 0xdc421b20  ld          $v0, 0x1B20($v0)
    ctx->pc = 0x117ed8u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x691B20u));
    // 0x117edc: 0x400029  mtsa        $v0
    ctx->pc = 0x117edcu;
    ctx->sa = GPR_U32(ctx, 2) & 0x7F;
    // 0x117ee0: 0x40f  sync.p
    ctx->pc = 0x117ee0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x117ee4: 0x3c1a0069  lui         $k0, 0x69
    ctx->pc = 0x117ee4u;
    SET_GPR_S32(ctx, 26, (int32_t)((uint32_t)105 << 16));
    // 0x117ee8: 0x275a1900  addiu       $k0, $k0, 0x1900
    ctx->pc = 0x117ee8u;
    SET_GPR_S32(ctx, 26, (int32_t)ADD32(GPR_U32(ctx, 26), 6400));
    // 0x117eec: 0x7b410010  lq          $at, 0x10($k0)
    ctx->pc = 0x117eecu;
    SET_GPR_VEC(ctx, 1, FAST_READ128(0x691910u));
    // 0x117ef0: 0x7b420020  lq          $v0, 0x20($k0)
    ctx->pc = 0x117ef0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x691920u));
    // 0x117ef4: 0x7b430030  lq          $v1, 0x30($k0)
    ctx->pc = 0x117ef4u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x691930u));
    // 0x117ef8: 0x7b440040  lq          $a0, 0x40($k0)
    ctx->pc = 0x117ef8u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x691940u));
    // 0x117efc: 0x7b450050  lq          $a1, 0x50($k0)
    ctx->pc = 0x117efcu;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x691950u));
    // 0x117f00: 0x7b460060  lq          $a2, 0x60($k0)
    ctx->pc = 0x117f00u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x691960u));
    // 0x117f04: 0x7b470070  lq          $a3, 0x70($k0)
    ctx->pc = 0x117f04u;
    SET_GPR_VEC(ctx, 7, FAST_READ128(0x691970u));
    // 0x117f08: 0x7b480080  lq          $t0, 0x80($k0)
    ctx->pc = 0x117f08u;
    SET_GPR_VEC(ctx, 8, FAST_READ128(0x691980u));
    // 0x117f0c: 0x7b490090  lq          $t1, 0x90($k0)
    ctx->pc = 0x117f0cu;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x691990u));
    // 0x117f10: 0x7b4a00a0  lq          $t2, 0xA0($k0)
    ctx->pc = 0x117f10u;
    SET_GPR_VEC(ctx, 10, FAST_READ128(0x6919A0u));
    // 0x117f14: 0x7b4b00b0  lq          $t3, 0xB0($k0)
    ctx->pc = 0x117f14u;
    SET_GPR_VEC(ctx, 11, FAST_READ128(0x6919B0u));
    // 0x117f18: 0x7b4c00c0  lq          $t4, 0xC0($k0)
    ctx->pc = 0x117f18u;
    SET_GPR_VEC(ctx, 12, FAST_READ128(0x6919C0u));
    // 0x117f1c: 0x7b4d00d0  lq          $t5, 0xD0($k0)
    ctx->pc = 0x117f1cu;
    SET_GPR_VEC(ctx, 13, FAST_READ128(0x6919D0u));
    // 0x117f20: 0x7b4e00e0  lq          $t6, 0xE0($k0)
    ctx->pc = 0x117f20u;
    SET_GPR_VEC(ctx, 14, FAST_READ128(0x6919E0u));
    // 0x117f24: 0x7b4f00f0  lq          $t7, 0xF0($k0)
    ctx->pc = 0x117f24u;
    SET_GPR_VEC(ctx, 15, FAST_READ128(0x6919F0u));
    // 0x117f28: 0x7b500100  lq          $s0, 0x100($k0)
    ctx->pc = 0x117f28u;
    SET_GPR_VEC(ctx, 16, FAST_READ128(0x691A00u));
    // 0x117f2c: 0x7b510110  lq          $s1, 0x110($k0)
    ctx->pc = 0x117f2cu;
    SET_GPR_VEC(ctx, 17, FAST_READ128(0x691A10u));
    // 0x117f30: 0x7b520120  lq          $s2, 0x120($k0)
    ctx->pc = 0x117f30u;
    SET_GPR_VEC(ctx, 18, FAST_READ128(0x691A20u));
    // 0x117f34: 0x7b530130  lq          $s3, 0x130($k0)
    ctx->pc = 0x117f34u;
    SET_GPR_VEC(ctx, 19, FAST_READ128(0x691A30u));
    // 0x117f38: 0x7b540140  lq          $s4, 0x140($k0)
    ctx->pc = 0x117f38u;
    SET_GPR_VEC(ctx, 20, FAST_READ128(0x691A40u));
    // 0x117f3c: 0x7b550150  lq          $s5, 0x150($k0)
    ctx->pc = 0x117f3cu;
    SET_GPR_VEC(ctx, 21, FAST_READ128(0x691A50u));
    // 0x117f40: 0x7b560160  lq          $s6, 0x160($k0)
    ctx->pc = 0x117f40u;
    SET_GPR_VEC(ctx, 22, FAST_READ128(0x691A60u));
    // 0x117f44: 0x7b570170  lq          $s7, 0x170($k0)
    ctx->pc = 0x117f44u;
    SET_GPR_VEC(ctx, 23, FAST_READ128(0x691A70u));
    // 0x117f48: 0x7b580180  lq          $t8, 0x180($k0)
    ctx->pc = 0x117f48u;
    SET_GPR_VEC(ctx, 24, FAST_READ128(0x691A80u));
    // 0x117f4c: 0x7b590190  lq          $t9, 0x190($k0)
    ctx->pc = 0x117f4cu;
    SET_GPR_VEC(ctx, 25, FAST_READ128(0x691A90u));
    // 0x117f50: 0x7b5c01c0  lq          $gp, 0x1C0($k0)
    ctx->pc = 0x117f50u;
    SET_GPR_VEC(ctx, 28, FAST_READ128(0x691AC0u));
    // 0x117f54: 0x7b5d01d0  lq          $sp, 0x1D0($k0)
    ctx->pc = 0x117f54u;
    SET_GPR_VEC(ctx, 29, FAST_READ128(0x691AD0u));
    // 0x117f58: 0x7b5e01e0  lq          $fp, 0x1E0($k0)
    ctx->pc = 0x117f58u;
    SET_GPR_VEC(ctx, 30, FAST_READ128(0x691AE0u));
    // 0x117f5c: 0x7b5f01f0  lq          $ra, 0x1F0($k0)
    ctx->pc = 0x117f5cu;
    SET_GPR_VEC(ctx, 31, FAST_READ128(0x691AF0u));
    // 0x117f60: 0x401a6000  mfc0        $k0, Status
    ctx->pc = 0x117f60u;
    SET_GPR_S32(ctx, 26, (int32_t)ctx->cop0_status);
    // 0x117f64: 0x375a0013  ori         $k0, $k0, 0x13
    ctx->pc = 0x117f64u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 26) | (uint64_t)(uint16_t)19);
    // 0x117f68: 0x409a6000  mtc0        $k0, Status
    ctx->pc = 0x117f68u;
    ctx->cop0_status = GPR_U32(ctx, 26) & 0xFF57FFFF;
    // 0x117f6c: 0x40f  sync.p
    ctx->pc = 0x117f6cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x117f70: 0x42000018  eret
    ctx->pc = 0x117f70u;
    if (ctx->cop0_status & 0x4) { 
    ctx->pc = ctx->cop0_errorepc; 
    ctx->cop0_status &= ~0x4; 
} else { 
    ctx->pc = ctx->cop0_epc; 
    ctx->cop0_status &= ~0x2; 
} 
runtime->clearLLBit(ctx); 
return;
    // 0x117f74: 0x0  nop
    ctx->pc = 0x117f74u;
    // NOP
    // 0x117f78: 0x0  nop
    ctx->pc = 0x117f78u;
    // NOP
    // 0x117f7c: 0x0  nop
    ctx->pc = 0x117f7cu;
    // NOP
    ctx->pc = 0x117f80u;
}
