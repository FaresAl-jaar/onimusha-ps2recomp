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

// Function: sub_003BC480
// Address: 0x3bc480 - 0x3bc510
void sub_003BC480_0x3bc480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BC480_0x3bc480");
#endif

    switch (ctx->pc) {
        case 0x3bc4c4u: goto label_3bc4c4;
        default: break;
    }

    ctx->pc = 0x3bc480u;

    // 0x3bc480: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3bc480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3bc484: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3bc484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3bc488: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3bc488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3bc48c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3bc48cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bc490: 0x26072b30  addiu       $a3, $s0, 0x2B30
    ctx->pc = 0x3bc490u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 11056));
    // 0x3bc494: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x3bc494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3bc498: 0x78480000  lq          $t0, 0x0($v0)
    ctx->pc = 0x3bc498u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3bc49c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3bc49cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bc4a0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3bc4a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bc4a4: 0x7ce80000  sq          $t0, 0x0($a3)
    ctx->pc = 0x3bc4a4u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 8));
    // 0x3bc4a8: 0x26022b20  addiu       $v0, $s0, 0x2B20
    ctx->pc = 0x3bc4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 11040));
    // 0x3bc4ac: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x3bc4acu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3bc4b0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x3bc4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x3bc4b4: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x3bc4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3bc4b8: 0xa6002b42  sh          $zero, 0x2B42($s0)
    ctx->pc = 0x3bc4b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11074), (uint16_t)GPR_U32(ctx, 0));
    // 0x3bc4bc: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x3BC4BCu;
    SET_GPR_U32(ctx, 31, 0x3BC4C4u);
    ctx->pc = 0x3BC4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BC4BCu;
    // 0x3bc4c0: 0xa6062b44  sh          $a2, 0x2B44($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 11076), (uint16_t)GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x3BC4BCu, 0x3BC4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BC4C4u;
label_3bc4c4:
    // 0x3bc4c4: 0x3c044500  lui         $a0, 0x4500
    ctx->pc = 0x3bc4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17664 << 16));
    // 0x3bc4c8: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x3bc4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x3bc4cc: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x3bc4ccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3bc4d0: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x3bc4d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x3bc4d4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3bc4d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3bc4d8: 0x0  nop
    ctx->pc = 0x3bc4d8u;
    // NOP
    // 0x3bc4dc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x3bc4dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3bc4e0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3bc4e0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x3bc4e4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3bc4e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3bc4e8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3bc4e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3bc4ec: 0x0  nop
    ctx->pc = 0x3bc4ecu;
    // NOP
    // 0x3bc4f0: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x3bc4f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x3bc4f4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3bc4f4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3bc4f8: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x3bc4f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x3bc4fc: 0xa6032b40  sh          $v1, 0x2B40($s0)
    ctx->pc = 0x3bc4fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11072), (uint16_t)GPR_U32(ctx, 3));
    // 0x3bc500: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3bc500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bc504: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3bc504u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bc508: 0x3e00008  jr          $ra
    ctx->pc = 0x3BC508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BC50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC508u;
        // 0x3bc50c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BC508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BC510u;
}
